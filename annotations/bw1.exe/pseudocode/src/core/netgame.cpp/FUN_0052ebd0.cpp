// Name: FUN_0052ebd0
// Address: 0052ebd0
// Address Range: [[0052ebd0, 0052ed72]]
// Convention: unknown
// Signature: void FUN_0052ebd0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ebd0(int param_1,uint param_2,int param_3)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x31 < _DAT_01d6dfb8) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x76c;
    FUN_005030e0("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar2 = _DAT_01d6dfb8 * 0x114;
  piVar6 = (int *)(&DAT_01d6dfbc + iVar2);
  _DAT_01d6dfb8 = _DAT_01d6dfb8 + 1;
  iVar3 = FUN_005b2420();
  _DAT_01d51d9c = iVar3 / 0x12 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
  _DAT_01d715a4 = _DAT_01d715a4 + 1;
  _DAT_01d51d9c = iVar3 / 0x12;
  *(int *)(&DAT_01d6dfc0 + iVar2) = _DAT_01d715a4;
  *piVar6 = _DAT_01d51da0;
  FUN_005bfb70(&DAT_01d6dfc4 + iVar2,1,2);
  if (param_3 < 0) {
    iVar3 = 0;
    piVar4 = piVar6;
    piVar5 = piVar6;
    if (0 < *(int *)(param_1 + 0x1c)) {
      do {
        *(byte *)(piVar5 + 2) = 0;
        piVar4[3] = _DAT_01d51da0 + -0x3c0000;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (iVar3 < *(int *)(param_1 + 0x1c));
    }
  }
  else {
    *(byte *)((int)piVar6 + param_3 + 8) = 0;
    *(int *)(iVar2 + 0x1d6dfc8 + param_3 * 4) = _DAT_01d51da0 + -0x3c0000;
  }
  puVar1 = &DAT_01d6dfd0 + iVar2;
  *(byte *)(*(int *)(param_1 + 0x11c) + 8 + (int)piVar6) = 1;
  FUN_005bfb70(puVar1,0,0x100);
  FUN_005c20d0(puVar1,param_2,0xff);
  FUN_0052f100(param_1,param_1 + *(int *)(param_1 + 0x11c) * 0x7c + 0x3c,
               *(uint *)(&DAT_01d6dfc0 + iVar2),param_1 + 8,puVar1);
  return;
}
