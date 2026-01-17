#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_unlockSample
typedef int (*CSoundDevice_unlockSample)(struct CSoundDevice* this_ptr, int buffer_id);

