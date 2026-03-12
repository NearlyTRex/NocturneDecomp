// Name: core_game.cpp_checkCheatAndGiveWeapon_FUN_004dd9d0
// Address: 004dd9d0
// Address Range: [[004dd9d0, 004dda7a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_checkCheatAndGiveWeapon_FUN_004dd9d0(char *cheat_code,char *class_name,char *message)

#include "nocturne.h"

void __cdecl core_game_cpp_checkCheatAndGiveWeapon_FUN_004dd9d0(char *cheat_code,char *class_name,char *message)

{
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char cVar1;
  byte bVar2;
  
  uVar4 = 0xffffffff;
  pcVar7 = cheat_code;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0;
  for (iVar5 = ~uVar4 - 1; 0 < iVar5; iVar5 = iVar5 + -1) {
    bVar2 = g_InputHistory[iVar5];
    uVar3 = toupper((uint)(byte)*cheat_code);
    if (bVar2 == uVar3) {
      iVar6 = iVar6 + 1;
    }
    cheat_code = (char *)((byte *)cheat_code + 1);
  }
  if (iVar6 != ~uVar4 - 1) {
    return;
  }
  g_InputHistory[1] = '\0';
  core_game_cpp_giveHeroWeapon_FUN_004dd870(class_name);
  core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,message,5.0);
  core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav");
  return;
}
