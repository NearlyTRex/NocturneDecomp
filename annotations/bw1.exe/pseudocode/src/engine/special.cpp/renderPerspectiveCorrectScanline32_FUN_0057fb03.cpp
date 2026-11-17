// Name: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03
// Address: 0057fb03
// Address Range: [[0057fb03, 0057fd38]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  SSoftwareEdge *pSVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar10 = (right_vertex->base).x_current;
  uVar6 = (left_vertex->base).x_current;
  uVar2 = uVar10;
  pSVar7 = right_vertex;
  if (uVar6 < uVar10) {
    uVar2 = uVar6;
    uVar6 = uVar10;
    pSVar7 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar2 = uVar2 >> 0x10;
  iVar4 = (uVar6 >> 0x10) - uVar2;
  if (iVar4 != 0 && uVar2 <= uVar6 >> 0x10) {
    g_INT_PTR_006239c8 = (int *)(g_ARRAY_PTR_01c4354c[scanline_y] + uVar2 * 4);
    g_INT_00623964 = iVar4 * 4;
    puVar9 = g_UINT_PTR_ARRAY_01c4480c[scanline_y] + uVar2;
    g_INT_PTR_006239cc = (int *)puVar9;
    if (g_BIT_INTEGER32_01c51d14.dword == 0x80) {
      uVar10 = (pSVar7->base).depth_current;
      iVar8 = (int)((ulonglong)
                    ((longlong)(int)((left_vertex->base).depth_current - uVar10) *
                    (longlong)(int)g_UINT_ARRAY_01c4f030[iVar4 + 1]) >> 0x20);
      iVar4 = g_INT_00623964;
      g_INT_006239ac = uVar10;
      g_INT_00623dd8 = iVar8;
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
    if (g_INT_01c51d18 == 5) {
      uVar10 = (pSVar7->base).u_current;
      g_INT_006239a0 =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)(pSVar7->base).depth_current);
      uVar10 = (left_vertex->base).u_current;
      g_INT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_006239a0) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar4 + 1]) >> 0x20);
      uVar10 = (pSVar7->base).v_current;
      g_INT_006239a4 =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)(pSVar7->base).depth_current);
      uVar10 = (left_vertex->base).v_current;
      g_INT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_006239a4) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar4 + 1]) >> 0x20);
    }
    else {
      g_INT_006239a0 = (pSVar7->base).u_current;
      g_INT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).u_current - g_INT_006239a0) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar4 + 1]) >> 0x20);
      g_INT_006239a4 = (pSVar7->base).v_current;
      g_INT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).v_current - g_INT_006239a4) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar4 + 1]) >> 0x20);
    }
    iVar8 = (pSVar7->base).depth_current;
    g_INT_00623dd8 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).depth_current - iVar8) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar4 + 1]) >> 0x20);
    uVar10 = 0;
    g_INT_006239ac = iVar8;
    if ((g_UCHAR_PTR_01c50934 == (uchar *)0x0) &&
       (uVar6 = g_INT_006239a4, uVar2 = g_INT_006239a0, (g_BIT_INTEGER32_01c51d14.dword & 2) == 0))
    {
      while( true ) {
        if (((g_BIT_INTEGER32_01c51d14.dword & 0x40) == 0) ||
           (*(int *)(uVar10 + (int)g_INT_PTR_006239cc) <= iVar8)) {
          uVar3 = g_INT_01c4f020;
          if ((g_BIT_INTEGER32_01c51d14.dword & 1) != 0) {
            uVar3 = g_UINT_ARRAY_01c4e3d4
                    [g_UCHAR_PTR_01c50930
                     [(uVar6 >> ((byte)g_QWORD_00623ed8 & 0x1f) & (uint)g_QWORD_00623f18) +
                      (uVar2 >> ((byte)g_QWORD_00623eb8 & 0x1f) & (uint)g_QWORD_00623ef8)]];
          }
          *(uint *)((int)g_INT_PTR_006239c8 + uVar10) = uVar3;
          if ((g_BIT_INTEGER32_01c51d14.dword & 0x80) != 0) {
            *(int *)((int)g_INT_PTR_006239cc + uVar10) = iVar8;
          }
        }
        uVar10 = uVar10 + 4;
        if ((uint)g_INT_00623964 <= uVar10) break;
        uVar2 = uVar2 + g_INT_00623dd0;
        uVar6 = uVar6 + g_INT_00623dd4;
        iVar8 = iVar8 + g_INT_00623dd8;
      }
    }
  }
  return;
}
