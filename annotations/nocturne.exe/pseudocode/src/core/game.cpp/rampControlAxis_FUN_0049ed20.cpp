// Name: core_game.cpp_rampControlAxis_FUN_0049ed20
// Address: 0049ed20
// Address Range: [[0049ed20, 0049edb4]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_rampControlAxis_FUN_0049ed20(int negative_key,int positive_key,float *axis_value,float ramp_time,float max_value)

#include "nocturne.h"

void __cdecl core_game_cpp_rampControlAxis_FUN_0049ed20(int negative_key,int positive_key,float *axis_value,float ramp_time,float max_value)

{
  float fVar1;
  float fVar2;
  
  if ((&DAT_01c02598)[negative_key] == '\0') {
    if ((((&DAT_01c02598)[positive_key] != '\0') && (*axis_value < max_value)) &&
       (fVar1 = (*(float *)(0x01C775EC + 0x264) * max_value) / ramp_time + *axis_value,
       *axis_value = fVar1, max_value < fVar1)) {
      *axis_value = max_value;
      return;
    }
  }
  else {
    fVar1 = -max_value;
    if ((fVar1 < *axis_value) &&
       (fVar2 = *axis_value - (*(float *)(0x01C775EC + 0x264) * max_value) / ramp_time,
       *axis_value = fVar2, fVar2 < fVar1)) {
      *axis_value = fVar1;
      return;
    }
  }
  return;
}
