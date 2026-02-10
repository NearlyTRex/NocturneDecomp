#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CDemonActor;

// Function Definition: CCharacter_canBeGrabbed
typedef int CCharacter_canBeGrabbed(struct CCharacter* this_ptr, struct CDemonActor* grabber, int grab_type);

