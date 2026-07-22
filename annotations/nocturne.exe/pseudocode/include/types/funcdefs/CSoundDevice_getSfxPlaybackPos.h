#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSfxSlot;
struct CSoundDevice;

// Function Definition: CSoundDevice_getSfxPlaybackPos
typedef double CSoundDevice_getSfxPlaybackPos(struct CSoundDevice* this_ptr, struct CSfxSlot* slot);

