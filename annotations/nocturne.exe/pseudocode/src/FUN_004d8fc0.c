// Name: FUN_004d8fc0
// Address: 004d8fc0
// Address Range: [[004d8fc0, 004d901d]]
// Convention: unknown
// Signature: void FUN_004d8fc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8fc0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x514);
  while (iVar1 != 0) {
    FUN_004d8f90(param_1,*(uint *)(param_1 + 0x514),1);
    iVar1 = *(int *)(param_1 + 0x514);
  }
  FUN_004d8ee0(param_1);
  uVar2 = 0x01E57284;
  _DAT_01cae0d4 = 0;
  *(uint *)(param_1 + 0x850) = 0;
  FUN_00511b30(uVar2);
  *(uint *)(param_1 + 0x52c) = 0;
  return;
}
