// Name: core_game.cpp_drawCreditsLine_FUN_004b3b10
// Address: 004b3b10
// Address Range: [[004b3b10, 004b3b8f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004b3b10(char *text_string)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCreditsLine_FUN_004b3b10(char *text_string)

{
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_CBitFont_PTR_01511cc0,text_string,g_INT_01cb80e8,g_INT_01cb80ec,7,-1);
  g_INT_01cb80ec = g_INT_01cb80ec + g_INT_01cb80f0;
  if (g_INT_01cb80ec <= g_INT_006141bc + g_INT_01cb80f0 * -4) {
    return;
  }
  g_INT_01cb80ec = g_INT_01cb80f0 * 6;
  g_INT_01cb80e8 = g_INT_01cb80e8 + g_INT_006141b8 / 3;
  return;
}
