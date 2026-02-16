#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/EInputCodeType.h"

// Forward declarations
struct CKeys;

// Function Definition: CKeys_getKeyState
typedef int CKeys_getKeyState(struct CKeys* this_ptr, EInputCodeType key_code);

