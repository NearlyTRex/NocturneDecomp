#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/EInputCodeType.h"

// Forward declarations
struct CKeys;

// Function Definition: CKeys_getAndClearKeyState
typedef int CKeys_getAndClearKeyState(struct CKeys* this_ptr, EInputCodeType key_code);

