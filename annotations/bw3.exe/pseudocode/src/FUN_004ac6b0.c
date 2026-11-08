// Name: FUN_004ac6b0
// Address: 004ac6b0
// Address Range: [[004ac6b0, 004ac8f1]]
// Convention: unknown
// Signature: void FUN_004ac6b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac6b0(int param_1)

{
  int *piVar1;
  int iVar2;
  byte *puVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01d0e36c) {
    puVar3 = &DAT_01d0e370;
    do {
      FUN_004aa0b0(puVar3);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x126c;
    } while (iVar2 < _DAT_01d0e36c);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar2 = 0x1d19bc0;
    FUN_0040d400(0x1d19bac);
    do {
      FUN_0040d400(iVar2);
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != 0x1d19c38);
    FUN_0040d400(0x1d19c38);
    FUN_0040d400(0x1d19c4c);
    FUN_0040d400(0x1d19c60);
    FUN_0040d400(0x1d19c74);
    FUN_0040d400(0x1d19c9c);
    FUN_0040d400(0x1d19cb0);
    FUN_0040d400(0x1d19cc4);
    FUN_0040d400(0x1d19cd8);
    _DAT_01d1a058 = 0;
    DAT_005fe370 = 1;
    _DAT_01d19f78 = 0;
    DAT_005fe3a8 = 0xffffffff;
    DAT_01d19f90 = 0;
    return;
  }
  if ((*(int *)(0x01D2130C + 0x24c) == 0) &&
     ((**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200), (DAT_01c5fae4 & 1) != 0)) {
    iVar2 = FUN_004a80d0(_DAT_01c5fadc,_DAT_01c5fae0);
    if (-1 < iVar2) {
      _DAT_01d19ba8 = *(int *)(&DAT_01d0d354 + iVar2 * 0x2e4);
    }
    iVar2 = FUN_004a8180(_DAT_01c5fadc,_DAT_01c5fae0);
    _DAT_01d19ba8 = _DAT_01d19ba8 + iVar2;
    if ((((0x00000262 <= _DAT_01c5fadc) && (0x000001C0 <= _DAT_01c5fae0)) &&
        (_DAT_01c5fadc < 0x00000262 + _DAT_01d19cd0)) &&
       (_DAT_01c5fae0 < _DAT_01d19cd4 + 0x000001C0)) {
      *(uint *)(param_1 + 0x40) = 0;
    }
    piVar1 = (int *)FUN_004a8d50(_DAT_01d19d6c + _DAT_01d19ba8 * 0x144,_DAT_01c5fadc,_DAT_01c5fae0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(piVar1[5] + 8))(piVar1,1,_DAT_01c5fadc - *piVar1,_DAT_01c5fae0 - piVar1[1]);
    }
    DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
    return;
  }
  return;
}
