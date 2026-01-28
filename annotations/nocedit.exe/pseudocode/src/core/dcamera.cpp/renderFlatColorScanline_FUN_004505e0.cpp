// Name: core_dcamera.cpp_renderFlatColorScanline_FUN_004505e0
// Address: 004505e0
// Address Range: [[004505e0, 0045079c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0 (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  SEdgeData *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_18;
  uint *local_14;
  
  uVar6 = (int)left_edge - g_ClipTop;
  if (((g_CameraDownscaleIterations != 1) || ((uVar6 & 1) == 0)) &&
     ((g_CameraDownscaleIterations != 2 || ((uVar6 & 3) == 0)))) {
    iVar10 = (right_edge->x_current >> 0x10) - g_ClipLeft;
    local_18 = (*(int *)(scanline_y + 8) >> 0x10) - g_ClipLeft;
    pSVar7 = (SEdgeData *)scanline_y;
    iVar11 = iVar10;
    if (local_18 < iVar10) {
      pSVar7 = right_edge;
      right_edge = (SEdgeData *)scanline_y;
      iVar11 = local_18;
      local_18 = iVar10;
    }
    iVar10 = right_edge->z_current;
    local_14 = g_ZBufferScanlineArray[uVar6] + iVar11;
    local_18 = local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f);
    iVar11 = iVar11 >> ((byte)g_CameraDownscaleIterations & 0x1f);
    iVar9 = (int)uVar6 >> ((byte)g_CameraDownscaleIterations & 0x1f);
    iVar3 = (pSVar7->z_current - iVar10) / ((local_18 - iVar11) + 1);
    cVar2 = (char)((g_FlatShadingLightLevel + (g_FlatShadingLightLevel >> 0x1f) * -0x100) -
                   (uint)((g_FlatShadingLightLevel >> 0x1f) << 7 < 0) >> 8);
    if (g_ImageBytesPerPixel < 2) {
      pcVar5 = g_CameraPlaneWorkBuffer.pixels[iVar9] + iVar11;
      for (; iVar11 < local_18; iVar11 = iVar11 + 1) {
        if (*local_14 < (uint)(iVar10 >> 8)) {
          *pcVar5 = cVar2;
        }
        iVar10 = iVar10 + iVar3;
        pcVar5 = pcVar5 + 1;
        local_14 = local_14 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
      }
    }
    else {
      bVar1 = (byte)g_CameraDownscaleIterations & 0x1f;
      for (; iVar11 < local_18; iVar11 = iVar11 + 1) {
        if ((*local_14 < (uint)(iVar10 >> 8)) && (iVar8 = 0, 0 < g_ImageBytesPerPixel)) {
          iVar4 = iVar9 * 0x140 + iVar11;
          do {
            iVar8 = iVar8 + 1;
            g_CameraImageDecompressBuffer[0].pixels[0][iVar4] = cVar2;
            iVar4 = iVar4 + 0x12c00;
          } while (iVar8 < g_ImageBytesPerPixel);
        }
        local_14 = local_14 + (1 << bVar1);
        iVar10 = iVar10 + iVar3;
      }
    }
  }
  return;
}
