#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winuser.h"

// Forward declarations
struct CExternalRendererBridge;

// Function Definition: APIDLL_init
typedef int (*APIDLL_init)(HWND windowHandle, struct CExternalRendererBridge* interface);

