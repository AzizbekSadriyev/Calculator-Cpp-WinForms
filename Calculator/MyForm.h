#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Label^ lbl_result;

	private: System::Windows::Forms::Button^ btn_AC;
	private: System::Windows::Forms::Button^ btn_p_m;
	private: System::Windows::Forms::Button^ btn_divide;



	private: System::Windows::Forms::Button^ btn_percentage;



	private: System::Windows::Forms::Button^ btn_plus;

	private: System::Windows::Forms::Button^ btn_3;

	private: System::Windows::Forms::Button^ btn_2;

	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_minus;


	private: System::Windows::Forms::Button^ btn_6;

	private: System::Windows::Forms::Button^ btn_5;

	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_equal;


	private: System::Windows::Forms::Button^ btn_point;

	private: System::Windows::Forms::Button^ btn_0;
	private: System::Windows::Forms::Button^ btn_multiple;



	private: System::Windows::Forms::Button^ btn_9;

	private: System::Windows::Forms::Button^ btn_8;

	private: System::Windows::Forms::Button^ btn_7;
	private: float first_num, second_num, result;
	private: char user_action = ' ';
	private: bool is_equal = false;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lbl_result = (gcnew System::Windows::Forms::Label());
			this->btn_AC = (gcnew System::Windows::Forms::Button());
			this->btn_p_m = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_percentage = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_multiple = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->Location = System::Drawing::Point(12, 12);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(23, 23);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// lbl_result
			// 
			this->lbl_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_result->ForeColor = System::Drawing::Color::White;
			this->lbl_result->Location = System::Drawing::Point(12, 12);
			this->lbl_result->Name = L"lbl_result";
			this->lbl_result->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbl_result->Size = System::Drawing::Size(278, 50);
			this->lbl_result->TabIndex = 1;
			this->lbl_result->Text = L"0";
			this->lbl_result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_AC
			// 
			this->btn_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_AC->ForeColor = System::Drawing::Color::White;
			this->btn_AC->Location = System::Drawing::Point(12, 72);
			this->btn_AC->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_AC->Name = L"btn_AC";
			this->btn_AC->Size = System::Drawing::Size(65, 65);
			this->btn_AC->TabIndex = 2;
			this->btn_AC->Text = L"AC";
			this->btn_AC->UseVisualStyleBackColor = true;
			this->btn_AC->Click += gcnew System::EventHandler(this, &MyForm::btn_AC_Click);
			// 
			// btn_p_m
			// 
			this->btn_p_m->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_p_m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_p_m->ForeColor = System::Drawing::Color::White;
			this->btn_p_m->Location = System::Drawing::Point(83, 72);
			this->btn_p_m->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_p_m->Name = L"btn_p_m";
			this->btn_p_m->Size = System::Drawing::Size(65, 65);
			this->btn_p_m->TabIndex = 3;
			this->btn_p_m->Text = L"+/-";
			this->btn_p_m->UseVisualStyleBackColor = true;
			this->btn_p_m->Click += gcnew System::EventHandler(this, &MyForm::btn_p_m_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_divide->ForeColor = System::Drawing::Color::White;
			this->btn_divide->Location = System::Drawing::Point(225, 72);
			this->btn_divide->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(65, 65);
			this->btn_divide->TabIndex = 5;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// btn_percentage
			// 
			this->btn_percentage->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_percentage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_percentage->ForeColor = System::Drawing::Color::White;
			this->btn_percentage->Location = System::Drawing::Point(154, 72);
			this->btn_percentage->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_percentage->Name = L"btn_percentage";
			this->btn_percentage->Size = System::Drawing::Size(65, 65);
			this->btn_percentage->TabIndex = 4;
			this->btn_percentage->Text = L"%";
			this->btn_percentage->UseVisualStyleBackColor = true;
			this->btn_percentage->Click += gcnew System::EventHandler(this, &MyForm::btn_percentage_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->ForeColor = System::Drawing::Color::White;
			this->btn_plus->Location = System::Drawing::Point(225, 327);
			this->btn_plus->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(65, 65);
			this->btn_plus->TabIndex = 9;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_3->ForeColor = System::Drawing::Color::White;
			this->btn_3->Location = System::Drawing::Point(154, 327);
			this->btn_3->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(65, 65);
			this->btn_3->TabIndex = 8;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_2->ForeColor = System::Drawing::Color::White;
			this->btn_2->Location = System::Drawing::Point(83, 327);
			this->btn_2->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(65, 65);
			this->btn_2->TabIndex = 7;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_1->ForeColor = System::Drawing::Color::White;
			this->btn_1->Location = System::Drawing::Point(12, 327);
			this->btn_1->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(65, 65);
			this->btn_1->TabIndex = 6;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::Color::White;
			this->btn_minus->Location = System::Drawing::Point(225, 242);
			this->btn_minus->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(65, 65);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_6->ForeColor = System::Drawing::Color::White;
			this->btn_6->Location = System::Drawing::Point(154, 242);
			this->btn_6->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(65, 65);
			this->btn_6->TabIndex = 12;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_5->ForeColor = System::Drawing::Color::White;
			this->btn_5->Location = System::Drawing::Point(83, 242);
			this->btn_5->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(65, 65);
			this->btn_5->TabIndex = 11;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_4->ForeColor = System::Drawing::Color::White;
			this->btn_4->Location = System::Drawing::Point(12, 242);
			this->btn_4->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(65, 65);
			this->btn_4->TabIndex = 10;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equal->ForeColor = System::Drawing::Color::White;
			this->btn_equal->Location = System::Drawing::Point(225, 412);
			this->btn_equal->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(65, 65);
			this->btn_equal->TabIndex = 17;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_point->ForeColor = System::Drawing::Color::White;
			this->btn_point->Location = System::Drawing::Point(154, 412);
			this->btn_point->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(65, 65);
			this->btn_point->TabIndex = 16;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_point_Click);
			// 
			// btn_0
			// 
			this->btn_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_0->ForeColor = System::Drawing::Color::White;
			this->btn_0->Location = System::Drawing::Point(12, 412);
			this->btn_0->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(136, 65);
			this->btn_0->TabIndex = 14;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = false;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_multiple
			// 
			this->btn_multiple->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_multiple->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_multiple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_multiple->ForeColor = System::Drawing::Color::White;
			this->btn_multiple->Location = System::Drawing::Point(225, 157);
			this->btn_multiple->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_multiple->Name = L"btn_multiple";
			this->btn_multiple->Size = System::Drawing::Size(65, 65);
			this->btn_multiple->TabIndex = 21;
			this->btn_multiple->Text = L"x";
			this->btn_multiple->UseVisualStyleBackColor = false;
			this->btn_multiple->Click += gcnew System::EventHandler(this, &MyForm::btn_multiple_Click);
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_9->ForeColor = System::Drawing::Color::White;
			this->btn_9->Location = System::Drawing::Point(154, 157);
			this->btn_9->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(65, 65);
			this->btn_9->TabIndex = 20;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_8->ForeColor = System::Drawing::Color::White;
			this->btn_8->Location = System::Drawing::Point(83, 157);
			this->btn_8->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(65, 65);
			this->btn_8->TabIndex = 19;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_7->ForeColor = System::Drawing::Color::White;
			this->btn_7->Location = System::Drawing::Point(12, 157);
			this->btn_7->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(65, 65);
			this->btn_7->TabIndex = 18;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->ClientSize = System::Drawing::Size(302, 496);
			this->Controls->Add(this->btn_multiple);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_percentage);
			this->Controls->Add(this->btn_p_m);
			this->Controls->Add(this->btn_AC);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->lbl_result);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbl_result->ForeColor = System::Drawing::Color::White;
		Button^ button = safe_cast<Button^>(sender);

		if (this->lbl_result->Text == "0" || is_equal)
		{
			this->lbl_result->Text = button->Text;
			is_equal = false;
		}
		else
		{
			this->lbl_result->Text = this->lbl_result->Text + button->Text;
		}
	}

	private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Action('/');
	}

	private: System::Void btn_multiple_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Action('*');
	}

	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Action('-');
	}

	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Action('+');
	}

	private: System::Void Math_Action(char action)
	{
		first_num = System::Convert::ToDouble(this->lbl_result->Text);
		this->user_action = action;
		this->lbl_result->Text = "0";
	}

	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
		{
			return;
		}
		second_num = System::Convert::ToDouble(this->lbl_result->Text);
		switch (this->user_action)
		{
		case '+': result = first_num + second_num; break;
		case '-': result = first_num - second_num; break;
		case '*': result = first_num * second_num; break;
		case '%': result = first_num * second_num / 100; break;
		case '/': 
			if (second_num == 0)
			{
				result = 0;
				this->lbl_result->ForeColor = System::Drawing::Color::Red;
				MessageBox::Show(this, "Cannot be divided by zero!", "Error",MessageBoxButtons::OK ,MessageBoxIcon::Error);
			}
			else
			{
				result = first_num / second_num; 
			}
			break;
		}
		this->is_equal = true;
		this->lbl_result->Text = System::Convert::ToString(result);
	}

	private: System::Void btn_AC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbl_result->Text = "0";
		this->lbl_result->ForeColor = System::Drawing::Color::White;
		this->first_num = 0;
		this->second_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}

	private: System::Void btn_p_m_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = System::Convert::ToDouble(this->lbl_result->Text);
		num *= -1;
		this->lbl_result->Text = System::Convert::ToString(num);
	}

	private: System::Void btn_percentage_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Action('%');
	}

	private: System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->lbl_result->Text;
		if (!text->Contains(","))
		{
			this->lbl_result->Text = text + ",";
		}
	}
};
}
