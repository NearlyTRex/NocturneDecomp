// Name: FUN_004ece70
// Address: 004ece70
// Address Range: [[004ece70, 004ecf4b]]
// Convention: unknown
// Signature: void FUN_004ece70(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ece70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 != 1) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x88c;
    FUN_004c8440("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  _DAT_01cea404 = _DAT_01cea404 + 1;
  iVar1 = FUN_00558a30();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - _DAT_01cea3f4;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  piVar4 = param_1;
  _DAT_01cea3f4 = iVar1;
  if (0 < param_1[7]) {
    do {
      if (iVar3 == param_1[0x45]) {
        piVar4[0x15] = _DAT_01cea404;
      }
      else {
        piVar4[0x16] = _DAT_01cea3f8 + iVar2 + -0x1e0000;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x1e;
    } while (iVar3 < param_1[7]);
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + iVar2;
  return;
}
