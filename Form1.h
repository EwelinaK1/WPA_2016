#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wyjdzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja31ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja32ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorzeToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  opcjaC1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcjaC2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  koniecToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox2;
	private: System::Windows::Forms::Label^  label2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->opcja2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->wyjdzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja31ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja32ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->opcjaC1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcjaC2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->koniecToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripComboBox2 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->oProgramieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(951, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->opcja1ToolStripMenuItem,
					this->toolStripComboBox1, this->toolStripSeparator1, this->opcja2ToolStripMenuItem, this->toolStripTextBox1, this->toolStripSeparator2,
					this->wyjdzToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// opcja1ToolStripMenuItem
			// 
			this->opcja1ToolStripMenuItem->Name = L"opcja1ToolStripMenuItem";
			this->opcja1ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->opcja1ToolStripMenuItem->Text = L"Opcja 1";
			this->opcja1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Element 1", L"Element 2", L"Element 3" });
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 23);
			this->toolStripComboBox1->TextChanged += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(178, 6);
			// 
			// opcja2ToolStripMenuItem
			// 
			this->opcja2ToolStripMenuItem->Name = L"opcja2ToolStripMenuItem";
			this->opcja2ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->opcja2ToolStripMenuItem->Text = L"Opcja 2";
			this->opcja2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(178, 6);
			// 
			// wyjdzToolStripMenuItem
			// 
			this->wyjdzToolStripMenuItem->Name = L"wyjdzToolStripMenuItem";
			this->wyjdzToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->wyjdzToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->wyjdzToolStripMenuItem->Text = L"WyjdŸ";
			this->wyjdzToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wyjdzToolStripMenuItem_Click);
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->opcja3ToolStripMenuItem,
					this->opcja4ToolStripMenuItem
			});
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->edycjaToolStripMenuItem->Text = L"Edycja";
			this->edycjaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcja3ToolStripMenuItem
			// 
			this->opcja3ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->opcja31ToolStripMenuItem,
					this->opcja32ToolStripMenuItem
			});
			this->opcja3ToolStripMenuItem->Name = L"opcja3ToolStripMenuItem";
			this->opcja3ToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->opcja3ToolStripMenuItem->Text = L"Opcja 3";
			this->opcja3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcja31ToolStripMenuItem
			// 
			this->opcja31ToolStripMenuItem->Name = L"opcja31ToolStripMenuItem";
			this->opcja31ToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->opcja31ToolStripMenuItem->Text = L"Opcja 3 1";
			this->opcja31ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcja32ToolStripMenuItem
			// 
			this->opcja32ToolStripMenuItem->Name = L"opcja32ToolStripMenuItem";
			this->opcja32ToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->opcja32ToolStripMenuItem->Text = L"Opcja 3 2";
			this->opcja32ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcja4ToolStripMenuItem
			// 
			this->opcja4ToolStripMenuItem->Name = L"opcja4ToolStripMenuItem";
			this->opcja4ToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->opcja4ToolStripMenuItem->Text = L"Opcja 4";
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oAutorzeToolStripMenuItem });
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->oProgramieToolStripMenuItem->Text = L" O programie";
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->oAutorzeToolStripMenuItem->Text = L"O autorze";
			this->oAutorzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oAutorzeToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(330, 374);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Etykieta1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->opcjaC1ToolStripMenuItem,
					this->opcjaC2ToolStripMenuItem, this->koniecToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->ShowCheckMargin = true;
			this->contextMenuStrip1->Size = System::Drawing::Size(143, 70);
			// 
			// opcjaC1ToolStripMenuItem
			// 
			this->opcjaC1ToolStripMenuItem->Name = L"opcjaC1ToolStripMenuItem";
			this->opcjaC1ToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->opcjaC1ToolStripMenuItem->Text = L"Opcja c1";
			this->opcjaC1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcjaC2ToolStripMenuItem
			// 
			this->opcjaC2ToolStripMenuItem->Name = L"opcjaC2ToolStripMenuItem";
			this->opcjaC2ToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->opcjaC2ToolStripMenuItem->Text = L"Opcja c2";
			this->opcjaC2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oAutorzeToolStripMenuItem_Click);
			// 
			// koniecToolStripMenuItem
			// 
			this->koniecToolStripMenuItem->Name = L"koniecToolStripMenuItem";
			this->koniecToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->koniecToolStripMenuItem->Text = L"Koniec";
			this->koniecToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wyjdzToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripComboBox2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(951, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->BackColor = System::Drawing::Color::Yellow;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->BackColor = System::Drawing::Color::Red;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripComboBox2
			// 
			this->toolStripComboBox2->Name = L"toolStripComboBox2";
			this->toolStripComboBox2->Size = System::Drawing::Size(121, 25);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(336, 417);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Etykieta 2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(951, 442);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void wyjdzToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void opcja1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = static_cast<ToolStripMenuItem^>(sender)->Text;
}

private: System::Void oAutorzeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Ewelina Karnowska", "To jest info", MessageBoxButtons::AbortRetryIgnore, MessageBoxIcon::Error);
}

private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (toolStripComboBox2->SelectedIndex == 0){
		if (static_cast<ToolStripButton^>(sender)->Name == "toolStripButton1")
			label1->ForeColor = Color::Green;
		if (static_cast<ToolStripButton^>(sender)->Name == "toolStripButton2")
			label1->ForeColor = Color::Yellow;
		if (static_cast<ToolStripButton^>(sender)->Name == "toolStripButton3")
			label1->ForeColor = Color::Red;
	}
	else
	{
		label2->ForeColor = static_cast<ToolStripButton^>(sender)->BackColor;
	}
}
};
}

