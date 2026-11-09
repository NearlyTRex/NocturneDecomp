// Name: core_game.cpp_FUN_004b3b0e
// Address: 004b3b0e
// Address Range: [[004b3b0e, 004b3b8f]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b3b0e(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b3b0e(uint param_1)

{
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,param_1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (_DAT_01cb80ec <= DAT_006141bc + _DAT_01cb80f0 * -4) {
    return;
  }
  _DAT_01cb80ec = _DAT_01cb80f0 * 6;
  _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  return;
}
