// Name: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450320
// Address: 00450320
// Address Range: [[00450320, 00450434]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  SSoftwareEdge *pSVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar3 = scanline_y - g_ClipTop;
  if (((g_CameraDownscaleIterations.dword != 1) || ((uVar3 & 1) == 0)) &&
     ((g_CameraDownscaleIterations.dword != 2 || ((uVar3 & 3) == 0)))) {
    iVar8 = (int)uVar3 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    uVar7 = ((right->base).x_current >> 0x10) - g_ClipLeft >>
            (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    uVar9 = ((left->base).x_current >> 0x10) - g_ClipLeft >>
            (g_CameraDownscaleIterations.bytes[0] & 0x1f);
    pSVar5 = left;
    uVar3 = uVar7;
    if ((int)uVar9 < (int)uVar7) {
      pSVar5 = right;
      uVar3 = uVar9;
      uVar9 = uVar7;
      right = left;
    }
    if (uVar3 < (uint)g_CoronaLeftExtent[iVar8]) {
      g_CoronaLeftExtent[iVar8] = uVar3;
      g_CoronaLeftIntensity[iVar8] = (right->base).red_current;
    }
    if ((uint)g_CoronaRightExtent[iVar8] < uVar9) {
      g_CoronaRightExtent[iVar8] = uVar9;
      g_CoronaRightIntensity[iVar8] = (pSVar5->base).red_current;
    }
    iVar4 = (right->base).depth_current;
    iVar2 = uVar9 - uVar3;
    iVar6 = (pSVar5->base).depth_current - iVar4;
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
