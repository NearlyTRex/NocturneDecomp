// Name: FUN_004ecf50
// Address: 004ecf50
// Address Range: [[004ecf50, 004ed163]]
// Convention: unknown
// Signature: void FUN_004ecf50(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ecf50(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
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
  int *piStack_14;
  
  bVar8 = 0;
  if ((*param_1 != 1) || (param_1[1] != 1)) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x8a8;
    FUN_004c8440("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((param_2 < 0) || (param_1[7] <= param_2)) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x8ae;
    FUN_004c8440("CNetGame::send - invalid player index");
  }
  uStack_c4 = 0xb;
  uStack_c8 = 0xb1;
  FUN_005644a7(acStack_67,2,0x5a0e00);
  iStack_bf = param_1[0x5b];
  uStack_c3 = _DAT_01cea404;
  pcVar7 = acStack_bb;
  iStack_6b = param_1[7];
  piVar5 = param_1 + 0x46;
  do {
    iVar3 = *piVar5;
    *pcVar7 = (char)iVar3;
    if ((char)iVar3 == '\0') break;
    cVar1 = *(char *)((int)piVar5 + 1);
    piVar5 = (int *)((int)piVar5 + 2);
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar3 = 0;
  if (0 < param_1[7]) {
    piVar6 = param_1 + 8;
    pcVar7 = acStack_67;
    piStack_14 = piVar6;
    pcVar4 = pcVar7;
    piVar5 = param_1;
LAB_004ed075:
    do {
      iVar2 = *piVar6;
      *pcVar7 = (char)iVar2;
      if ((char)iVar2 != '\0') {
        cVar1 = *(char *)((int)piVar6 + 1);
        piVar6 = (int *)((int)piVar6 + 2);
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
        if (cVar1 != '\0') goto LAB_004ed075;
      }
      aiStack_53[iVar3 * 10] = piVar5[0xf];
      aiStack_53[iVar3 * 10 + (uint)bVar8 * -2 + 1] = piVar5[(uint)bVar8 * -2 + 0x10];
      aiStack_53[iVar3 * 10 + 4] = piVar5[0x19];
      aiStack_53[iVar3 * 10 + 2] = piVar5[0xd];
      pcVar7 = pcVar4 + 0x28;
      aiStack_53[iVar3 * 10 + 3] = piVar5[0xe];
      iVar3 = iVar3 + 1;
      piVar6 = piStack_14 + 0x1e;
      piStack_14 = piVar6;
      pcVar4 = pcVar7;
      piVar5 = piVar5 + 0x1e;
    } while (iVar3 < param_1[7]);
  }
  FUN_004eb350(param_1,param_2,&uStack_c8);
  iVar3 = FUN_00558a30();
  _DAT_01cea3f4 = iVar3 / 0x12 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  _DAT_01cea3f4 = iVar3 / 0x12;
  param_1[param_2 * 0x1e + 0x16] = _DAT_01cea3f8;
  return;
}
