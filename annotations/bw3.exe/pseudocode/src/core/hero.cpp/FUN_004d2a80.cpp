// Name: core_hero.cpp_FUN_004d2a80
// Address: 004d2a80
// Address Range: [[004d2a80, 004d2a9c]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004d2a80(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

bool core_hero_cpp_FUN_004d2a80(uint param_1,CDemonActor *param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(param_2,"CBugs");
  return iVar1 == 0;
}
