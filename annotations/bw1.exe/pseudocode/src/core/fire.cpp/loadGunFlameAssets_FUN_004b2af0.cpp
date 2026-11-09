// Name: core_fire.cpp_loadGunFlameAssets_FUN_004b2af0
// Address: 004b2af0
// Address Range: [[004b2af0, 004b2b3a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_004b2af0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_004b2af0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0xbe;
  iVar2 = 0;
  iVar4 = 0x1c58590;
  do {
    iVar1 = iVar2 * 0x18;
    FUN_005bfb40(iVar4,"fr46%03d.raw",iVar3);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x18;
    iVar2 = iVar2 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)(iVar1 + 0x1c58588));
  } while (iVar2 < 0x14);
  return;
}
