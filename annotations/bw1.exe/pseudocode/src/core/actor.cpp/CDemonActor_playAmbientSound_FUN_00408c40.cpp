// Name: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408c40
// Address: 00408c40
// Address Range: [[00408c40, 00408c5f]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408c40(CDemonActor *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408c40(CDemonActor *this_ptr,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0
                    (0x02C82A60,this_ptr,sound_name,&(this_ptr->location).position);
  return uVar1;
}
