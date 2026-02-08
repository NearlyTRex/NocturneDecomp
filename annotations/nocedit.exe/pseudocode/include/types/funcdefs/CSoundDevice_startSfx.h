#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSfxSlot;
struct CSoundDevice;

// Function Definition: CSoundDevice_startSfx
typedef int CSoundDevice_startSfx(struct CSoundDevice* this_ptr, struct CSfxSlot* slot);

