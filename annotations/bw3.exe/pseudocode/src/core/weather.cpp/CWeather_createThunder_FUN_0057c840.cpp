// Name: core_weather.cpp_CWeather_createThunder_FUN_0057c840
// Address: 0057c840
// Address Range: [[0057c840, 0057c88c]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createThunder_FUN_0057c840(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_createThunder_FUN_0057c840(CWeather *this_ptr)

{
  CSound *this_ptr_00;
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
  this_ptr_00 = 0x02CF5680;
  this_ptr->lightning_countdown = fVar1;
  core_sound_cpp_CSound_playSound_FUN_005609b0(this_ptr_00,this_ptr,"thndr?.wav");
  this_ptr->sub_flash_interval = 0.0;
  this_ptr->max_flash_interval = 1.0;
  return;
}
