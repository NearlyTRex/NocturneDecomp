// Name: core_weather.cpp_CWeather_setWeatherType_FUN_0057d050
// Address: 0057d050
// Address Range: [[0057d050, 0057d199]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_0057d050(CWeather *this_ptr,EWeatherType type)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_0057d050(CWeather *this_ptr,EWeatherType type)

{
  float fVar1;
  
  if ((this_ptr->weather_type == 5) && (ABS(this_ptr->flash_timer) != 0.0)) {
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
              (&g_CDemonCameraInstance,this_ptr->base_ambient);
  }
  this_ptr->weather_type = type;
  if (type == WEATHER_TYPE_RAIN) {
    this_ptr->particle_speed = 40.0;
  }
  else if (type == 5) {
    this_ptr->particle_speed = 60.0;
  }
  else {
    this_ptr->particle_speed = 3.0;
  }
  if (type == (WEATHER_TYPE_SNOW|WEATHER_TYPE_RAIN)) {
    this_ptr[1].weather_type = 0x2ee;
  }
  else if (type == 4) {
    this_ptr[1].weather_type = 2000;
  }
  else if (type == 5) {
    this_ptr[1].weather_type = 400;
  }
  else {
    this_ptr[1].weather_type = 200;
  }
  if (type == 5) {
    fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,0.75);
    this_ptr->lightning_active = 0;
    this_ptr->max_flash_interval = 2.0;
    this_ptr->flash_timer = 0.0;
    this_ptr->lightning_countdown = fVar1;
    fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,this_ptr->max_flash_interval);
    this_ptr[1].sub_flash_interval = 0.0;
    this_ptr->sub_flash_interval = fVar1;
    return;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
  this_ptr->lightning_active = 0;
  this_ptr->max_flash_interval = 10.0;
  this_ptr->flash_timer = 0.0;
  this_ptr->lightning_countdown = fVar1;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(2.0,this_ptr->max_flash_interval);
  this_ptr->sub_flash_interval = fVar1;
  return;
}
