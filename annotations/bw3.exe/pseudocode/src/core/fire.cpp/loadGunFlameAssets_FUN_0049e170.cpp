// Name: core_fire.cpp_loadGunFlameAssets_FUN_0049e170
// Address: 0049e170
// Address Range: [[0049e170, 0049e196]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_0049e170(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_0049e170(void)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&DAT_005fd60c;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    texture = texture + 1;
  } while (texture != (SMRGLTextureBasic *)&DAT_005fd7ec);
  return;
}
