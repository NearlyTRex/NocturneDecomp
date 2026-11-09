// Name: core_game.cpp_FUN_004b764e
// Address: 004b764e
// Address Range: [[004b764e, 004b76b3]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b764e(float *param_1,float param_2,float param_3)

#include "nocturne.h"

void core_game_cpp_FUN_004b764e(float *param_1,float param_2,float param_3)

{
  param_2 = (*(float *)&g_CGamePtr->field_0x284 * param_3) / param_2;
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
