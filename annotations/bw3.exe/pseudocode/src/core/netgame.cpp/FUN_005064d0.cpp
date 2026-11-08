// Name: FUN_005064d0
// Address: 005064d0
// Address Range: [[005064d0, 00506669]]
// Convention: unknown
// Signature: void FUN_005064d0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005064d0(int param_1,uint param_2,int param_3)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x31 < _DAT_01dc2690) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x76c;
    FUN_004e4330("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar2 = _DAT_01dc2690 * 0x114;
  piVar5 = (int *)(&DAT_01dc2694 + iVar2);
  _DAT_01dc2690 = _DAT_01dc2690 + 1;
  iVar3 = FUN_005806a0();
  _DAT_01da6474 = iVar3 / 0x12 - _DAT_01da6474;
  if (_DAT_01da6474 < 0) {
    _DAT_01da6474 = 0;
  }
  else if (0x20000 < _DAT_01da6474) {
    _DAT_01da6474 = 0x20000;
  }
  _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
  _DAT_01dc5c7c = _DAT_01dc5c7c + 1;
  _DAT_01da6474 = iVar3 / 0x12;
  *(int *)(&DAT_01dc2698 + iVar2) = _DAT_01dc5c7c;
  *piVar5 = _DAT_01da6478;
  FUN_005a28f0(&DAT_01dc269c + iVar2,1,2);
  if (param_3 < 0) {
    iVar3 = 0;
    piVar4 = piVar5;
    if (0 < *(int *)(param_1 + 0x1c)) {
      do {
        *(byte *)(piVar5 + 2) = 0;
        piVar4[3] = _DAT_01da6478 + -0x3c0000;
        iVar3 = iVar3 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x1c));
    }
  }
  else {
    *(byte *)((int)piVar5 + param_3 + 8) = 0;
    *(int *)(iVar2 + 0x1dc26a0 + param_3 * 4) = _DAT_01da6478 + -0x3c0000;
  }
  puVar1 = &DAT_01dc26a8 + iVar2;
  (&DAT_01dc269c)[*(int *)(param_1 + 0x124) + iVar2] = 1;
  FUN_005a28f0(puVar1,0,0x100);
  FUN_005a4ee0(puVar1,param_2,0xff);
  FUN_00506a00(param_1,param_1 + *(int *)(param_1 + 0x124) * 0x80 + 0x3c,
               *(uint *)(&DAT_01dc2698 + iVar2),param_1 + 8,puVar1);
  return;
}
