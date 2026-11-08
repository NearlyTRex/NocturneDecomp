// Name: FUN_0040fac0
// Address: 0040fac0
// Address Range: [[0040fac0, 0040fb35]]
// Convention: unknown
// Signature: void FUN_0040fac0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040fac0(int param_1)

{
  uint uVar1;
  
  FUN_0042b0e0(param_1);
  uVar1 = FUN_0054eac0(param_1 + 0x158);
  DAT_007dff08 = FUN_00548090(uVar1,"Bip01 L Foot",0);
  _DAT_007dff0c = FUN_00548090(uVar1,"Bip01 R Foot",0);
  uVar1 = DAT_007dff08;
  *(uint *)(param_1 + 0x2620) = _DAT_007dff0c;
  *(uint *)(param_1 + 0x25a8) = uVar1;
  if (*(int *)(param_1 + 0x27a8) == 0) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
