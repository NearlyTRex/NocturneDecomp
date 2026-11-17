// Name: core_hero.cpp_CHero_isGrabbable_FUN_004d2a80
// Address: 004d2a80
// Address Range: [[004d2a80, 004d2a9c]]
// Convention: __cdecl
// Signature: bool __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004d2a80(CHero *this_ptr,CDemonActor *actor)

#include "nocturne.h"

bool __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004d2a80(CHero *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(actor,"CBugs");
  return iVar1 == 0;
}
