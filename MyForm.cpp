
#include "MyForm.h" 	// Имя h-файла формы.
using namespace Super_Point; // Имя проекта.
[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	Application::Run(gcnew MyForm()); // Имя формы.

	return 0;
}