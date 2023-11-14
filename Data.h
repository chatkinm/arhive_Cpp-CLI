#pragma once
#include <algorithm>
//#include <Windows.h>
//#include <vcclr.h>

namespace Super_Point {
    using namespace System;
    using namespace System::Text;
    using namespace System::IO;
    using namespace System::Collections;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;
    const int SIZE = 14;
    public ref class Record {
    private:
        array <String^>^ Selected;
    public:
        Record() {
            Selected = gcnew array<String^>(SIZE);
        }

        Record(array <String^>^ arr) {
            Selected = arr;
        }

        static Record^ Parse(String^ Str) {
            array <String^>^ Parts = Str->Split('\t');
            
            Record^ record = gcnew Record();
            record->Selected = gcnew array <String^> {
                Parts[4], Parts[6], Parts[7], Parts[14], Parts[16], Parts[17], Parts[18],
                Parts[19], Parts[20], Parts[21], Parts[22], Parts[23], Parts[28], Parts[29]
            };
            return record;
        }

        property array <String^>^ getSelected {
            array <String^>^ get() {
                return Selected;
            }
        }
    };

    //-------------------------------------------------------------------------------------------//
    extern int LevenshteinDistance(String^ str1, String^ str2);
    extern bool AreStringsSimilar(String^ str1, String^ str2, int maxDistance);
    extern List<String^>^ CompareStringsInArray(array<String^>^ strings, int maxDistance);
    extern void LoadDataFromFile(String^ File_name, DataGridView^ dataGridView1, List<Record^>^ Table);
}