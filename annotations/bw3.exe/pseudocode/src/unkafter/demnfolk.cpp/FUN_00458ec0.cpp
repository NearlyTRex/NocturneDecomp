// Name: unkafter_demnfolk.cpp_FUN_00458ec0
// Address: 00458ec0
// Address Range: [[00458ec0, 00458ef0]]
// Convention: unknown
// Signature: undefined4 unkafter_demnfolk_cpp_FUN_00458ec0(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

uint unkafter_demnfolk_cpp_FUN_00458ec0(uint param_1,CDemonActor *param_2)

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
