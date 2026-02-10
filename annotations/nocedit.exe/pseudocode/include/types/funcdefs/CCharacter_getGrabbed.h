#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CDemonActor;

// Function Definition: CCharacter_getGrabbed
typedef int CCharacter_getGrabbed(struct CCharacter* this_ptr, struct CDemonActor* grabber, int grab_type);

