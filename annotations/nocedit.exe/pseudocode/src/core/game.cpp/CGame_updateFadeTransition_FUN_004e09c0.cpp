// Name: core_game.cpp_CGame_updateFadeTransition_FUN_004e09c0
// Address: 004e09c0
// Address Range: [[004e09c0, 004e0a95]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004e09c0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004e09c0(CGame *this_ptr)

{
  if (DAT_02d831ec != 0) {
    if (DAT_02d831ec < 4) {
      if ((DAT_02d831ec != 2) ||
         (DAT_02d831f0 = ((float)this_ptr->delta_time_int * (float)256) /
                         ((float)31457280 / (float)g_WindowHeight) + DAT_02d831f0,
         DAT_02d831f0 <= (float)g_WindowWidth)) {
        if ((DAT_02d831ec == 3) &&
           (DAT_02d831f0 = DAT_02d831f0 -
                           ((float)this_ptr->delta_time_int * (float)256) /
                           ((float)31457280 / (float)g_WindowHeight), DAT_02d831f0 < 0.0)) {
          DAT_02d831f0 = 0.0;
          DAT_02d831ec = 4;
          return;
        }
        if (DAT_02d831ec == 1) {
          DAT_02d831ec = 2;
        }
      }
      else {
        DAT_02d831ec = 0;
      }
    }
    else {
      DAT_02d831ec = 5;
    }
  }
  return;
}
