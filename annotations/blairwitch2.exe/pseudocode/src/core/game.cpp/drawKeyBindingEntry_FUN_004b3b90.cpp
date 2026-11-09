// Name: core_game.cpp_drawKeyBindingEntry_FUN_004b3b90
// Address: 004b3b90
// Address Range: [[004b3b90, 004b3c4f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004b3b90(EInputCodeType key_code,char *action_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004b3b90(EInputCodeType key_code,char *action_name)

{
  uint uVar1;
  byte auStack_110 [256];
  
  uVar1 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(key_code,action_name);
  FUN_005b7790(auStack_110,"?%s = %s" + 1,uVar1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,auStack_110,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (_DAT_01cb80ec <= DAT_006141bc + _DAT_01cb80f0 * -4) {
    return;
  }
  _DAT_01cb80ec = _DAT_01cb80f0 * 6;
  _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  return;
}
