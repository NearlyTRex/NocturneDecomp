// Name: core_actor.cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0
// Address: 00408fd0
// Address Range: [[00408fd0, 00408ff3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0 (CDemonActor *this_ptr,char *sound_name,float volume)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0
          (CDemonActor *this_ptr,char *sound_name,float volume)

{
  core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30
            (g_CSoundPtr,this_ptr,sound_name,&(this_ptr->location).position,volume);
  return;
}
