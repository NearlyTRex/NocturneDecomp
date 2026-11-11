// Name: core_actor.cpp_CDemonActor_playSound_FUN_00408e50
// Address: 00408e50
// Address Range: [[00408e50, 00408e6f]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408e50(CDemonActor *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408e50(CDemonActor *this_ptr,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                    (0x0264B290,this_ptr,sound_name,&(this_ptr->location).position);
  return uVar1;
}
