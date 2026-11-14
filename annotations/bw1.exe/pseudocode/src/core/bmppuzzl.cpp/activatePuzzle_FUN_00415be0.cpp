// Name: core_bmppuzzl.cpp_activatePuzzle_FUN_00415be0
// Address: 00415be0
// Address Range: [[00415be0, 00415c1f]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(CPuzzle *puzzle,int activate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(CPuzzle *puzzle,int activate)

{
  DAT_007c3978 = (CPuzzle *)activate;
  if (activate != 0) {
    DAT_007c3978 = puzzle;
    DAT_007c3980 = _DAT_01c43544;
  }
  (**(code **)((int)puzzle->vtable + 0x14))(puzzle,activate);
  core_game_cpp_FUN_004d19d0(g_CGamePtr);
  return;
}
