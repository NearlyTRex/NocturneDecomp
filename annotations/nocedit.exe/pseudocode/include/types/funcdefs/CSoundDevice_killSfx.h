#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSfxSlot;
struct CSoundDevice;

// Function Definition: CSoundDevice_killSfx
typedef void (*CSoundDevice_killSfx)(struct CSoundDevice* this_ptr, struct CSfxSlot* slot);

