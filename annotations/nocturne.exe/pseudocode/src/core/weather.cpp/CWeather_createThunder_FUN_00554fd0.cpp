// Name: core_weather.cpp_CWeather_createThunder_FUN_00554fd0
// Address: 00554fd0
// Address Range: [[00554fd0, 0055501c]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createThunder_FUN_00554fd0(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_createThunder_FUN_00554fd0(CWeather *this_ptr)

{
  CSound *this_ptr_00;
  float fVar1;
  
  fVar1 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000,0x41a00000);
  this_ptr_00 = 0x02DC9450;
  this_ptr->lightning_countdown = fVar1;
  core_sound_cpp_CSound_playSound_FUN_0052ea40(this_ptr_00,this_ptr,"thndr?.wav");
  this_ptr->sub_flash_interval = 0.0;
  this_ptr->max_flash_interval = 1.0;
  return;
}
