#pragma once

// Forward declarations
struct FILE;

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;
struct FILE;

// Function Definition: CCodec_process
typedef int (*CCodec_process)(struct CCodec* this_ptr, struct FILE* param, int param1, struct FILE* param2);

