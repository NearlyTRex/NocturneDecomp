// Name: core_bmppuzzl.cpp_activatePuzzle_FUN_0059ab70
// Address: 0059ab70
// Address Range: [[0059ab70, 0059abaf]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_0059ab70(CPuzzle *puzzle,int activate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_0059ab70(CPuzzle *puzzle,int activate)

{
  _DAT_026677e0 = (CPuzzle *)activate;
  if (activate != 0) {
    _DAT_026677e0 = puzzle;
    _DAT_026677e8 = _DAT_01c2a384;
  }
  (**(code **)((int)puzzle->vtable + 0x14))(puzzle,activate);
  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(g_CGamePtr);
  return;
}
