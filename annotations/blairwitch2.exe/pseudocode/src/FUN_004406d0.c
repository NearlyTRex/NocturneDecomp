// Name: FUN_004406d0
// Address: 004406d0
// Address Range: [[004406d0, 0044075f]]
// Convention: unknown
// Signature: void FUN_004406d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004406d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x11e8) >> 0x1f;
  iVar1 = (*(int *)(param_1 + 0x11e8) + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  _DAT_00b65f98 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  FUN_00492670(0x12c00);
  if (1 < _DAT_01465928) {
    FUN_00442710(param_1,_DAT_01465920,_DAT_01465924);
    return;
  }
  if (_DAT_013083cc == 0) {
    return;
  }
  FUN_00492718(0x12c00);
  _DAT_013083cc = 0;
  return;
}
