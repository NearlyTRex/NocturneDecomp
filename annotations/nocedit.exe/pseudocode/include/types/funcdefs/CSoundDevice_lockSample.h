#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_lockSample
typedef void* CSoundDevice_lockSample(struct CSoundDevice* this_ptr, int buffer_id, int offset, int size);

