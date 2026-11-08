// Name: FUN_0053dfc0
// Address: 0053dfc0
// Address Range: [[0053dfc0, 0053dffd]]
// Convention: unknown
// Signature: void FUN_0053dfc0(int param_1)

#include "nocturne.h"

void FUN_0053dfc0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00550b70(*(uint *)(param_1 + 0x10b1c));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"shb_attack??.wav");
  *(uint *)(param_1 + 0x10b20) = 0x41000000;
  *(uint *)(param_1 + 0x10b1c) = uVar2;
  return;
}
