// Name: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_005300ec
// Address: 005300ec
// Address Range: [[005300ec, 00530321]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005300ec(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005300ec(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  SSoftwareEdge *pSVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar8 = (right_vertex->base).x_current;
  uVar4 = (left_vertex->base).x_current;
  uVar2 = uVar8;
  pSVar5 = right_vertex;
  if (uVar4 < uVar8) {
    uVar2 = uVar4;
    uVar4 = uVar8;
    pSVar5 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar2 = uVar2 >> 0x10;
  iVar3 = (uVar4 >> 0x10) - uVar2;
  if (iVar3 != 0 && uVar2 <= uVar4 >> 0x10) {
    DAT_005bf078 = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar2 * 4);
    DAT_005bf014 = iVar3 * 4;
    puVar7 = g_ZBufferScanlineArray[scanline_y] + uVar2;
    DAT_005bf07c = puVar7;
    if (g_RenderStateFlags.dword == RENDER_DEPTH_WRITE) {
      uVar8 = (pSVar5->base).depth_current;
      iVar3 = (int)((ulonglong)
                    ((longlong)(int)((left_vertex->base).depth_current - uVar8) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
      uVar4 = DAT_005bf014;
      DAT_005bf05c = uVar8;
      DAT_005bf488 = iVar3;
      do {
        *puVar7 = uVar8;
        uVar8 = uVar8 + iVar3;
        puVar7 = puVar7 + 1;
        uVar2 = uVar4 - 4;
        bVar1 = 3 < (int)uVar4;
        uVar4 = uVar2;
      } while (uVar2 != 0 && bVar1);
      return;
    }
    if (g_VertexPreprocessMode == 5) {
      uVar8 = (pSVar5->base).u_current;
      DAT_005bf050 = (uint)(CONCAT44(((int)uVar8 >> 0x1f) << 0x18 | uVar8 >> 8,uVar8 << 0x18) /
                           (longlong)(pSVar5->base).depth_current);
      uVar8 = (left_vertex->base).u_current;
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar8 >> 0x1f) << 0x18 | uVar8 >> 8,uVar8 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
      uVar8 = (pSVar5->base).v_current;
      DAT_005bf054 = (uint)(CONCAT44(((int)uVar8 >> 0x1f) << 0x18 | uVar8 >> 8,uVar8 << 0x18) /
                           (longlong)(pSVar5->base).depth_current);
      uVar8 = (left_vertex->base).v_current;
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar8 >> 0x1f) << 0x18 | uVar8 >> 8,uVar8 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    }
    else {
      DAT_005bf050 = (pSVar5->base).u_current;
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).u_current - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
      DAT_005bf054 = (pSVar5->base).v_current;
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).v_current - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    }
    iVar6 = (pSVar5->base).depth_current;
    DAT_005bf488 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar6) *
                         (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar8 = 0;
    DAT_005bf05c = iVar6;
    if ((_DAT_01c02584 == 0) &&
       (uVar4 = DAT_005bf054, uVar2 = DAT_005bf050, (g_RenderStateFlags.dword & RENDER_FORCE_SOLID_LOOP) == 0)) {
      while( true ) {
        if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
           (*(int *)(uVar8 + (int)DAT_005bf07c) <= iVar6)) {
          iVar3 = g_ActiveRenderColor;
          if ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) != 0) {
            iVar3 = *(int *)(&DAT_01c00024 +
                            (uint)*(byte *)((uVar2 >> (DAT_005bf550 & 0x1f) & _DAT_005bf590) +
                                            _DAT_01c02580 +
                                           (uVar4 >> (DAT_005bf570 & 0x1f) & _DAT_005bf5b0)) * 4);
          }
          *(int *)((int)DAT_005bf078 + uVar8) = iVar3;
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)((int)DAT_005bf07c + uVar8) = iVar6;
          }
        }
        uVar8 = uVar8 + 4;
        if (DAT_005bf014 <= uVar8) break;
        uVar2 = uVar2 + _DAT_005bf480;
        uVar4 = uVar4 + _DAT_005bf484;
        iVar6 = iVar6 + DAT_005bf488;
      }
    }
  }
  return;
}
