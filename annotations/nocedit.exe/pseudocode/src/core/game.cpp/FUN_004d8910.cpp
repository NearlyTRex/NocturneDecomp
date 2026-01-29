// Name: core_game.cpp_FUN_004d8910
// Address: 004d8910
// Address Range: [[004d8910, 004d89cf]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d8910(void)

#include "nocturne.h"

/* Signature: byte core_game.cpp_FUN_004d8910(uint param_1, uint param_2) */

void core_game_cpp_FUN_004d8910(void)

{
  char *pcVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  char local_110 [256];
  
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(in_stack_00000004);
  sprintf(local_110,"%s = %s",pcVar1,in_stack_00000008);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_110,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (INT_02d831c8 <= g_WindowHeight + INT_02d831cc * -4) {
    return;
  }
  INT_02d831c8 = INT_02d831cc * 6;
  INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  return;
}
