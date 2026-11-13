// Name: core_game.cpp_FUN_004b5040
// Address: 004b5040
// Address Range: [[004b5040, 004b50ea]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b5040(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_game_cpp_FUN_004b5040(void)

{
  uint in_stack_00000004;
  
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,in_stack_00000004,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (_DAT_01d22c58 <= DAT_005fba1c + _DAT_01d22c5c * -4) {
    return;
  }
  _DAT_01d22c58 = _DAT_01d22c5c * 6;
  _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  return;
}
