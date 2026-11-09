// Name: core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_00408ca0
// Address: 00408ca0
// Address Range: [[00408ca0, 00408cc3]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_00408ca0(CDemonActor *this_ptr,char *sound_name,float delay)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_00408ca0(CDemonActor *this_ptr,char *sound_name,float delay)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_FUN_00560a70
                    (0x02CF5680,this_ptr,sound_name,(CVector3f *)&this_ptr->field_0x20,delay);
  return uVar1;
}
