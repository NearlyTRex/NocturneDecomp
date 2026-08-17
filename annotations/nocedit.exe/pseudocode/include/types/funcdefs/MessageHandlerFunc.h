#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/basetsd.h"
#include "system/windef.h"
#include "system/winuser.h"

// Function Definition: MessageHandlerFunc
typedef int MessageHandlerFunc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

