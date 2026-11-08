// Name: FUN_00503c40
// Address: 00503c40
// Address Range: [[00503c40, 00503ceb]]
// Convention: unknown
// Signature: int * FUN_00503c40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00503c40(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01dc5c80) {
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x1dc5c84)) {
        if (-1 < iVar2) {
          return (int *)(iVar1 + 0x1dc5c84);
        }
        break;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01dc5c80 * 0x74);
  }
  if (0x1ff < _DAT_01dc5c80) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 299;
    FUN_004e4330("allocSimFrame - sim history list full");
  }
  piVar3 = (int *)(_DAT_01dc5c80 * 0x74 + 0x1dc5c84);
  _DAT_01dc5c80 = _DAT_01dc5c80 + 1;
  FUN_005a28f0(piVar3,0,0x74);
  *piVar3 = param_1;
  return piVar3;
}
