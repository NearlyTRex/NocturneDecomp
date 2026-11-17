// Name: core_game.cpp_drawCreditsLine_FUN_0049b3a0
// Address: 0049b3a0
// Address Range: [[0049b3a0, 0049b41f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_0049b3a0(char *text_string)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCreditsLine_FUN_0049b3a0(char *text_string)

{
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,text_string,g_INT_01c78adc,g_INT_01c78ae0,7,-1);
  g_INT_01c78ae0 = g_INT_01c78ae0 + g_INT_01c78ae4;
  if (g_INT_01c78ae0 <= g_WindowHeight + g_INT_01c78ae4 * -4) {
    return;
  }
  g_INT_01c78ae0 = g_INT_01c78ae4 * 6;
  g_INT_01c78adc = g_INT_01c78adc + g_WindowWidth / 3;
  return;
}
