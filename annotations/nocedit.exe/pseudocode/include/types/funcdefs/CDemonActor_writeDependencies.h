#pragma once

// Forward declarations
struct FILE;

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct FILE;

// Function Definition: CDemonActor_writeDependencies
typedef void (*CDemonActor_writeDependencies)(struct CDemonActor* this_ptr, struct FILE* file_handle);

