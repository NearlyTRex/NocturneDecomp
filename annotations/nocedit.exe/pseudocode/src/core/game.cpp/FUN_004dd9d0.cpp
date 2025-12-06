// Name: core_game.cpp_FUN_004dd9d0
// Address: 004dd9d0
// Address Range: [[004dd9d0, 004dda7a]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004dd9d0()

#include "nocturne.h"

void core_game_cpp_FUN_004dd9d0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_00000010;
  int iVar6;
  int iVar7;
  
  uVar2 = 0xffffffff;
  pbVar5 = in_stack_00000004;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  iVar3 = ~uVar2 - 1;
  iVar4 = 0;
  iVar6 = iVar3;
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      bVar1 = g_InputHistory[iVar3];
      uVar2 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*in_stack_00000004);
      if (bVar1 == uVar2) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + -1;
      in_stack_00000004 = in_stack_00000004 + 1;
    } while (iVar7 < iVar3);
  }
  if (iVar4 != iVar6) {
    return;
  }
  g_InputHistory[1] = '\0';
  core_game_cpp_giveHeroWeapon_FUN_004dd870(in_stack_00000008);
  core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,in_stack_00000010,5.0);
  core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav");
  return;
}
