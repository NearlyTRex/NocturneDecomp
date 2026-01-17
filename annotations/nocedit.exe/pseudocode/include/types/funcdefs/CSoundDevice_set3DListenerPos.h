#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_set3DListenerPos
typedef void (*CSoundDevice_set3DListenerPos)(struct CSoundDevice* this_ptr, double x, double y, double z);

