// Name: core_game.cpp_drawKeyBindingEntry_FUN_0049b420
// Address: 0049b420
// Address Range: [[0049b420, 0049b4df]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_0049b420(EInputCodeType key_code,char *action_name)

#include "nocturne.h"

void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_0049b420(EInputCodeType key_code,char *action_name)

{
  char *pcVar1;
  char local_110 [256];
  
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(key_code);
  _sprintf(local_110,"%s = %s",pcVar1,action_name);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_110,g_INT_01c78adc,g_INT_01c78ae0,7,-1);
  g_INT_01c78ae0 = g_INT_01c78ae0 + g_INT_01c78ae4;
  if (g_INT_01c78ae0 <= g_WindowHeight + g_INT_01c78ae4 * -4) {
    return;
  }
  g_INT_01c78ae0 = g_INT_01c78ae4 * 6;
  g_INT_01c78adc = g_INT_01c78adc + g_WindowWidth / 3;
  return;
}
