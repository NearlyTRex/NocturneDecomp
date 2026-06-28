// Name: core_dlight.cpp_captureLightTextures_FUN_00474a90
// Address: 00474a90
// MANUAL RECONSTRUCTION
// Address Range: [[00474a90, 00474aca]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_captureLightTextures_FUN_00474a90(void)

#include "nocturne.h"

void __cdecl core_dlight_cpp_captureLightTextures_FUN_00474a90(void)

{
  int i;

  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_LightGlow.headlight);
  for (i = 0; i < 9; i = i + 1) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&g_LightGlow.sprites[i].texture);
  }
  return;
}
