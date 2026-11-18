// Name: core_weather.cpp_CWeather_ctor_FUN_0057bd80
// Address: 0057bd80
// Address Range: [[0057bd80, 0057bd9a]]
// Convention: __cdecl
// Signature: CWeather * __cdecl core_weather_cpp_CWeather_ctor_FUN_0057bd80(CWeather *this_ptr)

#include "nocturne.h"

CWeather * __cdecl core_weather_cpp_CWeather_ctor_FUN_0057bd80(CWeather *this_ptr)

{
  core_weather_cpp_CWeather_setWeatherType_FUN_0057d050(this_ptr,WEATHER_TYPE_NONE);
  this_ptr[1].sub_flash_interval = 0.0;
  return this_ptr;
}
