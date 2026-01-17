#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct SInteractionInfo;

// Function Definition: CDemonActor_getInteractionInfo
typedef void (*CDemonActor_getInteractionInfo)(struct CDemonActor* this_ptr, struct SInteractionInfo* out_info);

