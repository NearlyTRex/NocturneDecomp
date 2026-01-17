#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_set3DListenerVelocity
typedef void (*CSoundDevice_set3DListenerVelocity)(struct CSoundDevice* this_ptr, double x_velocity, double y_velocity, double z_velocity);

