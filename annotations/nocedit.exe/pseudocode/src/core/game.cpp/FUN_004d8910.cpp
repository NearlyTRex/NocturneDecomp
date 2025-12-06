// Name: core_game.cpp_FUN_004d8910
// Address: 004d8910
// Address Range: [[004d8910, 004d89cf]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004d8910()

#include "nocturne.h"

/* Signature: byte core_game.cpp_FUN_004d8910(uint param_1, uint param_2) */

void core_game_cpp_FUN_004d8910(void)

{
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  char acStack_108 [248];
  
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(in_stack_00000004);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef4,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_108,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (DAT_02d831c8 <= g_WindowHeight + DAT_02d831cc * -4) {
    return;
  }
  DAT_02d831c8 = DAT_02d831cc * 6;
  DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  return;
}
