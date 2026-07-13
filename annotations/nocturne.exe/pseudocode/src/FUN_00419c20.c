// Name: FUN_00419c20
// Address: 00419c20
// Address Range: [[00419c20, 00419cd5]]
// Convention: unknown
// Signature: int FUN_00419c20(int param_1)

#include "nocturne.h"

int FUN_00419c20(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_20 [24];
  
  if (*(int *)(param_1 + 0x2404) != 0) {
    return 0;
  }
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    FUN_004619f0(DAT_005ae704,0);
    uVar1 = DAT_005ae704;
    *(uint *)(0x01E57284 + 0x15a8a0) = 1;
    FUN_00461010(uVar1,0xffff);
    FUN_00425c20(param_1);
    uVar1 = DAT_005ae704;
    *(uint *)(0x01E57284 + 0x15a8a0) = 0;
    FUN_00461db0(uVar1);
  }
  FUN_00409f60(param_1);
  return iVar2;
}
