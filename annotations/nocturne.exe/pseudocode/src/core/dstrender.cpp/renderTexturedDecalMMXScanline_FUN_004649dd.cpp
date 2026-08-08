// Name: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_004649dd
// Address: 004649dd
// Address Range: [[004649dd, 00464afb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  SSoftwareEdge *pSVar5;
  int iVar6;
  
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
    DAT_005b06e0 = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar1 * 4);
    DAT_005b06e4 = iVar2 * 4;
    DAT_005b06e8 = g_ZBufferScanlineArray[scanline_y] + uVar1;
    uVar3 = (pSVar5->base).u_current;
    _DAT_005b06d4 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    _DAT_005b06d8 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    iVar6 = (pSVar5->base).depth_current;
    _DAT_005b06dc =
         (int)((ulonglong)
               ((longlong)((left_edge->base).depth_current - iVar6) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar1 = 0;
    DAT_005b06b8 = uVar3;
    DAT_005b06bc = uVar4;
    DAT_005b06c4 = iVar6;
    while( true ) {
      if (*(int *)((int)DAT_005b06e8 + uVar1) <= iVar6) {
        *(uint *)((int)DAT_005b06e0 + uVar1) =
             g_Hardware32BitPalette
             [g_CurrentTextureData
              [(uVar3 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
               (uVar4 >> g_TextureShift2.mm & g_TextureMask2.u32[0])]];
      }
      uVar1 = uVar1 + 4;
      if (DAT_005b06e4 < uVar1) break;
      uVar3 = uVar3 + _DAT_005b06d4;
      uVar4 = uVar4 + _DAT_005b06d8;
      iVar6 = iVar6 + _DAT_005b06dc;
    }
  }
  return;
}
