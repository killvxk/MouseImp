// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif						

#include <stdio.h>
#include <tchar.h>
#include <crtdbg.h>


#include <windows.h>
#include <sddl.h>
#include <accctrl.h>
#include <Aclapi.h>
#include <Wtsapi32.h>
#include <UserEnv.h>
#include <shlwapi.h>
