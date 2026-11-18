// Name: core_game.cpp_drawCreditsLine_FUN_004b5040
// Address: 004b5040
// Address Range: [[004b5040, 004b50ea]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004b5040(char *text_string)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCreditsLine_FUN_004b5040(char *text_string)

{
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,text_string,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,text_string,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_01d22c58 <= g_INT_005fba1c + g_INT_01d22c5c * -4) {
    return;
  }
  g_INT_01d22c58 = g_INT_01d22c5c * 6;
  g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  return;
}
