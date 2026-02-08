#pragma once

// Forward declarations
struct _FILE;

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;
struct _FILE;

// Function Definition: CCodec_process
typedef int CCodec_process(struct CCodec* this_ptr, struct _FILE* param, int param1, struct _FILE* param2);

