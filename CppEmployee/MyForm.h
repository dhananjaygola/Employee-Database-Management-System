#pragma once

namespace CppEmployee {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataReader^ sqlRd;
private: System::Windows::Forms::Button^ btnReset;
private: System::Windows::Forms::Button^ btnExit;
private: System::Windows::Forms::Button^ btnRefresh;
private: System::Windows::Forms::Button^ btnDelete;
private: System::Windows::Forms::Button^ btnPrint;
private: System::Windows::Forms::Button^ btnPaySlip;
private: System::Windows::Forms::Button^ btnUpdate;
private: System::Windows::Forms::Button^ btnTotal;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Panel^ panel4;

private: System::Windows::Forms::TextBox^ txtMobile;
private: System::Windows::Forms::Label^ lblMobile;
private: System::Windows::Forms::Label^ lblGender;
private: System::Windows::Forms::TextBox^ txtAddress;

private: System::Windows::Forms::TextBox^ txtSurname;

private: System::Windows::Forms::TextBox^ txtFirstname;



private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ txtOtherPayment;
private: System::Windows::Forms::TextBox^ txtOverTime;
private: System::Windows::Forms::TextBox^ txtBasicSalary;
private: System::Windows::Forms::TextBox^ txtWeight;
private: System::Windows::Forms::Label^ lblOtherPayment;
private: System::Windows::Forms::Label^ lblOverTime;
private: System::Windows::Forms::Label^ lblBasicSalary;
private: System::Windows::Forms::Label^ lblWeight;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ txtNIPayment;
private: System::Windows::Forms::TextBox^ txtStudentLoan;
private: System::Windows::Forms::TextBox^ txtPension;
private: System::Windows::Forms::TextBox^ txtTax;
private: System::Windows::Forms::Label^ lblNIPayment;
private: System::Windows::Forms::Label^ lblStudentLoan;
private: System::Windows::Forms::Label^ lblPension;
private: System::Windows::Forms::Label^ lblTax;
private: System::Windows::Forms::Panel^ panel7;

private: System::Windows::Forms::TextBox^ txtNICode;
private: System::Windows::Forms::TextBox^ txtNINumber;
private: System::Windows::Forms::TextBox^ txtTaxCode;
private: System::Windows::Forms::Label^ lblNICode;
private: System::Windows::Forms::Label^ lblNINumber;
private: System::Windows::Forms::Label^ lblTaxCode;
private: System::Windows::Forms::Label^ lblTaxPeriod;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::TextBox^ txtDeductions;
private: System::Windows::Forms::TextBox^ txtGrossPay;
private: System::Windows::Forms::TextBox^ txtNetPay;
private: System::Windows::Forms::Label^ lblDeductions;
private: System::Windows::Forms::Label^ lblGrossPay;
private: System::Windows::Forms::Label^ lblNetPay;


private: System::Windows::Forms::Label^ lblPaydate;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::TextBox^ txtPensionablePay;
private: System::Windows::Forms::TextBox^ txtTaxablePay;
private: System::Windows::Forms::Label^ lblPensionablePay;
private: System::Windows::Forms::Label^ lblTaxablePay;
private: System::Windows::Forms::TextBox^ txtSearch;
private: System::Windows::Forms::Button^ btnSearch;

private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ lblAddress;
private: System::Windows::Forms::Label^ lblSurname;
private: System::Windows::Forms::Label^ lblFirstname;
private: System::Windows::Forms::Label^ lblRef;
private: System::Windows::Forms::TextBox^ txtRef;
private: System::Windows::Forms::ComboBox^ cobGender;
private: System::Windows::Forms::ComboBox^ txtTaxPeriod;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::RichTextBox^ rtReceipt;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

















		 //  MySqlDataReader^ sqlRd;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			EmployeeConnector();
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

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnPaySlip = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->cobGender = (gcnew System::Windows::Forms::ComboBox());
			this->txtRef = (gcnew System::Windows::Forms::TextBox());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblSurname = (gcnew System::Windows::Forms::Label());
			this->lblFirstname = (gcnew System::Windows::Forms::Label());
			this->lblRef = (gcnew System::Windows::Forms::Label());
			this->txtMobile = (gcnew System::Windows::Forms::TextBox());
			this->lblMobile = (gcnew System::Windows::Forms::Label());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstname = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->txtOtherPayment = (gcnew System::Windows::Forms::TextBox());
			this->txtOverTime = (gcnew System::Windows::Forms::TextBox());
			this->txtBasicSalary = (gcnew System::Windows::Forms::TextBox());
			this->txtWeight = (gcnew System::Windows::Forms::TextBox());
			this->lblOtherPayment = (gcnew System::Windows::Forms::Label());
			this->lblOverTime = (gcnew System::Windows::Forms::Label());
			this->lblBasicSalary = (gcnew System::Windows::Forms::Label());
			this->lblWeight = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->txtNIPayment = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentLoan = (gcnew System::Windows::Forms::TextBox());
			this->txtPension = (gcnew System::Windows::Forms::TextBox());
			this->txtTax = (gcnew System::Windows::Forms::TextBox());
			this->lblNIPayment = (gcnew System::Windows::Forms::Label());
			this->lblStudentLoan = (gcnew System::Windows::Forms::Label());
			this->lblPension = (gcnew System::Windows::Forms::Label());
			this->lblTax = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->txtTaxPeriod = (gcnew System::Windows::Forms::ComboBox());
			this->txtNICode = (gcnew System::Windows::Forms::TextBox());
			this->txtNINumber = (gcnew System::Windows::Forms::TextBox());
			this->txtTaxCode = (gcnew System::Windows::Forms::TextBox());
			this->lblNICode = (gcnew System::Windows::Forms::Label());
			this->lblNINumber = (gcnew System::Windows::Forms::Label());
			this->lblTaxCode = (gcnew System::Windows::Forms::Label());
			this->lblTaxPeriod = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->txtDeductions = (gcnew System::Windows::Forms::TextBox());
			this->txtGrossPay = (gcnew System::Windows::Forms::TextBox());
			this->txtNetPay = (gcnew System::Windows::Forms::TextBox());
			this->lblDeductions = (gcnew System::Windows::Forms::Label());
			this->lblGrossPay = (gcnew System::Windows::Forms::Label());
			this->lblNetPay = (gcnew System::Windows::Forms::Label());
			this->lblPaydate = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->txtPensionablePay = (gcnew System::Windows::Forms::TextBox());
			this->txtTaxablePay = (gcnew System::Windows::Forms::TextBox());
			this->lblPensionablePay = (gcnew System::Windows::Forms::Label());
			this->lblTaxablePay = (gcnew System::Windows::Forms::Label());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->rtReceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnReset->Location = System::Drawing::Point(746, 6);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(110, 33);
			this->btnReset->TabIndex = 19;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnExit->Location = System::Drawing::Point(869, 6);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(110, 33);
			this->btnExit->TabIndex = 20;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnRefresh->Location = System::Drawing::Point(622, 6);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(110, 33);
			this->btnRefresh->TabIndex = 21;
			this->btnRefresh->Text = L"Refersh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnDelete->Location = System::Drawing::Point(499, 6);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(110, 33);
			this->btnDelete->TabIndex = 22;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnPrint->Location = System::Drawing::Point(376, 6);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(110, 33);
			this->btnPrint->TabIndex = 23;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &MyForm::btnPrint_Click);
			// 
			// btnPaySlip
			// 
			this->btnPaySlip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnPaySlip->Location = System::Drawing::Point(254, 6);
			this->btnPaySlip->Name = L"btnPaySlip";
			this->btnPaySlip->Size = System::Drawing::Size(110, 33);
			this->btnPaySlip->TabIndex = 24;
			this->btnPaySlip->Text = L"Pay Slip";
			this->btnPaySlip->UseVisualStyleBackColor = true;
			this->btnPaySlip->Click += gcnew System::EventHandler(this, &MyForm::btnPaySlip_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnUpdate->Location = System::Drawing::Point(131, 6);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(110, 33);
			this->btnUpdate->TabIndex = 25;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MyForm::btnUpdate_Click);
			// 
			// btnTotal
			// 
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnTotal->Location = System::Drawing::Point(9, 6);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(110, 33);
			this->btnTotal->TabIndex = 26;
			this->btnTotal->Text = L"Total / Add";
			this->btnTotal->UseVisualStyleBackColor = true;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::btnTotal_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->btnTotal);
			this->panel3->Controls->Add(this->btnUpdate);
			this->panel3->Controls->Add(this->btnReset);
			this->panel3->Controls->Add(this->btnPaySlip);
			this->panel3->Controls->Add(this->btnExit);
			this->panel3->Controls->Add(this->btnPrint);
			this->panel3->Controls->Add(this->btnRefresh);
			this->panel3->Controls->Add(this->btnDelete);
			this->panel3->Location = System::Drawing::Point(198, 696);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(988, 45);
			this->panel3->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(12, 532);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1346, 158);
			this->panel2->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1338, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->cobGender);
			this->panel4->Controls->Add(this->txtRef);
			this->panel4->Controls->Add(this->lblAddress);
			this->panel4->Controls->Add(this->lblSurname);
			this->panel4->Controls->Add(this->lblFirstname);
			this->panel4->Controls->Add(this->lblRef);
			this->panel4->Controls->Add(this->txtMobile);
			this->panel4->Controls->Add(this->lblMobile);
			this->panel4->Controls->Add(this->lblGender);
			this->panel4->Controls->Add(this->txtAddress);
			this->panel4->Controls->Add(this->txtSurname);
			this->panel4->Controls->Add(this->txtFirstname);
			this->panel4->Location = System::Drawing::Point(3, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(601, 291);
			this->panel4->TabIndex = 0;
			// 
			// cobGender
			// 
			this->cobGender->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->cobGender->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cobGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->cobGender->FormattingEnabled = true;
			this->cobGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cobGender->Location = System::Drawing::Point(167, 252);
			this->cobGender->Name = L"cobGender";
			this->cobGender->Size = System::Drawing::Size(126, 28);
			this->cobGender->TabIndex = 17;
			this->cobGender->Tag = L"";
			// 
			// txtRef
			// 
			this->txtRef->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtRef->Location = System::Drawing::Point(167, 9);
			this->txtRef->Name = L"txtRef";
			this->txtRef->Size = System::Drawing::Size(412, 29);
			this->txtRef->TabIndex = 1;
			this->txtRef->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblAddress->Location = System::Drawing::Point(67, 155);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(90, 24);
			this->lblAddress->TabIndex = 16;
			this->lblAddress->Text = L"Address :";
			// 
			// lblSurname
			// 
			this->lblSurname->AutoSize = true;
			this->lblSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblSurname->Location = System::Drawing::Point(61, 104);
			this->lblSurname->Name = L"lblSurname";
			this->lblSurname->Size = System::Drawing::Size(97, 24);
			this->lblSurname->TabIndex = 15;
			this->lblSurname->Text = L"Surname :";
			// 
			// lblFirstname
			// 
			this->lblFirstname->AutoSize = true;
			this->lblFirstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblFirstname->Location = System::Drawing::Point(55, 58);
			this->lblFirstname->Name = L"lblFirstname";
			this->lblFirstname->Size = System::Drawing::Size(103, 24);
			this->lblFirstname->TabIndex = 14;
			this->lblFirstname->Text = L"Firstname :";
			// 
			// lblRef
			// 
			this->lblRef->AutoSize = true;
			this->lblRef->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblRef->Location = System::Drawing::Point(78, 12);
			this->lblRef->Name = L"lblRef";
			this->lblRef->Size = System::Drawing::Size(78, 24);
			this->lblRef->TabIndex = 13;
			this->lblRef->Text = L"Ref No :";
			// 
			// txtMobile
			// 
			this->txtMobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtMobile->Location = System::Drawing::Point(406, 251);
			this->txtMobile->Name = L"txtMobile";
			this->txtMobile->Size = System::Drawing::Size(173, 29);
			this->txtMobile->TabIndex = 11;
			this->txtMobile->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblMobile
			// 
			this->lblMobile->AutoSize = true;
			this->lblMobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblMobile->Location = System::Drawing::Point(325, 254);
			this->lblMobile->Name = L"lblMobile";
			this->lblMobile->Size = System::Drawing::Size(77, 24);
			this->lblMobile->TabIndex = 10;
			this->lblMobile->Text = L"Mobile :";
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblGender->Location = System::Drawing::Point(74, 254);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(84, 24);
			this->lblGender->TabIndex = 8;
			this->lblGender->Text = L"Gender :";
			// 
			// txtAddress
			// 
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtAddress->Location = System::Drawing::Point(167, 152);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(412, 79);
			this->txtAddress->TabIndex = 7;
			// 
			// txtSurname
			// 
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtSurname->Location = System::Drawing::Point(167, 102);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(412, 29);
			this->txtSurname->TabIndex = 5;
			this->txtSurname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtFirstname
			// 
			this->txtFirstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtFirstname->Location = System::Drawing::Point(167, 55);
			this->txtFirstname->Name = L"txtFirstname";
			this->txtFirstname->Size = System::Drawing::Size(412, 29);
			this->txtFirstname->TabIndex = 3;
			this->txtFirstname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->txtOtherPayment);
			this->panel5->Controls->Add(this->txtOverTime);
			this->panel5->Controls->Add(this->txtBasicSalary);
			this->panel5->Controls->Add(this->txtWeight);
			this->panel5->Controls->Add(this->lblOtherPayment);
			this->panel5->Controls->Add(this->lblOverTime);
			this->panel5->Controls->Add(this->lblBasicSalary);
			this->panel5->Controls->Add(this->lblWeight);
			this->panel5->Location = System::Drawing::Point(3, 300);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(301, 210);
			this->panel5->TabIndex = 1;
			// 
			// txtOtherPayment
			// 
			this->txtOtherPayment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtOtherPayment->Location = System::Drawing::Point(168, 164);
			this->txtOtherPayment->Name = L"txtOtherPayment";
			this->txtOtherPayment->Size = System::Drawing::Size(115, 29);
			this->txtOtherPayment->TabIndex = 18;
			this->txtOtherPayment->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtOverTime
			// 
			this->txtOverTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtOverTime->Location = System::Drawing::Point(168, 116);
			this->txtOverTime->Name = L"txtOverTime";
			this->txtOverTime->Size = System::Drawing::Size(115, 29);
			this->txtOverTime->TabIndex = 17;
			this->txtOverTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBasicSalary
			// 
			this->txtBasicSalary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtBasicSalary->Location = System::Drawing::Point(168, 68);
			this->txtBasicSalary->Name = L"txtBasicSalary";
			this->txtBasicSalary->Size = System::Drawing::Size(115, 29);
			this->txtBasicSalary->TabIndex = 16;
			this->txtBasicSalary->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtWeight
			// 
			this->txtWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtWeight->Location = System::Drawing::Point(168, 21);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(115, 29);
			this->txtWeight->TabIndex = 15;
			this->txtWeight->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblOtherPayment
			// 
			this->lblOtherPayment->AutoSize = true;
			this->lblOtherPayment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblOtherPayment->Location = System::Drawing::Point(13, 167);
			this->lblOtherPayment->Name = L"lblOtherPayment";
			this->lblOtherPayment->Size = System::Drawing::Size(145, 24);
			this->lblOtherPayment->TabIndex = 10;
			this->lblOtherPayment->Text = L"Other Payment :";
			// 
			// lblOverTime
			// 
			this->lblOverTime->AutoSize = true;
			this->lblOverTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblOverTime->Location = System::Drawing::Point(49, 118);
			this->lblOverTime->Name = L"lblOverTime";
			this->lblOverTime->Size = System::Drawing::Size(109, 24);
			this->lblOverTime->TabIndex = 9;
			this->lblOverTime->Text = L"Over Time :";
			// 
			// lblBasicSalary
			// 
			this->lblBasicSalary->AutoSize = true;
			this->lblBasicSalary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblBasicSalary->Location = System::Drawing::Point(38, 71);
			this->lblBasicSalary->Name = L"lblBasicSalary";
			this->lblBasicSalary->Size = System::Drawing::Size(121, 24);
			this->lblBasicSalary->TabIndex = 8;
			this->lblBasicSalary->Text = L"Basic Salary :";
			// 
			// lblWeight
			// 
			this->lblWeight->AutoSize = true;
			this->lblWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblWeight->Location = System::Drawing::Point(44, 24);
			this->lblWeight->Name = L"lblWeight";
			this->lblWeight->Size = System::Drawing::Size(114, 24);
			this->lblWeight->TabIndex = 7;
			this->lblWeight->Text = L"City Weight :";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->txtNIPayment);
			this->panel6->Controls->Add(this->txtStudentLoan);
			this->panel6->Controls->Add(this->txtPension);
			this->panel6->Controls->Add(this->txtTax);
			this->panel6->Controls->Add(this->lblNIPayment);
			this->panel6->Controls->Add(this->lblStudentLoan);
			this->panel6->Controls->Add(this->lblPension);
			this->panel6->Controls->Add(this->lblTax);
			this->panel6->Location = System::Drawing::Point(310, 300);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(294, 210);
			this->panel6->TabIndex = 2;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel6_Paint);
			// 
			// txtNIPayment
			// 
			this->txtNIPayment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtNIPayment->Location = System::Drawing::Point(154, 163);
			this->txtNIPayment->Name = L"txtNIPayment";
			this->txtNIPayment->Size = System::Drawing::Size(121, 29);
			this->txtNIPayment->TabIndex = 22;
			this->txtNIPayment->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtStudentLoan
			// 
			this->txtStudentLoan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtStudentLoan->Location = System::Drawing::Point(154, 115);
			this->txtStudentLoan->Name = L"txtStudentLoan";
			this->txtStudentLoan->Size = System::Drawing::Size(121, 29);
			this->txtStudentLoan->TabIndex = 21;
			this->txtStudentLoan->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtPension
			// 
			this->txtPension->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtPension->Location = System::Drawing::Point(154, 67);
			this->txtPension->Name = L"txtPension";
			this->txtPension->Size = System::Drawing::Size(121, 29);
			this->txtPension->TabIndex = 20;
			this->txtPension->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtTax
			// 
			this->txtTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtTax->Location = System::Drawing::Point(154, 20);
			this->txtTax->Name = L"txtTax";
			this->txtTax->Size = System::Drawing::Size(121, 29);
			this->txtTax->TabIndex = 19;
			this->txtTax->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblNIPayment
			// 
			this->lblNIPayment->AutoSize = true;
			this->lblNIPayment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblNIPayment->Location = System::Drawing::Point(30, 165);
			this->lblNIPayment->Name = L"lblNIPayment";
			this->lblNIPayment->Size = System::Drawing::Size(116, 24);
			this->lblNIPayment->TabIndex = 10;
			this->lblNIPayment->Text = L"HI Payment :";
			// 
			// lblStudentLoan
			// 
			this->lblStudentLoan->AutoSize = true;
			this->lblStudentLoan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblStudentLoan->Location = System::Drawing::Point(15, 117);
			this->lblStudentLoan->Name = L"lblStudentLoan";
			this->lblStudentLoan->Size = System::Drawing::Size(131, 24);
			this->lblStudentLoan->TabIndex = 9;
			this->lblStudentLoan->Text = L"Student Loan :";
			// 
			// lblPension
			// 
			this->lblPension->AutoSize = true;
			this->lblPension->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblPension->Location = System::Drawing::Point(57, 69);
			this->lblPension->Name = L"lblPension";
			this->lblPension->Size = System::Drawing::Size(89, 24);
			this->lblPension->TabIndex = 8;
			this->lblPension->Text = L"Pension :";
			// 
			// lblTax
			// 
			this->lblTax->AutoSize = true;
			this->lblTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTax->Location = System::Drawing::Point(94, 21);
			this->lblTax->Name = L"lblTax";
			this->lblTax->Size = System::Drawing::Size(52, 24);
			this->lblTax->TabIndex = 7;
			this->lblTax->Text = L"Tax :";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->txtTaxPeriod);
			this->panel7->Controls->Add(this->txtNICode);
			this->panel7->Controls->Add(this->txtNINumber);
			this->panel7->Controls->Add(this->txtTaxCode);
			this->panel7->Controls->Add(this->lblNICode);
			this->panel7->Controls->Add(this->lblNINumber);
			this->panel7->Controls->Add(this->lblTaxCode);
			this->panel7->Controls->Add(this->lblTaxPeriod);
			this->panel7->Location = System::Drawing::Point(609, 45);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(358, 196);
			this->panel7->TabIndex = 3;
			// 
			// txtTaxPeriod
			// 
			this->txtTaxPeriod->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->txtTaxPeriod->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->txtTaxPeriod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->txtTaxPeriod->FormattingEnabled = true;
			this->txtTaxPeriod->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->txtTaxPeriod->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"12" });
			this->txtTaxPeriod->Location = System::Drawing::Point(126, 16);
			this->txtTaxPeriod->Name = L"txtTaxPeriod";
			this->txtTaxPeriod->Size = System::Drawing::Size(220, 28);
			this->txtTaxPeriod->TabIndex = 15;
			// 
			// txtNICode
			// 
			this->txtNICode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtNICode->Location = System::Drawing::Point(126, 154);
			this->txtNICode->Name = L"txtNICode";
			this->txtNICode->Size = System::Drawing::Size(220, 29);
			this->txtNICode->TabIndex = 14;
			this->txtNICode->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtNINumber
			// 
			this->txtNINumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtNINumber->Location = System::Drawing::Point(126, 106);
			this->txtNINumber->Name = L"txtNINumber";
			this->txtNINumber->Size = System::Drawing::Size(220, 29);
			this->txtNINumber->TabIndex = 13;
			this->txtNINumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtTaxCode
			// 
			this->txtTaxCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtTaxCode->Location = System::Drawing::Point(126, 58);
			this->txtTaxCode->Name = L"txtTaxCode";
			this->txtTaxCode->Size = System::Drawing::Size(220, 29);
			this->txtTaxCode->TabIndex = 12;
			this->txtTaxCode->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblNICode
			// 
			this->lblNICode->AutoSize = true;
			this->lblNICode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblNICode->Location = System::Drawing::Point(10, 156);
			this->lblNICode->Name = L"lblNICode";
			this->lblNICode->Size = System::Drawing::Size(110, 24);
			this->lblNICode->TabIndex = 10;
			this->lblNICode->Text = L"PAN Code :";
			// 
			// lblNINumber
			// 
			this->lblNINumber->AutoSize = true;
			this->lblNINumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblNINumber->Location = System::Drawing::Point(0, 109);
			this->lblNINumber->Name = L"lblNINumber";
			this->lblNINumber->Size = System::Drawing::Size(120, 24);
			this->lblNINumber->TabIndex = 9;
			this->lblNINumber->Text = L"Account No :";
			// 
			// lblTaxCode
			// 
			this->lblTaxCode->AutoSize = true;
			this->lblTaxCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTaxCode->Location = System::Drawing::Point(11, 61);
			this->lblTaxCode->Name = L"lblTaxCode";
			this->lblTaxCode->Size = System::Drawing::Size(109, 24);
			this->lblTaxCode->TabIndex = 8;
			this->lblTaxCode->Text = L"IFSC code :";
			// 
			// lblTaxPeriod
			// 
			this->lblTaxPeriod->AutoSize = true;
			this->lblTaxPeriod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTaxPeriod->Location = System::Drawing::Point(9, 17);
			this->lblTaxPeriod->Name = L"lblTaxPeriod";
			this->lblTaxPeriod->Size = System::Drawing::Size(111, 24);
			this->lblTaxPeriod->TabIndex = 7;
			this->lblTaxPeriod->Text = L"Tax period :";
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->txtDeductions);
			this->panel9->Controls->Add(this->txtGrossPay);
			this->panel9->Controls->Add(this->txtNetPay);
			this->panel9->Controls->Add(this->lblDeductions);
			this->panel9->Controls->Add(this->lblGrossPay);
			this->panel9->Controls->Add(this->lblNetPay);
			this->panel9->Location = System::Drawing::Point(610, 357);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(358, 153);
			this->panel9->TabIndex = 5;
			// 
			// txtDeductions
			// 
			this->txtDeductions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtDeductions->Location = System::Drawing::Point(131, 108);
			this->txtDeductions->Name = L"txtDeductions";
			this->txtDeductions->Size = System::Drawing::Size(216, 29);
			this->txtDeductions->TabIndex = 20;
			this->txtDeductions->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtGrossPay
			// 
			this->txtGrossPay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtGrossPay->Location = System::Drawing::Point(131, 60);
			this->txtGrossPay->Name = L"txtGrossPay";
			this->txtGrossPay->Size = System::Drawing::Size(216, 29);
			this->txtGrossPay->TabIndex = 19;
			this->txtGrossPay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtNetPay
			// 
			this->txtNetPay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtNetPay->Location = System::Drawing::Point(131, 12);
			this->txtNetPay->Name = L"txtNetPay";
			this->txtNetPay->Size = System::Drawing::Size(216, 29);
			this->txtNetPay->TabIndex = 18;
			this->txtNetPay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblDeductions
			// 
			this->lblDeductions->AutoSize = true;
			this->lblDeductions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblDeductions->Location = System::Drawing::Point(10, 111);
			this->lblDeductions->Name = L"lblDeductions";
			this->lblDeductions->Size = System::Drawing::Size(115, 24);
			this->lblDeductions->TabIndex = 17;
			this->lblDeductions->Text = L"Deductions :";
			// 
			// lblGrossPay
			// 
			this->lblGrossPay->AutoSize = true;
			this->lblGrossPay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblGrossPay->Location = System::Drawing::Point(18, 63);
			this->lblGrossPay->Name = L"lblGrossPay";
			this->lblGrossPay->Size = System::Drawing::Size(105, 24);
			this->lblGrossPay->TabIndex = 16;
			this->lblGrossPay->Text = L"Gross Pay :";
			// 
			// lblNetPay
			// 
			this->lblNetPay->AutoSize = true;
			this->lblNetPay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblNetPay->Location = System::Drawing::Point(37, 15);
			this->lblNetPay->Name = L"lblNetPay";
			this->lblNetPay->Size = System::Drawing::Size(85, 24);
			this->lblNetPay->TabIndex = 15;
			this->lblNetPay->Text = L"Net Pay :";
			// 
			// lblPaydate
			// 
			this->lblPaydate->AutoSize = true;
			this->lblPaydate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblPaydate->Location = System::Drawing::Point(642, 11);
			this->lblPaydate->Name = L"lblPaydate";
			this->lblPaydate->Size = System::Drawing::Size(87, 24);
			this->lblPaydate->TabIndex = 7;
			this->lblPaydate->Text = L"Paydate :";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->txtPensionablePay);
			this->panel8->Controls->Add(this->txtTaxablePay);
			this->panel8->Controls->Add(this->lblPensionablePay);
			this->panel8->Controls->Add(this->lblTaxablePay);
			this->panel8->Location = System::Drawing::Point(610, 247);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(358, 104);
			this->panel8->TabIndex = 4;
			// 
			// txtPensionablePay
			// 
			this->txtPensionablePay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtPensionablePay->Location = System::Drawing::Point(177, 60);
			this->txtPensionablePay->Name = L"txtPensionablePay";
			this->txtPensionablePay->Size = System::Drawing::Size(170, 29);
			this->txtPensionablePay->TabIndex = 23;
			this->txtPensionablePay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtTaxablePay
			// 
			this->txtTaxablePay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtTaxablePay->Location = System::Drawing::Point(177, 12);
			this->txtTaxablePay->Name = L"txtTaxablePay";
			this->txtTaxablePay->Size = System::Drawing::Size(170, 29);
			this->txtTaxablePay->TabIndex = 22;
			this->txtTaxablePay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblPensionablePay
			// 
			this->lblPensionablePay->AutoSize = true;
			this->lblPensionablePay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblPensionablePay->Location = System::Drawing::Point(10, 63);
			this->lblPensionablePay->Name = L"lblPensionablePay";
			this->lblPensionablePay->Size = System::Drawing::Size(161, 24);
			this->lblPensionablePay->TabIndex = 21;
			this->lblPensionablePay->Text = L"Pensionable Pay :";
			// 
			// lblTaxablePay
			// 
			this->lblTaxablePay->AutoSize = true;
			this->lblTaxablePay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTaxablePay->Location = System::Drawing::Point(45, 15);
			this->lblTaxablePay->Name = L"lblTaxablePay";
			this->lblTaxablePay->Size = System::Drawing::Size(124, 24);
			this->lblTaxablePay->TabIndex = 20;
			this->lblTaxablePay->Text = L"Taxable Pay :";
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtSearch->Location = System::Drawing::Point(972, 9);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(248, 29);
			this->txtSearch->TabIndex = 9;
			this->txtSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtSearch_KeyPress);
			// 
			// btnSearch
			// 
			this->btnSearch->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSearch->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnSearch->CausesValidation = false;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnSearch->Location = System::Drawing::Point(1224, 8);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(117, 31);
			this->btnSearch->TabIndex = 10;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			this->btnSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::btnSearch_KeyPress);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->btnSearch);
			this->panel1->Controls->Add(this->txtSearch);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->lblPaydate);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Location = System::Drawing::Point(12, 10);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1346, 515);
			this->panel1->TabIndex = 0;
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->rtReceipt);
			this->panel11->Location = System::Drawing::Point(972, 45);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(369, 465);
			this->panel11->TabIndex = 12;
			// 
			// rtReceipt
			// 
			this->rtReceipt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtReceipt->Location = System::Drawing::Point(6, 6);
			this->rtReceipt->Name = L"rtReceipt";
			this->rtReceipt->Size = System::Drawing::Size(355, 450);
			this->rtReceipt->TabIndex = 0;
			this->rtReceipt->Text = L"";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->dateTimePicker1->Location = System::Drawing::Point(736, 9);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->ShowCheckBox = true;
			this->dateTimePicker1->Size = System::Drawing::Size(230, 29);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Employee Database Management System";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	//====================================Start Function=================================================
	private: System::Void EmployeeConnector() {		//(1)
		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Unobrostacos@123; database = employeedb";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "select * from employeedb";
		sqlRd = sqlCmd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();
		dataGridView1->DataSource = sqlDt;

	}

		   private: System::Void RefreshDB() {		//(2)

			   sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Unobrostacos@123; database = employeedb";
			   
			   sqlCmd->Connection = sqlConn;

			   String^ ID = txtRef->Text;
			   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("select * from employeedb", sqlConn);
			   DataTable^ sqlDt = gcnew DataTable();
			   sqlDtA->Fill(sqlDt);
			   dataGridView1->DataSource = sqlDt;
		   }
	//=====================================End Function==================================================
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {

	txtBasicSalary->Text = "";
	txtOverTime->Text = "";
	txtWeight->Text = "";
	txtFirstname->Text = "";
	txtSurname->Text = "";

	txtNICode->Text = "";
	txtNINumber->Text = "";
	txtOverTime->Text = "";
	cobGender->Text = "";
	txtMobile->Text = "";
	txtOtherPayment->Text = "";

	txtTaxCode->Text = "";
	txtTaxPeriod->Text = "";
	txtAddress->Text = "";
	dateTimePicker1->ResetText();
	txtSearch->Text = "";
	rtReceipt->Text = "";

	txtDeductions->Text = "";
	txtGrossPay->Text = "";
	txtNetPay->Text = "";
	txtNIPayment->Text = "";
	txtPension->Text = "";
	txtPensionablePay->Text = "";
	txtRef->Text = "";
	txtStudentLoan->Text = "";
	txtTax->Text = "";
	txtTaxablePay->Text = "";
}

private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::DialogResult iExit;
	iExit = MessageBox::Show("Confirm if you want to Exit", "Employee System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
	
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {

	RefreshDB();
}

private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {

	printPreviewDialog1->ShowDialog();
}

private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Times New Roman", 16, FontStyle::Regular);
	
	e->Graphics->DrawString(rtReceipt->Text, fntString, Brushes::Black, 100, 100);
}

private: System::Void btnPaySlip_Click(System::Object^ sender, System::EventArgs^ e) {

	rtReceipt->Clear();
	rtReceipt->AppendText("\t\t" + "Pay Slip" + "\t\t" + "\n");
	rtReceipt->AppendText("Employee ID :" + "\t\t" + txtRef->Text + "\n");
	rtReceipt->AppendText("Firstname :" + "\t\t" + txtFirstname->Text + "\n");
	rtReceipt->AppendText("Surname :" + "\t\t" + txtSurname->Text + "\n");
	rtReceipt->AppendText("Address :" + "\t\t\t" + txtAddress->Text + "\n");
	rtReceipt->AppendText("Gender :" + "\t\t\t" + cobGender->Text + "\n");
	rtReceipt->AppendText("Mobile :" + "\t\t\t" + txtMobile->Text + "\n");
	rtReceipt->AppendText("Weight :" + "\t\t\t" + txtWeight->Text + "\n");
	rtReceipt->AppendText("Salary :" + "\t\t\t" + txtBasicSalary->Text + "\n");
	rtReceipt->AppendText("Over Time :" + "\t\t" + txtOverTime->Text + "\n");
	rtReceipt->AppendText("Other Payment :" + "\t\t" + txtOtherPayment->Text + "\n");
	rtReceipt->AppendText("Tax :" + "\t\t\t" + txtTax->Text + "\n");
	rtReceipt->AppendText("Pension :" + "\t\t\t" + txtPension->Text + "\n");
	rtReceipt->AppendText("Student Loan :" + "\t\t" + txtStudentLoan->Text + "\n");
	rtReceipt->AppendText("NI Payment :" + "\t\t" + txtNIPayment->Text + "\n");
	rtReceipt->AppendText("PayDate :" + "\t\t\t" + dateTimePicker1->Text + "\n");
	rtReceipt->AppendText("TaxPeriod :" + "\t\t" + txtTaxPeriod->Text + "\n");
	rtReceipt->AppendText("TaxCode :" + "\t\t" + txtTaxCode->Text + "\n");
	rtReceipt->AppendText("NINumber :" + "\t\t" + txtNINumber->Text + "\n");
	rtReceipt->AppendText("NICode :" + "\t\t\t" + txtNICode->Text + "\n");
	rtReceipt->AppendText("Taxable :" + "\t\t\t" + txtTaxablePay->Text + "\n");
	rtReceipt->AppendText("Pensionable :" + "\t\t" + txtPensionablePay->Text + "\n");
	rtReceipt->AppendText("NetPay :" + "\t\t\t" + txtNetPay->Text + "\n");
	rtReceipt->AppendText("GrossPay :" + "\t\t" + txtGrossPay->Text + "\n");
	rtReceipt->AppendText("Deductions :" + "\t\t" + txtDeductions->Text + "\n");
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	try {
		txtRef->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		txtFirstname->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		txtSurname->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		txtAddress->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		cobGender->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		txtMobile->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		txtWeight->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		txtBasicSalary->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		txtOverTime->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		txtOtherPayment->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		txtTax->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
		txtPension->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
		txtStudentLoan->Text = dataGridView1->SelectedRows[0]->Cells[12]->Value->ToString();
		txtNIPayment->Text = dataGridView1->SelectedRows[0]->Cells[13]->Value->ToString();
		dateTimePicker1->Text = dataGridView1->SelectedRows[0]->Cells[14]->Value->ToString();
		txtTaxPeriod->Text = dataGridView1->SelectedRows[0]->Cells[15]->Value->ToString();
		txtTaxCode->Text = dataGridView1->SelectedRows[0]->Cells[16]->Value->ToString();
		txtNINumber->Text = dataGridView1->SelectedRows[0]->Cells[17]->Value->ToString();
		txtNICode->Text = dataGridView1->SelectedRows[0]->Cells[18]->Value->ToString();
		txtTaxablePay->Text = dataGridView1->SelectedRows[0]->Cells[19]->Value->ToString();
		txtPensionablePay->Text = dataGridView1->SelectedRows[0]->Cells[20]->Value->ToString();
		txtNetPay->Text = dataGridView1->SelectedRows[0]->Cells[21]->Value->ToString();
		txtGrossPay->Text = dataGridView1->SelectedRows[0]->Cells[22]->Value->ToString();
		txtDeductions->Text = dataGridView1->SelectedRows[0]->Cells[23]->Value->ToString();
	}
	catch (Exception^ e) {
		
		/*MessageBox::Show("Click was out of range", "Invalid Click", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);*/
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Unobrostacos@123; database = employeedb";

		sqlCmd->Connection = sqlConn;

		String^ ID = txtRef->Text;
		MySqlCommand^ sqlCmd = gcnew MySqlCommand("delete from employeedb where ID =" + ID + "", sqlConn);
		
		sqlConn->Open();
		sqlRd = sqlCmd->ExecuteReader();
		MessageBox::Show("Record Deleted", "Employee System", MessageBoxButtons::OK, MessageBoxIcon::Information);
		sqlConn->Close();
	}
	catch (Exception^) {

		MessageBox::Show("No data found", "Invalid Operation", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		sqlConn->Close();
	}
	RefreshDB();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Unobrostacos@123; database = employeedb";

		sqlCmd->Connection = sqlConn;

		String^ ID = txtRef->Text;
		String^ Firstname = txtFirstname->Text;
		String^ Surname = txtSurname->Text;
		String^ Address = txtAddress->Text;
		String^ Gender = cobGender->Text;
		String^ Mobile = txtMobile->Text;
		String^ Weight = txtWeight->Text;
		String^ Salary = txtBasicSalary->Text;
		String^ OverTime = txtOverTime->Text;
		String^ OtherPay = txtOtherPayment->Text;
		String^ Tax = txtTax->Text;
		String^ Pension = txtPension->Text;
		String^ StudLoan = txtStudentLoan->Text;
		String^ NIPay = txtNIPayment->Text;
		String^ PayDate = dateTimePicker1->Text;
		String^ TaxPeriod = txtTaxPeriod->Text;
		String^ TaxCode = txtTaxCode->Text;
		String^ NINumber = txtNINumber->Text;
		String^ NICode = txtNICode->Text;
		String^ Taxable = txtTaxablePay->Text;
		String^ Pensionable = txtPensionablePay->Text;
		String^ NetPay = txtNetPay->Text;
		String^ GrossPay = txtGrossPay->Text;
		String^ Deductions = txtDeductions->Text;
		
		sqlCmd->CommandText = "update employeedb set ID ='" + ID + "', Firstname ='" + Firstname + "', Surname ='" + Surname + "', Address ='" + Address + "', Gender ='" + Gender + "', Mobile ='" + Mobile + "', Weight ='" + Weight + "', Salary ='" + Salary + "', OverTime ='" + OverTime + "', OtherPay ='" + OtherPay + "', Tax ='" + Tax + "', Pension ='" + Pension + "', StudLoan ='" + StudLoan + "', HIPay ='" + NIPay + "', PayDate ='" + PayDate + "', TaxPeriod ='" + TaxPeriod + "', IFSCcode ='" + TaxCode + "', AccountNo ='" + NINumber + "', PANCode ='" + NICode + "', Taxable ='" + Taxable + "', Pensionable ='" + Pensionable + "', NetPay ='" + NetPay + "', GrossPay ='" + GrossPay + "', Deductions ='" + Deductions + "' WHERE ID =" + ID + "", sqlConn;

		sqlConn->Open();
		sqlRd = sqlCmd->ExecuteReader();
		MessageBox::Show("Record Updated", "Employee Management System Updated", MessageBoxButtons::OK, MessageBoxIcon::Information);
		sqlConn->Close();

		EmployeeConnector();
		RefreshDB();
	}
	catch (Exception^) {

		MessageBox::Show("No data found", "Invalid Operation", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) {

	double GrossPay, Deductions, NetPay, Period, InnerCity, BasicPay, OverTime, Tax, Pension, StudentLoan, NIPayment, OtherPay;

	InnerCity = Double::Parse(txtWeight->Text);
	BasicPay = Double::Parse(txtBasicSalary->Text);
	OverTime = Double::Parse(txtOverTime->Text);
	OtherPay = Double::Parse(txtOtherPayment->Text);
	GrossPay = InnerCity + BasicPay + OverTime + OtherPay;

	txtGrossPay->Text = String::Format("{0:c2}", GrossPay);

	Tax = (((InnerCity + BasicPay + OverTime) * 9) / 100);
	Pension = (((InnerCity + BasicPay + OverTime) * 12) / 100);
	StudentLoan = (((InnerCity + BasicPay + OverTime) * 5) / 100);
	NIPayment = (((InnerCity + BasicPay + OverTime) * 3) / 100);

	txtTax->Text = String::Format("{0:c2}", Tax);
	txtPension->Text = String::Format("{0:c2}", Pension);
	txtStudentLoan->Text = String::Format("{0:c2}", StudentLoan);
	txtNIPayment->Text = String::Format("{0:c2}", NIPayment);

	Deductions = (Tax + Pension + StudentLoan + NIPayment);
	txtDeductions->Text = String::Format("{0:c2}", Deductions);
	NetPay = GrossPay - Deductions;

	txtNetPay->Text = String::Format("{0:c2}", NetPay);

	Period = Double::Parse(txtTaxPeriod->Text);
	txtTaxablePay->Text = String::Format("{0:c2}", Period);

	txtPensionablePay->Text = String::Format("{0:c2}", Pension * Period);

	Random^ rnd = gcnew Random;
	int iRef = rnd->Next(10785, 31773);
	txtRef->Text = Convert::ToString(iRef);

	//========================insert into database=========================

	sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Unobrostacos@123; database = employeedb";
	sqlConn->Open();
	sqlCmd->Connection = sqlConn;

	try
	{
		sqlCmd->CommandText = "insert into employeedb(ID, Firstname, Surname, Address, Gender, Mobile, Weight, Salary, OverTime, OtherPay, Tax, Pension, StudLoan, HIPay, PayDate, TaxPeriod, IFSCcode, AccountNo, PANCode, Taxable, Pensionable, NetPay, GrossPay, Deductions)" + "values('" + txtRef->Text + "','" + txtFirstname->Text + "','" + txtSurname->Text + "','" + txtAddress->Text + "','" + cobGender->Text + "','" + txtMobile->Text + "','" + txtWeight->Text + "','" + txtBasicSalary->Text + "','" + txtOverTime->Text + "','" + txtOtherPayment->Text + "','" + txtTax->Text + "','" + txtPension->Text + "','" + txtStudentLoan->Text + "','" + txtNIPayment->Text + "','" + dateTimePicker1->Text + "','" + txtTaxPeriod->Text + "','" + txtTaxCode->Text + "','" + txtNINumber->Text + "','" + txtNICode->Text + "','" + txtTaxablePay->Text + "','" + txtPensionablePay->Text + "','" + txtNetPay->Text + "','" + txtGrossPay->Text + "','" + txtDeductions->Text + "')";

		sqlCmd->ExecuteNonQuery();
		sqlConn->Close();
		EmployeeConnector();
		RefreshDB();

	}
	catch (Exception^) {

		MessageBox::Show("Enter valid data", "Invalid Operation", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		sqlConn->Close();
	}
}

private: System::Void txtSearch_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try
	{
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Firstname like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try
	{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Firstname like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

private: System::Void btnSearch_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try
	{
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Firstname like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

};
}
