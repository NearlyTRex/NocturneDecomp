// Name: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310
// Address: 0044f310
// Address Range: [[0044f310, 0044f3de]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  SRGBColorPalette *pSVar7;
  int iVar8;
  uint *puVar9;
  SRGBColorPalette *pSVar10;
  byte bVar11;
  
  bVar11 = 0;
  iVar8 = 0;
  iVar5 = 0;
  do {
    iVar2 = 0;
    iVar4 = iVar5;
    do {
      iVar3 = iVar2 >> 0x1f;
      iVar1 = iVar2 + iVar3 * -0x100;
      iVar2 = iVar2 + 0x280;
      *(char *)((int)g_CameraTextureWorkBuffer + iVar4) =
           g_CameraIndexedImageData
           [((int)(iVar1 - (uint)(iVar3 << 7 < 0)) >> 8) +
            ((int)((iVar8 + (iVar8 >> 0x1f) * -0x100) - (uint)((iVar8 >> 0x1f) << 7 < 0)) >> 8) *
            0x280];
      iVar4 = iVar4 + 1;
    } while (iVar2 != 0x28000);
    iVar5 = iVar5 + 0x100;
    iVar8 = iVar8 + 0x1e0;
  } while (iVar5 != 0x10000);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_CameraBackdropTexture);
  puVar6 = g_CameraTextureWorkBuffer;
  puVar9 = (uint *)g_CurrentTextureData;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uchar *)puVar9 = (uchar)*puVar6;
    puVar6 = (uint *)((int)puVar6 + (uint)bVar11 * -2 + 1);
    puVar9 = (uint *)((int)puVar9 + (uint)bVar11 * -2 + 1);
  }
  pSVar7 = &g_CameraImagePaletteData;
  pSVar10 = g_CurrentPalette;
  for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)pSVar10->colors = *(uint *)pSVar7->colors;
    pSVar7 = (SRGBColorPalette *)((int)pSVar7 + (uint)bVar11 * -8 + 4);
    pSVar10 = (SRGBColorPalette *)((int)pSVar10 + (uint)bVar11 * -8 + 4);
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    pSVar10->colors[0].r = pSVar7->colors[0].r;
    pSVar7 = (SRGBColorPalette *)((int)pSVar7 + (uint)bVar11 * -2 + 1);
    pSVar10 = (SRGBColorPalette *)((int)pSVar10 + (uint)bVar11 * -2 + 1);
  }
  engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0048dc30
            (g_CDemonRendererPtr2,&g_CameraBackdropTexture,&g_CameraImagePaletteData);
  return;
}
