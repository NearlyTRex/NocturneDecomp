// Name: core_fire.cpp_loadLightningBoltAssets_FUN_0049aab0
// Address: 0049aab0
// Address Range: [[0049aab0, 0049aad6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_0049aab0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_0049aab0(void)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&DAT_006157cc;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
    texture = texture + 0x18;
  } while (texture != (SMRGLTextureBasic *)&DAT_0061585c);
  return;
}
