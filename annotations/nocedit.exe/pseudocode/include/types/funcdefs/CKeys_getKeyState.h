#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CKeys;

// Function Definition: CKeys_getKeyState
typedef int (*CKeys_getKeyState)(struct CKeys* this_ptr, int key_code);

