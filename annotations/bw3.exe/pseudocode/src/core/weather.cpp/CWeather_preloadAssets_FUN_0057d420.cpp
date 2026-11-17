// Name: core_weather.cpp_CWeather_preloadAssets_FUN_0057d420
// Address: 0057d420
// Address Range: [[0057d420, 0057d4b3]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_preloadAssets_FUN_0057d420(CWeather *this_ptr,EWeatherType type)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_preloadAssets_FUN_0057d420(CWeather *this_ptr,EWeatherType type)

{
  if (type != 5) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,&g_SMRGLTextureBasic_006071f4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,&g_SMRGLTextureBasic_0060720c);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("rain.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("light1.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("light2.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("light3.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("light4.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("light5.wav");
  core_fire_cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(g_CFireEffect_PTR_005fc5a0,1);
  return;
}
