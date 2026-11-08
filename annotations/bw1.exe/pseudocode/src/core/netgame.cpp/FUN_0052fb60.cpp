// Name: FUN_0052fb60
// Address: 0052fb60
// Address Range: [[0052fb60, 0052fd73]]
// Convention: unknown
// Signature: void FUN_0052fb60(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052fb60(int *param_1,int param_2)

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
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x8a8;
    FUN_005030e0("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((param_2 < 0) || (param_1[7] <= param_2)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x8ae;
    FUN_005030e0("CNetGame::send - invalid player index");
  }
  uStack_c4 = 0xb;
  uStack_c8 = 0xb1;
  FUN_005c0357(acStack_67,2,0x6043a0);
  iStack_bf = param_1[0x5d];
  uStack_c3 = _DAT_01d51dac;
  pcVar7 = acStack_bb;
  iStack_6b = param_1[7];
  piVar5 = param_1 + 0x48;
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
LAB_0052fc85:
    do {
      iVar2 = *piVar6;
      *pcVar7 = (char)iVar2;
      if ((char)iVar2 != '\0') {
        cVar1 = *(char *)((int)piVar6 + 1);
        piVar6 = (int *)((int)piVar6 + 2);
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
        if (cVar1 != '\0') goto LAB_0052fc85;
      }
      aiStack_53[iVar3 * 10] = piVar5[0xf];
      aiStack_53[iVar3 * 10 + (uint)bVar8 * -2 + 1] = piVar5[(uint)bVar8 * -2 + 0x10];
      aiStack_53[iVar3 * 10 + 4] = piVar5[0x19];
      aiStack_53[iVar3 * 10 + 2] = piVar5[0xd];
      pcVar7 = pcVar4 + 0x28;
      aiStack_53[iVar3 * 10 + 3] = piVar5[0xe];
      iVar3 = iVar3 + 1;
      piVar6 = piStack_14 + 0x1f;
      piStack_14 = piVar6;
      pcVar4 = pcVar7;
      piVar5 = piVar5 + 0x1f;
    } while (iVar3 < param_1[7]);
  }
  FUN_0052df50(param_1,param_2,&uStack_c8);
  iVar3 = FUN_005b2420();
  _DAT_01d51d9c = iVar3 / 0x12 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
  _DAT_01d51d9c = iVar3 / 0x12;
  param_1[param_2 * 0x1f + 0x16] = _DAT_01d51da0;
  return;
}
