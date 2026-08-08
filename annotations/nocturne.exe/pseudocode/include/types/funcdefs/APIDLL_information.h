#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/windef.h"

// Forward declarations
struct CExternalRenderer;

// Function Definition: APIDLL_information
typedef void APIDLL_information(HMODULE dll_handle, struct CExternalRenderer* renderer);

