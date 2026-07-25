// Name: FUN_004a0430
// Address: 004a0430
// Address Range: [[004a0430, 004a04da]]
// Convention: unknown
// Signature: void FUN_004a0430(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004a0430(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  uVar4 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0;
  for (iVar5 = ~uVar4 - 1; 0 < iVar5; iVar5 = iVar5 + -1) {
    bVar2 = *(byte *)(iVar5 + 0x1c78aef);
    uVar3 = toupper(*param_1);
    if (bVar2 == uVar3) {
      iVar6 = iVar6 + 1;
    }
    param_1 = param_1 + 1;
  }
  if (iVar6 != ~uVar4 - 1) {
    return;
  }
  DAT_01c78af0 = 0;
  core_game_cpp_giveHeroWeapon_FUN_004a02e0(param_2);
  core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,param_3,0x40a00000);
  core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
  return;
}
