// Name: core_rifle.cpp_FUN_00528610
// Address: 00528610
// Address Range: [[00528610, 0052864f]]
// Convention: unknown
// Signature: undefined4 core_rifle_cpp_FUN_00528610(int param_1)

#include "nocturne.h"

uint core_rifle_cpp_FUN_00528610(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0;
  }
  uVar1 = core_actor_cpp_FUN_0040ce40(0x41c80000,0x425c0000);
  return uVar1;
}
