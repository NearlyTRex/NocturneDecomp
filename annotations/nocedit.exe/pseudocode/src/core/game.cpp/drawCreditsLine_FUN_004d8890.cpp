// Name: core_game.cpp_drawCreditsLine_FUN_004d8890
// Address: 004d8890
// Address Range: [[004d8890, 004d890f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCreditsLine_FUN_004d8890(char *text_string)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCreditsLine_FUN_004d8890(char *text_string)

{
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,text_string,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (INT_02d831c8 <= g_WindowHeight + INT_02d831cc * -4) {
    return;
  }
  INT_02d831c8 = INT_02d831cc * 6;
  INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  return;
}
