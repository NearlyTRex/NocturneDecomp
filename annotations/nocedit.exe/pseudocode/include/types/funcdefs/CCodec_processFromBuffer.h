#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;

// Function Definition: CCodec_processFromBuffer
typedef int CCodec_processFromBuffer(struct CCodec* this_ptr, char* input, int* input_length, char* output, int* output_length);

