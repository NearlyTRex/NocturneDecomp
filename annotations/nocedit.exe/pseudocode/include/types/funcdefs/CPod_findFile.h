#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPod;
struct SFoundFileInfo;

// Function Definition: CPod_findFile
typedef int CPod_findFile(struct CPod* this_ptr, struct SFoundFileInfo* found_file_info);

