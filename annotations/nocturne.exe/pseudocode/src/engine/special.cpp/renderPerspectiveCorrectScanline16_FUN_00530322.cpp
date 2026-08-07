// Name: engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00530322
// Address: 00530322
// Address Range: [[00530322, 0053055b]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  SSoftwareEdge *pSVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar9 = (right_vertex->base).x_current;
  uVar5 = (left_vertex->base).x_current;
  uVar3 = uVar9;
  pSVar6 = right_vertex;
  if (uVar5 < uVar9) {
    uVar3 = uVar5;
    uVar5 = uVar9;
    pSVar6 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar3 = uVar3 >> 0x10;
  iVar4 = (uVar5 >> 0x10) - uVar3;
  if (iVar4 != 0 && uVar3 <= uVar5 >> 0x10) {
    DAT_005bf078 = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar3 * 2);
    DAT_005bf014 = iVar4 * 4;
    puVar8 = g_ZBufferScanlineArray[scanline_y] + uVar3;
    DAT_005bf07c = puVar8;
    if (g_RenderStateFlags.dword == RENDER_DEPTH_WRITE) {
      uVar9 = (pSVar6->base).depth_current;
      iVar4 = (int)((ulonglong)
                    ((longlong)(int)((left_vertex->base).depth_current - uVar9) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
      uVar5 = DAT_005bf014;
      DAT_005bf05c = uVar9;
      DAT_005bf488 = iVar4;
      do {
        *puVar8 = uVar9;
        uVar9 = uVar9 + iVar4;
        puVar8 = puVar8 + 1;
        uVar3 = uVar5 - 4;
        bVar1 = 3 < (int)uVar5;
        uVar5 = uVar3;
      } while (uVar3 != 0 && bVar1);
      return;
    }
    if (g_VertexPreprocessMode == 5) {
      uVar9 = (pSVar6->base).u_current;
      DAT_005bf050 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)(pSVar6->base).depth_current);
      uVar9 = (left_vertex->base).u_current;
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
      uVar9 = (pSVar6->base).v_current;
      DAT_005bf054 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)(pSVar6->base).depth_current);
      uVar9 = (left_vertex->base).v_current;
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
    }
    else {
      DAT_005bf050 = (pSVar6->base).u_current;
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).u_current - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
      DAT_005bf054 = (pSVar6->base).v_current;
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).v_current - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
    }
    iVar7 = (pSVar6->base).depth_current;
    DAT_005bf488 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar7) *
                         (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
    uVar9 = 0;
    DAT_005bf05c = iVar7;
    if ((_DAT_01c02584 == 0) &&
       (uVar5 = DAT_005bf054, uVar3 = DAT_005bf050, (g_RenderStateFlags.dword & RENDER_FORCE_SOLID_LOOP) == 0)) {
      while( true ) {
        if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
           (*(int *)(uVar9 + (int)DAT_005bf07c) <= iVar7)) {
          if ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) == 0) {
            uVar2 = (ushort)g_ActiveRenderColor;
          }
          else {
            uVar2 = *(ushort *)
                     ((uint)*(byte *)((uVar3 >> (DAT_005bf550 & 0x1f) & _DAT_005bf590) +
                                      _DAT_01c02580 +
                                     (uVar5 >> (DAT_005bf570 & 0x1f) & _DAT_005bf5b0)) * 2 +
                     0x1c00424);
          }
          *(ushort *)((uVar9 >> 1) + (int)DAT_005bf078) = uVar2;
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)((int)DAT_005bf07c + uVar9) = iVar7;
          }
        }
        uVar9 = uVar9 + 4;
        if (DAT_005bf014 <= uVar9) break;
        uVar3 = uVar3 + _DAT_005bf480;
        uVar5 = uVar5 + _DAT_005bf484;
        iVar7 = iVar7 + DAT_005bf488;
      }
    }
  }
  return;
}
