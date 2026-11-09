// Name: core_actor.cpp_FUN_00409db0
// Address: 00409db0
// Address Range: [[00409db0, 00409de4]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_FUN_00409db0(CDemonActor *this_ptr,int fly_count,float spawn_radius)

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_00409db0(CDemonActor *this_ptr,int fly_count,float spawn_radius)

{
  CFlies *pCVar1;
  
  pCVar1 = core_flies_cpp_FUN_004a79a0(this_ptr);
  if (pCVar1 != (CFlies *)0x0) {
    return;
  }
  core_gore_cpp_FUN_004c9cc0(g_CGorePtr,this_ptr,fly_count,spawn_radius,(CVector3f *)0x0);
  return;
}
