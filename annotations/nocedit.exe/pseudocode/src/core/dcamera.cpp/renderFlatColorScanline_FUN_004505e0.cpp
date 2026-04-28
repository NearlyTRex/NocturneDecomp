// Name: core_dcamera.cpp_renderFlatColorScanline_FUN_004505e0
// Address: 004505e0
// Address Range: [[004505e0, 0045079c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  char cVar2;
  int iVar1;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  SSoftwareEdge *pSVar7;
  int iVar8;
  int iVar9;
  int iVar2;
  int iVar10;
  int iVar5;
  int iVar11;
  int local_18;
  uint *local_14;
  byte bVar1;
  
  uVar6 = scanline_y - g_ClipTop;
  if (((g_CameraDownscaleIterations.dword != 1) || ((uVar6 & 1) == 0)) &&
     ((g_CameraDownscaleIterations.dword != 2 || ((uVar6 & 3) == 0)))) {
    iVar10 = ((right->base).x_current >> 0x10) - g_ClipLeft;
    local_18 = ((left->base).x_current >> 0x10) - g_ClipLeft;
    pSVar7 = left;
    iVar5 = iVar10;
    if (local_18 < iVar10) {
      pSVar7 = right;
      right = left;
      iVar5 = local_18;
      local_18 = iVar10;
    }
    iVar2 = (right->base).depth_current;
    local_14 = g_ZBufferScanlineArray[uVar6] + iVar5;
    iVar1 = local_18 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar11 = iVar5 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar9 = (int)uVar6 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    iVar3 = ((pSVar7->base).depth_current - iVar2) / ((iVar1 - iVar11) + 1);
    cVar2 = (char)((g_FlatShadingLightLevel + (g_FlatShadingLightLevel >> 0x1f) * -0x100) -
                   (uint)((g_FlatShadingLightLevel >> 0x1f) << 7 < 0) >> 8);
    if (g_ImageBytesPerPixel < 2) {
      pcVar5 = g_CameraPlaneWorkBuffer.pixels[iVar9] + iVar11;
      for (; iVar11 < iVar1; iVar11 = iVar11 + 1) {
        if (*local_14 < (uint)(iVar2 >> 8)) {
          *pcVar5 = cVar2;
        }
        iVar2 = iVar2 + iVar3;
        pcVar5 = pcVar5 + 1;
        local_14 = local_14 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
      }
    }
    else {
      bVar1 = g_CameraDownscaleIterations.bytes[0] & 0x1f;
      for (; iVar11 < iVar1; iVar11 = iVar11 + 1) {
        if ((*local_14 < (uint)(iVar2 >> 8)) && (iVar8 = 0, 0 < g_ImageBytesPerPixel)) {
          iVar4 = iVar9 * 0x140 + iVar11;
          do {
            iVar4 = iVar4 + 0x12c00;
            iVar8 = iVar8 + 1;
            g_CameraImageDecompressBuffer[0].pixels[0][iVar4] = cVar2;
            iVar4 = iVar4;
          } while (iVar8 < g_ImageBytesPerPixel);
        }
        local_14 = local_14 + (1 << bVar1);
        iVar2 = iVar2 + iVar3;
      }
    }
  }
  return;
}
