// Name: core_dcamera.cpp_renderVolumetricLightScanline_FUN_0044d180
// Address: 0044d180
// Address Range: [[0044d180, 0044d31c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_0044d180(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_0044d180(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  byte bVar4;
  SSoftwareEdge *pSVar5;
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
  int iVar17;
  char *pcVar18;
  
  pSVar5 = left;
  uVar8 = scanline_y - g_INT_01c6b5ac;
  if (((g_BIT_INTEGER32_013405b0.dword != 1) || ((uVar8 & 1) == 0)) &&
     ((g_BIT_INTEGER32_013405b0.dword != 2 || ((uVar8 & 3) == 0)))) {
    iVar16 = (int)uVar8 >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f);
    iVar14 = ((right->base).x_current >> 0x10) - g_INT_01c6b5a8 >>
             (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f);
    iVar17 = ((left->base).x_current >> 0x10) - g_INT_01c6b5a8 >>
             (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f);
    iVar15 = iVar14;
    if (iVar17 < iVar14) {
      left = right;
      iVar15 = iVar17;
      iVar17 = iVar14;
      right = pSVar5;
    }
    iVar14 = (right->base).depth_current;
    iVar9 = iVar14 >> 0x1f;
    iVar6 = (int)((iVar14 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
    iVar14 = (left->base).depth_current;
    iVar10 = (left->base).depth_current >> 0x1f;
    iVar9 = (right->base).depth_current;
    iVar11 = iVar9 >> 0x1f;
    iVar7 = (iVar17 - iVar15) + 1;
    iVar13 = (right->base).red_current;
    iVar12 = (left->base).red_current - iVar13;
    bVar4 = g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f;
    puVar2 = g_UINT_PTR_ARRAY_01c60dac[iVar16 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)];
    pcVar18 = g_SFogImagePlane_0135ead0.pixels[iVar16] + iVar15;
    iVar17 = (iVar17 - iVar15) * 4;
    do {
      if (*(int *)((int)puVar2 + iVar17 + (iVar15 << bVar4) * 4) < iVar6) {
        piVar1 = (int *)(g_INT_01340180 + 0x1340184);
        g_INT_01340180 = g_INT_01340180 + 4U & 0x3fc;
        uVar8 = (uint)(byte)*pcVar18 * 0x100 + iVar13 + *piVar1 >> 8;
        if (0xfe < uVar8) {
          uVar8 = 0xff;
        }
        *pcVar18 = (byte)uVar8;
      }
      iVar13 = iVar13 + iVar12 / iVar7;
      iVar6 = iVar6 + (((int)((iVar14 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8) -
                      ((int)((iVar9 + iVar11 * -0x100) - (uint)(iVar11 << 7 < 0)) >> 8)) / iVar7;
      pcVar18 = pcVar18 + 1;
      iVar16 = iVar17 + -4;
      bVar3 = 3 < iVar17;
      iVar17 = iVar16;
    } while (iVar16 != 0 && bVar3);
    g_INT_0134017c = 1;
  }
  return;
}
