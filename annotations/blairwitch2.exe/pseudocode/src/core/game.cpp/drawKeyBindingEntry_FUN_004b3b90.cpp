// Name: core_game.cpp_drawKeyBindingEntry_FUN_004b3b90
// Address: 004b3b90
// Address Range: [[004b3b90, 004b3c4f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004b3b90(EInputCodeType key_code,char *action_name)

#include "nocturne.h"

void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004b3b90(EInputCodeType key_code,char *action_name)

{
  char acStack_110 [256];
  
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(key_code);
  _sprintf(acStack_110,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_CBitFont_PTR_01511cc0,acStack_110,g_INT_01cb80e8,g_INT_01cb80ec,7,-1);
  g_INT_01cb80ec = g_INT_01cb80ec + g_INT_01cb80f0;
  if (g_INT_01cb80ec <= g_INT_006141bc + g_INT_01cb80f0 * -4) {
    return;
  }
  g_INT_01cb80ec = g_INT_01cb80f0 * 6;
  g_INT_01cb80e8 = g_INT_01cb80e8 + g_INT_006141b8 / 3;
  return;
}
