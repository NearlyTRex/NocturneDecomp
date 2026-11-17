// Name: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_004649dd
// Address: 004649dd
// Address Range: [[004649dd, 00464afb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

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
    g_PTR_005b06e0 = (byte *)((int)g_ScreenBufferArray[scanline_y] + uVar1 * 4);
    g_INT_005b06e4 = iVar2 * 4;
    g_UINT_PTR_005b06e8 = g_ZBufferScanlineArray[scanline_y] + uVar1;
    uVar3 = (pSVar5->base).u_current;
    g_INT_005b06d4 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    g_INT_005b06d8 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar1 = (pSVar5->base).depth_current;
    g_INT_005b06dc =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).depth_current - uVar1) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar6 = 0;
    g_UINT_005b06b8 = uVar3;
    g_UINT_005b06bc = uVar4;
    g_UINT_005b06c4 = uVar1;
    while( true ) {
      if (*(int *)((int)g_UINT_PTR_005b06e8 + uVar6) <= (int)uVar1) {
        *(uint *)(g_PTR_005b06e0 + uVar6) =
             g_Hardware32BitPalette
             [g_CurrentTextureData
              [(uVar3 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
               (uVar4 >> g_TextureShift2.mm & g_TextureMask2.u32[0])]];
      }
      uVar6 = uVar6 + 4;
      if ((uint)g_INT_005b06e4 < uVar6) break;
      uVar3 = uVar3 + g_INT_005b06d4;
      uVar4 = uVar4 + g_INT_005b06d8;
      uVar1 = uVar1 + g_INT_005b06dc;
    }
  }
  return;
}
