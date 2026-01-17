#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/funcdefs/CCodec_finalize.h"
#include "types/funcdefs/CCodec_init.h"
#include "types/funcdefs/CCodec_process.h"
#include "types/funcdefs/CCodec_processBuffer.h"

// Forward declarations
struct CCodec;

// Function Definition: CCodec_dtor
typedef struct CCodec* (*CCodec_dtor)(struct CCodec* this_ptr, uint d1, uint d2, uint d3, uint d4);

