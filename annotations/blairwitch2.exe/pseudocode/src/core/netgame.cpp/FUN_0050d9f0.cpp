// Name: FUN_0050d9f0
// Address: 0050d9f0
// Address Range: [[0050d9f0, 0050db89]]
// Convention: unknown
// Signature: void FUN_0050d9f0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050d9f0(int param_1,uint param_2,int param_3)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x31 < _DAT_01d51050) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x76c;
    FUN_004e4500("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar2 = _DAT_01d51050 * 0x114;
  piVar5 = (int *)(&DAT_01d51054 + iVar2);
  _DAT_01d51050 = _DAT_01d51050 + 1;
  iVar3 = FUN_0058e9e0();
  _DAT_01d34e34 = iVar3 / 0x12 - _DAT_01d34e34;
  if (_DAT_01d34e34 < 0) {
    _DAT_01d34e34 = 0;
  }
  else if (0x20000 < _DAT_01d34e34) {
    _DAT_01d34e34 = 0x20000;
  }
  _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
  _DAT_01d5463c = _DAT_01d5463c + 1;
  _DAT_01d34e34 = iVar3 / 0x12;
  *(int *)(&DAT_01d51058 + iVar2) = _DAT_01d5463c;
  *piVar5 = _DAT_01d34e38;
  FUN_005b77c0(&DAT_01d5105c + iVar2,1,2);
  if (param_3 < 0) {
    iVar3 = 0;
    piVar4 = piVar5;
    if (0 < *(int *)(param_1 + 0x1c)) {
      do {
        *(byte *)(piVar5 + 2) = 0;
        piVar4[3] = _DAT_01d34e38 + -0x3c0000;
        iVar3 = iVar3 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x1c));
    }
  }
  else {
    *(byte *)((int)piVar5 + param_3 + 8) = 0;
    *(int *)(iVar2 + 0x1d51060 + param_3 * 4) = _DAT_01d34e38 + -0x3c0000;
  }
  puVar1 = &DAT_01d51068 + iVar2;
  (&DAT_01d5105c)[*(int *)(param_1 + 0x124) + iVar2] = 1;
  FUN_005b77c0(puVar1,0,0x100);
  FUN_005b9cf0(puVar1,param_2,0xff);
  FUN_0050df20(param_1,param_1 + *(int *)(param_1 + 0x124) * 0x80 + 0x3c,
               *(uint *)(&DAT_01d51058 + iVar2),param_1 + 8,puVar1);
  return;
}
