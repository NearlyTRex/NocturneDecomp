// Name: core_carved.cpp_FUN_00428fc0
// Address: 00428fc0
// Address Range: [[00428fc0, 00428ff0]]
// Convention: unknown
// Signature: undefined4 core_carved_cpp_FUN_00428fc0(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_carved_cpp_FUN_00428fc0(uint param_1,CDemonActor *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c790(param_2,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = unkafter_enemy_cpp_FUN_0048a200(param_1,param_2);
  return uVar2;
}
