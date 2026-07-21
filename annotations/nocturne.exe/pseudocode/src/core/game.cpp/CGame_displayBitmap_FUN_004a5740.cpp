// Name: core_game.cpp_CGame_displayBitmap_FUN_004a5740
// Address: 004a5740
// Address Range: [[004a5740, 004a57b8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004a5740(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004a5740(int param_1,char *param_2,uint param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x8b4) != '\0') {
    _DAT_01cc4800 = "..\\core\\game.cpp";
    _DAT_01cc4804 = 0xfcf;
    FUN_004c8440("CGame::displayBitmap - tried to queue %s, but %s already queued!",param_2,param_1 + 0x8b4);
  }
  pcVar2 = (char *)(param_1 + 0x8b4);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x9b4) = param_3;
  *(uint *)(param_1 + 0x9b8) = param_4;
  return;
}
