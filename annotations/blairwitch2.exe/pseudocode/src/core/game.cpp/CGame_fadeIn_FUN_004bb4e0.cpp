// Name: core_game.cpp_CGame_fadeIn_FUN_004bb4e0
// Address: 004bb4e0
// Address Range: [[004bb4e0, 004bb4f8]]
// Convention: __cdecl
// Signature: uint __cdecl core_game_cpp_CGame_fadeIn_FUN_004bb4e0(CGame *this_ptr)

#include "nocturne.h"

uint __cdecl core_game_cpp_CGame_fadeIn_FUN_004bb4e0(CGame *this_ptr)

{
  if ((g_INT_01cb80e0 != 0) && (g_INT_01cb80e0 != 5)) {
    return 0;
  }
  return 1;
}
