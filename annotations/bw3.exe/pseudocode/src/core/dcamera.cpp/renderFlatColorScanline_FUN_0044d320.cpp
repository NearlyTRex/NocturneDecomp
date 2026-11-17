// Name: core_dcamera.cpp_renderFlatColorScanline_FUN_0044d320
// Address: 0044d320
// Address Range: [[0044d320, 0044d4dc]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_0044d320(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_0044d320(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  SSoftwareEdge *pSVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iStack_18;
  uint *puStack_14;
  
  uVar7 = scanline_y - g_INT_01c6b5ac;
  if (((g_BIT_INTEGER32_013405b0.dword != 1) || ((uVar7 & 1) == 0)) &&
     ((g_BIT_INTEGER32_013405b0.dword != 2 || ((uVar7 & 3) == 0)))) {
    iVar10 = ((right->base).x_current >> 0x10) - g_INT_01c6b5a8;
    iStack_18 = ((left->base).x_current >> 0x10) - g_INT_01c6b5a8;
    pSVar8 = left;
    iVar11 = iVar10;
    if (iStack_18 < iVar10) {
      pSVar8 = right;
      right = left;
      iVar11 = iStack_18;
      iStack_18 = iVar10;
    }
    iVar10 = (right->base).depth_current;
    puStack_14 = g_UINT_PTR_ARRAY_01c60dac[uVar7] + iVar11;
    iStack_18 = iStack_18 >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f);
    iVar11 = iVar11 >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f);
    iVar3 = ((pSVar8->base).depth_current - iVar10) / ((iStack_18 - iVar11) + 1);
    cVar2 = (char)((g_INT_01547200 + (g_INT_01547200 >> 0x1f) * -0x100) -
                   (uint)((g_INT_01547200 >> 0x1f) << 7 < 0) >> 8);
    iVar4 = ((int)uVar7 >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)) * 0x140;
    if (g_INT_0149d6d8 < 2) {
      pcVar6 = g_CHAR_ARRAY_0135ead0 + iVar11 + iVar4;
      for (; iVar11 < iStack_18; iVar11 = iVar11 + 1) {
        if (*puStack_14 < (uint)(iVar10 >> 8)) {
          *pcVar6 = cVar2;
        }
        iVar10 = iVar10 + iVar3;
        pcVar6 = pcVar6 + 1;
        puStack_14 = puStack_14 + (1 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f));
      }
    }
    else {
      bVar1 = g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f;
      for (; iVar11 < iStack_18; iVar11 = iVar11 + 1) {
        if ((*puStack_14 < (uint)(iVar10 >> 8)) && (iVar9 = 0, 0 < g_INT_0149d6d8)) {
          iVar5 = iVar4 + iVar11;
          do {
            iVar9 = iVar9 + 1;
            g_CHAR_ARRAY_013716d0[iVar5] = cVar2;
            iVar5 = iVar5 + 0x12c00;
          } while (iVar9 < g_INT_0149d6d8);
        }
        puStack_14 = puStack_14 + (1 << bVar1);
        iVar10 = iVar10 + iVar3;
      }
    }
  }
  return;
}
