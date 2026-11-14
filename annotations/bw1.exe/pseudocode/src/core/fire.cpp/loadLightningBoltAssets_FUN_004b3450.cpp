// Name: core_fire.cpp_loadLightningBoltAssets_FUN_004b3450
// Address: 004b3450
// Address Range: [[004b3450, 004b3476]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_004b3450(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_004b3450(void)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&DAT_0061caac;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
    texture = texture + 1;
  } while (texture != (SMRGLTextureBasic *)&DAT_0061cb3c);
  return;
}
