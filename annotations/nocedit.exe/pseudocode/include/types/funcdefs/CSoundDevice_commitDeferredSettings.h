#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_commitDeferredSettings
typedef void (*CSoundDevice_commitDeferredSettings)(struct CSoundDevice* this_ptr);

