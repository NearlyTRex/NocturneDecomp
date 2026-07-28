// Name: core_game.cpp_drawCreditsLine_FUN_0049b3a0
// Address: 0049b3a0
// Address Range: [[0049b3a0, 0049b41f]]
// Convention: unknown
// Signature: void core_game_cpp_drawCreditsLine_FUN_0049b3a0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_drawCreditsLine_FUN_0049b3a0(char *param_1)

{
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b9900,param_1,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (_DAT_01c78ae0 <= DAT_005b7620 + _DAT_01c78ae4 * -4) {
    return;
  }
  _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
  _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  return;
}
