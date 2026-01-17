#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVec;

// Function Definition: CObj_translate
typedef void (*CObj_translate)(struct CObj* this_ptr, struct CVec* offset);

