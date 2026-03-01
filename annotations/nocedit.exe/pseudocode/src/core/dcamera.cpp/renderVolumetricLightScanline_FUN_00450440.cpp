// Name: core_dcamera.cpp_renderVolumetricLightScanline_FUN_00450440
// Address: 00450440
// Address Range: [[00450440, 004505dc]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  
  iVar2 = scanline_y;
  uVar8 = (int)left_edge - g_ClipTop;
  if (((g_CameraDownscaleIterations.dword != 1) || ((uVar8 & 1) == 0)) &&
     ((g_CameraDownscaleIterations.dword != 2 || ((uVar8 & 3) == 0)))) {
    iVar15 = (int)uVar8 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar13 = ((right_edge->base).x_current >> 0x10) - g_ClipLeft >>
             (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar16 = (*(int *)(scanline_y + 8) >> 0x10) - g_ClipLeft >>
             (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar14 = iVar13;
    if (iVar16 < iVar13) {
      scanline_y = (int)right_edge;
      iVar14 = iVar16;
      iVar16 = iVar13;
      right_edge = (SSoftwareEdge *)iVar2;
    }
    iVar2 = (right_edge->base).w_current;
    iVar13 = iVar2 >> 0x1f;
    iVar6 = (int)((iVar2 + iVar13 * -0x100) - (uint)(iVar13 << 7 < 0)) >> 8;
    iVar2 = *(int *)(scanline_y + 0x28);
    iVar9 = *(int *)(scanline_y + 0x28) >> 0x1f;
    iVar13 = (right_edge->base).w_current;
    iVar10 = iVar13 >> 0x1f;
    iVar7 = (iVar16 - iVar14) + 1;
    iVar12 = (right_edge->base).z_current;
    iVar11 = *(int *)(scanline_y + 0x10) - iVar12;
    bVar5 = g_CameraDownscaleIterations.bytes[0] & 0x1f;
    puVar3 = g_ZBufferScanlineArray[iVar15 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)];
    pcVar17 = g_CameraPlaneWorkBuffer.pixels[iVar15] + iVar14;
    iVar16 = (iVar16 - iVar14) * 4;
    do {
      if (*(int *)((int)puVar3 + iVar16 + (iVar14 << bVar5) * 4) < iVar6) {
        piVar1 = (int *)((int)g_DitherPatternTable + g_DitherPatternOffset);
        g_DitherPatternOffset = g_DitherPatternOffset + 4U & 0x3fc;
        uVar8 = (uint)(byte)*pcVar17 * 0x100 + iVar12 + *piVar1 >> 8;
        if (0xfe < uVar8) {
          uVar8 = 0xff;
        }
        *pcVar17 = (byte)uVar8;
      }
      iVar12 = iVar12 + iVar11 / iVar7;
      iVar6 = iVar6 + (((int)((iVar2 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8) -
                      ((int)((iVar13 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8)) / iVar7;
      pcVar17 = pcVar17 + 1;
      iVar15 = iVar16 + -4;
      bVar4 = 3 < iVar16;
      iVar16 = iVar15;
    } while (iVar15 != 0 && bVar4);
    g_BackdropSaveActive = 1;
  }
  return;
}
