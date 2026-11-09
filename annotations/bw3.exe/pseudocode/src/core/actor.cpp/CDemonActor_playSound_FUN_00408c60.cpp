// Name: core_actor.cpp_CDemonActor_playSound_FUN_00408c60
// Address: 00408c60
// Address Range: [[00408c60, 00408c7f]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408c60(CDemonActor *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408c60(CDemonActor *this_ptr,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                    (0x02CF5680,this_ptr,sound_name,(CVector3f *)&this_ptr->field_0x20);
  return uVar1;
}
