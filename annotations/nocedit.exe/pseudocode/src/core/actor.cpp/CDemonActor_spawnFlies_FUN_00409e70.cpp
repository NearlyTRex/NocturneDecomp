// Name: core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70
// Address: 00409e70
// Address Range: [[00409e70, 00409eb2]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70(CDemonActor *this_ptr,int fly_count,float spawn_radius)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70(CDemonActor *this_ptr,int fly_count,float spawn_radius)

{
  CDemonActor *pCVar1;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x510);
  pCVar1 = core_flies_cpp_CFlies_FUN_004cca50((CFlies *)this_ptr);
  if (pCVar1 != (CDemonActor *)0x0) {
    return;
  }
  core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,this_ptr);
  return;
}
