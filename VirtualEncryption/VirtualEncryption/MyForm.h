#pragma once
#include "SimpleEncryption.h"

namespace VirtualEncryption {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices; // used to convert String^ type to string

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxInFile;
	private: System::Windows::Forms::TextBox^  textBoxOutFile;
	private: System::Windows::Forms::Button^  buttonEncrypt;
	private: System::Windows::Forms::TextBox^  textBoxKey;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  buttonDecrypt;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxInFile = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutFile = (gcnew System::Windows::Forms::TextBox());
			this->buttonEncrypt = (gcnew System::Windows::Forms::Button());
			this->textBoxKey = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonDecrypt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(71, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Input File:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(55, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Output File:";
			// 
			// textBoxInFile
			// 
			this->textBoxInFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxInFile->Location = System::Drawing::Point(195, 32);
			this->textBoxInFile->Name = L"textBoxInFile";
			this->textBoxInFile->Size = System::Drawing::Size(290, 29);
			this->textBoxInFile->TabIndex = 2;
			// 
			// textBoxOutFile
			// 
			this->textBoxOutFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxOutFile->Location = System::Drawing::Point(195, 85);
			this->textBoxOutFile->Name = L"textBoxOutFile";
			this->textBoxOutFile->Size = System::Drawing::Size(290, 29);
			this->textBoxOutFile->TabIndex = 3;
			// 
			// buttonEncrypt
			// 
			this->buttonEncrypt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEncrypt->Location = System::Drawing::Point(59, 144);
			this->buttonEncrypt->Name = L"buttonEncrypt";
			this->buttonEncrypt->Size = System::Drawing::Size(123, 34);
			this->buttonEncrypt->TabIndex = 4;
			this->buttonEncrypt->Text = L"Encrypt";
			this->buttonEncrypt->UseVisualStyleBackColor = true;
			this->buttonEncrypt->Click += gcnew System::EventHandler(this, &MyForm::buttonEncrypt_Click);
			// 
			// textBoxKey
			// 
			this->textBoxKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxKey->Location = System::Drawing::Point(448, 146);
			this->textBoxKey->MaxLength = 1;
			this->textBoxKey->Name = L"textBoxKey";
			this->textBoxKey->Size = System::Drawing::Size(37, 29);
			this->textBoxKey->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(391, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Key:";
			// 
			// buttonDecrypt
			// 
			this->buttonDecrypt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDecrypt->Location = System::Drawing::Point(229, 144);
			this->buttonDecrypt->Name = L"buttonDecrypt";
			this->buttonDecrypt->Size = System::Drawing::Size(123, 34);
			this->buttonDecrypt->TabIndex = 7;
			this->buttonDecrypt->Text = L"Decrypt";
			this->buttonDecrypt->UseVisualStyleBackColor = true;
			this->buttonDecrypt->Click += gcnew System::EventHandler(this, &MyForm::buttonDecrypt_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 232);
			this->Controls->Add(this->buttonDecrypt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxKey);
			this->Controls->Add(this->buttonEncrypt);
			this->Controls->Add(this->textBoxOutFile);
			this->Controls->Add(this->textBoxInFile);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Virtual Encryption";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void buttonEncrypt_Click(System::Object^  sender, System::EventArgs^  e) {
		// collect the file names
		string strInFileName = static_cast<char*>(Marshal::StringToHGlobalAnsi(textBoxInFile->Text).ToPointer());
		string strOutFileName = static_cast<char*>(Marshal::StringToHGlobalAnsi(textBoxOutFile->Text).ToPointer());
		char *key = static_cast<char*>(Marshal::StringToHGlobalAnsi(textBoxKey->Text).ToPointer());
		// Test for empty filename strings
		if (strInFileName.empty())
		{
			MessageBox::Show("Must provide an Input File Name. ",
				"Notification", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			return;
		}
		if (strOutFileName.empty())
		{
			MessageBox::Show("Must provide an Output File Name. ",
							 "Notification", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			return;
		}
		// Create an encrypting object and encrypt the file.
		SimpleEncryption obfuscate(strInFileName, strOutFileName);
		obfuscate.setKey(key[0]);
		obfuscate.encrypt();
		MessageBox::Show("Encryption Complete. ",
						 "Notifications", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
private: System::Void buttonDecrypt_Click(System::Object^  sender, System::EventArgs^  e) {
	// collect the file names
	string strInFileName = static_cast<char*>(Marshal::StringToHGlobalAnsi(textBoxInFile->Text).ToPointer());
	string strOutFileName = static_cast<char*>(Marshal::StringToHGlobalAnsi(textBoxOutFile->Text).ToPointer());
	char *key = static_cast<char*>(Marshal::StringToHGlobalAnsi(textBoxKey->Text).ToPointer());
	// Test for empty filename strings
	if (strInFileName.empty())
	{
		MessageBox::Show("Must provide an Input File Name. ",
			"Notification", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}
	if (strOutFileName.empty())
	{
		MessageBox::Show("Must provide an Output File Name. ",
			"Notification", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}
	// Create an encrypting object and encrypt the file.
	SimpleEncryption obfuscate(strInFileName, strOutFileName);
	obfuscate.setKey(key[0]);
	obfuscate.decrypt();
	MessageBox::Show("Decryption Complete. ",
		"Notifications", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
};
}
