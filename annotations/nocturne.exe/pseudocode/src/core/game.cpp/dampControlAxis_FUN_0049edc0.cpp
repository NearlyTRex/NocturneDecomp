// Name: core_game.cpp_dampControlAxis_FUN_0049edc0
// Address: 0049edc0
// Address Range: [[0049edc0, 0049ee23]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_dampControlAxis_FUN_0049edc0(float *axis_value,float damp_time,float damp_rate)

#include "nocturne.h"

void __cdecl core_game_cpp_dampControlAxis_FUN_0049edc0(float *axis_value,float damp_time,float damp_rate)

{
  float fVar1;
  
  fVar1 = (*(float *)(0x01C775EC + 0x264) * damp_rate) / damp_time;
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
