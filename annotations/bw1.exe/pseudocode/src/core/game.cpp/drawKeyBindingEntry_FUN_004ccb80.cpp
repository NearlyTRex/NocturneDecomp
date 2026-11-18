// Name: core_game.cpp_drawKeyBindingEntry_FUN_004ccb80
// Address: 004ccb80
// Address Range: [[004ccb80, 004ccc3f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004ccb80(EInputCodeType key_code,char *action_name)

#include "nocturne.h"

void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004ccb80(EInputCodeType key_code,char *action_name)

{
  char acStack_110 [256];
  
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(key_code);
  _sprintf(acStack_110,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_ThemeFont,acStack_110,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_HelpCursorY <= g_INT_0061b49c + g_HelpLineHeight * -4) {
    return;
  }
  g_HelpCursorY = g_HelpLineHeight * 6;
  g_HelpCursorX = g_HelpCursorX + g_INT_0061b498 / 3;
  return;
}
