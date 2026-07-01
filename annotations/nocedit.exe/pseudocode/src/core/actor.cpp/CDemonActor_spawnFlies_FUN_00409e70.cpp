// Name: core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70
// Address: 00409e70
// Address Range: [[00409e70, 00409eb2]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70(CDemonActor *this_ptr,int fly_count,float spawn_radius)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70(CDemonActor *this_ptr,int fly_count,float spawn_radius)

{
  CFlies *pCVar1;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",1296);
  pCVar1 = core_flies_cpp_findFliesByFollowActor_FUN_004cca50(this_ptr);
  if (pCVar1 != (CFlies *)0x0) {
    return;
  }
  core_gore_cpp_CGore_spawnFliesOnActor_FUN_004ee030
            (g_CGorePtr,this_ptr,fly_count,spawn_radius,(CVector3f *)0x0);
  return;
}
