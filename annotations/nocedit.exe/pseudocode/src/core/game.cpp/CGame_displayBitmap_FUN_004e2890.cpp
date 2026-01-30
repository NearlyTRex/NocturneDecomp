// Name: core_game.cpp_CGame_displayBitmap_FUN_004e2890
// Address: 004e2890
// Address Range: [[004e2890, 004e2908]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004e2890(void)

#include "nocturne.h"

/* Signature: byte core_game.cpp_CGame_displayBitmap(CGame* param_1, uint param_2,
   uint param_3, uint param_4) */

void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004e2890(void)

{
  char cVar1;
  char *pcVar2;
  int in_stack_00000004;
  char *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  if (*(char *)(in_stack_00000004 + 0x8b4) != '\0') {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 0xfc6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::displayBitmap - tried to queue %s, but %s already queued!");
  }
  pcVar2 = (char *)(in_stack_00000004 + 0x8b4);
  do {
    cVar1 = *in_stack_00000008;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(in_stack_00000004 + 0x9b4) = in_stack_0000000c;
  *(uint *)(in_stack_00000004 + 0x9b8) = in_stack_00000010;
  return;
}
