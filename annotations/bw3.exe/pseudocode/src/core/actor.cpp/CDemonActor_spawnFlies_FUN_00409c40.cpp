// Name: core_actor.cpp_CDemonActor_spawnFlies_FUN_00409c40
// Address: 00409c40
// Address Range: [[00409c40, 00409c74]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409c40(CDemonActor *this_ptr,int fly_count,float spawn_radius)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409c40(CDemonActor *this_ptr,int fly_count,float spawn_radius)

{
  CFlies *pCVar1;
  
  pCVar1 = core_flies_cpp_findFliesByFollowActor_FUN_004ae6c0(this_ptr);
  if (pCVar1 != (CFlies *)0x0) {
    return;
  }
  core_gore_cpp_CGore_spawnFliesOnActor_FUN_004cee30
            (g_CGorePtr,this_ptr,fly_count,spawn_radius,(CVector3f *)0x0);
  return;
}
