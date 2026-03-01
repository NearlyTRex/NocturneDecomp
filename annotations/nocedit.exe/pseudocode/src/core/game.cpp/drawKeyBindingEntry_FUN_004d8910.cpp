// Name: core_game.cpp_drawKeyBindingEntry_FUN_004d8910
// Address: 004d8910
// Address Range: [[004d8910, 004d89cf]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004d8910(EInputCodeType key_code,char *action_name)

#include "nocturne.h"

void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004d8910(EInputCodeType key_code,char *action_name)

{
  char *pcVar1;
  char local_110 [256];
  
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(key_code);
  _sprintf(local_110,"%s = %s",pcVar1,action_name);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_110,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_HelpCursorY <= g_WindowHeight + g_HelpLineHeight * -4) {
    return;
  }
  g_HelpCursorY = g_HelpLineHeight * 6;
  g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  return;
}
