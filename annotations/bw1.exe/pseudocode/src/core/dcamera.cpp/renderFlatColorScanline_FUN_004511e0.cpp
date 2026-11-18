// Name: core_dcamera.cpp_renderFlatColorScanline_FUN_004511e0
// Address: 004511e0
// Address Range: [[004511e0, 0045139c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_004511e0(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_004511e0(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

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
  
  uVar6 = scanline_y - g_INT_01c4f00c;
  if (((g_CameraDownscaleIterations.dword != 1) || ((uVar6 & 1) == 0)) &&
     ((g_CameraDownscaleIterations.dword != 2 || ((uVar6 & 3) == 0)))) {
    iVar10 = ((right->base).x_current >> 0x10) - g_INT_01c4f008;
    iStack_18 = ((left->base).x_current >> 0x10) - g_INT_01c4f008;
    pSVar7 = left;
    iVar11 = iVar10;
    if (iStack_18 < iVar10) {
      pSVar7 = right;
      right = left;
      iVar11 = iStack_18;
      iStack_18 = iVar10;
    }
    iVar10 = (right->base).depth_current;
    puStack_14 = g_ZBufferScanlineArray[uVar6] + iVar11;
    iStack_18 = iStack_18 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar11 = iVar11 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar9 = (int)uVar6 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar3 = ((pSVar7->base).depth_current - iVar10) / ((iStack_18 - iVar11) + 1);
    cVar2 = (char)((g_FlatShadingLightLevel + (g_FlatShadingLightLevel >> 0x1f) * -0x100) -
                   (uint)((g_FlatShadingLightLevel >> 0x1f) << 7 < 0) >> 8);
    if (g_ImageBytesPerPixel < 2) {
      pcVar5 = g_SFogImagePlane_01342220.pixels[iVar9] + iVar11;
      for (; iVar11 < iStack_18; iVar11 = iVar11 + 1) {
        if (*puStack_14 < (uint)(iVar10 >> 8)) {
          *pcVar5 = cVar2;
        }
        iVar10 = iVar10 + iVar3;
        pcVar5 = pcVar5 + 1;
        puStack_14 = puStack_14 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
      }
    }
    else {
      bVar1 = g_CameraDownscaleIterations.bytes[0] & 0x1f;
      for (; iVar11 < iStack_18; iVar11 = iVar11 + 1) {
        if ((*puStack_14 < (uint)(iVar10 >> 8)) && (iVar8 = 0, 0 < g_ImageBytesPerPixel)) {
          iVar4 = iVar9 * 0x140 + iVar11;
          do {
            iVar8 = iVar8 + 1;
            g_CameraImageDecompressBuffer[iVar4] = cVar2;
            iVar4 = iVar4 + 0x12c00;
          } while (iVar8 < g_ImageBytesPerPixel);
        }
        puStack_14 = puStack_14 + (1 << bVar1);
        iVar10 = iVar10 + iVar3;
      }
    }
  }
  return;
}
