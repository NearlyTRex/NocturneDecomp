#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;

// Function Definition: CCodec_processFiles
typedef int CCodec_processFiles(struct CCodec* this_ptr, char* input_file_path, char* output_file_path);

