// Name: unkafter_enemy.cpp_FUN_0048a200
// Address: 0048a200
// Address Range: [[0048a200, 0048a21c]]
// Convention: unknown
// Signature: bool unkafter_enemy_cpp_FUN_0048a200(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

bool unkafter_enemy_cpp_FUN_0048a200(uint param_1,CDemonActor *param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040c790(param_2,"CBugs");
  return iVar1 != 0;
}
