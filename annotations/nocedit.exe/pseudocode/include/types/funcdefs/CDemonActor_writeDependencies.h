#pragma once

// Forward declarations
struct _FILE;

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct _FILE;

// Function Definition: CDemonActor_writeDependencies
typedef void (*CDemonActor_writeDependencies)(struct CDemonActor* this_ptr, struct _FILE* file_handle);

