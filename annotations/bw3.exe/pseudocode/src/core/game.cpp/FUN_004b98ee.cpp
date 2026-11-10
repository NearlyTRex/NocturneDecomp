// Name: core_game.cpp_FUN_004b98ee
// Address: 004b98ee
// Address Range: [[004b98ee, 004b9953]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b98ee(float *param_1,float param_2,float param_3)

#include "nocturne.h"

void core_game_cpp_FUN_004b98ee(float *param_1,float param_2,float param_3)

{
  param_2 = (g_CGamePtr->delta_time_float * param_3) / param_2;
  if (0.0 <= *param_1) {
    *param_1 = *param_1 - param_2;
    if (*param_1 < 0.0) {
      *param_1 = 0.0;
      return;
    }
  }
  else {
    *param_1 = *param_1 + param_2;
    if (0.0 < *param_1) {
      *param_1 = 0.0;
      return;
    }
  }
  return;
}
