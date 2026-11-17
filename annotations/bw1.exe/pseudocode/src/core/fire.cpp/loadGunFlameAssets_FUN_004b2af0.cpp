// Name: core_fire.cpp_loadGunFlameAssets_FUN_004b2af0
// Address: 004b2af0
// Address Range: [[004b2af0, 004b2b3a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_004b2af0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_004b2af0(void)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  char *buffer;
  
  iVar1 = 0;
  buffer = g_SMRGLTextureBasic_ARRAY_01c58588[0].texture_name;
  do {
    texture = g_SMRGLTextureBasic_ARRAY_01c58588 + iVar1;
    _sprintf(buffer,"fr46%03d.raw");
    buffer = buffer + 0x18;
    iVar1 = iVar1 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,texture);
  } while (iVar1 < 0x14);
  return;
}
