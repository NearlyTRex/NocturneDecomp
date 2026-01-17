#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_playSoundWithVolume
typedef int (*CDemonActor_playSoundWithVolume)(struct CDemonActor* this_ptr, char* sound_name, float volume);

