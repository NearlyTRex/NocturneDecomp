#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CDemonActor;

// Function Definition: CCharacter_getGrabber
typedef struct CDemonActor* CCharacter_getGrabber(struct CCharacter* this_ptr);

