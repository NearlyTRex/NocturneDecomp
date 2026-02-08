#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CActorPropertyList;
struct CDemonActor;

// Function Definition: CDemonActor_getPropertyList
typedef void CDemonActor_getPropertyList(struct CDemonActor* this_ptr, struct CActorPropertyList* property_list);

