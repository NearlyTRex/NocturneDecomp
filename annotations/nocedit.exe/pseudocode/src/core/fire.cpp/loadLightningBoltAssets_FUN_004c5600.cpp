// Name: core_fire.cpp_loadLightningBoltAssets_FUN_004c5600
// Address: 004c5600
// Address Range: [[004c5600, 004c5626]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_004c5600(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_004c5600(void)

{
  SMRGLTextureBasic *texture;
  
  texture = g_FireEffectLightningBoltTextures;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
    texture = texture + 1;
  } while (texture != g_FireEffectLightningBoltTextures + 6);
  return;
}
