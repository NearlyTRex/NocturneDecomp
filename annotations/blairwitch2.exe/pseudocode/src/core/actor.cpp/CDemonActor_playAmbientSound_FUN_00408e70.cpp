// Name: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408e70
// Address: 00408e70
// Address Range: [[00408e70, 00408e8f]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408e70(CDemonActor *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408e70(CDemonActor *this_ptr,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                    (0x0264B290,this_ptr,sound_name,&(this_ptr->location).position);
  return uVar1;
}
