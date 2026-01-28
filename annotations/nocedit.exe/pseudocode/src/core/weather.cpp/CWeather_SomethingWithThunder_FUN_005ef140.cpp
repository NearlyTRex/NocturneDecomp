// Name: core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140
// Address: 005ef140
// Address Range: [[005ef140, 005ef156]]
// Convention: unknown
// Signature: void core_weather_cpp_CWeather_SomethingWithThunder_FUN_005ef140(void)

#include "nocturne.h"

/* Signature: byte core_weather.cpp_CWeather_SomethingWithThunder(CWeather* param_1) */

void core_weather_cpp_CWeather_SomethingWithThunder_FUN_005ef140(void)

{
  CSound *this_ptr;
  float fVar1;
  void *in_stack_00000004;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  this_ptr = g_CSoundPtr;
  *(float *)((int)in_stack_00000004 + 0x20) = fVar1;
  core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr,in_stack_00000004,"thndr?.wav");
  *(uint *)((int)in_stack_00000004 + 0x2c) = 0;
  *(uint *)((int)in_stack_00000004 + 0x34) = 0x3f800000;
  return;
}
