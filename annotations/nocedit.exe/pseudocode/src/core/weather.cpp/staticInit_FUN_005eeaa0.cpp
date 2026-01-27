// Name: core_weather.cpp_staticInit_FUN_005eeaa0
// Address: 005eeaa0
// Address Range: [[005eeaa0, 005eeac4]]
// Convention: __cdecl
// Signature: void core_weather.cpp_staticInit_FUN_005eeaa0(void)

#include "nocturne.h"

void __cdecl core_weather_cpp_staticInit_FUN_005eeaa0(void)

{
  core_weather_cpp_CWeather_ctor_FUN_005eead0(&g_CWeatherInstance);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_03f95df8,200,&g_CVectorTypeInfo);
  return;
}
