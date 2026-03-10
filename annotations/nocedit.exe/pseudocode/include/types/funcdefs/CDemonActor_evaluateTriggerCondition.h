#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_evaluateTriggerCondition
typedef float CDemonActor_evaluateTriggerCondition(struct CDemonActor* this_ptr, struct CDemonActor* querying_actor, struct CVector3f* query_position);

