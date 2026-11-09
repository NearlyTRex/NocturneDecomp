// Name: core_weather.cpp_FUN_0057d050
// Address: 0057d050
// Address Range: [[0057d050, 0057d199]]
// Convention: unknown
// Signature: void core_weather_cpp_FUN_0057d050(int *param_1,int param_2)

#include "nocturne.h"

void core_weather_cpp_FUN_0057d050(int *param_1,int param_2)

{
  int iVar1;
  
  if ((*param_1 == 5) && ((param_1[10] & 0x7fffffffU) != 0)) {
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
              (&g_CDemonCameraInstance,(float)param_1[0xc]);
  }
  *param_1 = param_2;
  if (param_2 == 1) {
    param_1[1] = 0x42200000;
  }
  else if (param_2 == 5) {
    param_1[1] = 0x42700000;
  }
  else {
    param_1[1] = 0x40400000;
  }
  if (param_2 == 3) {
    param_1[0xe] = 0x2ee;
  }
  else if (param_2 == 4) {
    param_1[0xe] = 2000;
  }
  else if (param_2 == 5) {
    param_1[0xe] = 400;
  }
  else {
    param_1[0xe] = 200;
  }
  if (param_2 == 5) {
    iVar1 = core_actor_cpp_FUN_0040ce40(0x3f000000,0x3f400000);
    param_1[9] = 0;
    param_1[0xd] = 0x40000000;
    param_1[10] = 0;
    param_1[8] = iVar1;
    iVar1 = core_actor_cpp_FUN_0040ce40(0x3f000000,param_1[0xd]);
    param_1[0x19] = 0;
    param_1[0xb] = iVar1;
    return;
  }
  iVar1 = core_actor_cpp_FUN_0040ce40(0x41200000,0x41a00000);
  param_1[9] = 0;
  param_1[0xd] = 0x41200000;
  param_1[10] = 0;
  param_1[8] = iVar1;
  iVar1 = core_actor_cpp_FUN_0040ce40(0x40000000,param_1[0xd]);
  param_1[0xb] = iVar1;
  return;
}
