#pragma once

// Forward declarations
struct _FILE;

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct _FILE;

// Function Definition: CDemonActor_addFilesToExtract
typedef void (*CDemonActor_addFilesToExtract)(struct CDemonActor* this_ptr, struct _FILE* file_handle);

