// Name: core_weather.cpp_CWeather_FUN_005ef8c0
// Address: 005ef8c0
// Address Range: [[005ef8c0, 005ef8e8] [005ef92c, 005ef934]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_FUN_005ef8c0(void)

#include "nocturne.h"

/* Signature: byte core_weather.cpp_CWeather_FUN_005ef8c0(CWeather* param_1, uint
   param_2) */

void __cdecl core_weather_cpp_CWeather_FUN_005ef8c0(void)

{
  float fVar1;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  *in_stack_00000004 = in_stack_00000008;
  if (in_stack_00000008 == 1) {
    in_stack_00000004[1] = 0x42200000;
  }
  else {
    in_stack_00000004[1] = 0x40a00000;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  in_stack_00000004[9] = 0;
  in_stack_00000004[0xd] = 0x41200000;
  in_stack_00000004[10] = 0;
  in_stack_00000004[8] = (int)fVar1;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,(float)in_stack_00000004[0xd]);
  in_stack_00000004[0xb] = (int)fVar1;
  return;
}
