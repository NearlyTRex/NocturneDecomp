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
            (g_CBitFont_PTR_0152d244,acStack_110,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_01cd0c50 <= g_INT_0061b49c + g_INT_01cd0c54 * -4) {
    return;
  }
  g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
  g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  return;
}
