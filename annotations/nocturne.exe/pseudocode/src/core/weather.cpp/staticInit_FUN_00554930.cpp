// Name: core_weather.cpp_staticInit_FUN_00554930
// Address: 00554930
// Address Range: [[00554930, 00554954]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_staticInit_FUN_00554930(void)

#include "nocturne.h"

void __cdecl core_weather_cpp_staticInit_FUN_00554930(void)

{
  core_weather_cpp_CWeather_ctor_FUN_00554960(&g_CWeatherInstance);
  __arrinit(g_WeatherParticlePositions,200,&g_CVectorTypeInfo_005993b0);
  return;
}
