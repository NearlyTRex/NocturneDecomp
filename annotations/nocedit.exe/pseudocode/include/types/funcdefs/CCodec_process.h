#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;

// Function Definition: CCodec_process
typedef int CCodec_process(struct CCodec* this_ptr, void* istream, int* byte_count, void* ostream);

