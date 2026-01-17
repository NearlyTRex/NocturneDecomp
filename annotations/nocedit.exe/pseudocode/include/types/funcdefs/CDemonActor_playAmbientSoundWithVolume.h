#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_playAmbientSoundWithVolume
typedef int (*CDemonActor_playAmbientSoundWithVolume)(struct CDemonActor* this_ptr, char* sound_name, float volume);

