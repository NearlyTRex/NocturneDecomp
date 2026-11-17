// Name: core_game.cpp_CGame_fadeIn_FUN_004a3a50
// Address: 004a3a50
// Address Range: [[004a3a50, 004a3a67]]
// Convention: __cdecl
// Signature: uint __cdecl core_game_cpp_CGame_fadeIn_FUN_004a3a50(CGame *this_ptr)

#include "nocturne.h"

uint __cdecl core_game_cpp_CGame_fadeIn_FUN_004a3a50(CGame *this_ptr)

{
  if ((g_IrisFadeType != 0) && (g_IrisFadeType != 5)) {
    return 0;
  }
  return 1;
}
