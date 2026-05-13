// Name: core_game.cpp_dampControlAxis_FUN_004dc370
// Address: 004dc370
// MANUAL RECONSTRUCTION
// Address Range: [[004dc370, 004dc3d3]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_dampControlAxis_FUN_004dc370(float *axis_value,float damp_time,float damp_rate)

#include "nocturne.h"

void __cdecl core_game_cpp_dampControlAxis_FUN_004dc370(float *axis_value,float damp_time,float damp_rate)

{
  float fVar1;

  fVar1 = (g_CGamePtr->delta_time_float * damp_rate) / damp_time;
  if (0.0 <= *axis_value) {
    *axis_value = *axis_value - fVar1;
    if (*axis_value < 0.0) {
      *axis_value = 0.0;
      return;
    }
  }
  else {
    *axis_value = *axis_value + fVar1;
    if (0.0 < *axis_value) {
      *axis_value = 0.0;
      return;
    }
  }
  return;
}
