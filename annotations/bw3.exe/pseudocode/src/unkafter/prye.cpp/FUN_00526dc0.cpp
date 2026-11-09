// Name: unkafter_prye.cpp_FUN_00526dc0
// Address: 00526dc0
// Address Range: [[00526dc0, 00526de2]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_00526dc0(int param_1,undefined4 param_2)

#include "nocturne.h"

void unkafter_prye_cpp_FUN_00526dc0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20c24);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0xc))(iVar1,param_2);
  return;
}
