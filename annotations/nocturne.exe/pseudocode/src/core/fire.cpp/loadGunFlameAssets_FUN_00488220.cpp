// Name: core_fire.cpp_loadGunFlameAssets_FUN_00488220
// Address: 00488220
// Address Range: [[00488220, 0048826a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_00488220(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_00488220(void)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  int iVar2;
  char *buffer;
  
  iVar2 = 0xbe;
  iVar1 = 0;
  buffer = g_SMRGLTextureBasic_ARRAY_01c09c28[0].texture_name;
  do {
    texture = g_SMRGLTextureBasic_ARRAY_01c09c28 + iVar1;
    _sprintf(buffer,"fr46%03d.raw",iVar2);
    iVar2 = iVar2 + 1;
    buffer = buffer + 0x18;
    iVar1 = iVar1 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,texture);
  } while (iVar1 < 0x14);
  return;
}
