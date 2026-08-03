// Name: core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350
// Address: 0040a350
// Address Range: [[0040a350, 0040a37f]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350(CDemonActor *this_ptr,char *sound_name,float delay)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350(CDemonActor *this_ptr,char *sound_name,float delay)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50
                    (g_CSound_PTR_005bed68,this_ptr,sound_name,&(this_ptr->location).position,delay)
  ;
  return uVar1;
}
