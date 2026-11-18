// Name: core_game.cpp_CGame_updateFadeTransition_FUN_004bd6d0
// Address: 004bd6d0
// Address Range: [[004bd6d0, 004bd7c7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004bd6d0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004bd6d0(CGame *this_ptr)

{
  int iVar1;
  
  iVar1 = 0;
  if (g_INT_01d22c84 != 0) {
    if (3 < g_INT_01d22c84) {
      g_INT_01d22c84 = 5;
      return;
    }
    if ((g_INT_01d22c84 == 2) &&
       (g_IrisFadeRadius =
             ((float)this_ptr->delta_time_int * (float)256) /
             ((float)31457280 / (float)g_INT_005fba1c) + g_IrisFadeRadius,
       (float)g_INT_005fba18 < g_IrisFadeRadius)) {
      g_INT_01d22c84 = 0;
      return;
    }
    if ((g_INT_01d22c84 == 3) &&
       (g_IrisFadeRadius =
             g_IrisFadeRadius -
             ((float)this_ptr->delta_time_int * (float)256) /
             ((float)31457280 / (float)g_INT_005fba1c), g_IrisFadeRadius < 0.0)) {
      g_IrisFadeRadius = 0.0;
      g_INT_01d22c84 = 4;
      return;
    }
    if (g_INT_01d22c84 != 1) {
      return;
    }
    if (g_INT_01d22c94 + 1 < 3) {
      g_INT_01d22c94 = g_INT_01d22c94 + 1;
      return;
    }
    iVar1 = 2;
  }
  g_INT_01d22c94 = 0;
  g_INT_01d22c84 = iVar1;
  return;
}
