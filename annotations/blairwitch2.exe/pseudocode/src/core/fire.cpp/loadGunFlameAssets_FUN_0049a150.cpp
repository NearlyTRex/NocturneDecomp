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
  int iVar3;
  int iVar4;
  
  iVar3 = 0xbe;
  iVar2 = 0;
  iVar4 = 0x1c3f3d0;
  do {
    iVar1 = iVar2 * 0x18;
    FUN_005b7790(iVar4,"fr46%03d.raw",iVar3);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x18;
    iVar2 = iVar2 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)(iVar1 + 0x1c3f3c8));
  } while (iVar2 < 0x14);
  return;
}
