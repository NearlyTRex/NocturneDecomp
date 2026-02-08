#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;

// Function Definition: CCodec_processBuffer
typedef int CCodec_processBuffer(struct CCodec* this_ptr, byte* param, int* param1, byte* param2, int* param3, int param4);

