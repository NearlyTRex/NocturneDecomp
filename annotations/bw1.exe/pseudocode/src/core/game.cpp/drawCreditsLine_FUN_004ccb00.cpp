// Name: core_game.cpp_drawCreditsLine_FUN_004ccb00
// Address: 004ccb00
// Address Range: [[004ccb00, 004ccb7f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004ccb00(char *text_string)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_drawCreditsLine_FUN_004ccb00(char *text_string)

{
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,text_string,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (_DAT_01cd0c50 <= DAT_0061b49c + _DAT_01cd0c54 * -4) {
    return;
  }
  _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
  _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  return;
}
