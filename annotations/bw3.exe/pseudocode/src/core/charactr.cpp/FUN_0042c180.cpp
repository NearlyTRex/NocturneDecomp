// Name: core_charactr.cpp_FUN_0042c180
// Address: 0042c180
// Address Range: [[0042c180, 0042c1d3]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042c180(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042c180(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  SDamageInfo aSStack_40 [4];
  uint uStack_3c;
  uint uStack_10;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (0 < iVar1) {
    return;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_40);
  uStack_10 = param_2;
  uStack_3c = param_3;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,aSStack_40);
  return;
}
