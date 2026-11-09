// Name: core_game.cpp_FUN_004beb80
// Address: 004beb80
// Address Range: [[004beb80, 004bec1a]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004beb80(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004beb80(int param_1,char *param_2,uint param_3,uint param_4,uint param_5)

{
  char cVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x968) != '\0') {
    _DAT_01d71de0 = "..\\core\\game.cpp";
    _DAT_01d71de4 = 0x122b;
    core_main_c_FUN_004e4330("CGame::displayBitmap - tried to queue %s, but %s already queued!",param_2,param_1 + 0x968);
  }
  pcVar2 = (char *)(param_1 + 0x968);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0xa68) = param_3;
  *(uint *)(param_1 + 0xa6c) = param_4;
  *(uint *)(param_1 + 0x438) = param_5;
  _DAT_01d22b44 = (uint)((param_5 & 0x7fffffff) == 0);
  return;
}
