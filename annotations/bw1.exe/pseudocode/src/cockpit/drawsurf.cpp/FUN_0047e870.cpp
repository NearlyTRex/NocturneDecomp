// Name: FUN_0047e870
// Address: 0047e870
// Address Range: [[0047e870, 0047e9c4]]
// Convention: unknown
// Signature: void FUN_0047e870(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e870(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  if ((((param_2 < *(int *)(param_1 + 0x10)) || (*(int *)(param_1 + 0x18) < param_2)) ||
      (param_3 < *(int *)(param_1 + 0x14))) || (*(int *)(param_1 + 0x1c) < param_3)) {
    return;
  }
  iVar2 = param_2 * 2;
  param_3 = param_3 * 4;
  iVar1 = param_2 * 4;
  if (_DAT_01bc11f0 == 0) {
    if (DAT_0061b4a0 < 0x10) {
      if (DAT_0061b4a0 == 8) {
        *(byte *)(param_2 + *(int *)(&DAT_01c4354c + param_3)) = DAT_01bc11e4;
        return;
      }
    }
    else {
      if (DAT_0061b4a0 < 0x11) {
        *(ushort *)(iVar2 + *(int *)(&DAT_01c4354c + param_3)) = _DAT_01bc11e4;
        return;
      }
      if (DAT_0061b4a0 == 0x20) {
        *(uint *)(iVar1 + *(int *)(&DAT_01c4354c + param_3)) = _DAT_01bc11e4;
        return;
      }
    }
    _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
    _DAT_01d1d404 = 0x18e;
    FUN_005030e0("Invalid bitsPerPixel!");
    return;
  }
  if (DAT_0061b4a0 < 0x10) {
    if (DAT_0061b4a0 == 8) {
      return;
    }
  }
  else {
    if (DAT_0061b4a0 < 0x11) {
      *(ushort *)(iVar2 + *(int *)(&DAT_01c4354c + param_3)) =
           *(ushort *)(iVar2 + *(int *)(&DAT_01c4354c + param_3)) >> (DAT_01bc11f4 & 0x1f) &
           (ushort)_DAT_01bc1204;
      return;
    }
    if (DAT_0061b4a0 == 0x20) {
      *(uint *)(*(int *)(&DAT_01c4354c + param_3) + iVar1) =
           *(uint *)(*(int *)(&DAT_01c4354c + param_3) + iVar1) >> (DAT_01bc11f4 & 0x1f) &
           _DAT_01bc1204;
      return;
    }
  }
  _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d1d404 = 0x19f;
  FUN_005030e0("Invalid bitsPerPixel!");
  return;
}
