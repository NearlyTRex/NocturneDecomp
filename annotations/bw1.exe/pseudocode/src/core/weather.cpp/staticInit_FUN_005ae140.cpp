// Name: core_weather.cpp_staticInit_FUN_005ae140
// Address: 005ae140
// Address Range: [[005ae140, 005ae164]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_staticInit_FUN_005ae140(void)

#include "nocturne.h"

void __cdecl core_weather_cpp_staticInit_FUN_005ae140(void)

{
  core_weather_cpp_CWeather_ctor_FUN_005ae170(&g_CWeatherInstance);
  __arrinit(g_WeatherParticlePositions,200,&g_CVectorTypeInfo);
  return;
}
