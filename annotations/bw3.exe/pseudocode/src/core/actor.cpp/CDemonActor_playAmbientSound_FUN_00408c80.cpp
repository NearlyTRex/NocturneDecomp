// Name: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408c80
// Address: 00408c80
// Address Range: [[00408c80, 00408c9f]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408c80(CDemonActor *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408c80(CDemonActor *this_ptr,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00
                    (g_CSound_PTR_006045f8,this_ptr,sound_name,&(this_ptr->location).position);
  return uVar1;
}
