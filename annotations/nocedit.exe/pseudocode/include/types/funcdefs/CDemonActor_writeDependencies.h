#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"

// Forward declarations
struct CDemonActor;
struct FILE;

// Function Definition: CDemonActor_writeDependencies
typedef void (*CDemonActor_writeDependencies)(struct CDemonActor* this_ptr, struct FILE* file_handle);

