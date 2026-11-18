// Name: core_game.cpp_drawCreditsLine_FUN_004ccb00
// Address: 004ccb00
// Address Range: [[004ccb00, 004ccb7f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004ccb00(char *text_string)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCreditsLine_FUN_004ccb00(char *text_string)

{
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_ThemeFont,text_string,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_HelpCursorY <= g_INT_0061b49c + g_HelpLineHeight * -4) {
    return;
  }
  g_HelpCursorY = g_HelpLineHeight * 6;
  g_HelpCursorX = g_HelpCursorX + g_INT_0061b498 / 3;
  return;
}
