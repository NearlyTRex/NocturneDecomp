// Name: FUN_0044ded0
// Address: 0044ded0
// Address Range: [[0044ded0, 0044df5f]]
// Convention: unknown
// Signature: void FUN_0044ded0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ded0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x11e8) >> 0x1f;
  iVar1 = (*(int *)(param_1 + 0x11e8) + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  _DAT_00b9dd48 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  FUN_00495ec0(0x12c00);
  if (1 < _DAT_0149d6d8) {
    FUN_0044ff10(param_1,_DAT_0149d6d0,_DAT_0149d6d4);
    return;
  }
  if (_DAT_0134017c == 0) {
    return;
  }
  FUN_00495f68(0x12c00);
  _DAT_0134017c = 0;
  return;
}
