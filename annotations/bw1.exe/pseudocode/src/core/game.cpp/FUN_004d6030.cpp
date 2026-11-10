// Name: core_game.cpp_FUN_004d6030
// Address: 004d6030
// Address Range: [[004d5e89, 004d6026] [004d6030, 004d606b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d6030(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004d6030(CGame *this_ptr)

{
  _DAT_01cd0c7c = 1;
  _DAT_01cd0c84 = DAT_0061b498 / 2;
  _DAT_01cd0c88 = DAT_0061b49c / 2;
  _DAT_01cd0c80 = 0;
  core_game_cpp_calculateIrisFadeCenter_FUN_004d60b0();
  return;
}
