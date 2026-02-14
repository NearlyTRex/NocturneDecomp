// Name: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450320
// Address: 00450320
// Address Range: [[00450320, 00450434]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  SEdgeData *pSVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar3 = (int)left_edge - g_ClipTop;
  if (((g_CameraDownscaleIterations.dword != 1) || ((uVar3 & 1) == 0)) &&
     ((g_CameraDownscaleIterations.dword != 2 || ((uVar3 & 3) == 0)))) {
    iVar8 = (int)uVar3 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    uVar7 = (right_edge->x_current >> 0x10) - g_ClipLeft >>
            (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    uVar9 = (*(int *)(scanline_y + 8) >> 0x10) - g_ClipLeft >>
            (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    pSVar5 = (SEdgeData *)scanline_y;
    uVar3 = uVar7;
    if ((int)uVar9 < (int)uVar7) {
      pSVar5 = right_edge;
      uVar3 = uVar9;
      uVar9 = uVar7;
      right_edge = (SEdgeData *)scanline_y;
    }
    if (uVar3 < (uint)g_CoronaLeftExtent[iVar8]) {
      g_CoronaLeftExtent[iVar8] = uVar3;
      g_CoronaLeftIntensity[iVar8] = right_edge->light_current;
    }
    if ((uint)g_CoronaRightExtent[iVar8] < uVar9) {
      g_CoronaRightExtent[iVar8] = uVar9;
      g_CoronaRightIntensity[iVar8] = pSVar5->light_current;
    }
    iVar4 = right_edge->z_current;
    iVar2 = uVar9 - uVar3;
    iVar6 = pSVar5->z_current - iVar4;
    piVar1 = g_CoronaDepthBuffer[iVar8] + uVar3;
    for (; (int)uVar3 < (int)uVar9; uVar3 = uVar3 + 1) {
      iVar8 = iVar4 >> 8;
      iVar4 = iVar4 + iVar6 / (iVar2 + 1);
      *piVar1 = iVar8;
      piVar1 = piVar1 + 1;
    }
  }
  return;
}
