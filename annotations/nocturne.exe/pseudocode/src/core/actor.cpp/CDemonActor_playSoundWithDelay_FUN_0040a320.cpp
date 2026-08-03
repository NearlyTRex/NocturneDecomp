// Name: core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_0040a320
// Address: 0040a320
// Address Range: [[0040a320, 0040a343]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_0040a320(CDemonActor *this_ptr,char *sound_name,float volume)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_0040a320(CDemonActor *this_ptr,char *sound_name,float volume)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
                    (g_CSound_PTR_005bed68,this_ptr,sound_name,&(this_ptr->location).position,volume
                    );
  return uVar1;
}
