// Name: core_fire.cpp_loadLightningBoltAssets_FUN_00488ad0
// Address: 00488ad0
// Address Range: [[00488ad0, 00488af6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_00488ad0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_00488ad0(void)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&DAT_005b8b14;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,texture);
    texture = texture + 1;
  } while (texture != (SMRGLTextureBasic *)&DAT_005b8ba4);
  return;
}
