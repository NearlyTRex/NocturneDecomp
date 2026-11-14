// Name: core_actor.cpp_CDemonActor_playSound_FUN_00408c20
// Address: 00408c20
// Address Range: [[00408c20, 00408c3f]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408c20(CDemonActor *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408c20(CDemonActor *this_ptr,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
                    (0x02C82A60,this_ptr,sound_name,&(this_ptr->location).position);
  return uVar1;
}
