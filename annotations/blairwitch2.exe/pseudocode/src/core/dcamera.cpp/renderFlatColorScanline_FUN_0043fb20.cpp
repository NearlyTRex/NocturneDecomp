// Name: core_dcamera.cpp_renderFlatColorScanline_FUN_0043fb20
// Address: 0043fb20
// Address Range: [[0043fb20, 0043fcdc]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_0043fb20(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_0043fb20(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  SSoftwareEdge *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iStack_18;
  uint *puStack_14;
  
  uVar6 = scanline_y - g_INT_01c35e4c;
  if (((g_BIT_INTEGER32_01308800.dword != 1) || ((uVar6 & 1) == 0)) &&
     ((g_BIT_INTEGER32_01308800.dword != 2 || ((uVar6 & 3) == 0)))) {
    iVar10 = ((right->base).x_current >> 0x10) - g_INT_01c35e48;
    iStack_18 = ((left->base).x_current >> 0x10) - g_INT_01c35e48;
    pSVar7 = left;
    iVar11 = iVar10;
    if (iStack_18 < iVar10) {
      pSVar7 = right;
      right = left;
      iVar11 = iStack_18;
      iStack_18 = iVar10;
    }
    iVar10 = (right->base).depth_current;
    puStack_14 = g_UINT_PTR_ARRAY_01c2b64c[uVar6] + iVar11;
    iStack_18 = iStack_18 >> (g_BIT_INTEGER32_01308800.bytes[0] & 0x1f);
    iVar11 = iVar11 >> (g_BIT_INTEGER32_01308800.bytes[0] & 0x1f);
    iVar9 = (int)uVar6 >> (g_BIT_INTEGER32_01308800.bytes[0] & 0x1f);
    iVar3 = ((pSVar7->base).depth_current - iVar10) / ((iStack_18 - iVar11) + 1);
    cVar2 = (char)((g_INT_0150f450 + (g_INT_0150f450 >> 0x1f) * -0x100) -
                   (uint)((g_INT_0150f450 >> 0x1f) << 7 < 0) >> 8);
    if (g_INT_01465928 < 2) {
      pcVar5 = g_SFogImagePlane_01326d20.pixels[iVar9] + iVar11;
      for (; iVar11 < iStack_18; iVar11 = iVar11 + 1) {
        if (*puStack_14 < (uint)(iVar10 >> 8)) {
          *pcVar5 = cVar2;
        }
        iVar10 = iVar10 + iVar3;
        pcVar5 = pcVar5 + 1;
        puStack_14 = puStack_14 + (1 << (g_BIT_INTEGER32_01308800.bytes[0] & 0x1f));
      }
    }
    else {
      bVar1 = g_BIT_INTEGER32_01308800.bytes[0] & 0x1f;
      for (; iVar11 < iStack_18; iVar11 = iVar11 + 1) {
        if ((*puStack_14 < (uint)(iVar10 >> 8)) && (iVar8 = 0, 0 < g_INT_01465928)) {
          iVar4 = iVar9 * 0x140 + iVar11;
          do {
            iVar8 = iVar8 + 1;
            g_CHAR_ARRAY_01339920[iVar4] = cVar2;
            iVar4 = iVar4 + 0x12c00;
          } while (iVar8 < g_INT_01465928);
        }
        puStack_14 = puStack_14 + (1 << bVar1);
        iVar10 = iVar10 + iVar3;
      }
    }
  }
  return;
}
