// Name: core_fire.cpp_loadGunFlameTextures_FUN_004c4d50
// Address: 004c4d50
// Address Range: [[004c4d50, 004c4d9a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadGunFlameTextures_FUN_004c4d50(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadGunFlameTextures_FUN_004c4d50(void)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  int iVar2;
  char *buffer;
  
  iVar2 = 0xbe;
  iVar1 = 0;
  buffer = g_GunFlameTextures[0].texture_name;
  do {
    texture = g_GunFlameTextures + iVar1;
    crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"fr46%03d.raw",iVar2);
    iVar2 = iVar2 + 1;
    buffer = buffer + 0x18;
    iVar1 = iVar1 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
  } while (iVar1 < 0x14);
  return;
}
