// Name: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_00463b27
// Address: 00463b27
// Address Range: [[00463b27, 00463c41]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  uchar *puVar2;
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
    DAT_005b06e4 = iVar3 * 2;
    DAT_005b06e8 = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar1 * 2);
    uVar4 = (pSVar6->base).u_current;
    _DAT_005b06d4 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar5 = (pSVar6->base).v_current;
    _DAT_005b06d8 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar5) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar1 = (pSVar6->base).depth_current;
    _DAT_005b06dc =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).depth_current - uVar1) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar7 = 0;
    DAT_005b06b8 = uVar4;
    DAT_005b06bc = uVar5;
    DAT_005b06c4 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)((int)DAT_005b06e8 + uVar7)) {
        puVar2 = g_CurrentTextureOpacityData;
        if (g_CurrentTextureOpacityData == (uchar *)0x0) {
          puVar2 = g_CurrentTextureData;
        }
        if (puVar2[(uVar4 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                   (uVar5 >> g_TextureShift2.mm & g_TextureMask2.u32[0])] != '\0') {
          *(ushort *)((int)DAT_005b06e8 + uVar7) = (ushort)uVar1;
        }
      }
      uVar7 = uVar7 + 2;
      if (DAT_005b06e4 < uVar7) break;
      uVar4 = uVar4 + _DAT_005b06d4;
      uVar5 = uVar5 + _DAT_005b06d8;
      uVar1 = uVar1 + _DAT_005b06dc;
    }
  }
  return;
}
