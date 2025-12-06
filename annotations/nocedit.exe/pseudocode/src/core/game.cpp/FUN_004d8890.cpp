// Name: core_game.cpp_FUN_004d8890
// Address: 004d8890
// Address Range: [[004d8890, 004d890f]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004d8890()

#include "nocturne.h"

void core_game_cpp_FUN_004d8890(void)

{
  char *in_stack_00000004;
  
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,in_stack_00000004,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (DAT_02d831c8 <= g_WindowHeight + DAT_02d831cc * -4) {
    return;
  }
  DAT_02d831c8 = DAT_02d831cc * 6;
  DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  return;
}
