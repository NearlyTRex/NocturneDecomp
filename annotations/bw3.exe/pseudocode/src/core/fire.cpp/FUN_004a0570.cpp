// Name: core_fire.cpp_FUN_004a0570
// Address: 004a0570
// Address Range: [[004a0570, 004a05ce]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a0570(float *param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_004a0570(float *param_1)

{
  float fVar1;
  
  if ((0.0 < *param_1) &&
     (fVar1 = *param_1 - *(float *)&g_CGamePtr->field_0x314, *param_1 = fVar1, fVar1 < 0.0)) {
    *param_1 = 0.0;
    if (param_1[1] != 7.00649e-45) {
      core_weather_cpp_FUN_0057d050(0x02D0C1A0,param_1[1]);
    }
    sound_sndmain_cpp_killSfx_FUN_00556be0((uint)param_1[2]);
    param_1[2] = 0.0;
  }
  return;
}
