// Name: core_weather.cpp_CWeather_setWeatherType_FUN_0058b470
// Address: 0058b470
// Address Range: [[0058b470, 0058b4e4]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_0058b470(CWeather *this_ptr,EWeatherType type)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_0058b470(CWeather *this_ptr,EWeatherType type)

{
  uint uVar1;
  
  *(EWeatherType *)this_ptr = type;
  if (type == WEATHER_TYPE_RAIN) {
    *(uint *)(this_ptr + 4) = 0x42200000;
  }
  else {
    *(uint *)(this_ptr + 4) = 0x40a00000;
  }
  uVar1 = core_actor_cpp_FUN_0040cf60(0x41200000,0x41a00000);
  *(uint *)(this_ptr + 0x24) = 0;
  *(uint *)(this_ptr + 0x34) = 0x41200000;
  *(uint *)(this_ptr + 0x28) = 0;
  *(uint *)(this_ptr + 0x20) = uVar1;
  uVar1 = core_actor_cpp_FUN_0040cf60(0x40000000,*(uint *)(this_ptr + 0x34));
  *(uint *)(this_ptr + 0x2c) = uVar1;
  return;
}
