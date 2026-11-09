// Name: core_charactr.cpp_FUN_004239b0
// Address: 004239b0
// Address Range: [[004239b0, 00423a03]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004239b0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_004239b0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  SDamageInfo aSStack_40 [4];
  uint uStack_3c;
  uint uStack_10;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if (0 < iVar1) {
    return;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_40);
  uStack_10 = param_2;
  uStack_3c = param_3;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x110))(param_1,aSStack_40);
  return;
}
