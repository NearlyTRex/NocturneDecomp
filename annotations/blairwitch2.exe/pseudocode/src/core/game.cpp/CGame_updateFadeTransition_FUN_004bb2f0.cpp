// Name: core_game.cpp_CGame_updateFadeTransition_FUN_004bb2f0
// Address: 004bb2f0
// Address Range: [[004bb2f0, 004bb3c5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004bb2f0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004bb2f0(CGame *this_ptr)

{
  if (g_INT_01cb80e0 != 0) {
    if (g_INT_01cb80e0 < 4) {
      if ((g_INT_01cb80e0 != 2) ||
         (g_FLOAT_01cb810c =
               ((float)this_ptr->delta_time_int * (float)256) /
               ((float)31457280 / (float)g_INT_006141bc) + g_FLOAT_01cb810c,
         g_FLOAT_01cb810c <= (float)g_INT_006141b8)) {
        if ((g_INT_01cb80e0 == 3) &&
           (g_FLOAT_01cb810c =
                 g_FLOAT_01cb810c -
                 ((float)this_ptr->delta_time_int * (float)256) /
                 ((float)31457280 / (float)g_INT_006141bc), g_FLOAT_01cb810c < 0.0)) {
          g_FLOAT_01cb810c = 0.0;
          g_INT_01cb80e0 = 4;
          return;
        }
        if (g_INT_01cb80e0 == 1) {
          g_INT_01cb80e0 = 2;
        }
      }
      else {
        g_INT_01cb80e0 = 0;
      }
    }
    else {
      g_INT_01cb80e0 = 5;
    }
  }
  return;
}
