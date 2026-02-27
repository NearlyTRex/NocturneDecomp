// Name: core_actor.cpp_CDemonActor_playSound_FUN_00408f60
// Address: 00408f60
// Address Range: [[00408f60, 00408f7f]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408f60(CDemonActor *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408f60(CDemonActor *this_ptr,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                    (g_CSoundPtr,this_ptr,sound_name,&(this_ptr->location).position);
  return uVar1;
}
