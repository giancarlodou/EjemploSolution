#pragma once

namespace EjemploApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EjemploForm
	/// </summary>
	public ref class EjemploForm : public System::Windows::Forms::Form
	{
	public:
		EjemploForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EjemploForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPush;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnPush = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnPush
			// 
			this->btnPush->Location = System::Drawing::Point(145, 119);
			this->btnPush->Name = L"btnPush";
			this->btnPush->Size = System::Drawing::Size(163, 58);
			this->btnPush->TabIndex = 0;
			this->btnPush->Text = L"Hola";
			this->btnPush->UseVisualStyleBackColor = true;
			this->btnPush->Click += gcnew System::EventHandler(this, &EjemploForm::btnPush_Click);
			// 
			// EjemploForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 253);
			this->Controls->Add(this->btnPush);
			this->Name = L"EjemploForm";
			this->Text = L"EjemploForm";
			this->Load += gcnew System::EventHandler(this, &EjemploForm::EjemploForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EjemploForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnPush_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Chau");
		//Comentario de Fabio
		//Cambio adicional
	}
	};
}
