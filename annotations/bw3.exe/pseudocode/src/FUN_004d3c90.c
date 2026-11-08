// Name: FUN_004d3c90
// Address: 004d3c90
// Address Range: [[004d3c90, 004d3e13]]
// Convention: unknown
// Signature: undefined4 FUN_004d3c90(int param_1)

#include "nocturne.h"

uint FUN_004d3c90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20a24) == 0) {
    return 0;
  }
  iVar1 = FUN_0040c790(*(int *)(param_1 + 0x20a24),"N@CHealthItem" + 2);
  if (iVar1 != 0) {
    uVar2 = FUN_004dcb40(param_1 + 0x206e8,*(uint *)(param_1 + 0x20a24));
    return uVar2;
  }
  iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x20a24),DAT_007e17b4);
  if (iVar1 != 0) {
    iVar1 = FUN_005a3260(iVar1 + 0x1d0,"journal.kfm");
    if (iVar1 == 0) {
      *(uint *)(0x01D1A05C + 0x40) = (uint)(*(int *)(0x01D1A05C + 0x40) == 0);
      return 0;
    }
  }
  iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x20a24),DAT_007e17b4);
  if (iVar1 != 0) {
    iVar1 = FUN_005a3260(iVar1 + 0x1d0,"lantern.kfm");
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0xcdec) = 1;
      return 0;
    }
  }
  iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x20a24),DAT_007e17b4);
  if (iVar1 != 0) {
    iVar1 = FUN_005a3260(iVar1 + 0x1d0,"voodoo_d.kfm");
    if (iVar1 == 0) {
      FUN_0048c150(0x01C6E360,"UseSPS");
      return 0;
    }
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_004d3b20(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_004dcb40(param_1 + 0x206e8,*(uint *)(param_1 + 0x20a24));
  return uVar2;
}
