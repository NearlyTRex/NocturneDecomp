// Name: core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0
// Address: 004119a0
// Address Range: [[004119a0, 004119df]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(CPuzzle *puzzle,int activate)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(CPuzzle *puzzle,int activate)

{
  g_CPuzzle_PTR_007dffb4 = (CPuzzle *)activate;
  if (activate != 0) {
    g_CPuzzle_PTR_007dffb4 = puzzle;
    g_INT_007dffbc = g_BIT_INTEGER32_01c5fae4.dword;
  }
  (**(code **)((int)puzzle->vtable + 0x14))(puzzle,activate);
  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004ba490(g_CGamePtr);
  return;
}
