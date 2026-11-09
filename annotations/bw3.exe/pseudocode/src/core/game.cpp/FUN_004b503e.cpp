// Name: core_game.cpp_FUN_004b503e
// Address: 004b503e
// Address Range: [[004b503e, 004b50ea]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b503e(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b503e(uint param_1)

{
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,param_1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,param_1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (_DAT_01d22c58 <= DAT_005fba1c + _DAT_01d22c5c * -4) {
    return;
  }
  _DAT_01d22c58 = _DAT_01d22c5c * 6;
  _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  return;
}
