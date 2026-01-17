#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_set3DListenerOrient
typedef void (*CSoundDevice_set3DListenerOrient)(struct CSoundDevice* this_ptr, double x_front, double y_front, double z_front, double x_top, double y_top, double z_top);

