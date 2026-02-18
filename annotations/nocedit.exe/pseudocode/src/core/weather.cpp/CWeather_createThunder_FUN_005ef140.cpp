// Name: core_weather.cpp_CWeather_createThunder_FUN_005ef140
// Address: 005ef140
// Address Range: [[005ef140, 005ef156]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createThunder_FUN_005ef140(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_createThunder_FUN_005ef140(CWeather *this_ptr)

{
  CSound *this_ptr_00;
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  this_ptr_00 = g_CSoundPtr;
  this_ptr->lightning_countdown = fVar1;
  core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr_00,this_ptr,"thndr?.wav");
  this_ptr->sub_flash_interval = 0.0;
  this_ptr->max_flash_interval = 1.0;
  return;
}
