// Name: FUN_0052fa80
// Address: 0052fa80
// Address Range: [[0052fa80, 0052fb5b]]
// Convention: unknown
// Signature: void FUN_0052fa80(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052fa80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 != 1) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x88c;
    FUN_005030e0("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  _DAT_01d51dac = _DAT_01d51dac + 1;
  iVar1 = FUN_005b2420();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - _DAT_01d51d9c;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  piVar4 = param_1;
  _DAT_01d51d9c = iVar1;
  if (0 < param_1[7]) {
    do {
      if (iVar3 == param_1[0x47]) {
        piVar4[0x15] = _DAT_01d51dac;
      }
      else {
        piVar4[0x16] = _DAT_01d51da0 + iVar2 + -0x1e0000;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x1f;
    } while (iVar3 < param_1[7]);
  }
  _DAT_01d51da0 = _DAT_01d51da0 + iVar2;
  return;
}
