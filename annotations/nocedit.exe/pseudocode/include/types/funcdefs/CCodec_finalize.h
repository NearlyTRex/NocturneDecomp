#pragma once

// Forward declarations
struct _FILE;

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;
struct _FILE;

// Function Definition: CCodec_finalize
typedef int (*CCodec_finalize)(struct CCodec* this_ptr, struct _FILE* file_handle);

