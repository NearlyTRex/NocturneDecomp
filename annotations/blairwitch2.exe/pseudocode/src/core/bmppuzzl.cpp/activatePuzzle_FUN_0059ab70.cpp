// Name: core_bmppuzzl.cpp_activatePuzzle_FUN_0059ab70
// Address: 0059ab70
// Address Range: [[0059ab70, 0059abaf]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_0059ab70(CPuzzle *puzzle,int activate)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_0059ab70(CPuzzle *puzzle,int activate)

{
  g_INT_026677e0 = activate;
  if (activate != 0) {
    g_INT_026677e0 = (int)puzzle;
    g_INT_026677e8 = g_MouseButtonFlags.dword;
  }
  (**(code **)((int)puzzle->vtable + 0x14))(puzzle,activate);
  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(g_CGamePtr);
  return;
}
