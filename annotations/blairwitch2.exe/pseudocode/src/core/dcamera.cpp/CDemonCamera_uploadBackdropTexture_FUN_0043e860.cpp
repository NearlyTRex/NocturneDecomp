// Name: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0043e860
// Address: 0043e860
// Address Range: [[0043e860, 0043e92e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0043e860(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0043e860(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  iVar7 = 0;
  iVar5 = 0;
  do {
    iVar2 = 0;
    iVar4 = iVar5;
    do {
      iVar3 = iVar2 >> 0x1f;
      iVar1 = iVar2 + iVar3 * -0x100;
      iVar2 = iVar2 + 0x280;
      (&DAT_014b3550)[iVar4] =
           (&DAT_01468550)
           [((int)(iVar1 - (uint)(iVar3 << 7 < 0)) >> 8) +
            ((int)((iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0)) >> 8) *
            0x280];
      iVar4 = iVar4 + 1;
    } while (iVar2 != 0x28000);
    iVar5 = iVar5 + 0x100;
    iVar7 = iVar7 + 0x1e0;
  } while (iVar5 != 0x10000);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00609ff0);
  puVar6 = (uint *)&DAT_014b3550;
  puVar8 = _DAT_01c37770;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(byte *)puVar8 = *(byte *)puVar6;
    puVar6 = (uint *)((int)puVar6 + (uint)bVar9 * -2 + 1);
    puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
  }
  puVar6 = (uint *)&DAT_00b65c98;
  puVar8 = _DAT_01c35210;
  for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(byte *)puVar8 = *(byte *)puVar6;
    puVar6 = (uint *)((int)puVar6 + (uint)bVar9 * -2 + 1);
    puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
  }
  engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0046cab0
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00609ff0,(SRGBColorPalette *)&DAT_00b65c98);
  return;
}
