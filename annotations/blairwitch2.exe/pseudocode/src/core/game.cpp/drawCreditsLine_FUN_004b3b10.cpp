// Name: core_game.cpp_drawCreditsLine_FUN_004b3b10
// Address: 004b3b10
// Address Range: [[004b3b10, 004b3b8f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004b3b10(char *text_string)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCreditsLine_FUN_004b3b10(char *text_string)

{
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,text_string,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_HelpCursorY <= g_INT_006141bc + g_HelpLineHeight * -4) {
    return;
  }
  g_HelpCursorY = g_HelpLineHeight * 6;
  g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  return;
}
