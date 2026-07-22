#pragma once

// Forward declarations
struct _ostream;

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;
struct _ostream;

// Function Definition: CCodec_processFromBuffer
typedef int CCodec_processFromBuffer(struct CCodec* this_ptr, char* input, int* input_length, struct _ostream* ostream);

