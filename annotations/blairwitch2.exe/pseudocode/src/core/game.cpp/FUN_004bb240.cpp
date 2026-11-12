// Name: core_game.cpp_FUN_004bb240
// Address: 004bb240
// Address Range: [[004bb099, 004bb236] [004bb240, 004bb27b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bb240(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bb240(CGame *this_ptr)

{
  _DAT_01cb80e0 = 1;
  _DAT_01cb8110 = DAT_006141b8 / 2;
  _DAT_01cb8114 = DAT_006141bc / 2;
  _DAT_01cb810c = 0;
  core_game_cpp_calculateIrisFadeCenter_FUN_004bb2c0();
  return;
}
