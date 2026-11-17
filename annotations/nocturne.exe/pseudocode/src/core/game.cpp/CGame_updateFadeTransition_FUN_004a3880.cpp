// Name: core_game.cpp_CGame_updateFadeTransition_FUN_004a3880
// Address: 004a3880
// Address Range: [[004a3880, 004a3955]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(CGame *this_ptr)

{
  if (g_INT_01c78b04 != 0) {
    if (g_INT_01c78b04 < 4) {
      if ((g_INT_01c78b04 != 2) ||
         (g_FLOAT_01c78b08 =
               ((float)this_ptr->delta_time_int * (float)256) /
               ((float)31457280 / (float)g_WindowHeight) + g_FLOAT_01c78b08,
         g_FLOAT_01c78b08 <= (float)g_WindowWidth)) {
        if ((g_INT_01c78b04 == 3) &&
           (g_FLOAT_01c78b08 =
                 g_FLOAT_01c78b08 -
                 ((float)this_ptr->delta_time_int * (float)256) /
                 ((float)31457280 / (float)g_WindowHeight), g_FLOAT_01c78b08 < 0.0)) {
          g_FLOAT_01c78b08 = 0.0;
          g_INT_01c78b04 = 4;
          return;
        }
        if (g_INT_01c78b04 == 1) {
          g_INT_01c78b04 = 2;
        }
      }
      else {
        g_INT_01c78b04 = 0;
      }
    }
    else {
      g_INT_01c78b04 = 5;
    }
  }
  return;
}
