#pragma once

#include "Core.h"

namespace Ketamine
{
	class KETAMINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
