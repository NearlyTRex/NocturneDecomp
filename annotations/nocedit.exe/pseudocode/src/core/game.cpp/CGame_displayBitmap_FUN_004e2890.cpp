// Name: core_game.cpp_CGame_displayBitmap_FUN_004e2890
// Address: 004e2890
// Address Range: [[004e2890, 004e2908]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004e2890(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004e2890(CGame *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  if (this_ptr->unk13[0x528] != '\0') {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 0xfc6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::displayBitmap - tried to queue %s, but %s already queued!");
  }
  pcVar2 = this_ptr->unk13 + 0x528;
  do {
    cVar1 = *in_stack_00000008;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(this_ptr->unk13 + 0x628) = in_stack_0000000c;
  *(uint *)(this_ptr->unk13 + 0x62c) = in_stack_00000010;
  return;
}
