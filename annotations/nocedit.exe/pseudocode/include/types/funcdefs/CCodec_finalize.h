#pragma once

// Forward declarations
struct FILE;

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;
struct FILE;

// Function Definition: CCodec_finalize
typedef int (*CCodec_finalize)(struct CCodec* this_ptr, struct FILE* file_handle);

