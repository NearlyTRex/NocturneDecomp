#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_setStateFlagIfCondition
typedef void CObj_setStateFlagIfCondition(struct CObj* this_ptr, uint flag_to_set, uint condition_mask);

