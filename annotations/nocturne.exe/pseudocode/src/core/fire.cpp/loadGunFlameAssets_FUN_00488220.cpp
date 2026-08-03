// Name: core_fire.cpp_loadGunFlameAssets_FUN_00488220
// Address: 00488220
// Address Range: [[00488220, 0048826a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_00488220(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_00488220(void)

{
  int iVar1;
  int iVar2;
  char *buffer;
  
  iVar2 = 0;
  buffer = (char *)0x1c09c30;
  do {
    iVar1 = iVar2 * 0x18;
    _sprintf(buffer,"fr46%03d.raw");
    buffer = buffer + 0x18;
    iVar2 = iVar2 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(iVar1 + 0x1c09c28));
  } while (iVar2 < 0x14);
  return;
}
