#pragma once

// Dependencies
#include "system/basetypes.h"

// Function Definition: APIDLL_getVideoMemory
typedef int (*APIDLL_getVideoMemory)(int* total_memory, int* available_memory, int* memory_type);

