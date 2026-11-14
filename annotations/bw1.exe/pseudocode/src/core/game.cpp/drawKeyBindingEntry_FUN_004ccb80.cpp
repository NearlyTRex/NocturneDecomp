// Name: core_game.cpp_drawKeyBindingEntry_FUN_004ccb80
// Address: 004ccb80
// Address Range: [[004ccb80, 004ccc3f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004ccb80(EInputCodeType key_code,char *action_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004ccb80(EInputCodeType key_code,char *action_name)

{
  char acStack_110 [256];
  
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(key_code);
  _sprintf(acStack_110,"?%s = %s" + 1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,acStack_110,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (_DAT_01cd0c50 <= DAT_0061b49c + _DAT_01cd0c54 * -4) {
    return;
  }
  _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
  _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  return;
}
