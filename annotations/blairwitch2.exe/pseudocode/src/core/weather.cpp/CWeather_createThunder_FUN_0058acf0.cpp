// Name: core_weather.cpp_CWeather_createThunder_FUN_0058acf0
// Address: 0058acf0
// Address Range: [[0058acf0, 0058ad3c]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createThunder_FUN_0058acf0(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_createThunder_FUN_0058acf0(CWeather *this_ptr)

{
  CSound *this_ptr_00;
  uint uVar1;
  
  uVar1 = core_actor_cpp_FUN_0040cf60(0x41200000,0x41a00000);
  this_ptr_00 = 0x0264B290;
  *(uint *)(this_ptr + 0x20) = uVar1;
  core_sound_cpp_CSound_playSound_FUN_0055ae30(this_ptr_00,this_ptr,"thndr?.wav");
  *(uint *)(this_ptr + 0x2c) = 0;
  *(uint *)(this_ptr + 0x34) = 0x3f800000;
  return;
}
