// Name: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_00428b60
// Address: 00428b60
// Address Range: [[00428b60, 00428ba1]]
// Convention: unknown
// Signature: void core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_00428b60(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_00428b60(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x25a8) = 1;
  *(uint *)(param_1 + 0x259c) = 0xbf800000;
  *(uint *)(param_1 + 0x2598) = param_2;
  *(uint *)(param_1 + 0x25a0) = 0x7149f2ca;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x130))(param_1,0xbf800000);
  return;
}
