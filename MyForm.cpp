
#include "MyForm.h" 	// ��� h-����� �����.
using namespace Super_Point; // ��� �������.
[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	Application::Run(gcnew MyForm()); // ��� �����.

	return 0;
}