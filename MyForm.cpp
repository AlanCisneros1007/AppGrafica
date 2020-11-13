#include "MyForm.h"
#include "Funciones.h"

using namespace System;
using namespace System::Windows::Forms;
char archinicial[50] = "registrosiniciales.txt";

[STAThread]
void main(array<String^>^ args) {
    Lectura(archinicial);
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project2::MyForm form;
    Application::Run(% form);
   
}