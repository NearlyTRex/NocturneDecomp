// Name: core_storm.cpp_FUN_00568c10
// Address: 00568c10
// Address Range: [[00568c10, 00568c5b]]
// Convention: unknown
// Signature: void core_storm_cpp_FUN_00568c10(CWeapon *param_1)

#include "nocturne.h"

void core_storm_cpp_FUN_00568c10(CWeapon *param_1)

{
  core_weapon_cpp_FUN_0057af40(param_1);
  sound_sndmain_cpp_FUN_00556230("wp_nomana.wav");
  sound_sndmain_cpp_FUN_00556230("wp_storm.wav");
  core_weather_cpp_FUN_0057d420(0x02D0C1A0,5);
  core_fire_cpp_FUN_004a4340(0x01C73654,3);
  return;
}
