#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;

// Function Definition: CCodec_finalizeBuffer
typedef int CCodec_finalizeBuffer(struct CCodec* this_ptr, char* buffer_ptr, int* buffer_size_ptr);

