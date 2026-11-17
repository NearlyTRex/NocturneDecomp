// Name: core_game.cpp_CGame_updateFadeTransition_FUN_004bb2f0
// Address: 004bb2f0
// Address Range: [[004bb2f0, 004bb3c5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004bb2f0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004bb2f0(CGame *this_ptr)

{
  if (g_IrisFadeType != 0) {
    if (g_IrisFadeType < 4) {
      if ((g_IrisFadeType != 2) ||
         (g_IrisFadeRadius =
               ((float)this_ptr->delta_time_int * (float)256) /
               ((float)31457280 / (float)g_INT_006141bc) + g_IrisFadeRadius,
         g_IrisFadeRadius <= (float)g_INT_006141b8)) {
        if ((g_IrisFadeType == 3) &&
           (g_IrisFadeRadius =
                 g_IrisFadeRadius -
                 ((float)this_ptr->delta_time_int * (float)256) /
                 ((float)31457280 / (float)g_INT_006141bc), g_IrisFadeRadius < 0.0)) {
          g_IrisFadeRadius = 0.0;
          g_IrisFadeType = 4;
          return;
        }
        if (g_IrisFadeType == 1) {
          g_IrisFadeType = 2;
        }
      }
      else {
        g_IrisFadeType = 0;
      }
    }
    else {
      g_IrisFadeType = 5;
    }
  }
  return;
}
