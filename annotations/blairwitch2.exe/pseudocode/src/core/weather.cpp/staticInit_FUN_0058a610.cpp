// Name: core_weather.cpp_staticInit_FUN_0058a610
// Address: 0058a610
// Address Range: [[0058a610, 0058a634]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_staticInit_FUN_0058a610(void)

#include "nocturne.h"

void __cdecl core_weather_cpp_staticInit_FUN_0058a610(void)

{
  core_weather_cpp_CWeather_ctor_FUN_0058a640(&g_CWeatherInstance);
  __arrinit(g_WeatherParticlePositions,200,&g_CVectorTypeInfo);
  return;
}
