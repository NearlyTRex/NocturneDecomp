#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSfxSlot;
struct CSoundDevice;

// Function Definition: CSoundDevice_setSfxPos
typedef int (*CSoundDevice_setSfxPos)(struct CSoundDevice* this_ptr, struct CSfxSlot* slot, int update_flags);

