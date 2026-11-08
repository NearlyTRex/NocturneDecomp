// Name: FUN_005305a0
// Address: 005305a0
// Address Range: [[005305a0, 00530657]]
// Convention: unknown
// Signature: void FUN_005305a0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005305a0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x11c) < 0) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x9cd;
    FUN_005030e0("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  *(int *)(param_1 + 0x174) = param_2[1];
  FUN_004d7f50(0x01CCF390,param_2[2]);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar4 = 0;
    piVar1 = param_2;
    do {
      piVar6 = (int *)(iVar4 + 0x1d06aa4);
      iVar4 = iVar4 + 4;
      piVar5 = piVar1 + 3;
      piVar6 = (int *)(*piVar6 + 0xc1d8);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
  }
  *(int *)(*(int *)(param_1 + 0x11c) * 0x7c + 0x68 + param_1) = *param_2 + 1;
  return;
}
