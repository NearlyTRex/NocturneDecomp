// Name: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_0049169d
// Address: 0049169d
// Address Range: [[0049169d, 004917bb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  SSoftwareEdge *pSVar5;
  uint uVar6;
  
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
    g_PerspectiveScanlineColorPtr = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar1 * 4);
    g_PerspectiveScanlinePixelCount = iVar2 * 4;
    g_PerspectiveScanlineZPtr = g_ZBufferScanlineArray[scanline_y] + uVar1;
    uVar3 = (pSVar5->base).u_current;
    g_DeltaTextureU =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    g_DeltaTextureV =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar1 = (pSVar5->base).w_current;
    g_DeltaDepthZ =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).w_current - uVar1) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar6 = 0;
    g_PerspectiveNextU = uVar3;
    g_PerspectiveNextV = uVar4;
    g_StartDepthZ = uVar1;
    while( true ) {
      if (*(int *)((int)g_PerspectiveScanlineZPtr + uVar6) <= (int)uVar1) {
        *(uint *)((int)g_PerspectiveScanlineColorPtr + uVar6) =
             g_Hardware32BitPalette
             [*(byte *)((uVar3 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                        (uVar4 >> g_TextureShift2.mm & g_TextureMask2.u32[0]) +
                       (int)g_CurrentTextureData)];
      }
      uVar6 = uVar6 + 4;
      if ((uint)g_PerspectiveScanlinePixelCount < uVar6) break;
      uVar3 = uVar3 + g_DeltaTextureU;
      uVar4 = uVar4 + g_DeltaTextureV;
      uVar1 = uVar1 + g_DeltaDepthZ;
    }
  }
  return;
}
