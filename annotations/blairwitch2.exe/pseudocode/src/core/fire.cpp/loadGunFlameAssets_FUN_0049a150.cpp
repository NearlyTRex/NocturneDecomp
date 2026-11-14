// Name: core_fire.cpp_loadGunFlameAssets_FUN_0049a150
// Address: 0049a150
// Address Range: [[0049a150, 0049a19a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_0049a150(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_0049a150(void)

{
  int iVar1;
  int iVar2;
  char *buffer;
  
  iVar2 = 0;
  buffer = (char *)0x1c3f3d0;
  do {
    iVar1 = iVar2 * 0x18;
    _sprintf(buffer,"fr46%03d.raw");
    buffer = buffer + 0x18;
    iVar2 = iVar2 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)(iVar1 + 0x1c3f3c8));
  } while (iVar2 < 0x14);
  return;
}
