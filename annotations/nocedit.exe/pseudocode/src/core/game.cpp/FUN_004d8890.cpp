// Name: core_game.cpp_FUN_004d8890
// Address: 004d8890
// Address Range: [[004d8890, 004d890f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d8890(void)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004d8890(void)

{
  char *in_stack_00000004;
  
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,in_stack_00000004,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (INT_02d831c8 <= g_WindowHeight + INT_02d831cc * -4) {
    return;
  }
  INT_02d831c8 = INT_02d831cc * 6;
  INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  return;
}
