// Name: core_dstrender.cpp_renderPerspectiveTexturedScanline_FUN_004940e9
// Address: 004940e9
// MANUAL RECONSTRUCTION
// Address Range: [[004940e9, 004941c2] [004941d0, 004941d5]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  SSoftwareEdge *pSVar5;
  
  uVar3 = (right_edge->base).x_current;
  uVar4 = (left_edge->base).x_current;
  uVar1 = uVar3;
  pSVar5 = right_edge;
  if (uVar4 < uVar3) {
    uVar1 = uVar4;
    uVar4 = uVar3;
    pSVar5 = left_edge;
    left_edge = right_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar4 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar4 >> 0x10) {
    g_PerspectiveScanlineColorPtr = (uint *)g_ScreenBufferArray[scanline_y] + uVar1;
    g_PerspectiveScanlinePixelCount = iVar2 * 4;
    uVar3 = (pSVar5->base).u_current;
    g_SoftwareDeltaTextureU =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    g_SoftwareDeltaTextureV =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar1 = 0;
    g_PerspectiveNextU = uVar3;
    g_PerspectiveNextV = uVar4;
    while( true ) {
      *(uint *)((char *)g_PerspectiveScanlineColorPtr + uVar1) =
           ((uint *)g_CurrentTextureData)
           [(uVar3 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
            (uVar4 >> g_TextureShift2.mm & g_TextureMask2.u32[0])];
      uVar1 = uVar1 + 4;
      if ((uint)g_PerspectiveScanlinePixelCount <= uVar1) break;
      uVar3 = uVar3 + g_SoftwareDeltaTextureU;
      uVar4 = uVar4 + g_SoftwareDeltaTextureV;
    }
  }
  return;
}
