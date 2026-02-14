// Name: core_dcamera.cpp_renderVolumetricLightScanline_FUN_00450440
// Address: 00450440
// Address Range: [[00450440, 004505dc]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  
  iVar8 = scanline_y;
  uVar7 = (int)left_edge - g_ClipTop;
  if (((g_CameraDownscaleIterations.dword != 1) || ((uVar7 & 1) == 0)) &&
     ((g_CameraDownscaleIterations.dword != 2 || ((uVar7 & 3) == 0)))) {
    iVar15 = (int)uVar7 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar13 = (right_edge->x_current >> 0x10) - g_ClipLeft >>
             (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar16 = (*(int *)(scanline_y + 8) >> 0x10) - g_ClipLeft >>
             (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar14 = iVar13;
    if (iVar16 < iVar13) {
      scanline_y = (int)right_edge;
      iVar14 = iVar16;
      iVar16 = iVar13;
      right_edge = (SEdgeData *)iVar8;
    }
    iVar8 = right_edge->z_current >> 0x1f;
    iVar5 = (int)((right_edge->z_current + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
    iVar8 = *(int *)(scanline_y + 0x28);
    iVar9 = *(int *)(scanline_y + 0x28) >> 0x1f;
    iVar13 = right_edge->z_current;
    iVar10 = iVar13 >> 0x1f;
    iVar6 = (iVar16 - iVar14) + 1;
    iVar12 = right_edge->light_current;
    iVar11 = *(int *)(scanline_y + 0x10) - iVar12;
    bVar4 = g_CameraDownscaleIterations.bytes[0] & 0x1f;
    puVar2 = g_ZBufferScanlineArray[iVar15 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)];
    pcVar17 = g_CameraPlaneWorkBuffer.pixels[iVar15] + iVar14;
    iVar16 = (iVar16 - iVar14) * 4;
    do {
      if (*(int *)((int)puVar2 + iVar16 + (iVar14 << bVar4) * 4) < iVar5) {
        piVar1 = (int *)((int)g_DitherPatternTable + g_DitherPatternOffset);
        g_DitherPatternOffset = g_DitherPatternOffset + 4U & 0x3fc;
        uVar7 = (uint)(byte)*pcVar17 * 0x100 + iVar12 + *piVar1 >> 8;
        if (0xfe < uVar7) {
          uVar7 = 0xff;
        }
        *pcVar17 = (byte)uVar7;
      }
      iVar12 = iVar12 + iVar11 / iVar6;
      iVar5 = iVar5 + (((int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8) -
                      ((int)((iVar13 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8)) / iVar6;
      pcVar17 = pcVar17 + 1;
      iVar15 = iVar16 + -4;
      bVar3 = 3 < iVar16;
      iVar16 = iVar15;
    } while (iVar15 != 0 && bVar3);
    g_BackdropSaveActive = 1;
  }
  return;
}
