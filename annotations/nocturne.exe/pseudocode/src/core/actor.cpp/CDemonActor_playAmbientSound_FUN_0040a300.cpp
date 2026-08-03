// Name: core_actor.cpp_CDemonActor_playAmbientSound_FUN_0040a300
// Address: 0040a300
// Address Range: [[0040a300, 0040a31f]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_0040a300(CDemonActor *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playAmbientSound_FUN_0040a300(CDemonActor *this_ptr,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                    (g_CSound_PTR_005bed68,this_ptr,sound_name,&(this_ptr->location).position);
  return uVar1;
}
