// Name: core_game.cpp_drawKeyBindingEntry_FUN_004b50f0
// Address: 004b50f0
// Address Range: [[004b50f0, 004b51d7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004b50f0(EInputCodeType key_code,char *action_name)

#include "nocturne.h"

void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004b50f0(EInputCodeType key_code,char *action_name)

{
  char acStack_110 [256];
  
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(key_code);
  _sprintf(acStack_110,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,acStack_110,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,acStack_110,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_01d22c58 <= g_INT_005fba1c + g_INT_01d22c5c * -4) {
    return;
  }
  g_INT_01d22c58 = g_INT_01d22c5c * 6;
  g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  return;
}
