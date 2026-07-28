// Name: core_game.cpp_checkCheatAndGiveWeapon_FUN_004a0430
// Address: 004a0430
// Address Range: [[004a0430, 004a04da]]
// Convention: unknown
// Signature: void core_game_cpp_checkCheatAndGiveWeapon_FUN_004a0430(byte *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void core_game_cpp_checkCheatAndGiveWeapon_FUN_004a0430(byte *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = 0xffffffff;
  pbVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  iVar5 = 0;
  for (iVar4 = ~uVar3 - 1; 0 < iVar4; iVar4 = iVar4 + -1) {
    bVar1 = *(byte *)(iVar4 + 0x1c78aef);
    uVar2 = toupper((uint)*param_1);
    if (bVar1 == uVar2) {
      iVar5 = iVar5 + 1;
    }
    param_1 = param_1 + 1;
  }
  if (iVar5 != ~uVar3 - 1) {
    return;
  }
  DAT_01c78af0 = 0;
  core_game_cpp_giveHeroWeapon_FUN_004a02e0(param_2);
  core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,param_3,5.0);
  core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,(void *)0x0,"cheat-1.wav");
  return;
}
