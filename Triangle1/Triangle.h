#pragma once
#include<math.h>

namespace Triangle1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Triangle
	/// </summary>
	public ref class Triangle : public System::Windows::Forms::Form
	{
	public:
		Triangle(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Triangle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Умова;
	private: System::Windows::Forms::TabPage^ Алгоритм;
	private: System::Windows::Forms::TabPage^ Розвязок;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	protected:




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Triangle::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Умова = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Алгоритм = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Розвязок = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->Умова->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Алгоритм->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Розвязок->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->Умова);
			this->tabControl1->Controls->Add(this->Алгоритм);
			this->tabControl1->Controls->Add(this->Розвязок);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(623, 640);
			this->tabControl1->TabIndex = 0;
			// 
			// Умова
			// 
			this->Умова->Controls->Add(this->pictureBox1);
			this->Умова->Controls->Add(this->label2);
			this->Умова->Controls->Add(this->label1);
			this->Умова->Location = System::Drawing::Point(4, 28);
			this->Умова->Name = L"Умова";
			this->Умова->Padding = System::Windows::Forms::Padding(3);
			this->Умова->Size = System::Drawing::Size(615, 608);
			this->Умова->TabIndex = 0;
			this->Умова->Text = L"Умова";
			this->Умова->UseVisualStyleBackColor = true;
			this->Умова->Click += gcnew System::EventHandler(this, &Triangle::Умова_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(35, 221);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(461, 263);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Triangle::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(30, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(417, 58);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дано сторони трикутника – a, b, c. \r\nЗнайти значення площі трикутника.";
			this->label2->Click += gcnew System::EventHandler(this, &Triangle::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(30, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Умова задачі:";
			this->label1->Click += gcnew System::EventHandler(this, &Triangle::label1_Click);
			// 
			// Алгоритм
			// 
			this->Алгоритм->Controls->Add(this->pictureBox2);
			this->Алгоритм->Location = System::Drawing::Point(4, 28);
			this->Алгоритм->Name = L"Алгоритм";
			this->Алгоритм->Padding = System::Windows::Forms::Padding(3);
			this->Алгоритм->Size = System::Drawing::Size(615, 608);
			this->Алгоритм->TabIndex = 1;
			this->Алгоритм->Text = L"Алгоритм";
			this->Алгоритм->UseVisualStyleBackColor = true;
			this->Алгоритм->Click += gcnew System::EventHandler(this, &Triangle::Алгоритм_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(151, 27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(299, 515);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Triangle::pictureBox2_Click_1);
			// 
			// Розвязок
			// 
			this->Розвязок->Controls->Add(this->textBox4);
			this->Розвязок->Controls->Add(this->label7);
			this->Розвязок->Controls->Add(this->button2);
			this->Розвязок->Controls->Add(this->button1);
			this->Розвязок->Controls->Add(this->panel1);
			this->Розвязок->Controls->Add(this->label3);
			this->Розвязок->Location = System::Drawing::Point(4, 28);
			this->Розвязок->Name = L"Розвязок";
			this->Розвязок->Size = System::Drawing::Size(615, 608);
			this->Розвязок->TabIndex = 2;
			this->Розвязок->Text = L"Розв язок";
			this->Розвязок->UseVisualStyleBackColor = true;
			this->Розвязок->Click += gcnew System::EventHandler(this, &Triangle::Розвязок_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::Red;
			this->textBox4->Location = System::Drawing::Point(313, 480);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(146, 34);
			this->textBox4->TabIndex = 5;
			this->textBox4->Click += gcnew System::EventHandler(this, &Triangle::textBox4_Click);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Triangle::textBox4_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(131, 483);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 29);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Результат S=";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(422, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 44);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Triangle::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(37, 361);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Triangle::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(37, 104);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(376, 214);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Triangle::panel1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(72, 148);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(146, 34);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Triangle::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(72, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(146, 34);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Triangle::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(72, 45);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(146, 34);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Triangle::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(21, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 29);
			this->label4->TabIndex = 2;
			this->label4->Text = L"a=";
			this->label4->Click += gcnew System::EventHandler(this, &Triangle::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(22, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 29);
			this->label5->TabIndex = 3;
			this->label5->Text = L"b=";
			this->label5->Click += gcnew System::EventHandler(this, &Triangle::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(22, 153);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 29);
			this->label6->TabIndex = 4;
			this->label6->Text = L"c=";
			this->label6->Click += gcnew System::EventHandler(this, &Triangle::label6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(32, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(360, 35);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Введіть сторони трикутника";
			this->label3->Click += gcnew System::EventHandler(this, &Triangle::label3_Click);
			// 
			// Triangle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 664);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Triangle";
			this->Text = L"Triangle";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Triangle::Triangle_FormClosing);
			this->tabControl1->ResumeLayout(false);
			this->Умова->ResumeLayout(false);
			this->Умова->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Алгоритм->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->Розвязок->ResumeLayout(false);
			this->Розвязок->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Умова_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Алгоритм_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	float a, b, c, s, p;
	a = Convert::ToDouble(textBox1->Text);
	b = Convert::ToDouble(textBox2->Text);
	c = Convert::ToDouble(textBox3->Text);
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	textBox4->Text = Convert::ToString(s);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = " ";
	textBox2->Text = " ";
	textBox3->Text = " ";
	textBox4->Text = " ";
}
private: System::Void Розвязок_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Triangle_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
}
private: System::Void Triangle_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	MessageBox::Show("Закрити програму?", "Закрити програму", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Information);
	if (System::Windows::Forms::MessageBox::Show("Закрити вікно?", "Вікно буде закрите",
		System::Windows::Forms::MessageBoxButtons::YesNo,
		System::Windows::Forms::MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes)
	{
		Application::ExitThread();
	}
	else{
		e->Cancel = true;
	}
}
};
}
