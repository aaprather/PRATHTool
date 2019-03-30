#pragma once
#include "InputTime.h"
#include <windows.h>
#include "Key.h"

namespace PRATHTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::DateTime timeOriginal;
	private: System::DateTime time;
	private: System::DateTime ACTime;
	private: System::TimeSpan t;

	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  shutDownTimer;
	private: System::Windows::Forms::Label^  TimeLabel;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  ACLabel;
	private: System::Windows::Forms::Button^  ACStopButton;
	private: System::Windows::Forms::Button^  ACStartButton;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  ACMaxTimeTextBox;

	private: System::Windows::Forms::TextBox^  ACMinTimeTextBox;

	private: System::Windows::Forms::Timer^  ACTimer;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::CheckBox^  ACHotkeyCheckBox;
	private: System::Windows::Forms::Timer^  keyPressCheckTimer;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::CheckBox^  AKHotkeyCheckBox;
	private: System::Windows::Forms::Label^  AKLabel;
	private: System::Windows::Forms::Button^  AKStopButton;
	private: System::Windows::Forms::Button^  AKStartButton;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  AKMaxTextBox;
	private: System::Windows::Forms::TextBox^  AKMinTextBox;
	private: System::Windows::Forms::Timer^  AKTimer;
	private: System::Windows::Forms::ComboBox^  AKDropDown;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;





	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->shutDownTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->TimeLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ACHotkeyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->ACLabel = (gcnew System::Windows::Forms::Label());
			this->ACStopButton = (gcnew System::Windows::Forms::Button());
			this->ACStartButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ACMaxTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ACMinTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ACTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->keyPressCheckTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->AKDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->AKHotkeyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->AKLabel = (gcnew System::Windows::Forms::Label());
			this->AKStopButton = (gcnew System::Windows::Forms::Button());
			this->AKStartButton = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->AKMaxTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AKMinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AKTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(63, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 20);
			this->textBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(54, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(54, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// shutDownTimer
			// 
			this->shutDownTimer->Tick += gcnew System::EventHandler(this, &MyForm::shutDownTimer_Tick);
			// 
			// TimeLabel
			// 
			this->TimeLabel->AutoSize = true;
			this->TimeLabel->Location = System::Drawing::Point(60, 141);
			this->TimeLabel->Name = L"TimeLabel";
			this->TimeLabel->Size = System::Drawing::Size(10, 13);
			this->TimeLabel->TabIndex = 5;
			this->TimeLabel->Text = L"-";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->TimeLabel);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(9, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 200);
			this->panel1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(12, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 26);
			this->label2->TabIndex = 7;
			this->label2->Text = L"- Enter hours/minutes/seconds in \r\n   which computer will turn off.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(11, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Shutdown Timer";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->ACHotkeyCheckBox);
			this->panel2->Controls->Add(this->ACLabel);
			this->panel2->Controls->Add(this->ACStopButton);
			this->panel2->Controls->Add(this->ACStartButton);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->ACMaxTimeTextBox);
			this->panel2->Controls->Add(this->ACMinTimeTextBox);
			this->panel2->Location = System::Drawing::Point(226, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(296, 215);
			this->panel2->TabIndex = 7;
			// 
			// ACHotkeyCheckBox
			// 
			this->ACHotkeyCheckBox->AutoSize = true;
			this->ACHotkeyCheckBox->Location = System::Drawing::Point(174, 115);
			this->ACHotkeyCheckBox->Name = L"ACHotkeyCheckBox";
			this->ACHotkeyCheckBox->Size = System::Drawing::Size(102, 17);
			this->ACHotkeyCheckBox->TabIndex = 12;
			this->ACHotkeyCheckBox->Text = L"R-CTRL Hotkey";
			this->ACHotkeyCheckBox->UseVisualStyleBackColor = true;
			// 
			// ACLabel
			// 
			this->ACLabel->AutoSize = true;
			this->ACLabel->Location = System::Drawing::Point(114, 157);
			this->ACLabel->Name = L"ACLabel";
			this->ACLabel->Size = System::Drawing::Size(10, 13);
			this->ACLabel->TabIndex = 11;
			this->ACLabel->Text = L"-";
			// 
			// ACStopButton
			// 
			this->ACStopButton->Enabled = false;
			this->ACStopButton->Location = System::Drawing::Point(108, 131);
			this->ACStopButton->Name = L"ACStopButton";
			this->ACStopButton->Size = System::Drawing::Size(60, 23);
			this->ACStopButton->TabIndex = 10;
			this->ACStopButton->Text = L"Stop";
			this->ACStopButton->UseVisualStyleBackColor = true;
			this->ACStopButton->Click += gcnew System::EventHandler(this, &MyForm::ACStopButton_Click);
			// 
			// ACStartButton
			// 
			this->ACStartButton->Location = System::Drawing::Point(108, 102);
			this->ACStartButton->Name = L"ACStartButton";
			this->ACStartButton->Size = System::Drawing::Size(60, 23);
			this->ACStartButton->TabIndex = 9;
			this->ACStartButton->Text = L"Start";
			this->ACStartButton->UseVisualStyleBackColor = true;
			this->ACStartButton->Click += gcnew System::EventHandler(this, &MyForm::ACStartButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(32, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 39);
			this->label4->TabIndex = 8;
			this->label4->Text = L"- Enter time range below in milliseconds\r\n- Every click is done at a random time "
				L"between\r\n   the given range.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(31, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(231, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Random Interval Clicker";
			// 
			// ACMaxTimeTextBox
			// 
			this->ACMaxTimeTextBox->Location = System::Drawing::Point(142, 73);
			this->ACMaxTimeTextBox->Name = L"ACMaxTimeTextBox";
			this->ACMaxTimeTextBox->Size = System::Drawing::Size(59, 20);
			this->ACMaxTimeTextBox->TabIndex = 2;
			// 
			// ACMinTimeTextBox
			// 
			this->ACMinTimeTextBox->Location = System::Drawing::Point(77, 73);
			this->ACMinTimeTextBox->Name = L"ACMinTimeTextBox";
			this->ACMinTimeTextBox->Size = System::Drawing::Size(59, 20);
			this->ACMinTimeTextBox->TabIndex = 1;
			// 
			// ACTimer
			// 
			this->ACTimer->Tick += gcnew System::EventHandler(this, &MyForm::ACTimer_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(99, 478);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"BTC Address -  ";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->Location = System::Drawing::Point(186, 475);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(241, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"3KwkiTj1QhmmUgHkwfWscTHUDbNd9e4QQH";
			// 
			// keyPressCheckTimer
			// 
			this->keyPressCheckTimer->Interval = 1;
			this->keyPressCheckTimer->Tick += gcnew System::EventHandler(this, &MyForm::keyPressCheckTimer_Tick);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->AKDropDown);
			this->panel3->Controls->Add(this->AKHotkeyCheckBox);
			this->panel3->Controls->Add(this->AKLabel);
			this->panel3->Controls->Add(this->AKStopButton);
			this->panel3->Controls->Add(this->AKStartButton);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->AKMaxTextBox);
			this->panel3->Controls->Add(this->AKMinTextBox);
			this->panel3->Location = System::Drawing::Point(226, 238);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(296, 215);
			this->panel3->TabIndex = 11;
			// 
			// AKDropDown
			// 
			this->AKDropDown->FormattingEnabled = true;
			this->AKDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Escape" });
			this->AKDropDown->Location = System::Drawing::Point(14, 104);
			this->AKDropDown->Name = L"AKDropDown";
			this->AKDropDown->Size = System::Drawing::Size(76, 21);
			this->AKDropDown->TabIndex = 13;
			// 
			// AKHotkeyCheckBox
			// 
			this->AKHotkeyCheckBox->AutoSize = true;
			this->AKHotkeyCheckBox->Location = System::Drawing::Point(174, 115);
			this->AKHotkeyCheckBox->Name = L"AKHotkeyCheckBox";
			this->AKHotkeyCheckBox->Size = System::Drawing::Size(105, 17);
			this->AKHotkeyCheckBox->TabIndex = 12;
			this->AKHotkeyCheckBox->Text = L"R-SHIFT Hotkey";
			this->AKHotkeyCheckBox->UseVisualStyleBackColor = true;
			// 
			// AKLabel
			// 
			this->AKLabel->AutoSize = true;
			this->AKLabel->Location = System::Drawing::Point(114, 157);
			this->AKLabel->Name = L"AKLabel";
			this->AKLabel->Size = System::Drawing::Size(10, 13);
			this->AKLabel->TabIndex = 11;
			this->AKLabel->Text = L"-";
			// 
			// AKStopButton
			// 
			this->AKStopButton->Enabled = false;
			this->AKStopButton->Location = System::Drawing::Point(108, 131);
			this->AKStopButton->Name = L"AKStopButton";
			this->AKStopButton->Size = System::Drawing::Size(60, 23);
			this->AKStopButton->TabIndex = 10;
			this->AKStopButton->Text = L"Stop";
			this->AKStopButton->UseVisualStyleBackColor = true;
			this->AKStopButton->Click += gcnew System::EventHandler(this, &MyForm::AKStopButton_Click);
			// 
			// AKStartButton
			// 
			this->AKStartButton->Location = System::Drawing::Point(108, 102);
			this->AKStartButton->Name = L"AKStartButton";
			this->AKStartButton->Size = System::Drawing::Size(60, 23);
			this->AKStartButton->TabIndex = 9;
			this->AKStartButton->Text = L"Start";
			this->AKStartButton->UseVisualStyleBackColor = true;
			this->AKStartButton->Click += gcnew System::EventHandler(this, &MyForm::AKStartButton_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Location = System::Drawing::Point(26, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(250, 39);
			this->label7->TabIndex = 8;
			this->label7->Text = L"- Enter time range below in milliseconds\r\n- Every key press is done at a random t"
				L"ime between\r\n   the given range.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(10, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(279, 24);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Random Interval Key Presser";
			// 
			// AKMaxTextBox
			// 
			this->AKMaxTextBox->Location = System::Drawing::Point(142, 73);
			this->AKMaxTextBox->Name = L"AKMaxTextBox";
			this->AKMaxTextBox->Size = System::Drawing::Size(59, 20);
			this->AKMaxTextBox->TabIndex = 2;
			// 
			// AKMinTextBox
			// 
			this->AKMinTextBox->Location = System::Drawing::Point(77, 73);
			this->AKMinTextBox->Name = L"AKMinTextBox";
			this->AKMinTextBox->Size = System::Drawing::Size(59, 20);
			this->AKMinTextBox->TabIndex = 1;
			// 
			// AKTimer
			// 
			this->AKTimer->Tick += gcnew System::EventHandler(this, &MyForm::AKTimer_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(215, -5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(10, 478);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-1, 222);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(538, 10);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 463);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(538, 10);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 498);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(550, 537);
			this->MinimumSize = System::Drawing::Size(550, 537);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PRATHTool";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		keyPressCheckTimer->Start();

	}


		/*BEGIN SHUTDOWN TIMER SECTION*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //Shutdown timer start button
		if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "")
		{

		}
		else
		{
			InputTime IT(textBox1->Text, textBox2->Text, textBox3->Text); //Create our InputTime object

			if (IT.Hours == 0 && IT.Minutes == 0 && IT.Seconds == 0)
			{

			}
			else
			{

				label1->BackColor = Color::Chartreuse;
				button1->Enabled = false;
				button2->Enabled = true;
				textBox1->Text = "";
				textBox2->Text = "";
				textBox3->Text = "";
				textBox1->Enabled = false;
				textBox2->Enabled = false;
				textBox3->Enabled = false;

				timeOriginal = System::DateTime::Now;
				time = timeOriginal.AddHours(IT.Hours).AddMinutes(IT.Minutes).AddSeconds(IT.Seconds);
				t = time - timeOriginal;
				if (t.TotalSeconds > 86400) //86400 == total seconds in a day
				{
					time = timeOriginal.AddHours(24); //If more than 24 hours are entered, set timer to 24 hours
				}
				shutDownTimer->Interval = 1000;
				shutDownTimer->Start();
			}

		}

	}
	private: System::Void shutDownTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

		time = time.AddSeconds(-1);
		t = time - timeOriginal;

		if (t.Hours <= 0 && t.Minutes <= 0 && t.Seconds <= 0)
		{
			TimeLabel->Text = "Shutting Down!";
			shutDownTimer->Stop();
			Diagnostics::ProcessStartInfo^ p = gcnew Diagnostics::ProcessStartInfo("cmd", "/c" + "shutdown -s -t 1");
			p->CreateNoWindow = false;
			p->RedirectStandardOutput = true;
			p->UseShellExecute = false;
			Diagnostics::Process^ pc = gcnew Diagnostics::Process();
			pc->StartInfo = p;
			pc->Start();
			MessageBox::Show(pc->StandardOutput->ReadToEnd());
		}
		else
		{
			TimeLabel->Text = "Shutdown in\n" + t.Hours + " : " + t.Minutes + " : " + t.Seconds;
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //Shutdown Timer stop button
		textBox1->Enabled = true;
		textBox2->Enabled = true;
		textBox3->Enabled = true;
		label1->BackColor = SystemColors::Control;
		shutDownTimer->Stop();
		TimeLabel->Text = "";
		button1->Enabled = true;
		button2->Enabled = false;
	}
			 /*END SHUTDOWNTIMER SECTION*/





			 /*BEGIN Clicker section*/
	private: System::Void ACStartButton_Click(System::Object^  sender, System::EventArgs^  e) {

		if (checkACValues(ACMinTimeTextBox->Text, ACMaxTimeTextBox->Text) == true)
		{

			label3->BackColor = Color::Chartreuse;
			ACMinTimeTextBox->Enabled = false;
			ACMaxTimeTextBox->Enabled = false;
			Random r;
			int val = r.Next(Convert::ToInt32(ACMinTimeTextBox->Text), Convert::ToInt32(ACMaxTimeTextBox->Text));
			ACTimer->Interval = val;
			ACTime = DateTime::Now.AddMilliseconds(val);

			ACLabel->Text = "Next click at\n" + ACTime.ToLongDateString() + "\n" + ACTime.ToLongTimeString() + "\nNext click interval: " + val.ToString() + "ms";

			ACTimer->Start();

			ACStartButton->Enabled = false;
			ACStopButton->Enabled = true;
		}


	}
	private: System::Void ACTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		//MouseClick
		mouse_event(MOUSEEVENTF_LEFTDOWN, System::Windows::Forms::Cursor::Position.X, System::Windows::Forms::Cursor::Position.Y, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, System::Windows::Forms::Cursor::Position.X, System::Windows::Forms::Cursor::Position.Y, 0, 0);
		//


		Random r;
		int val = r.Next(Convert::ToInt32(ACMinTimeTextBox->Text), Convert::ToInt32(ACMaxTimeTextBox->Text));
		ACTimer->Interval = val;
		ACTime = DateTime::Now.AddMilliseconds(val);
		ACLabel->Text = "Next click at\n" + ACTime.ToLongDateString() + "\n" + ACTime.ToLongTimeString() + "\nNext click interval: " + val.ToString() + "ms";
	}
	private: System::Void ACStopButton_Click(System::Object^  sender, System::EventArgs^  e) {
		label3->BackColor = SystemColors::Control;
		ACMinTimeTextBox->Enabled = true;
		ACMaxTimeTextBox->Enabled = true;
		ACTimer->Stop();
		ACLabel->Text = "";
		ACStartButton->Enabled = true;
		ACStopButton->Enabled = false;
	}

	private: bool checkACValues(System::String^ min, System::String^ max)
	{
		bool valuesAreGood;
		int i, j;
		try
		{
			i = Convert::ToInt32(min);
			j = Convert::ToInt32(max);
			if (i >= j)
				valuesAreGood = false;
			else
				valuesAreGood = true;
		}
		catch (...)
		{
			valuesAreGood = false;
		}
		return valuesAreGood;
	}

			 /*END Clicker section*/







		/*BEGIN Hotkey detection*/
	private: System::Void keyPressCheckTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

		if (ACHotkeyCheckBox->Checked == true)
		{
			if (GetKeyState(VK_RCONTROL) & 0x8000)
			{
				keyPressCheckTimer->Stop();

				if (ACStartButton->Enabled == false) //Clicker is running
				{
					ACStopButton->PerformClick();
				}
				else if (ACStopButton->Enabled == false) //Clicker is stopped
				{
					ACStartButton->PerformClick();
				}

				System::Threading::Thread::Sleep(500);
				keyPressCheckTimer->Start();

			}
		}

		if (AKHotkeyCheckBox->Checked == true)
		{
			if (GetKeyState(VK_RSHIFT) & 0x8000)
			{
				keyPressCheckTimer->Stop();

				if (AKStartButton->Enabled == false) //Key presser is running
				{
					AKStopButton->PerformClick();
				}
				else if (AKStopButton->Enabled == false) //key presser is stopped
				{
					AKStartButton->PerformClick();
				}

				System::Threading::Thread::Sleep(300);
				keyPressCheckTimer->Start();

			}
		}

	}
			 /*END Hotkey detection*/










			 /*BEGIN AUTOKEY SECTION*/
	private: DateTime AKTime;
	private: System::String^ KeyToPress;

	private: System::Void AKStartButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (checkACValues(AKMinTextBox->Text, AKMaxTextBox->Text) == true && AKDropDown->SelectedIndex > -1)
		{
			label8->BackColor = Color::Chartreuse;
			AKMinTextBox->Enabled = false;
			AKMaxTextBox->Enabled = false;
			Key tk(AKDropDown->SelectedIndex);
			KeyToPress = tk.KeyToString;

			Random r;
			int val = r.Next(Convert::ToInt32(AKMinTextBox->Text), Convert::ToInt32(AKMaxTextBox->Text));
			AKTimer->Interval = val;
			AKTime = DateTime::Now.AddMilliseconds(val);

			AKLabel->Text = "Next key at\n" + AKTime.ToLongDateString() + "\n" + AKTime.ToLongTimeString() + "\nNext key interval: " + val.ToString() + "ms";

			AKTimer->Start();

			AKStartButton->Enabled = false;
			AKStopButton->Enabled = true;
		}
	}
	private: System::Void AKStopButton_Click(System::Object^  sender, System::EventArgs^  e) {
		label8->BackColor = SystemColors::Control;
		AKMinTextBox->Enabled = true;
		AKMaxTextBox->Enabled = true;
		AKTimer->Stop();
		AKLabel->Text = "";
		AKStartButton->Enabled = true;
		AKStopButton->Enabled = false;
	}
	private: System::Void AKTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		//Keypress
		SendKeys::Send(KeyToPress);
		//

		Random r;
		int val = r.Next(Convert::ToInt32(AKMinTextBox->Text), Convert::ToInt32(AKMaxTextBox->Text));
		AKTimer->Interval = val;
		AKTime = DateTime::Now.AddMilliseconds(val);
		AKLabel->Text = "Next click at\n" + AKTime.ToLongDateString() + "\n" + AKTime.ToLongTimeString() + "\nNext click interval: " + val.ToString() + "ms";
	}
			 /*END AUTOKEY SECTION*/
	};
}
