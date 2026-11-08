// Name: FUN_0050eb80
// Address: 0050eb80
// Address Range: [[0050eb80, 0050ecac]]
// Convention: unknown
// Signature: void FUN_0050eb80(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050eb80(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint local_3c;
  byte local_38;
  int local_37;
  char local_33 [20];
  int local_1f;
  int local_1b;
  int local_17;
  
  if ((*param_1 != 2) || (param_1[1] != 1)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x8d0;
    FUN_004e4500("CNetGame::sendMyStateChanged - should only call this in client lobby mode");
  }
  iVar3 = FUN_0058e9e0();
  _DAT_01d34e34 = iVar3 / 0x12 - _DAT_01d34e34;
  if (_DAT_01d34e34 < 0) {
    _DAT_01d34e34 = 0;
  }
  else if (0x20000 < _DAT_01d34e34) {
    _DAT_01d34e34 = 0x20000;
  }
  _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
  local_3c = 0x29;
  local_38 = 10;
  local_1f = param_1[param_1[0x49] * 0x20 + 0x19];
  local_1b = param_1[param_1[0x49] * 0x20 + 0xd];
  local_17 = param_1[param_1[0x49] * 0x20 + 0xe];
  pcVar5 = local_33;
  piVar4 = param_1 + param_1[0x49] * 0x20 + 8;
  do {
    iVar2 = *piVar4;
    *pcVar5 = (char)iVar2;
    if ((char)iVar2 == '\0') break;
    cVar1 = *(char *)((int)piVar4 + 1);
    piVar4 = (int *)((int)piVar4 + 2);
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  _DAT_01d34e34 = iVar3 / 0x12;
  local_37 = _DAT_01d34e38;
  FUN_0050cd90(param_1,param_1[0x48],&local_3c);
  DAT_0061b124 = 1;
  param_1[param_1[0x49] * 0x20 + 0x18] = _DAT_01d34e38;
  return;
}
