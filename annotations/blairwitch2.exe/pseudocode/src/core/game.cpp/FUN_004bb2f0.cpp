// Name: core_game.cpp_FUN_004bb2f0
// Address: 004bb2f0
// Address Range: [[004bb2f0, 004bb3c5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bb2f0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bb2f0(CGame *this_ptr)

{
  if (_DAT_01cb80e0 != 0) {
    if (_DAT_01cb80e0 < 4) {
      if ((_DAT_01cb80e0 != 2) ||
         (_DAT_01cb810c =
               ((float)*(int *)&this_ptr->field_0x280 * (float)_DAT_005d83fb) /
               ((float)_DAT_005d83f3 / (float)DAT_006141bc) + _DAT_01cb810c,
         _DAT_01cb810c <= (float)DAT_006141b8)) {
        if ((_DAT_01cb80e0 == 3) &&
           (_DAT_01cb810c =
                 _DAT_01cb810c -
                 ((float)*(int *)&this_ptr->field_0x280 * (float)_DAT_005d83fb) /
                 ((float)_DAT_005d83f3 / (float)DAT_006141bc), _DAT_01cb810c < 0.0)) {
          _DAT_01cb810c = 0.0;
          _DAT_01cb80e0 = 4;
          return;
        }
        if (_DAT_01cb80e0 == 1) {
          _DAT_01cb80e0 = 2;
        }
      }
      else {
        _DAT_01cb80e0 = 0;
      }
    }
    else {
      _DAT_01cb80e0 = 5;
    }
  }
  return;
}
