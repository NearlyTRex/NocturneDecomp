// Name: FUN_004f6d70
// Address: 004f6d70
// Address Range: [[004f6d70, 004f6dd1]]
// Convention: unknown
// Signature: void FUN_004f6d70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6d70(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x143c);
  while (iVar1 != 0) {
    FUN_004f6ca0(param_1,*(uint *)(param_1 + 0x143c),1);
    iVar1 = *(int *)(param_1 + 0x143c);
  }
  FUN_004f6bf0(param_1);
  uVar2 = 0x01ED78C8;
  _DAT_01d5ba00 = 0;
  *(uint *)(param_1 + 0x1454) = 0xffffffff;
  FUN_0053ef40(uVar2);
  *(uint *)(param_1 + 0x1018) = 0;
  return;
}
