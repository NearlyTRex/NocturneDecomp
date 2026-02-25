#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;

// Function Definition: CCodec_processBuffer
typedef int CCodec_processBuffer(struct CCodec* this_ptr, char* input, int* input_length, char* output, int* output_length, int enable_callback);

