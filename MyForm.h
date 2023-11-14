#pragma once
#include "infoForm.h"
#include "Data.h"

namespace Super_Point {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		String^ File_name;
		List <Record^>^ Table;
		Button^ selectedButton;
		array <String^>^ infoArr;
		Form^ childForm;
		bool isSearchInProgress;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			File_name = gcnew String("Noname.rtf");
			Table = gcnew List<Record^>;
			infoArr = gcnew array<String^>(14);
			childForm = gcnew infoForm(infoArr);
			isSearchInProgress = false;
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStripLabel^ loadingLabel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ открытьToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::GroupBox^ groupBox12;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::GroupBox^ groupBox16;
	private: System::Windows::Forms::Button^ button71;
	private: System::Windows::Forms::Button^ button72;
	private: System::Windows::Forms::Button^ button73;
	private: System::Windows::Forms::Button^ button74;
	private: System::Windows::Forms::Button^ button75;
	private: System::Windows::Forms::Button^ button76;
	private: System::Windows::Forms::Button^ button77;
	private: System::Windows::Forms::Button^ button78;
	private: System::Windows::Forms::GroupBox^ groupBox15;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Button^ button65;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Button^ button67;
	private: System::Windows::Forms::Button^ button68;
	private: System::Windows::Forms::Button^ button69;
	private: System::Windows::Forms::Button^ button70;
	private: System::Windows::Forms::GroupBox^ groupBox14;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::GroupBox^ groupBox13;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::GroupBox^ groupBox17;
	private: System::Windows::Forms::Button^ button80;
	private: System::Windows::Forms::Button^ button81;
	private: System::Windows::Forms::Button^ button82;
	private: System::Windows::Forms::GroupBox^ groupBox18;
	private: System::Windows::Forms::Button^ button79;
	private: System::Windows::Forms::Button^ button83;
	private: System::Windows::Forms::Button^ button84;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::GroupBox^ groupBox19;
	private: System::Windows::Forms::Button^ button85;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::ComponentModel::IContainer^ components;




	protected:
	private:
		
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		/// 


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox19 = (gcnew System::Windows::Forms::GroupBox());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->открытьToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->loadingLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox18 = (gcnew System::Windows::Forms::GroupBox());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox18->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 1;
			this->button1->TabStop = false;
			this->button1->Text = L"B1-B6";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(94, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 36);
			this->button2->TabIndex = 2;
			this->button2->TabStop = false;
			this->button2->Text = L"Б1-Б6";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(175, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 36);
			this->button3->TabIndex = 3;
			this->button3->TabStop = false;
			this->button3->Text = L"Е1-Е6";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(175, 19);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 36);
			this->button6->TabIndex = 8;
			this->button6->TabStop = false;
			this->button6->Text = L"А1-А6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 36);
			this->button4->TabIndex = 14;
			this->button4->TabStop = false;
			this->button4->Text = L"Г1-Г6";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(94, 19);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 36);
			this->button5->TabIndex = 16;
			this->button5->TabStop = false;
			this->button5->Text = L"Д1-Д6";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Location = System::Drawing::Point(11, 209);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(263, 112);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Стеллаж №1";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Location = System::Drawing::Point(11, 91);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(263, 112);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Стеллаж №2";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(175, 19);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 36);
			this->button7->TabIndex = 8;
			this->button7->TabStop = false;
			this->button7->Text = L"К1-К6";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(94, 19);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 36);
			this->button8->TabIndex = 16;
			this->button8->TabStop = false;
			this->button8->Text = L"З1-З6";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(13, 61);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 36);
			this->button9->TabIndex = 1;
			this->button9->TabStop = false;
			this->button9->Text = L"М1-М6";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(13, 19);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 36);
			this->button10->TabIndex = 14;
			this->button10->TabStop = false;
			this->button10->Text = L"Ж1-Ж6";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(94, 61);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 36);
			this->button11->TabIndex = 2;
			this->button11->TabStop = false;
			this->button11->Text = L"Л1-Л6";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(175, 61);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 36);
			this->button12->TabIndex = 3;
			this->button12->TabStop = false;
			this->button12->Text = L"И1-И6";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox3->Controls->Add(this->button16);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->button15);
			this->groupBox3->Location = System::Drawing::Point(11, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(343, 66);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Шкафы";
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(256, 19);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 36);
			this->button16->TabIndex = 20;
			this->button16->TabStop = false;
			this->button16->Text = L"Н16-Н20";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(175, 19);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 36);
			this->button13->TabIndex = 8;
			this->button13->TabStop = false;
			this->button13->Text = L"Н11-Н15";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(94, 19);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 36);
			this->button14->TabIndex = 16;
			this->button14->TabStop = false;
			this->button14->Text = L"Н6-Н10";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(13, 19);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 36);
			this->button15->TabIndex = 1;
			this->button15->TabStop = false;
			this->button15->Text = L"Н1-Н5";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox4->Controls->Add(this->groupBox19);
			this->groupBox4->Controls->Add(this->pictureBox4);
			this->groupBox4->Controls->Add(this->groupBox3);
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Controls->Add(this->groupBox2);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(12, 36);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(8, 3, 3, 3);
			this->groupBox4->Size = System::Drawing::Size(528, 497);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"2 этаж";
			// 
			// groupBox19
			// 
			this->groupBox19->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox19->Controls->Add(this->button85);
			this->groupBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox19->Location = System::Drawing::Point(416, 312);
			this->groupBox19->Name = L"groupBox19";
			this->groupBox19->Size = System::Drawing::Size(106, 67);
			this->groupBox19->TabIndex = 26;
			this->groupBox19->TabStop = false;
			this->groupBox19->Text = L"Сейф";
			// 
			// button85
			// 
			this->button85->Location = System::Drawing::Point(15, 21);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(75, 36);
			this->button85->TabIndex = 27;
			this->button85->TabStop = false;
			this->button85->Text = L"Сейф";
			this->button85->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox4->Location = System::Drawing::Point(370, 385);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(152, 106);
			this->pictureBox4->TabIndex = 26;
			this->pictureBox4->TabStop = false;
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->открытьToolStripButton,
					this->toolStripSeparator1, this->toolStripTextBox1, this->toolStripButton1, this->loadingLabel1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Padding = System::Windows::Forms::Padding(0, 0, 2, 0);
			this->toolStrip1->Size = System::Drawing::Size(1484, 35);
			this->toolStrip1->TabIndex = 22;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// открытьToolStripButton
			// 
			this->открытьToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->открытьToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"открытьToolStripButton.Image")));
			this->открытьToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->открытьToolStripButton->Name = L"открытьToolStripButton";
			this->открытьToolStripButton->Size = System::Drawing::Size(28, 32);
			this->открытьToolStripButton->Text = L"&Открыть";
			this->открытьToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 35);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->AutoSize = false;
			this->toolStripTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(250, 33);
			this->toolStripTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::toolStripTextBox1_KeyDown);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(69, 32);
			this->toolStripButton1->Text = L"Найти";
			this->toolStripButton1->ToolTipText = L"Находит совпадения с наименованиями документов";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// loadingLabel1
			// 
			this->loadingLabel1->BackColor = System::Drawing::SystemColors::Control;
			this->loadingLabel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->loadingLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loadingLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->loadingLabel1->Name = L"loadingLabel1";
			this->loadingLabel1->Size = System::Drawing::Size(334, 32);
			this->loadingLabel1->Text = L"Идет поиск... Пожалуйста подождите";
			this->loadingLabel1->Visible = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox5->Controls->Add(this->pictureBox1);
			this->groupBox5->Controls->Add(this->groupBox18);
			this->groupBox5->Controls->Add(this->groupBox17);
			this->groupBox5->Controls->Add(this->groupBox16);
			this->groupBox5->Controls->Add(this->groupBox15);
			this->groupBox5->Controls->Add(this->groupBox14);
			this->groupBox5->Controls->Add(this->groupBox12);
			this->groupBox5->Controls->Add(this->groupBox13);
			this->groupBox5->Controls->Add(this->groupBox11);
			this->groupBox5->Controls->Add(this->groupBox10);
			this->groupBox5->Controls->Add(this->groupBox9);
			this->groupBox5->Controls->Add(this->groupBox8);
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->groupBox6);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->Location = System::Drawing::Point(568, 36);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(904, 701);
			this->groupBox5->TabIndex = 23;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"0 этаж";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox1->Location = System::Drawing::Point(310, 533);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(588, 162);
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox18
			// 
			this->groupBox18->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox18->Controls->Add(this->button79);
			this->groupBox18->Controls->Add(this->button83);
			this->groupBox18->Controls->Add(this->button84);
			this->groupBox18->Location = System::Drawing::Point(606, 461);
			this->groupBox18->Name = L"groupBox18";
			this->groupBox18->Size = System::Drawing::Size(264, 66);
			this->groupBox18->TabIndex = 25;
			this->groupBox18->TabStop = false;
			this->groupBox18->Text = L"Стеллаж Я";
			// 
			// button79
			// 
			this->button79->Location = System::Drawing::Point(175, 19);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(75, 36);
			this->button79->TabIndex = 8;
			this->button79->TabStop = false;
			this->button79->Text = L"Я11-Я15";
			this->button79->UseVisualStyleBackColor = true;
			// 
			// button83
			// 
			this->button83->Location = System::Drawing::Point(94, 19);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(75, 36);
			this->button83->TabIndex = 16;
			this->button83->TabStop = false;
			this->button83->Text = L"Я6-Я10";
			this->button83->UseVisualStyleBackColor = true;
			// 
			// button84
			// 
			this->button84->Location = System::Drawing::Point(13, 19);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(75, 36);
			this->button84->TabIndex = 1;
			this->button84->TabStop = false;
			this->button84->Text = L"Я1-Я5";
			this->button84->UseVisualStyleBackColor = true;
			// 
			// groupBox17
			// 
			this->groupBox17->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox17->Controls->Add(this->button80);
			this->groupBox17->Controls->Add(this->button81);
			this->groupBox17->Controls->Add(this->button82);
			this->groupBox17->Location = System::Drawing::Point(336, 461);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(264, 66);
			this->groupBox17->TabIndex = 24;
			this->groupBox17->TabStop = false;
			this->groupBox17->Text = L"Стеллаж Ю";
			// 
			// button80
			// 
			this->button80->Location = System::Drawing::Point(175, 19);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(75, 36);
			this->button80->TabIndex = 8;
			this->button80->TabStop = false;
			this->button80->Text = L"Ю11-Ю15";
			this->button80->UseVisualStyleBackColor = true;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(94, 19);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(75, 36);
			this->button81->TabIndex = 16;
			this->button81->TabStop = false;
			this->button81->Text = L"Ю6-Ю7";
			this->button81->UseVisualStyleBackColor = true;
			// 
			// button82
			// 
			this->button82->Location = System::Drawing::Point(13, 19);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(75, 36);
			this->button82->TabIndex = 1;
			this->button82->TabStop = false;
			this->button82->Text = L"Ю1-Ю5";
			this->button82->UseVisualStyleBackColor = true;
			// 
			// groupBox16
			// 
			this->groupBox16->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox16->Controls->Add(this->button71);
			this->groupBox16->Controls->Add(this->button72);
			this->groupBox16->Controls->Add(this->button73);
			this->groupBox16->Controls->Add(this->button74);
			this->groupBox16->Controls->Add(this->button75);
			this->groupBox16->Controls->Add(this->button76);
			this->groupBox16->Controls->Add(this->button77);
			this->groupBox16->Controls->Add(this->button78);
			this->groupBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox16->Location = System::Drawing::Point(772, 21);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(126, 301);
			this->groupBox16->TabIndex = 30;
			this->groupBox16->TabStop = false;
			this->groupBox16->Text = L"Стеллаж Э";
			// 
			// button71
			// 
			this->button71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button71->Location = System::Drawing::Point(66, 220);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(48, 60);
			this->button71->TabIndex = 7;
			this->button71->TabStop = false;
			this->button71->Text = L"Э21-Э25";
			this->button71->UseVisualStyleBackColor = true;
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(66, 154);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(48, 60);
			this->button72->TabIndex = 6;
			this->button72->TabStop = false;
			this->button72->Text = L"Э26-Э30";
			this->button72->UseVisualStyleBackColor = true;
			// 
			// button73
			// 
			this->button73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button73->Location = System::Drawing::Point(13, 220);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(48, 60);
			this->button73->TabIndex = 5;
			this->button73->TabStop = false;
			this->button73->Text = L"Э16-Э20";
			this->button73->UseVisualStyleBackColor = true;
			// 
			// button74
			// 
			this->button74->Location = System::Drawing::Point(13, 154);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(48, 60);
			this->button74->TabIndex = 4;
			this->button74->TabStop = false;
			this->button74->Text = L"Э11-Э15";
			this->button74->UseVisualStyleBackColor = true;
			// 
			// button75
			// 
			this->button75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button75->Location = System::Drawing::Point(66, 88);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(48, 60);
			this->button75->TabIndex = 3;
			this->button75->TabStop = false;
			this->button75->Text = L"Э31-Э35";
			this->button75->UseVisualStyleBackColor = true;
			// 
			// button76
			// 
			this->button76->Location = System::Drawing::Point(66, 22);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(48, 60);
			this->button76->TabIndex = 2;
			this->button76->TabStop = false;
			this->button76->Text = L"Э36-Э40";
			this->button76->UseVisualStyleBackColor = true;
			// 
			// button77
			// 
			this->button77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button77->Location = System::Drawing::Point(13, 88);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(48, 60);
			this->button77->TabIndex = 1;
			this->button77->TabStop = false;
			this->button77->Text = L"Э6-\r\nЭ10";
			this->button77->UseVisualStyleBackColor = true;
			// 
			// button78
			// 
			this->button78->Location = System::Drawing::Point(13, 22);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(48, 60);
			this->button78->TabIndex = 0;
			this->button78->TabStop = false;
			this->button78->Text = L"Э1- Э5";
			this->button78->UseVisualStyleBackColor = true;
			// 
			// groupBox15
			// 
			this->groupBox15->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox15->Controls->Add(this->button63);
			this->groupBox15->Controls->Add(this->button64);
			this->groupBox15->Controls->Add(this->button65);
			this->groupBox15->Controls->Add(this->button66);
			this->groupBox15->Controls->Add(this->button67);
			this->groupBox15->Controls->Add(this->button68);
			this->groupBox15->Controls->Add(this->button69);
			this->groupBox15->Controls->Add(this->button70);
			this->groupBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox15->Location = System::Drawing::Point(640, 21);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(126, 301);
			this->groupBox15->TabIndex = 30;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"Стеллаж Щ";
			// 
			// button63
			// 
			this->button63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button63->Location = System::Drawing::Point(66, 220);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(48, 60);
			this->button63->TabIndex = 7;
			this->button63->TabStop = false;
			this->button63->Text = L"Щ21-Щ25";
			this->button63->UseVisualStyleBackColor = true;
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(66, 154);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(48, 60);
			this->button64->TabIndex = 6;
			this->button64->TabStop = false;
			this->button64->Text = L"Щ26-Щ30";
			this->button64->UseVisualStyleBackColor = true;
			// 
			// button65
			// 
			this->button65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button65->Location = System::Drawing::Point(13, 220);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(48, 60);
			this->button65->TabIndex = 5;
			this->button65->TabStop = false;
			this->button65->Text = L"Щ16-Щ20";
			this->button65->UseVisualStyleBackColor = true;
			// 
			// button66
			// 
			this->button66->Location = System::Drawing::Point(13, 154);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(48, 60);
			this->button66->TabIndex = 4;
			this->button66->TabStop = false;
			this->button66->Text = L"Щ11-Щ15";
			this->button66->UseVisualStyleBackColor = true;
			// 
			// button67
			// 
			this->button67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button67->Location = System::Drawing::Point(66, 88);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(48, 60);
			this->button67->TabIndex = 3;
			this->button67->TabStop = false;
			this->button67->Text = L"Щ31-Щ35";
			this->button67->UseVisualStyleBackColor = true;
			// 
			// button68
			// 
			this->button68->Location = System::Drawing::Point(66, 22);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(48, 60);
			this->button68->TabIndex = 2;
			this->button68->TabStop = false;
			this->button68->Text = L"Щ36-Щ40";
			this->button68->UseVisualStyleBackColor = true;
			// 
			// button69
			// 
			this->button69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button69->Location = System::Drawing::Point(13, 88);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(48, 60);
			this->button69->TabIndex = 1;
			this->button69->TabStop = false;
			this->button69->Text = L"Щ6-\r\nЩ10";
			this->button69->UseVisualStyleBackColor = true;
			// 
			// button70
			// 
			this->button70->Location = System::Drawing::Point(13, 22);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(48, 60);
			this->button70->TabIndex = 0;
			this->button70->TabStop = false;
			this->button70->Text = L"Щ1- Щ5";
			this->button70->UseVisualStyleBackColor = true;
			// 
			// groupBox14
			// 
			this->groupBox14->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox14->Controls->Add(this->button55);
			this->groupBox14->Controls->Add(this->button56);
			this->groupBox14->Controls->Add(this->button57);
			this->groupBox14->Controls->Add(this->button58);
			this->groupBox14->Controls->Add(this->button59);
			this->groupBox14->Controls->Add(this->button60);
			this->groupBox14->Controls->Add(this->button61);
			this->groupBox14->Controls->Add(this->button62);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox14->Location = System::Drawing::Point(508, 21);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(126, 301);
			this->groupBox14->TabIndex = 30;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Стеллаж Ш";
			// 
			// button55
			// 
			this->button55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button55->Location = System::Drawing::Point(66, 220);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(48, 60);
			this->button55->TabIndex = 7;
			this->button55->TabStop = false;
			this->button55->Text = L"Ш21-Ш25";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(66, 154);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(48, 60);
			this->button56->TabIndex = 6;
			this->button56->TabStop = false;
			this->button56->Text = L"Ш26-Ш30";
			this->button56->UseVisualStyleBackColor = true;
			// 
			// button57
			// 
			this->button57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button57->Location = System::Drawing::Point(13, 220);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(48, 60);
			this->button57->TabIndex = 5;
			this->button57->TabStop = false;
			this->button57->Text = L"Ш16-Ш20";
			this->button57->UseVisualStyleBackColor = true;
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(13, 154);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(48, 60);
			this->button58->TabIndex = 4;
			this->button58->TabStop = false;
			this->button58->Text = L"Ш11-Ш15";
			this->button58->UseVisualStyleBackColor = true;
			// 
			// button59
			// 
			this->button59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button59->Location = System::Drawing::Point(66, 88);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(48, 60);
			this->button59->TabIndex = 3;
			this->button59->TabStop = false;
			this->button59->Text = L"Ш31-Ш35";
			this->button59->UseVisualStyleBackColor = true;
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(66, 22);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(48, 60);
			this->button60->TabIndex = 2;
			this->button60->TabStop = false;
			this->button60->Text = L"Ш36-Ш40";
			this->button60->UseVisualStyleBackColor = true;
			// 
			// button61
			// 
			this->button61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button61->Location = System::Drawing::Point(13, 88);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(48, 60);
			this->button61->TabIndex = 1;
			this->button61->TabStop = false;
			this->button61->Text = L"Ш6-\r\nШ10";
			this->button61->UseVisualStyleBackColor = true;
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(13, 22);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(48, 60);
			this->button62->TabIndex = 0;
			this->button62->TabStop = false;
			this->button62->Text = L"Ш1- Ш5";
			this->button62->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox12->Controls->Add(this->button43);
			this->groupBox12->Controls->Add(this->button44);
			this->groupBox12->Controls->Add(this->button45);
			this->groupBox12->Controls->Add(this->button46);
			this->groupBox12->Controls->Add(this->button41);
			this->groupBox12->Controls->Add(this->button42);
			this->groupBox12->Controls->Add(this->button39);
			this->groupBox12->Controls->Add(this->button40);
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox12->Location = System::Drawing::Point(244, 21);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(126, 301);
			this->groupBox12->TabIndex = 29;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Стеллаж Х";
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button43->Location = System::Drawing::Point(66, 220);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(48, 60);
			this->button43->TabIndex = 7;
			this->button43->TabStop = false;
			this->button43->Text = L"Х21-Х25";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(66, 154);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(48, 60);
			this->button44->TabIndex = 6;
			this->button44->TabStop = false;
			this->button44->Text = L"Х26-Х30";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button45->Location = System::Drawing::Point(13, 220);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(48, 60);
			this->button45->TabIndex = 5;
			this->button45->TabStop = false;
			this->button45->Text = L"Х16-Х20";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(13, 154);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(48, 60);
			this->button46->TabIndex = 4;
			this->button46->TabStop = false;
			this->button46->Text = L"Х11-Х15";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button41->Location = System::Drawing::Point(66, 88);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(48, 60);
			this->button41->TabIndex = 3;
			this->button41->TabStop = false;
			this->button41->Text = L"Х31-Х35";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(66, 22);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(48, 60);
			this->button42->TabIndex = 2;
			this->button42->TabStop = false;
			this->button42->Text = L"Х36-Х40";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button39->Location = System::Drawing::Point(13, 88);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(48, 60);
			this->button39->TabIndex = 1;
			this->button39->TabStop = false;
			this->button39->Text = L"Х6-\r\nХ10";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(13, 22);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(48, 60);
			this->button40->TabIndex = 0;
			this->button40->TabStop = false;
			this->button40->Text = L"Х1- Х5";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// groupBox13
			// 
			this->groupBox13->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox13->Controls->Add(this->button47);
			this->groupBox13->Controls->Add(this->button48);
			this->groupBox13->Controls->Add(this->button49);
			this->groupBox13->Controls->Add(this->button50);
			this->groupBox13->Controls->Add(this->button51);
			this->groupBox13->Controls->Add(this->button52);
			this->groupBox13->Controls->Add(this->button53);
			this->groupBox13->Controls->Add(this->button54);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox13->Location = System::Drawing::Point(376, 21);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(126, 301);
			this->groupBox13->TabIndex = 30;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Стеллаж Ц";
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button47->Location = System::Drawing::Point(66, 220);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(48, 60);
			this->button47->TabIndex = 7;
			this->button47->TabStop = false;
			this->button47->Text = L"Ц21-Ц25";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(66, 154);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(48, 60);
			this->button48->TabIndex = 6;
			this->button48->TabStop = false;
			this->button48->Text = L"Ц26-Ц30";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button49->Location = System::Drawing::Point(13, 220);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(48, 60);
			this->button49->TabIndex = 5;
			this->button49->TabStop = false;
			this->button49->Text = L"Ц16-Ц20";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(13, 154);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(48, 60);
			this->button50->TabIndex = 4;
			this->button50->TabStop = false;
			this->button50->Text = L"Ц11-Ц15";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button51->Location = System::Drawing::Point(66, 88);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(48, 60);
			this->button51->TabIndex = 3;
			this->button51->TabStop = false;
			this->button51->Text = L"Ц31-Ц35";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(66, 22);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(48, 60);
			this->button52->TabIndex = 2;
			this->button52->TabStop = false;
			this->button52->Text = L"Ц36-Ц40";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button53->Location = System::Drawing::Point(13, 88);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(48, 60);
			this->button53->TabIndex = 1;
			this->button53->TabStop = false;
			this->button53->Text = L"Ц6-\r\nЦ10";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(13, 22);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(48, 60);
			this->button54->TabIndex = 0;
			this->button54->TabStop = false;
			this->button54->Text = L"Ц1- Ц5";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// groupBox11
			// 
			this->groupBox11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox11->Controls->Add(this->button38);
			this->groupBox11->Controls->Add(this->button37);
			this->groupBox11->Location = System::Drawing::Point(6, 533);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(110, 162);
			this->groupBox11->TabIndex = 28;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Стеллаж П";
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button38->Location = System::Drawing::Point(13, 88);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(48, 60);
			this->button38->TabIndex = 1;
			this->button38->TabStop = false;
			this->button38->Text = L"П1-П5";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(13, 22);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(48, 60);
			this->button37->TabIndex = 0;
			this->button37->TabStop = false;
			this->button37->Text = L"П6-П10";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// groupBox10
			// 
			this->groupBox10->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox10->Controls->Add(this->button33);
			this->groupBox10->Controls->Add(this->button34);
			this->groupBox10->Controls->Add(this->button35);
			this->groupBox10->Controls->Add(this->button36);
			this->groupBox10->Location = System::Drawing::Point(6, 423);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(183, 104);
			this->groupBox10->TabIndex = 27;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Стеллаж Р";
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(94, 19);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 36);
			this->button33->TabIndex = 16;
			this->button33->TabStop = false;
			this->button33->Text = L"Р6-Р10";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(13, 61);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 36);
			this->button34->TabIndex = 1;
			this->button34->TabStop = false;
			this->button34->Text = L"Р11-Р15";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(13, 19);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(75, 36);
			this->button35->TabIndex = 14;
			this->button35->TabStop = false;
			this->button35->Text = L"Р1-Р5";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(94, 61);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(75, 36);
			this->button36->TabIndex = 2;
			this->button36->TabStop = false;
			this->button36->Text = L"Р16-Р20";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox9->Controls->Add(this->button29);
			this->groupBox9->Controls->Add(this->button30);
			this->groupBox9->Controls->Add(this->button31);
			this->groupBox9->Controls->Add(this->button32);
			this->groupBox9->Location = System::Drawing::Point(6, 313);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(183, 104);
			this->groupBox9->TabIndex = 25;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Стеллаж С";
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(94, 19);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 36);
			this->button29->TabIndex = 16;
			this->button29->TabStop = false;
			this->button29->Text = L"С6-С10";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(13, 61);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 36);
			this->button30->TabIndex = 1;
			this->button30->TabStop = false;
			this->button30->Text = L"С11-С15";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(13, 19);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(75, 36);
			this->button31->TabIndex = 14;
			this->button31->TabStop = false;
			this->button31->Text = L"С1-С5";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(94, 61);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(75, 36);
			this->button32->TabIndex = 2;
			this->button32->TabStop = false;
			this->button32->Text = L"С16-С20";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox8->Controls->Add(this->button25);
			this->groupBox8->Controls->Add(this->button26);
			this->groupBox8->Controls->Add(this->button27);
			this->groupBox8->Controls->Add(this->button28);
			this->groupBox8->Location = System::Drawing::Point(6, 203);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(183, 104);
			this->groupBox8->TabIndex = 26;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Стеллаж Т";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(94, 19);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 36);
			this->button25->TabIndex = 16;
			this->button25->TabStop = false;
			this->button25->Text = L"Т6-Т10";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(13, 61);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 36);
			this->button26->TabIndex = 1;
			this->button26->TabStop = false;
			this->button26->Text = L"Т11-Т15";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(13, 19);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 36);
			this->button27->TabIndex = 14;
			this->button27->TabStop = false;
			this->button27->Text = L"Т1-Т5";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(94, 61);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 36);
			this->button28->TabIndex = 2;
			this->button28->TabStop = false;
			this->button28->Text = L"Т16-Т20";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox7->Controls->Add(this->button17);
			this->groupBox7->Controls->Add(this->button22);
			this->groupBox7->Controls->Add(this->button23);
			this->groupBox7->Controls->Add(this->button24);
			this->groupBox7->Location = System::Drawing::Point(6, 93);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(183, 104);
			this->groupBox7->TabIndex = 25;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Стеллаж У";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(94, 19);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 36);
			this->button17->TabIndex = 16;
			this->button17->TabStop = false;
			this->button17->Text = L"У6-У10";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(13, 61);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 36);
			this->button22->TabIndex = 1;
			this->button22->TabStop = false;
			this->button22->Text = L"У11-У15";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(13, 19);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 36);
			this->button23->TabIndex = 14;
			this->button23->TabStop = false;
			this->button23->Text = L"У1-У5";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(94, 61);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 36);
			this->button24->TabIndex = 2;
			this->button24->TabStop = false;
			this->button24->Text = L"У16-У20";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox6->Controls->Add(this->button18);
			this->groupBox6->Controls->Add(this->button20);
			this->groupBox6->Location = System::Drawing::Point(55, 21);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(183, 66);
			this->groupBox6->TabIndex = 24;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Стеллаж Ф";
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(94, 19);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 36);
			this->button18->TabIndex = 16;
			this->button18->TabStop = false;
			this->button18->Text = L"Ф6-Ф10";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(13, 19);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 36);
			this->button20->TabIndex = 14;
			this->button20->TabStop = false;
			this->button20->Text = L"Ф1-Ф5";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(142, 494);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(837, 699);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 755);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 35;
			this->dataGridView1->Size = System::Drawing::Size(1460, 194);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::dataGridView1_CellMouseDoubleClick);
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::dataGridView1_SelectionChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(29, 626);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(489, 111);
			this->label1->TabIndex = 27;
			this->label1->Text = L"АО «Теплоэнергооборудование»\r\n454091, г. Челябинск\r\nпр. Ленина, 2к";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1484, 961);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->groupBox4);
			this->Name = L"MyForm";
			this->Text = L"Электронный архив";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox19->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox18->ResumeLayout(false);
			this->groupBox17->ResumeLayout(false);
			this->groupBox16->ResumeLayout(false);
			this->groupBox15->ResumeLayout(false);
			this->groupBox14->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox13->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	AttachClickHandlersToButtons();
	selectedButton = button1;
	//File_name = "//teo-server/база 1с/Files/ПТО/Архив/data.txt";
	File_name = "data.txt";
	LoadDataFromFile(File_name, dataGridView1, Table);
}

private: System::Void открытьToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->openFileDialog1->InitialDirectory = System::IO::Directory::GetCurrentDirectory();
	this->openFileDialog1->Filter = "Rtf файлы (*.rtf)|*.rtf|Все файлы(*.*)|*.*";
	this->openFileDialog1->FileName = File_name;

	if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		File_name = openFileDialog1->FileName;
		LoadDataFromFile(File_name, dataGridView1, Table);
	}
}


private: System::Void PerformSearch() {//Функция поиска
		   int maxDistance = 2; //расстояние Левенштейна
		   DataTable^ dataTable1 = gcnew DataTable();
		   array <String^>^ Text = this->toolStripTextBox1->Text->Split(' ');
		   for (int i = 0; i < SIZE; i++) { //Копируем названия столбцов из Table в dataTable1
			   String^ columnName = Table[0]->getSelected[i];
			   dataTable1->Columns->Add(columnName, String::typeid);
		   }
		   dataTable1->Columns->Add("Index", String::typeid); //Добавляем столбец Index, чтобы использовать его в сортировке по совпадению
		   bool isFirstRow = true;
		   for each (Record ^ record in Table) {
			   if (isFirstRow) {
				   isFirstRow = false;
				   continue; // Пропускаем первую строку
			   }
			   array <String^>^ rowData = record->getSelected;
			   Array::Resize(rowData, rowData->Length + 1); // Увеличиваем размер массива на 1 для столбца Index
			   for (int i = 0; i < SIZE; i++) {
				   if (record->getSelected[i] != "") {
					   String^ searchText = this->toolStripTextBox1->Text->ToLower();
					   String^ currentText = record->getSelected[i]->ToLower();

					   if (currentText->Contains(searchText)) {
						   rowData[rowData->Length - 1] = "2"; // Устанавливаем значение "2" в ячейку столбца Index
						   dataTable1->Rows->Add(rowData);
						   break;
					   }
					   else if (String::Compare(currentText, searchText, StringComparison::OrdinalIgnoreCase) == 0) {
						   rowData[rowData->Length - 1] = "1"; // Устанавливаем значение "1" в ячейку столбца Index
						   dataTable1->Rows->Add(rowData);
						   break;
					   }
					   else {
						   array<String^>^ words = currentText->Split(' ');

						   for (int w = 0; w < words->Length; w++) {
							   if (AreStringsSimilar(searchText, words[w], maxDistance)) { //Контекстный поиск
								   rowData[rowData->Length - 1] = "0"; // Устанавливаем значение "0" в ячейку столбца Index
								   dataTable1->Rows->Add(rowData);
								   i = SIZE; // Завершаем внешний цикл
								   break;
							   }
						   }
					   }
				   }
			   }
		   }
		   dataTable1->DefaultView->Sort = "Index DESC"; // Сортируем dataTable1 по последнему столбцу "Index" в порядке убывания
		   dataTable1->Columns->RemoveAt(dataTable1->Columns->Count - 1); // Удаляем последний столбец "Index" из dataTable1
		   dataGridView1->DataSource = dataTable1; //Устанавливаем dataTable1 как источник данных
}

private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	loadingLabel1->Visible = true;
	isSearchInProgress = true; // Устанавливаем флаг перед началом поиска
	timer1->Start(); // Запускаем таймер
}
private: System::Void toolStripTextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 13)
		toolStripButton1_Click(sender, e); //Нажатие кнопки "Найти" при нажатии на Enter в toolStripTextBox1
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (isSearchInProgress) {
		// В этом блоке будет выполняться код поиска
		PerformSearch();

		isSearchInProgress = false; // Снимаем флаг после выполнения поиска
		loadingLabel1->Visible = false;
		timer1->Stop(); // Останавливаем таймер
	}
}

//Выделение кнопки
Button^ HighlightMatchingButtons(String^ searchText) {
	for (int groupIndex = 1; groupIndex <= 19; groupIndex++) // Цикл по всем GroupBox
	{
		if ((groupIndex != 4) && (groupIndex != 5)) { //Это groupBox'ы в которых нет кнопок
			String^ groupBoxName = "groupBox" + groupIndex.ToString();
			GroupBox^ groupBox = dynamic_cast<GroupBox^>(groupBox4->Controls[groupBoxName]);//Ищем groupBox с именем groupBoxName в groupBox4
			if (groupBox == nullptr) //Если не нашли такой в groupBox4
				groupBox = dynamic_cast<GroupBox^>(groupBox5->Controls[groupBoxName]); //То ищем groupBox с именем groupBoxName в groupBox5
			if (groupBox != nullptr) { //Если нашли
				for (int i = 1; i <= 85; i++) // Цикл по всем возможным кнопкам внутри GroupBox
				{
					String^ buttonName = "button" + i.ToString();
					Button^ button = dynamic_cast<Button^>(groupBox->Controls[buttonName]); //Ищем кнопку

					if (button != nullptr) //Если нашли
					{
						if (String::Compare(button->Text, searchText, StringComparison::OrdinalIgnoreCase) == 0) { //Если текст кнопки полностью совпадает с searchText
							// Подсветка найденной кнопки
							button->BackColor = Color::Red;
							button->ForeColor = Color::White;
							return button;
						}
						else if ((button->Text[0] == searchText[0])
							&& (Convert::ToInt32(button->Text[1]) <= Convert::ToInt32(searchText[1]))
							&& (Convert::ToInt32(button->Text[4]) >= Convert::ToInt32(searchText[1]))) //Если текст кнопки включает в себя searchText
						{
							// Подсветка найденной кнопки
							button->BackColor = Color::Red;
							button->ForeColor = Color::White;
							return button;
						}
						else if ((searchText == "1-1") || (searchText == "1-2") || (searchText == "1-3") || (searchText == "1-4") || (searchText == "2-1") || (searchText == "2-2") || (searchText == "2-3") || (searchText == "2-4")) {
							// Подсветка кнопки "Сейф"
							button85->BackColor = Color::Red;
							button85->ForeColor = Color::White;
							return button85;
						}
					}
				}
			}
		}
	}
}

void OnDataGridViewSelectionChanged(Object^ sender, EventArgs^ e) {
		   selectedButton->BackColor = SystemColors::ButtonHighlight; //Убираем предыдущее выделение
		   selectedButton->ForeColor = this->ForeColor;
		   DataGridView^ dataGridView = dynamic_cast<DataGridView^>(sender);
		   if (dataGridView != nullptr)
		   {
			   if (dataGridView->SelectedCells->Count > 0)
			   {
				   DataGridViewCell^ selectedCell = dataGridView->Rows[dataGridView->SelectedCells[0]->RowIndex]->Cells[5]; //Получаем ячейку с номером полки в selectedCell
				   if (selectedCell->Value != nullptr)
				   {
					   String^ searchText = selectedCell->Value->ToString()->Replace(".", "");
					   if ((searchText != "") && (HighlightMatchingButtons(searchText) != nullptr))
						   selectedButton = HighlightMatchingButtons(searchText); //selectedButton получил новую кнопку для выделения
				   }
			   }
		   }
}

private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		   OnDataGridViewSelectionChanged(sender, e);
}

	   // Обработчик события нажатия на кнопку
private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ clickedButton = dynamic_cast<Button^>(sender); // Получаем ссылку на нажатую кнопку

	if (clickedButton != nullptr)
	{
		String^ buttonText = clickedButton->Text; // Получаем текст кнопки
		// Вы можете сделать что-то с полученным текстом, например, вывести его в консоль или другое место

		DataTable^ dataTable2 = gcnew DataTable();
		for (int i = 0; i < SIZE; i++) { //Копируем столбцы из Table в dataTable2
			String^ columnName = Table[0]->getSelected[i];
			dataTable2->Columns->Add(columnName, String::typeid);
		}
		bool isFirstRow = true;
		for each (Record ^ record in Table) {
			if (isFirstRow) {
				isFirstRow = false;
				continue; // Пропускаем первую строку
			}
			if (record->getSelected[5] != "") {
				array <String^>^ rowData = record->getSelected;
				String^ shelfNumber = record->getSelected[5]->Replace(".", "");
				if (String::Compare(shelfNumber, buttonText, StringComparison::OrdinalIgnoreCase) == 0) {
					dataTable2->Rows->Add(rowData);
				}
				else if ((clickedButton->Text[0] == shelfNumber[0]) && (Convert::ToInt32(clickedButton->Text[1]) <= Convert::ToInt32(shelfNumber[1])) && (Convert::ToInt32(clickedButton->Text[4]) >= Convert::ToInt32(shelfNumber[1]))) {
					dataTable2->Rows->Add(rowData);
				}
			}

		}
		dataGridView1->DataSource = dataTable2; //Устанавливаем dataTable1 как источник данных
	}
}

	   //Привязка обработчика события к каждой кнопке
void AttachClickHandlersToButtons() {
		   for (int groupIndex = 1; groupIndex <= 19; groupIndex++) // Цикл по всем GroupBox
		   {
			   if ((groupIndex != 4) && (groupIndex != 5)) {
				   String^ groupBoxName = "groupBox" + groupIndex.ToString();
				   GroupBox^ groupBox = dynamic_cast<GroupBox^>(groupBox4->Controls[groupBoxName]);
				   if (groupBox == nullptr)
					   groupBox = dynamic_cast<GroupBox^>(groupBox5->Controls[groupBoxName]);
				   if (groupBox != nullptr) {
					   for (int i = 1; i <= 85; i++) // Цикл по всем кнопкам внутри GroupBox
					   {
						   String^ buttonName = "button" + i.ToString();
						   Button^ button = dynamic_cast<Button^>(groupBox->Controls[buttonName]);

						   if (button != nullptr)
						   {
							   button->Click += gcnew System::EventHandler(this, &MyForm::Button_Click); // Привязываем обработчик события к кнопке
						   }
					   }
				   }
			   }
		   }
}

void OnDataGridViewCellMouseDoubleClick(Object^ sender, EventArgs^ e) {
		   DataGridView^ dataGridView = dynamic_cast<DataGridView^>(sender);
		   if (dataGridView != nullptr)
		   {
			   if (dataGridView->SelectedCells->Count > 0)
			   {
				   for (int i = 0; i < 14; i++) {
					   String^ cellValue = dataGridView->Rows[dataGridView->SelectedCells[0]->RowIndex]->Cells[i]->Value->ToString();
					   infoArr[i] = cellValue/*row->Cells[i]->Value->ToString()*/;
				   }
				   childForm = gcnew infoForm(infoArr);
				   childForm->ShowDialog();
			   }
		   }
}

private: System::Void dataGridView1_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
	OnDataGridViewCellMouseDoubleClick(sender, e);
}
};
}