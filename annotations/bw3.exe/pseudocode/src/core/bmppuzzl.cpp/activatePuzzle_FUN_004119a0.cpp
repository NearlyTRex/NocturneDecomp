// Name: core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0
// Address: 004119a0
// Address Range: [[004119a0, 004119df]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(CPuzzle *puzzle,int activate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(CPuzzle *puzzle,int activate)

{
  DAT_007dffb4 = (CPuzzle *)activate;
  if (activate != 0) {
    DAT_007dffb4 = puzzle;
    DAT_007dffbc = _DAT_01c5fae4;
  }
  (**(code **)((int)puzzle->vtable + 0x14))(puzzle,activate);
  core_game_cpp_FUN_004ba490(g_CGamePtr);
  return;
}
