// Name: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408f80
// Address: 00408f80
// Address Range: [[00408f80, 00408f9f]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408f80(CDemonActor * this_ptr, char * sound_name)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80(CDemonActor *this_ptr,char *sound_name)

{
  core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
            (g_CSoundPtr,this_ptr,sound_name,&(this_ptr->location).position);
  return;
}
