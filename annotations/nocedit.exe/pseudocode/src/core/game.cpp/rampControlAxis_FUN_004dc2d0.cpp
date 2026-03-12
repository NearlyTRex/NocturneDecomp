// Name: core_game.cpp_rampControlAxis_FUN_004dc2d0
// Address: 004dc2d0
// Address Range: [[004dc2d0, 004dc364]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_rampControlAxis_FUN_004dc2d0(int negative_key,int positive_key,float *axis_value,float ramp_time,float max_value)

#include "nocturne.h"

void __cdecl core_game_cpp_rampControlAxis_FUN_004dc2d0(int negative_key,int positive_key,float *axis_value,float ramp_time,float max_value)

{
  float fVar3;
  float fVar2;
  float fVar1;
  
  if (g_KeyboardState[negative_key] == '\0') {
    if (((g_KeyboardState[positive_key] != '\0') && (*axis_value < max_value)) &&
       (fVar1 = (g_CGamePtr->delta_time_float * max_value) / ramp_time + *axis_value,
       *axis_value = fVar1, max_value < fVar1)) {
      *axis_value = max_value;
      return;
    }
  }
  else {
    fVar3 = -max_value;
    if ((fVar3 < *axis_value) &&
       (fVar2 = *axis_value - (g_CGamePtr->delta_time_float * max_value) / ramp_time,
       *axis_value = fVar2, fVar2 < fVar3)) {
      *axis_value = fVar3;
      return;
    }
  }
  return;
}
