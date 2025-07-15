#include <Ketamine.h>

class Sandbox : public Ketamine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Ketamine::Application* Ketamine::CreateApplication()
{
	return new Sandbox();
} 