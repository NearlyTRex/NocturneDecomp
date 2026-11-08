// Name: FUN_00466360
// Address: 00466360
// Address Range: [[00466360, 004664b4]]
// Convention: unknown
// Signature: void FUN_00466360(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466360(int param_1,int param_2,int param_3)

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
  if (_DAT_01ba5c34 == 0) {
    if (DAT_006141c0 < 0x10) {
      if (DAT_006141c0 == 8) {
        *(byte *)(param_2 + *(int *)(&DAT_01c2a38c + param_3)) = DAT_01ba5c28;
        return;
      }
    }
    else {
      if (DAT_006141c0 < 0x11) {
        *(ushort *)(iVar2 + *(int *)(&DAT_01c2a38c + param_3)) = _DAT_01ba5c28;
        return;
      }
      if (DAT_006141c0 == 0x20) {
        *(uint *)(iVar1 + *(int *)(&DAT_01c2a38c + param_3)) = _DAT_01ba5c28;
        return;
      }
    }
    _DAT_01d046a0 = "..\\cockpit\\drawsurf.cpp";
    _DAT_01d046a4 = 0x18d;
    FUN_004e4500("Invalid bitsPerPixel!");
    return;
  }
  if (DAT_006141c0 < 0x10) {
    if (DAT_006141c0 == 8) {
      return;
    }
  }
  else {
    if (DAT_006141c0 < 0x11) {
      *(ushort *)(iVar2 + *(int *)(&DAT_01c2a38c + param_3)) =
           *(ushort *)(iVar2 + *(int *)(&DAT_01c2a38c + param_3)) >> (DAT_01ba5c38 & 0x1f) &
           (ushort)_DAT_01ba5c48;
      return;
    }
    if (DAT_006141c0 == 0x20) {
      *(uint *)(*(int *)(&DAT_01c2a38c + param_3) + iVar1) =
           *(uint *)(*(int *)(&DAT_01c2a38c + param_3) + iVar1) >> (DAT_01ba5c38 & 0x1f) &
           _DAT_01ba5c48;
      return;
    }
  }
  _DAT_01d046a0 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d046a4 = 0x19e;
  FUN_004e4500("Invalid bitsPerPixel!");
  return;
}
