// Name: core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_00408fd0
// Address: 00408fd0
// Address Range: [[00408fd0, 00408ff3]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithDelay_FUN_00408fd0(CDemonActor *this_ptr,char *sound_name,float delay)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithDelay_FUN_00408fd0(CDemonActor *this_ptr,char *sound_name,float delay)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30
                    (g_CSoundPtr,this_ptr,sound_name,&(this_ptr->location).position,delay);
  return uVar1;
}
