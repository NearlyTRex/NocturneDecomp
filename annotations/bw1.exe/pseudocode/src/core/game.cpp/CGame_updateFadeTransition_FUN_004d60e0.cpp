// Name: core_game.cpp_CGame_updateFadeTransition_FUN_004d60e0
// Address: 004d60e0
// Address Range: [[004d60e0, 004d61d7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004d60e0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004d60e0(CGame *this_ptr)

{
  int iVar1;
  
  iVar1 = 0;
  if (g_INT_01cd0c7c != 0) {
    if (3 < g_INT_01cd0c7c) {
      g_INT_01cd0c7c = 5;
      return;
    }
    if ((g_INT_01cd0c7c == 2) &&
       (g_FLOAT_01cd0c80 =
             ((float)this_ptr->delta_time_int * (float)256) /
             ((float)31457280 / (float)g_INT_0061b49c) + g_FLOAT_01cd0c80,
       (float)g_INT_0061b498 < g_FLOAT_01cd0c80)) {
      g_INT_01cd0c7c = 0;
      return;
    }
    if ((g_INT_01cd0c7c == 3) &&
       (g_FLOAT_01cd0c80 =
             g_FLOAT_01cd0c80 -
             ((float)this_ptr->delta_time_int * (float)256) /
             ((float)31457280 / (float)g_INT_0061b49c), g_FLOAT_01cd0c80 < 0.0)) {
      g_FLOAT_01cd0c80 = 0.0;
      g_INT_01cd0c7c = 4;
      return;
    }
    if (g_INT_01cd0c7c != 1) {
      return;
    }
    if (g_INT_01cd0c8c + 1 < 3) {
      g_INT_01cd0c8c = g_INT_01cd0c8c + 1;
      return;
    }
    iVar1 = 2;
  }
  g_INT_01cd0c8c = 0;
  g_INT_01cd0c7c = iVar1;
  return;
}
