// Name: FUN_00451d90
// Address: 00451d90
// Address Range: [[00451d90, 00451e1f]]
// Convention: unknown
// Signature: void FUN_00451d90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451d90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x11e8) >> 0x1f;
  iVar1 = (*(int *)(param_1 + 0x11e8) + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  _DAT_00b81498 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  FUN_004ab020(0x12c00);
  if (1 < _DAT_01480e28) {
    FUN_00453dc0(param_1,_DAT_01480e20,_DAT_01480e24);
    return;
  }
  if (_DAT_013238cc == 0) {
    return;
  }
  FUN_004ab0c8(0x12c00);
  _DAT_013238cc = 0;
  return;
}
