#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVert;

// Function Definition: CObj_getVertex
typedef struct CVert* (*CObj_getVertex)(struct CObj* this_ptr, uint index);

