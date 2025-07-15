#pragma once

#ifdef KT_PLATFORM_WINDOWS

extern Ketamine::Application* Ketamine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Ketamine::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error "Ketamine only supports Windows!"
#endif 