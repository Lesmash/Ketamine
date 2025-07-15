#pragma once

#ifdef KT_PLATFORM_WINDOWS
	#ifdef KT_BUILD_DLL
		#define KETAMINE_API __declspec(dllexport)
	#else
		#define KETAMINE_API __declspec(dllimport)
	#endif
#else
	#error "Ketamine only supports Windows!"
#endif