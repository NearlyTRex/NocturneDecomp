// Name: core_weather.cpp_staticInit_FUN_005eeaa0
// Address: 005eeaa0
// Address Range: [[005eeaa0, 005eeac4]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_staticInit_FUN_005eeaa0(void)

#include "nocturne.h"

void __cdecl core_weather_cpp_staticInit_FUN_005eeaa0(void)

{
  core_weather_cpp_CWeather_ctor_FUN_005eead0(&g_CWeatherInstance);
  __arrinit(g_WeatherParticlePositions,200,&g_CVectorTypeInfo);
  return;
}
