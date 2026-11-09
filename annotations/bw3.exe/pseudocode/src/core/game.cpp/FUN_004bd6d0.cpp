// Name: core_game.cpp_FUN_004bd6d0
// Address: 004bd6d0
// Address Range: [[004bd6d0, 004bd7c7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bd6d0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bd6d0(CGame *this_ptr)

{
  uint uVar1;
  
  uVar1 = 0;
  if (_DAT_01d22c84 != 0) {
    if (3 < _DAT_01d22c84) {
      _DAT_01d22c84 = 5;
      return;
    }
    if ((_DAT_01d22c84 == 2) &&
       (_DAT_01d22c88 =
             ((float)*(int *)&this_ptr->field_0x310 * (float)_DAT_005c3550) /
             ((float)_DAT_005c3548 / (float)DAT_005fba1c) + _DAT_01d22c88,
       (float)DAT_005fba18 < _DAT_01d22c88)) {
      _DAT_01d22c84 = 0;
      return;
    }
    if ((_DAT_01d22c84 == 3) &&
       (_DAT_01d22c88 =
             _DAT_01d22c88 -
             ((float)*(int *)&this_ptr->field_0x310 * (float)_DAT_005c3550) /
             ((float)_DAT_005c3548 / (float)DAT_005fba1c), _DAT_01d22c88 < 0.0)) {
      _DAT_01d22c88 = 0.0;
      _DAT_01d22c84 = 4;
      return;
    }
    if (_DAT_01d22c84 != 1) {
      return;
    }
    if (_DAT_01d22c94 + 1 < 3) {
      _DAT_01d22c94 = _DAT_01d22c94 + 1;
      return;
    }
    uVar1 = 2;
  }
  _DAT_01d22c94 = 0;
  _DAT_01d22c84 = uVar1;
  return;
}
