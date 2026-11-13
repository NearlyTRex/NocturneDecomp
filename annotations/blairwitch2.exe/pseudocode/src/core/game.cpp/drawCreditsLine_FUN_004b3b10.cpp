// Name: core_game.cpp_drawCreditsLine_FUN_004b3b10
// Address: 004b3b10
// Address Range: [[004b3b10, 004b3b8f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004b3b10(char *text_string)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_drawCreditsLine_FUN_004b3b10(char *text_string)

{
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,text_string,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (_DAT_01cb80ec <= DAT_006141bc + _DAT_01cb80f0 * -4) {
    return;
  }
  _DAT_01cb80ec = _DAT_01cb80f0 * 6;
  _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  return;
}
