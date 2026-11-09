// Name: core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_00408c60
// Address: 00408c60
// Address Range: [[00408c60, 00408c83]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_00408c60(CDemonActor *this_ptr,char *sound_name,float delay)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_00408c60(CDemonActor *this_ptr,char *sound_name,float delay)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_FUN_0057d940
                    (0x02C82A60,this_ptr,sound_name,(CVector3f *)&this_ptr->field_0x20,delay);
  return uVar1;
}
