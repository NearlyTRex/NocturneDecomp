// Name: FUN_00507e50
// Address: 00507e50
// Address Range: [[00507e50, 00507f00]]
// Convention: unknown
// Signature: void FUN_00507e50(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507e50(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x124) < 0) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x9cd;
    FUN_004e4330("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  *(int *)(param_1 + 0x17c) = param_2[1];
  FUN_004bf3a0(0x01D2130C,param_2[2]);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar4 = 0;
    piVar3 = param_2;
    do {
      piVar6 = (int *)(iVar4 + 0x1d5ba04);
      iVar4 = iVar4 + 4;
      piVar5 = piVar3 + 3;
      piVar6 = (int *)(*piVar6 + 0xcdd4);
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0xd;
    } while (iVar1 < *(int *)(param_1 + 0x1c));
  }
  *(int *)(*(int *)(param_1 + 0x124) * 0x80 + 0x68 + param_1) = *param_2 + 1;
  return;
}
