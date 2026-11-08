// Name: FUN_0050e890
// Address: 0050e890
// Address Range: [[0050e890, 0050e96e]]
// Convention: unknown
// Signature: void FUN_0050e890(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050e890(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 != 1) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x88c;
    FUN_004e4500("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  _DAT_01d34e44 = _DAT_01d34e44 + 1;
  iVar1 = FUN_0058e9e0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - _DAT_01d34e34;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  piVar4 = param_1;
  _DAT_01d34e34 = iVar1;
  if (0 < param_1[7]) {
    do {
      if (iVar3 == param_1[0x49]) {
        piVar4[0x15] = _DAT_01d34e44;
      }
      else {
        piVar4[0x16] = _DAT_01d34e38 + iVar2 + -0x1e0000;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x20;
    } while (iVar3 < param_1[7]);
  }
  _DAT_01d34e38 = _DAT_01d34e38 + iVar2;
  return;
}
