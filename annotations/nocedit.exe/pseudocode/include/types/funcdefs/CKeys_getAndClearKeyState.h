#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CKeys;

// Function Definition: CKeys_getAndClearKeyState
typedef int (*CKeys_getAndClearKeyState)(struct CKeys* this_ptr, int key_code);

