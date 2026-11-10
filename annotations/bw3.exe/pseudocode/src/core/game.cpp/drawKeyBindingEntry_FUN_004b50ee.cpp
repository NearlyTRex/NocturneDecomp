// Name: core_game.cpp_drawKeyBindingEntry_FUN_004b50ee
// Address: 004b50ee
// Address Range: [[004b50ee, 004b51d7]]
// Convention: unknown
// Signature: void core_game_cpp_drawKeyBindingEntry_FUN_004b50ee(EInputCodeType param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_drawKeyBindingEntry_FUN_004b50ee(EInputCodeType param_1)

{
  char acStack_110 [256];
  
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(param_1);
  _sprintf(acStack_110,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,acStack_110,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,acStack_110,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (_DAT_01d22c58 <= DAT_005fba1c + _DAT_01d22c5c * -4) {
    return;
  }
  _DAT_01d22c58 = _DAT_01d22c5c * 6;
  _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  return;
}
