// Name: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_00562c33
// Address: 00562c33
// Address Range: [[00562c33, 00562e68]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

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
    g_INT_PTR_00604908 = (int *)(g_ARRAY_PTR_01c5faec[scanline_y] + uVar2 * 4);
    g_INT_006048a4 = iVar4 * 4;
    puVar9 = g_UINT_PTR_ARRAY_01c60dac[scanline_y] + uVar2;
    g_INT_PTR_0060490c = (int *)puVar9;
    if (g_BIT_INTEGER32_01c6e2b4.dword == 0x80) {
      uVar10 = (pSVar7->base).depth_current;
      iVar8 = (int)((ulonglong)
                    ((longlong)(int)((left_vertex->base).depth_current - uVar10) *
                    (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar4 + 1]) >> 0x20);
      iVar4 = g_INT_006048a4;
      g_INT_006048ec = uVar10;
      g_INT_00604d18 = iVar8;
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
    if (g_INT_01c6e2b8 == 5) {
      uVar10 = (pSVar7->base).u_current;
      g_INT_006048e0 =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)(pSVar7->base).depth_current);
      uVar10 = (left_vertex->base).u_current;
      g_INT_00604d10 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_006048e0) *
                 (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar4 + 1]) >> 0x20);
      uVar10 = (pSVar7->base).v_current;
      g_INT_006048e4 =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)(pSVar7->base).depth_current);
      uVar10 = (left_vertex->base).v_current;
      g_INT_00604d14 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_006048e4) *
                 (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar4 + 1]) >> 0x20);
    }
    else {
      g_INT_006048e0 = (pSVar7->base).u_current;
      g_INT_00604d10 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).u_current - g_INT_006048e0) *
                 (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar4 + 1]) >> 0x20);
      g_INT_006048e4 = (pSVar7->base).v_current;
      g_INT_00604d14 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).v_current - g_INT_006048e4) *
                 (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar4 + 1]) >> 0x20);
    }
    iVar8 = (pSVar7->base).depth_current;
    g_INT_00604d18 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).depth_current - iVar8) *
               (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar4 + 1]) >> 0x20);
    uVar10 = 0;
    g_INT_006048ec = iVar8;
    if ((g_UCHAR_PTR_01c6ced4 == (uchar *)0x0) &&
       (uVar6 = g_INT_006048e4, uVar2 = g_INT_006048e0, (g_BIT_INTEGER32_01c6e2b4.dword & 2) == 0))
    {
      while( true ) {
        if (((g_BIT_INTEGER32_01c6e2b4.dword & 0x40) == 0) ||
           (*(int *)(uVar10 + (int)g_INT_PTR_0060490c) <= iVar8)) {
          uVar3 = g_INT_01c6b5c0;
          if ((g_BIT_INTEGER32_01c6e2b4.dword & 1) != 0) {
            uVar3 = g_UINT_ARRAY_01c6a974
                    [g_UCHAR_PTR_01c6ced0
                     [(uVar6 >> ((byte)g_QWORD_00604e18 & 0x1f) & (uint)g_QWORD_00604e58) +
                      (uVar2 >> ((byte)g_QWORD_00604df8 & 0x1f) & (uint)g_QWORD_00604e38)]];
          }
          *(uint *)((int)g_INT_PTR_00604908 + uVar10) = uVar3;
          if ((g_BIT_INTEGER32_01c6e2b4.dword & 0x80) != 0) {
            *(int *)((int)g_INT_PTR_0060490c + uVar10) = iVar8;
          }
        }
        uVar10 = uVar10 + 4;
        if ((uint)g_INT_006048a4 <= uVar10) break;
        uVar2 = uVar2 + g_INT_00604d10;
        uVar6 = uVar6 + g_INT_00604d14;
        iVar8 = iVar8 + g_INT_00604d18;
      }
    }
  }
  return;
}
