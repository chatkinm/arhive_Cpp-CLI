#include "Data.h"
using namespace Super_Point;
using namespace System::Data;


int Super_Point::LevenshteinDistance(String^ str1, String^ str2) {
    int len1 = str1->Length;
    int len2 = str2->Length;
    array<int, 2>^ d = gcnew array<int, 2>(len1 + 1, len2 + 1);

    for (int i = 0; i <= len1; i++) {
        d[i, 0] = i;
    }
    for (int j = 0; j <= len2; j++) {
        d[0, j] = j;
    }
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            int cost = (str1[i - 1] == str2[j - 1]) ? 0 : 1;
            d[i, j] = std::min({ d[i - 1, j] + 1, d[i, j - 1] + 1, d[i - 1, j - 1] + cost });

            if (i > 1 && j > 1 && str1[i - 1] == str2[j - 2] && str1[i - 2] == str2[j - 1]) {
                d[i, j] = Math::Min(d[i, j], d[i - 2, j - 2] + cost);
            }
        }
    }
    return d[len1, len2];
}

bool Super_Point::AreStringsSimilar(String^ str1, String^ str2, int maxDistance) {
    return LevenshteinDistance(str1, str2) <= maxDistance;
}

List<String^>^ Super_Point::CompareStringsInArray(array<String^>^ strings, int maxDistance) {
    List<String^>^ similarStrings = gcnew List<String^>();

    for (int i = 0; i < strings->Length - 1; i++) {
        for (int j = i + 1; j < strings->Length; j++) {
            if (AreStringsSimilar(strings[i], strings[j], maxDistance)) {
                similarStrings->Add(strings[i]);
                similarStrings->Add(strings[j]);
            }
        }
    }
    return similarStrings;
}

// �������� � ���������� ������ �� ����� � ������ File_Name � ������� Table � ������� � dataGridView1
void Super_Point::LoadDataFromFile(String^ File_name, DataGridView^ dataGridView1, List<Record^>^ Table) {
	Record^ Row = gcnew Record;
	try {
		StreamReader^ SR = File::OpenText(File_name);
		String^ Str = gcnew String("");
		while (1) {
			Str = SR->ReadLine(); //���������� ���������� �����

			if (Str == nullptr) break;
			else {
				if ((Str->Split('\t'))->Length < 34) //����� �������� 34, ������� ���� ��� ���������� ���������� � ������ ������ 34 ��������
					Str += SR->ReadLine(); //� ������ ����������� �� ��������� �����
				Table->Add(Row->Parse(Str)); //���������� ������ � ������� Table
			}
		}

		// ���������� � ����� ������ �� Table � dataGridView1

		DataTable^ dataTable = gcnew DataTable();
		for (int i = 0; i < SIZE; i++) { //�������� �������� �������� �� Table � dataTable
			String^ columnName = Table[0]->getSelected[i];
			dataTable->Columns->Add(columnName, String::typeid);
		}
		bool isFirstRow = true;
		for each (Record ^ record in Table) { //��� ������ ������ record (������) � Table (�������)
			if (isFirstRow) {
				isFirstRow = false;
				continue; // ���������� ������ ������
			}
			array<String^>^ rowData = record->getSelected; //�������� ������
			dataTable->Rows->Add(rowData); //���������� ������ � dataTable
		}
		dataGridView1->DataSource = dataTable; //���������� dataTable � dataGridView1 ��� �������� ������
	}
	catch (FileNotFoundException^ ex) {
		// ��������� ������ ���������� �����
		MessageBox::Show("���� �� ������: " + File_name);
	}
}