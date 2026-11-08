// Name: FUN_0050b160
// Address: 0050b160
// Address Range: [[0050b160, 0050b20b]]
// Convention: unknown
// Signature: int * FUN_0050b160(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0050b160(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01d54640) {
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x1d54644)) {
        if (-1 < iVar2) {
          return (int *)(iVar1 + 0x1d54644);
        }
        break;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d54640 * 0x74);
  }
  if (0x1ff < _DAT_01d54640) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 299;
    FUN_004e4500("allocSimFrame - sim history list full");
  }
  piVar3 = (int *)(_DAT_01d54640 * 0x74 + 0x1d54644);
  _DAT_01d54640 = _DAT_01d54640 + 1;
  FUN_005b77c0(piVar3,0,0x74);
  *piVar3 = param_1;
  return piVar3;
}
