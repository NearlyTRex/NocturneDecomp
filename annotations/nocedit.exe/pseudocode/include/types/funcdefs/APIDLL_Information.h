#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/windef.h"

// Function Definition: APIDLL_Information
typedef void (*APIDLL_Information)(HMODULE dll_handle, void* info_buffer);

