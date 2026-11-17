// Name: core_storm.cpp_CStorm_setup_FUN_00568c10
// Address: 00568c10
// Address Range: [[00568c10, 00568c5b]]
// Convention: __cdecl
// Signature: void __cdecl core_storm_cpp_CStorm_setup_FUN_00568c10(CStorm *this_ptr)

#include "nocturne.h"

void __cdecl core_storm_cpp_CStorm_setup_FUN_00568c10(CStorm *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_nomana.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_storm.wav");
  core_weather_cpp_CWeather_preloadAssets_FUN_0057d420(g_CWeather_PTR_006071f0,5);
  core_fire_cpp_CFireEffect_preloadTossAssets_FUN_004a4340(g_CFireEffect_PTR_005fc5a0,3);
  return;
}
