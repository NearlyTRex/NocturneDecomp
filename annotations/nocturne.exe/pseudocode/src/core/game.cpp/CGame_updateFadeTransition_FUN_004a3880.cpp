// Name: core_game.cpp_CGame_updateFadeTransition_FUN_004a3880
// Address: 004a3880
// Address Range: [[004a3880, 004a3955]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(int param_1)

{
  if (_DAT_01c78b04 != 0) {
    if (_DAT_01c78b04 < 4) {
      if ((_DAT_01c78b04 != 2) ||
         (_DAT_01c78b08 =
               ((float)*(int *)(param_1 + 0x260) * (float)_DAT_00583b0a) /
               ((float)_DAT_00583b02 / (float)DAT_005b7620) + _DAT_01c78b08,
         _DAT_01c78b08 <= (float)DAT_005b761c)) {
        if ((_DAT_01c78b04 == 3) &&
           (_DAT_01c78b08 =
                 _DAT_01c78b08 -
                 ((float)*(int *)(param_1 + 0x260) * (float)_DAT_00583b0a) /
                 ((float)_DAT_00583b02 / (float)DAT_005b7620), _DAT_01c78b08 < 0.0)) {
          _DAT_01c78b08 = 0.0;
          _DAT_01c78b04 = 4;
          return;
        }
        if (_DAT_01c78b04 == 1) {
          _DAT_01c78b04 = 2;
        }
      }
      else {
        _DAT_01c78b04 = 0;
      }
    }
    else {
      _DAT_01c78b04 = 5;
    }
  }
  return;
}
