// Name: wincore_windll.cpp_renderPerspectiveCorrectScanline16_FUN_005b5322
// Address: 005b5322
// Address Range: [[005b5322, 005b555b]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322(SEdgeData *left_vertex,SEdgeData *right_vertex,int scanline_y)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322(SEdgeData *left_vertex,SEdgeData *right_vertex,int scanline_y)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  SEdgeData *pSVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar10 = left_vertex->x_current;
  uVar6 = right_vertex->x_current;
  uVar3 = uVar10;
  pSVar7 = left_vertex;
  if (uVar6 < uVar10) {
    uVar3 = uVar6;
    uVar6 = uVar10;
    pSVar7 = right_vertex;
    right_vertex = left_vertex;
  }
  uVar3 = uVar3 >> 0x10;
  iVar4 = (uVar6 >> 0x10) - uVar3;
  if (iVar4 != 0 && uVar3 <= uVar6 >> 0x10) {
    g_CurrentScreenPtr = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar3 * 2);
    g_ScanlinePixelCount = iVar4 * 4;
    puVar9 = g_ZBufferScanlineArray[scanline_y] + uVar3;
    g_CurrentZBufferPtr = (int *)puVar9;
    if (g_RenderStateFlags.dword == 0x80) {
      uVar10 = pSVar7->z_current;
      iVar8 = (int)((ulonglong)
                    ((longlong)(int)(right_vertex->z_current - uVar10) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
      iVar4 = g_ScanlinePixelCount;
      g_StartDepthW = uVar10;
      g_DeltaDepthW = iVar8;
      do {
        *puVar9 = uVar10;
        uVar10 = uVar10 + iVar8;
        puVar9 = puVar9 + 1;
        iVar5 = iVar4 + -4;
        bVar1 = 3 < iVar4;
        iVar4 = iVar5;
      } while (iVar5 != 0 && bVar1);
      return;
    }
    if (g_RenderStateFlag2 == 5) {
      uVar10 = pSVar7->u_current;
      g_StartTextureU =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)pSVar7->z_current);
      uVar10 = right_vertex->u_current;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)right_vertex->z_current) - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
      uVar10 = pSVar7->v_current;
      g_StartTextureV =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)pSVar7->z_current);
      uVar10 = right_vertex->v_current;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)right_vertex->z_current) - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
    }
    else {
      g_StartTextureU = pSVar7->u_current;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)(right_vertex->u_current - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
      g_StartTextureV = pSVar7->v_current;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)(right_vertex->v_current - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
    }
    iVar8 = pSVar7->z_current;
    g_DeltaDepthW =
         (int)((ulonglong)
               ((longlong)(right_vertex->z_current - iVar8) *
               (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
    uVar10 = 0;
    g_StartDepthW = iVar8;
    if ((g_CurrentTextureOpacityData == (void *)0x0) &&
       (uVar6 = g_StartTextureV, uVar3 = g_StartTextureU, (g_RenderStateFlags.dword & 2) == 0)) {
      while( true ) {
        if (((g_RenderStateFlags.dword & 0x40) == 0) ||
           (*(int *)(uVar10 + (int)g_CurrentZBufferPtr) <= iVar8)) {
          if ((g_RenderStateFlags.dword & 1) == 0) {
            uVar2 = (ushort)g_ActiveRenderColor;
          }
          else {
            uVar2 = g_Hardware16BitPalette
                    [*(byte *)((int)g_CurrentTextureData +
                              (uVar6 >> (g_TextureShift2.b32[0].bytes[0] & 0x1f) &
                              g_TextureMask2.u32[0]) +
                              (uVar3 >> (g_TextureShift1.b32[0].bytes[0] & 0x1f) &
                              g_TextureMask1.u32[0]))];
          }
          *(ushort *)((uVar10 >> 1) + (int)g_CurrentScreenPtr) = uVar2;
          if ((g_RenderStateFlags.dword & 0x80) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar10) = iVar8;
          }
        }
        uVar10 = uVar10 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar10) break;
        uVar3 = uVar3 + g_DeltaTextureU;
        uVar6 = uVar6 + g_DeltaTextureV;
        iVar8 = iVar8 + g_DeltaDepthW;
      }
    }
  }
  return;
}
