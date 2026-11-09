// Name: core_game.cpp_FUN_004b50ee
// Address: 004b50ee
// Address Range: [[004b50ee, 004b51d7]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b50ee(EInputCodeType param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b50ee(EInputCodeType param_1,uint param_2)

{
  char *pcVar1;
  byte auStack_110 [256];
  
  pcVar1 = core_menu_cpp_FUN_004eaa60(param_1);
  FUN_005a28c0(auStack_110,"?%s = %s" + 1,pcVar1,param_2);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,auStack_110,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,auStack_110,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (_DAT_01d22c58 <= DAT_005fba1c + _DAT_01d22c5c * -4) {
    return;
  }
  _DAT_01d22c58 = _DAT_01d22c5c * 6;
  _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  return;
}
