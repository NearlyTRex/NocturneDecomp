#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_set3DListenerDistanceFactor
typedef void (*CSoundDevice_set3DListenerDistanceFactor)(struct CSoundDevice* this_ptr, double distance_in_feet);

