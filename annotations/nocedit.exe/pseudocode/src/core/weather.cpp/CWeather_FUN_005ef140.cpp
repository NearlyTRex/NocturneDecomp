// Name: core_weather.cpp_CWeather_FUN_005ef140
// Address: 005ef140
// Address Range: [[005ef140, 005ef156]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_FUN_005ef140(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_FUN_005ef140(CWeather *this_ptr)

{
  CSound *this_ptr_00;
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  this_ptr_00 = g_CSoundPtr;
  *(float *)(this_ptr->unk + 0x20) = fVar1;
  core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr_00,this_ptr,"thndr?.wav");
  this_ptr->unk[0x2c] = '\0';
  this_ptr->unk[0x2d] = '\0';
  this_ptr->unk[0x2e] = '\0';
  this_ptr->unk[0x2f] = '\0';
  this_ptr->unk[0x34] = '\0';
  this_ptr->unk[0x35] = '\0';
  this_ptr->unk[0x36] = -0x80;
  this_ptr->unk[0x37] = '?';
  return;
}
