// Name: core_game.cpp_drawCreditsLine_FUN_004d8890
// Address: 004d8890
// Address Range: [[004d8890, 004d890f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004d8890(char *text_string)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCreditsLine_FUN_004d8890(char *text_string)

{
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,text_string,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_HelpCursorY <= g_WindowHeight + g_HelpLineHeight * -4) {
    return;
  }
  g_HelpCursorY = g_HelpLineHeight * 6;
  g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  return;
}
