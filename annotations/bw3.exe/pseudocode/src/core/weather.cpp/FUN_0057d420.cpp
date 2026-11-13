// Name: core_weather.cpp_FUN_0057d420
// Address: 0057d420
// Address Range: [[0057d420, 0057d4b3]]
// Convention: unknown
// Signature: void core_weather_cpp_FUN_0057d420(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_weather_cpp_FUN_0057d420(uint param_1,int param_2)

{
  if (param_2 != 5) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_006071f4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_0060720c);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("rain.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("light1.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("light2.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5d79ca);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5d79d5);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5d79e0);
  core_fire_cpp_FUN_004a4130(0x01C73654,1);
  return;
}
