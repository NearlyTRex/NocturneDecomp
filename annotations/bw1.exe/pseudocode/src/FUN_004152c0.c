// Name: FUN_004152c0
// Address: 004152c0
// Address Range: [[004152c0, 00415335]]
// Convention: unknown
// Signature: void FUN_004152c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004152c0(int param_1)

{
  uint uVar1;
  
  FUN_0042c510(param_1);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  DAT_007c3908 = FUN_005634f0(uVar1,"Bip01 L Foot",0);
  _DAT_007c390c = FUN_005634f0(uVar1,"Bip01 R Foot",0);
  uVar1 = DAT_007c3908;
  *(uint *)(param_1 + 0x2620) = _DAT_007c390c;
  *(uint *)(param_1 + 0x25a8) = uVar1;
  if (*(int *)(param_1 + 0x27a8) == 0) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
