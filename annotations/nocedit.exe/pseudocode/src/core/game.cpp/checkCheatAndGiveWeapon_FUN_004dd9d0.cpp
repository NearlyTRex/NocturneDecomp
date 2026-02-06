// Name: core_game.cpp_checkCheatAndGiveWeapon_FUN_004dd9d0
// Address: 004dd9d0
// Address Range: [[004dd9d0, 004dda7a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_checkCheatAndGiveWeapon_FUN_004dd9d0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_checkCheatAndGiveWeapon_FUN_004dd9d0(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  
  uVar3 = 0xffffffff;
  pbVar6 = in_stack_00000004;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  iVar5 = 0;
  for (iVar4 = ~uVar3 - 1; 0 < iVar4; iVar4 = iVar4 + -1) {
    bVar1 = g_InputHistory[iVar4];
    uVar2 = toupper((uint)*in_stack_00000004);
    if (bVar1 == uVar2) {
      iVar5 = iVar5 + 1;
    }
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (iVar5 != ~uVar3 - 1) {
    return;
  }
  g_InputHistory[1] = '\0';
  core_game_cpp_giveHeroWeapon_FUN_004dd870(in_stack_00000008);
  core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,in_stack_0000000c,5.0);
  core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav");
  return;
}
