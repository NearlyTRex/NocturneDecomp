#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CActorProperty;
struct CDemonActor;

// Function Definition: CActorPropertyDisplayFunc
typedef void CActorPropertyDisplayFunc(struct CDemonActor* actor, struct CActorProperty* property, char* output_buffer);

