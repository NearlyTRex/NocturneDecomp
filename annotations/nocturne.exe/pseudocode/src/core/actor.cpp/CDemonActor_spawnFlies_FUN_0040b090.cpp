// Name: core_actor.cpp_CDemonActor_spawnFlies_FUN_0040b090
// Address: 0040b090
// Address Range: [[0040b090, 0040b0c4]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_0040b090(CDemonActor *this_ptr,int fly_count,float spawn_radius)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_0040b090(CDemonActor *this_ptr,int fly_count,float spawn_radius)

{
  CFlies *pCVar1;
  
  pCVar1 = core_flies_cpp_findFliesByFollowActor_FUN_0048fbe0(this_ptr);
  if (pCVar1 != (CFlies *)0x0) {
    return;
  }
  core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
            (g_CGore_PTR_005b96c4,this_ptr,fly_count,spawn_radius,(CVector3f *)0x0);
  return;
}
