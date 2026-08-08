// Name: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_00443180
// Address: 00443180
// Address Range: [[00443180, 0044324e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_00443180(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_00443180(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  int iVar7;
  uchar *puVar8;
  SRGBColorPalette *pSVar9;
  byte bVar10;
  
  bVar10 = 0;
  iVar7 = 0;
  iVar5 = 0;
  do {
    iVar2 = 0;
    iVar4 = iVar5;
    do {
      iVar3 = iVar2 >> 0x1f;
      iVar1 = iVar2 + iVar3 * -0x100;
      iVar2 = iVar2 + 0x280;
      (&DAT_0145b290)[iVar4] =
           (&DAT_01410290)
           [((int)(iVar1 - (uint)(iVar3 << 7 < 0)) >> 8) +
            ((int)((iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0)) >> 8) *
            0x280];
      iVar4 = iVar4 + 1;
    } while (iVar2 != 0x28000);
    iVar5 = iVar5 + 0x100;
    iVar7 = iVar7 + 0x1e0;
  } while (iVar5 != 0x10000);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005ad49c);
  puVar6 = &DAT_0145b290;
  puVar8 = g_CurrentTextureData;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)puVar8 = *(uint *)puVar6;
    puVar6 = puVar6 + (uint)bVar10 * -8 + 4;
    puVar8 = puVar8 + (uint)bVar10 * -8 + 4;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  puVar6 = &DAT_00b0daf8;
  pSVar9 = g_CurrentPalette;
  for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)pSVar9->colors = *(uint *)puVar6;
    puVar6 = puVar6 + ((uint)bVar10 * -2 + 1) * 4;
    pSVar9 = (SRGBColorPalette *)((int)pSVar9 + (uint)bVar10 * -8 + 4);
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    pSVar9->colors[0].r = *puVar6;
    puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
    pSVar9 = (SRGBColorPalette *)((int)pSVar9 + (uint)bVar10 * -2 + 1);
  }
  engine_drender_cpp_CDemonRenderer_updateTexture_FUN_00461f60
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005ad49c,
             (SRGBColorPalette *)&DAT_00b0daf8);
  return;
}
