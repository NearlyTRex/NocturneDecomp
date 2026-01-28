// Name: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_004907e7
// Address: 004907e7
// Address Range: [[004907e7, 00490901]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7 (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  SEdgeData *pSVar6;
  uint uVar7;
  
  uVar4 = left_edge->x_current;
  uVar5 = right_edge->x_current;
  uVar1 = uVar4;
  pSVar6 = left_edge;
  if (uVar5 < uVar4) {
    uVar1 = uVar5;
    uVar5 = uVar4;
    pSVar6 = right_edge;
    right_edge = left_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar3 = (uVar5 >> 0x10) - uVar1;
  if (iVar3 != 0 && uVar1 <= uVar5 >> 0x10) {
    g_PerspectiveScanlinePixelCount = iVar3 * 2;
    g_PerspectiveScanlineZPtr = (uint *)((int)g_ScreenBufferArray[scanline_y] + uVar1 * 2);
    uVar4 = pSVar6->u_current;
    g_DeltaTextureU =
         (int)((ulonglong)
               ((longlong)(int)(right_edge->u_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar5 = pSVar6->v_current;
    g_DeltaTextureV =
         (int)((ulonglong)
               ((longlong)(int)(right_edge->v_current - uVar5) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar1 = pSVar6->z_current;
    g_DeltaDepthZ =
         (int)((ulonglong)
               ((longlong)(int)(right_edge->z_current - uVar1) *
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
        if (*(char *)((uVar4 >> g_TextureShift1 & (uint)g_TextureMask1) +
                      (uVar5 >> g_TextureShift2 & (uint)g_TextureMask2) + (int)pvVar2) != '\0') {
          *(ushort *)((int)g_PerspectiveScanlineZPtr + uVar7) = (ushort)uVar1;
        }
      }
      uVar7 = uVar7 + 2;
      if ((uint)g_PerspectiveScanlinePixelCount < uVar7) break;
      uVar4 = uVar4 + g_DeltaTextureU;
      uVar5 = uVar5 + g_DeltaTextureV;
      uVar1 = uVar1 + g_DeltaDepthZ;
    }
  }
  return;
}
