// Name: core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0
// Address: 005ef8c0
// Address Range: [[005ef8c0, 005ef8e8] [005ef92c, 005ef934]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0(CWeather *this_ptr,int type)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0(CWeather *this_ptr,int type)

{
  float fVar1;
  
  this_ptr->weather_type = type;
  if (type == 1) {
    this_ptr->particle_speed = 40.0;
  }
  else {
    this_ptr->particle_speed = 5.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  this_ptr->lightning_active = 0;
  this_ptr->max_flash_interval = 10.0;
  this_ptr->flash_timer = 0.0;
  this_ptr->lightning_countdown = fVar1;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,this_ptr->max_flash_interval);
  this_ptr->sub_flash_interval = fVar1;
  return;
}
