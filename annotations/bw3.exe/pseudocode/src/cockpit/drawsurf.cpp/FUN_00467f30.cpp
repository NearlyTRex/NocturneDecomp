// Name: FUN_00467f30
// Address: 00467f30
// Address Range: [[00467f30, 00468084]]
// Convention: unknown
// Signature: void FUN_00467f30(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467f30(int param_1,int param_2,int param_3)

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
  if (_DAT_01bdd7c8 == 0) {
    if (DAT_005fba20 < 0x10) {
      if (DAT_005fba20 == 8) {
        *(byte *)(param_2 + *(int *)(&DAT_01c5faec + param_3)) = DAT_01bdd7bc;
        return;
      }
    }
    else {
      if (DAT_005fba20 < 0x11) {
        *(ushort *)(iVar2 + *(int *)(&DAT_01c5faec + param_3)) = _DAT_01bdd7bc;
        return;
      }
      if (DAT_005fba20 == 0x20) {
        *(uint *)(iVar1 + *(int *)(&DAT_01c5faec + param_3)) = _DAT_01bdd7bc;
        return;
      }
    }
    _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
    _DAT_01d71de4 = 0x18e;
    FUN_004e4330("Invalid bitsPerPixel!");
    return;
  }
  if (DAT_005fba20 < 0x10) {
    if (DAT_005fba20 == 8) {
      return;
    }
  }
  else {
    if (DAT_005fba20 < 0x11) {
      *(ushort *)(iVar2 + *(int *)(&DAT_01c5faec + param_3)) =
           *(ushort *)(iVar2 + *(int *)(&DAT_01c5faec + param_3)) >> (DAT_01bdd7cc & 0x1f) &
           (ushort)_DAT_01bdd7dc;
      return;
    }
    if (DAT_005fba20 == 0x20) {
      *(uint *)(*(int *)(&DAT_01c5faec + param_3) + iVar1) =
           *(uint *)(*(int *)(&DAT_01c5faec + param_3) + iVar1) >> (DAT_01bdd7cc & 0x1f) &
           _DAT_01bdd7dc;
      return;
    }
  }
  _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01d71de4 = 0x19f;
  FUN_004e4330("Invalid bitsPerPixel!");
  return;
}
