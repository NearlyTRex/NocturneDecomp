// Name: FUN_0050e970
// Address: 0050e970
// Address Range: [[0050e970, 0050eb7e]]
// Convention: unknown
// Signature: void FUN_0050e970(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050e970(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  byte bVar8;
  uint uStack_c8;
  byte uStack_c4;
  uint uStack_c3;
  int iStack_bf;
  char acStack_bb [80];
  int iStack_6b;
  char acStack_67 [20];
  int aiStack_53 [15];
  char *pcStack_14;
  
  bVar8 = 0;
  if ((*param_1 != 1) || (param_1[1] != 1)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x8a8;
    FUN_004e4500("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((param_2 < 0) || (param_1[7] <= param_2)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x8ae;
    FUN_004e4500("CNetGame::send - invalid player index");
  }
  uStack_c4 = 0xb;
  uStack_c8 = 0xb1;
  FUN_005b7f5f(acStack_67,2,0x5fa6a0);
  iStack_bf = param_1[0x5f];
  uStack_c3 = _DAT_01d34e44;
  pcVar7 = acStack_bb;
  iStack_6b = param_1[7];
  piVar6 = param_1 + 0x4a;
  do {
    iVar4 = *piVar6;
    *pcVar7 = (char)iVar4;
    if ((char)iVar4 == '\0') break;
    cVar1 = *(char *)((int)piVar6 + 1);
    piVar6 = (int *)((int)piVar6 + 2);
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar4 = 0;
  if (0 < param_1[7]) {
    piVar6 = param_1 + 8;
    pcVar7 = acStack_67;
    pcStack_14 = pcVar7;
    piVar5 = piVar6;
    piVar3 = param_1;
LAB_0050ea90:
    do {
      iVar2 = *piVar6;
      *pcVar7 = (char)iVar2;
      if ((char)iVar2 != '\0') {
        cVar1 = *(char *)((int)piVar6 + 1);
        piVar6 = (int *)((int)piVar6 + 2);
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
        if (cVar1 != '\0') goto LAB_0050ea90;
      }
      aiStack_53[iVar4 * 10] = piVar3[0xf];
      aiStack_53[iVar4 * 10 + (uint)bVar8 * -2 + 1] = piVar3[(uint)bVar8 * -2 + 0x10];
      aiStack_53[iVar4 * 10 + 4] = piVar3[0x19];
      aiStack_53[iVar4 * 10 + 2] = piVar3[0xd];
      piVar6 = piVar5 + 0x20;
      aiStack_53[iVar4 * 10 + 3] = piVar3[0xe];
      iVar4 = iVar4 + 1;
      pcVar7 = pcStack_14 + 0x28;
      pcStack_14 = pcVar7;
      piVar5 = piVar6;
      piVar3 = piVar3 + 0x20;
    } while (iVar4 < param_1[7]);
  }
  FUN_0050cd90(param_1,param_2,&uStack_c8);
  iVar4 = FUN_0058e9e0();
  _DAT_01d34e34 = iVar4 / 0x12 - _DAT_01d34e34;
  if (_DAT_01d34e34 < 0) {
    _DAT_01d34e34 = 0;
  }
  else if (0x20000 < _DAT_01d34e34) {
    _DAT_01d34e34 = 0x20000;
  }
  _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
  _DAT_01d34e34 = iVar4 / 0x12;
  param_1[param_2 * 0x20 + 0x16] = _DAT_01d34e38;
  return;
}
