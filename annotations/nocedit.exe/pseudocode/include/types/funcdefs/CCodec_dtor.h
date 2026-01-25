#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCodec;

// Function Definition: CCodec_dtor
typedef struct CCodec* (*CCodec_dtor)(struct CCodec* this_ptr, uint d1, uint d2, uint d3, uint d4);

