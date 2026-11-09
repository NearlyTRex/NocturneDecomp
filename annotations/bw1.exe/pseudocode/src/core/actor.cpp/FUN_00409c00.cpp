// Name: core_actor.cpp_FUN_00409c00
// Address: 00409c00
// Address Range: [[00409c00, 00409c34]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_FUN_00409c00(CDemonActor *this_ptr,int fly_count,float spawn_radius)

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_00409c00(CDemonActor *this_ptr,int fly_count,float spawn_radius)

{
  CFlies *pCVar1;
  
  pCVar1 = core_flies_cpp_FUN_004c0970(this_ptr);
  if (pCVar1 != (CFlies *)0x0) {
    return;
  }
  core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
            (g_CGorePtr,this_ptr,fly_count,spawn_radius,(CVector3f *)0x0);
  return;
}
