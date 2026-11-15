// Name: core_game.cpp_drawCreditsLine_FUN_004b5040
// Address: 004b5040
// Address Range: [[004b5040, 004b50ea]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004b5040(char *text_string)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_drawCreditsLine_FUN_004b5040(char *text_string)

{
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (_DAT_01549aa8,text_string,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (_DAT_01549aa8,text_string,_DAT_01d22c54,_DAT_01d22c58,7,-1);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (_DAT_01d22c58 <= DAT_005fba1c + _DAT_01d22c5c * -4) {
    return;
  }
  _DAT_01d22c58 = _DAT_01d22c5c * 6;
  _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  return;
}
