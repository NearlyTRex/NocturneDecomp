#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CActorProperty;
struct CDemonActor;

// Function Definition: CDemonActor_CActorPropertyDisplayFunc
typedef void (*CDemonActor_CActorPropertyDisplayFunc)(struct CDemonActor* actor, struct CActorProperty* property, char* output_buffer);

