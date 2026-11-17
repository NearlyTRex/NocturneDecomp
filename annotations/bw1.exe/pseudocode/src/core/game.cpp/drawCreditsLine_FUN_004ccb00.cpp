// Name: core_game.cpp_drawCreditsLine_FUN_004ccb00
// Address: 004ccb00
// Address Range: [[004ccb00, 004ccb7f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004ccb00(char *text_string)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCreditsLine_FUN_004ccb00(char *text_string)

{
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,text_string,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_01cd0c50 <= g_INT_0061b49c + g_INT_01cd0c54 * -4) {
    return;
  }
  g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
  g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  return;
}
