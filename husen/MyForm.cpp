#include "MyForm.h"

using namespace husen;

[STAThreadAttribute]

int main() {
	Application::Run(gcnew MyForm());
	return 0;
}