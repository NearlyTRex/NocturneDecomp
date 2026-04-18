// Name: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_004907e7
// Address: 004907e7
// Address Range: [[004907e7, 00490901]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  SSoftwareEdge *pSVar6;
  uint uVar7;
  
  uVar4 = (right_edge->base).x_current;
  uVar5 = (left_edge->base).x_current;
  uVar1 = uVar4;
  pSVar6 = right_edge;
  if (uVar5 < uVar4) {
    uVar1 = uVar5;
    uVar5 = uVar4;
    pSVar6 = left_edge;
    left_edge = right_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar3 = (uVar5 >> 0x10) - uVar1;
  if (iVar3 != 0 && uVar1 <= uVar5 >> 0x10) {
    g_PerspectiveScanlinePixelCount = iVar3 * 2;
    g_PerspectiveScanlineZPtr = (uint *)((int)g_ScreenBufferArray[scanline_y] + uVar1 * 2);
    uVar4 = (pSVar6->base).u_current;
    g_SoftwareDeltaTextureU =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar5 = (pSVar6->base).v_current;
    g_SoftwareDeltaTextureV =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar5) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar1 = (pSVar6->base).depth_current;
    g_SoftwareDeltaDepthZ =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).depth_current - uVar1) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar7 = 0;
    g_PerspectiveNextU = uVar4;
    g_PerspectiveNextV = uVar5;
    g_StartDepthZ = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)((int)g_PerspectiveScanlineZPtr + uVar7)) {
        pvVar2 = g_CurrentTextureOpacityData;
        if (g_CurrentTextureOpacityData == (void *)0x0) {
          pvVar2 = g_CurrentTextureData;
        }
        if (*(char *)((uVar4 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                      (uVar5 >> g_TextureShift2.mm & g_TextureMask2.u32[0]) + (int)pvVar2) != '\0')
        {
          *(ushort *)((int)g_PerspectiveScanlineZPtr + uVar7) = (ushort)uVar1;
        }
      }
      uVar7 = uVar7 + 2;
      if ((uint)g_PerspectiveScanlinePixelCount < uVar7) break;
      uVar4 = uVar4 + g_SoftwareDeltaTextureU;
      uVar5 = uVar5 + g_SoftwareDeltaTextureV;
      uVar1 = uVar1 + g_SoftwareDeltaDepthZ;
    }
  }
  return;
}
