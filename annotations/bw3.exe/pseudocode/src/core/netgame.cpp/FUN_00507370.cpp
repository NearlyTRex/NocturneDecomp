// Name: FUN_00507370
// Address: 00507370
// Address Range: [[00507370, 0050744e]]
// Convention: unknown
// Signature: void FUN_00507370(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507370(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 != 1) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x88c;
    FUN_004e4330("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  _DAT_01da6484 = _DAT_01da6484 + 1;
  iVar1 = FUN_005806a0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - _DAT_01da6474;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  piVar4 = param_1;
  _DAT_01da6474 = iVar1;
  if (0 < param_1[7]) {
    do {
      if (iVar3 == param_1[0x49]) {
        piVar4[0x15] = _DAT_01da6484;
      }
      else {
        piVar4[0x16] = _DAT_01da6478 + iVar2 + -0x1e0000;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x20;
    } while (iVar3 < param_1[7]);
  }
  _DAT_01da6478 = _DAT_01da6478 + iVar2;
  return;
}
