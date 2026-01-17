#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSfxSlot;
struct CSoundDevice;

// Function Definition: CSoundDevice_isSfxPlaying
typedef int (*CSoundDevice_isSfxPlaying)(struct CSoundDevice* this_ptr, struct CSfxSlot* slot);

