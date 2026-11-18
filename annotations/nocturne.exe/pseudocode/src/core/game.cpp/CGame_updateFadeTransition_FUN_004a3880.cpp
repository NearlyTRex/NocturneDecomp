// Name: core_game.cpp_CGame_updateFadeTransition_FUN_004a3880
// Address: 004a3880
// Address Range: [[004a3880, 004a3955]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(CGame *this_ptr)

{
  if (g_IrisFadeType != 0) {
    if (g_IrisFadeType < 4) {
      if ((g_IrisFadeType != 2) ||
         (g_IrisFadeRadius =
               ((float)this_ptr->delta_time_int * (float)256) /
               ((float)31457280 / (float)g_WindowHeight) + g_IrisFadeRadius,
         g_IrisFadeRadius <= (float)g_WindowWidth)) {
        if ((g_IrisFadeType == 3) &&
           (g_IrisFadeRadius =
                 g_IrisFadeRadius -
                 ((float)this_ptr->delta_time_int * (float)256) /
                 ((float)31457280 / (float)g_WindowHeight), g_IrisFadeRadius < 0.0)) {
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
