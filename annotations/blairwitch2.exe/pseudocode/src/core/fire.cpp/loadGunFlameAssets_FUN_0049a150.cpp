// Name: core_fire.cpp_loadGunFlameAssets_FUN_0049a150
// Address: 0049a150
// Address Range: [[0049a150, 0049a19a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_0049a150(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_0049a150(void)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  char *buffer;
  
  iVar1 = 0;
  buffer = g_SMRGLTextureBasic_ARRAY_01c3f3c8[0].texture_name;
  do {
    texture = g_SMRGLTextureBasic_ARRAY_01c3f3c8 + iVar1;
    _sprintf(buffer,"fr46%03d.raw");
    buffer = buffer + 0x18;
    iVar1 = iVar1 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (g_CDemonRenderer_PTR_0060b280,texture);
  } while (iVar1 < 0x14);
  return;
}
