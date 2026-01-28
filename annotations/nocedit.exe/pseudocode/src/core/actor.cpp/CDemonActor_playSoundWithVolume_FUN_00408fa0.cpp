// Name: core_actor.cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0
// Address: 00408fa0
// Address Range: [[00408fa0, 00408fc3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0 (CDemonActor *this_ptr,char *sound_name,float volume)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0
          (CDemonActor *this_ptr,char *sound_name,float volume)

{
  core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
            (g_CSoundPtr,this_ptr,sound_name,&(this_ptr->location).position,volume);
  return;
}
