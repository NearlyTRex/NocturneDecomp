// Name: core_dcamera.cpp_renderVolumetricLightScanline_FUN_00450440
// Address: 00450440
// MANUAL RECONSTRUCTION
// Address Range: [[00450440, 004505dc]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  int iVar1;
  int iVar3;
  SSoftwareEdge *pSVar4;
  int iVar6;
  uint uVar5;
  int iVar7;
  int iVar8;
  int iVar17;
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
  int iVar2;
  int *piVar1;
  bool bVar4;
  uint *puVar3;
  byte bVar5;
  
  pSVar4 = left;
  uVar8 = scanline_y - g_ClipTop;
  if (((g_CameraDownscaleIterations.dword != 1) || ((uVar8 & 1) == 0)) &&
     ((g_CameraDownscaleIterations.dword != 2 || ((uVar8 & 3) == 0)))) {
    iVar15 = (int)uVar8 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar13 = ((right->base).x_current >> 0x10) - g_ClipLeft >>
             (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar16 = ((left->base).x_current >> 0x10) - g_ClipLeft >>
             (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar14 = iVar13;
    if (iVar16 < iVar13) {
      left = right;
      iVar14 = iVar16;
      iVar16 = iVar13;
      right = pSVar4;
    }
    iVar2 = (right->base).depth_current;
    iVar6 = (int)((iVar2 + (iVar2 >> 0x1f) * -0x100) - (uint)((iVar2 >> 0x1f) << 7 < 0)) >> 8;
    iVar1 = (left->base).depth_current;
    iVar9 = (left->base).depth_current >> 0x1f;
    iVar3 = (right->base).depth_current;
    iVar10 = iVar3 >> 0x1f;
    iVar7 = (iVar16 - iVar14) + 1;
    iVar12 = (right->base).red_current;
    iVar11 = (left->base).red_current - iVar12;
    bVar5 = g_CameraDownscaleIterations.bytes[0] & 0x1f;
    puVar3 = g_ZBufferScanlineArray[iVar15 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)];
    pcVar17 = g_CameraPlaneWorkBuffer.pixels[iVar15] + iVar14;
    iVar8 = (iVar16 - iVar14) * 4;
    do {
      if (((int *)puVar3)[(iVar14 << bVar5) + (iVar8 >> 2)] < iVar6) {
        piVar1 = g_DitherPatternTable + (g_DitherPatternOffset >> 2);
        g_DitherPatternOffset = g_DitherPatternOffset + 4U & 0x3fc;
        uVar5 = (uint)(byte)*pcVar17 * 0x100 + iVar12 + *piVar1 >> 8;
        if (0xfe < uVar5) {
          uVar5 = 0xff;
        }
        *pcVar17 = (byte)uVar5;
      }
      iVar12 = iVar12 + iVar11 / iVar7;
      iVar6 = iVar6 + (((int)((iVar1 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8) -
                      ((int)((iVar3 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8)) / iVar7;
      pcVar17 = pcVar17 + 1;
      iVar17 = iVar8 + -4;
      bVar4 = 3 < iVar8;
      iVar8 = iVar17;
    } while (iVar17 != 0 && bVar4);
    g_BackdropSaveActive = 1;
  }
  return;
}
