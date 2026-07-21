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
  int iVar3;
  int iVar4;
  
  iVar3 = 0xbe;
  iVar2 = 0;
  iVar4 = 0x1c09c30;
  do {
    iVar1 = iVar2 * 0x18;
    _sprintf(iVar4,"fr46%03d.raw",iVar3);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x18;
    iVar2 = iVar2 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,iVar1 + 0x1c09c28);
  } while (iVar2 < 0x14);
  return;
}
