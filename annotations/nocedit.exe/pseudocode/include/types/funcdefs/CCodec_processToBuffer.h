#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;

// Function Definition: CCodec_processToBuffer
typedef int CCodec_processToBuffer(struct CCodec* this_ptr, void* istream, int* byte_count, char* output_buffer, int* output_size, int enable_finalize);

