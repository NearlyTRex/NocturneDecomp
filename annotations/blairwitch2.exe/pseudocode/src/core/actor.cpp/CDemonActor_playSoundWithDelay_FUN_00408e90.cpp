// Name: core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_00408e90
// Address: 00408e90
// Address Range: [[00408e90, 00408eb3]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_00408e90(CDemonActor *this_ptr,char *sound_name,float delay)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_00408e90(CDemonActor *this_ptr,char *sound_name,float delay)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0055aef0
                    (0x0264B290,this_ptr,sound_name,&(this_ptr->location).position,delay);
  return uVar1;
}
