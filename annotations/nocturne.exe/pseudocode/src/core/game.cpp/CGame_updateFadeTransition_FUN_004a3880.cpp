// Name: core_game.cpp_CGame_updateFadeTransition_FUN_004a3880
// Address: 004a3880
// Address Range: [[004a3880, 004a3955]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(CGame *this_ptr)

{
  if (_DAT_01c78b04 != 0) {
    if (_DAT_01c78b04 < 4) {
      if ((_DAT_01c78b04 != 2) ||
         (_DAT_01c78b08 =
               ((float)this_ptr->delta_time_int * (float)256) /
               ((float)31457280 / (float)g_WindowHeight) + _DAT_01c78b08,
         _DAT_01c78b08 <= (float)g_WindowWidth)) {
        if ((_DAT_01c78b04 == 3) &&
           (_DAT_01c78b08 =
                 _DAT_01c78b08 -
                 ((float)this_ptr->delta_time_int * (float)256) /
                 ((float)31457280 / (float)g_WindowHeight), _DAT_01c78b08 < 0.0)) {
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
