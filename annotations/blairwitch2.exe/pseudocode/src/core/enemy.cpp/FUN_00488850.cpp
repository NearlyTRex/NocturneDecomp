// Name: core_enemy.cpp_FUN_00488850
// Address: 00488850
// Address Range: [[00488850, 00488883]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_00488850(int param_1,int param_2)

#include "nocturne.h"

void core_enemy_cpp_FUN_00488850(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0xFFFFFFFF;
  *(int *)(param_1 + 0x10af0) = param_2;
  if (param_2 == iVar1) {
    *(uint *)(param_1 + 0x10a7c) = 0;
    return;
  }
  *(int *)(param_1 + 0x10a78) = param_2;
  *(uint *)(param_1 + 0x10a7c) = 0;
  return;
}
