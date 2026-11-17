// Name: core_dlight.cpp_captureLightTextures_FUN_004504e0
// Address: 004504e0
// Address Range: [[004504e0, 0045051a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_captureLightTextures_FUN_004504e0(void)

#include "nocturne.h"

void __cdecl core_dlight_cpp_captureLightTextures_FUN_004504e0(void)

{
  SMRGLTextureBasic *texture;
  
  texture = &g_LightGlow.sprites[0].texture;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,&g_LightGlow.headlight);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,texture);
    texture = texture + 2;
  } while (texture != (SMRGLTextureBasic *)&g_CKeyFramedModelPoolDestructorNode);
  return;
}
