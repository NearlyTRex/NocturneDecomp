// Name: core_weather.cpp_CWeather_setWeatherType_FUN_005aefc0
// Address: 005aefc0
// Address Range: [[005aefc0, 005af034]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_005aefc0(CWeather *this_ptr,EWeatherType type)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_005aefc0(CWeather *this_ptr,EWeatherType type)

{
  uint uVar1;
  
  *(EWeatherType *)this_ptr = type;
  if (type == WEATHER_TYPE_RAIN) {
    *(uint *)(this_ptr + 4) = 0x42200000;
  }
  else {
    *(uint *)(this_ptr + 4) = 0x40a00000;
  }
  uVar1 = core_actor_cpp_FUN_0040cc00(0x41200000,0x41a00000);
  *(uint *)(this_ptr + 0x24) = 0;
  *(uint *)(this_ptr + 0x34) = 0x41200000;
  *(uint *)(this_ptr + 0x28) = 0;
  *(uint *)(this_ptr + 0x20) = uVar1;
  uVar1 = core_actor_cpp_FUN_0040cc00(0x40000000,*(uint *)(this_ptr + 0x34));
  *(uint *)(this_ptr + 0x2c) = uVar1;
  return;
}
