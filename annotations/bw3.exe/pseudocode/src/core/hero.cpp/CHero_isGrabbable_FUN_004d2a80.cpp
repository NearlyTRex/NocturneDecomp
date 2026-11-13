// Name: core_hero.cpp_CHero_isGrabbable_FUN_004d2a80
// Address: 004d2a80
// Address Range: [[004d2a80, 004d2a9c]]
// Convention: __cdecl
// Signature: bool __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004d2a80(CHero *this_ptr,CDemonActor *param_2)

#include "nocturne.h"

bool __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004d2a80(CHero *this_ptr,CDemonActor *param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(param_2,"CBugs");
  return iVar1 == 0;
}
