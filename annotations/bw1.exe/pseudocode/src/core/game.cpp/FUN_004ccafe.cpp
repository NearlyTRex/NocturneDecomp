// Name: core_game.cpp_FUN_004ccafe
// Address: 004ccafe
// Address Range: [[004ccafe, 004ccb7f]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004ccafe(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004ccafe(uint param_1)

{
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,param_1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (_DAT_01cd0c50 <= DAT_0061b49c + _DAT_01cd0c54 * -4) {
    return;
  }
  _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
  _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  return;
}
