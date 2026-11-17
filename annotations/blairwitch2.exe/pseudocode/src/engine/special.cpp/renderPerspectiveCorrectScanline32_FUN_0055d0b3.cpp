// Name: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3
// Address: 0055d0b3
// Address Range: [[0055d0b3, 0055d2e8]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

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
    g_INT_PTR_0061c378 = (int *)(g_ARRAY_PTR_01c2a38c[scanline_y] + uVar2 * 4);
    g_INT_0061c314 = iVar4 * 4;
    puVar9 = g_UINT_PTR_ARRAY_01c2b64c[scanline_y] + uVar2;
    g_INT_PTR_0061c37c = (int *)puVar9;
    if (g_BIT_INTEGER32_01c38b54.dword == 0x80) {
      uVar10 = (pSVar7->base).depth_current;
      iVar8 = (int)((ulonglong)
                    ((longlong)(int)((left_vertex->base).depth_current - uVar10) *
                    (longlong)(int)g_UINT_ARRAY_01c35e70[iVar4 + 1]) >> 0x20);
      iVar4 = g_INT_0061c314;
      g_INT_0061c35c = uVar10;
      g_INT_0061c788 = iVar8;
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
    if (g_INT_01c38b58 == 5) {
      uVar10 = (pSVar7->base).u_current;
      g_INT_0061c350 =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)(pSVar7->base).depth_current);
      uVar10 = (left_vertex->base).u_current;
      g_INT_0061c780 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_0061c350) *
                 (longlong)(int)g_UINT_ARRAY_01c35e70[iVar4 + 1]) >> 0x20);
      uVar10 = (pSVar7->base).v_current;
      g_INT_0061c354 =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)(pSVar7->base).depth_current);
      uVar10 = (left_vertex->base).v_current;
      g_INT_0061c784 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_0061c354) *
                 (longlong)(int)g_UINT_ARRAY_01c35e70[iVar4 + 1]) >> 0x20);
    }
    else {
      g_INT_0061c350 = (pSVar7->base).u_current;
      g_INT_0061c780 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).u_current - g_INT_0061c350) *
                 (longlong)(int)g_UINT_ARRAY_01c35e70[iVar4 + 1]) >> 0x20);
      g_INT_0061c354 = (pSVar7->base).v_current;
      g_INT_0061c784 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).v_current - g_INT_0061c354) *
                 (longlong)(int)g_UINT_ARRAY_01c35e70[iVar4 + 1]) >> 0x20);
    }
    iVar8 = (pSVar7->base).depth_current;
    g_INT_0061c788 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).depth_current - iVar8) *
               (longlong)(int)g_UINT_ARRAY_01c35e70[iVar4 + 1]) >> 0x20);
    uVar10 = 0;
    g_INT_0061c35c = iVar8;
    if ((g_UCHAR_PTR_01c37774 == (uchar *)0x0) &&
       (uVar6 = g_INT_0061c354, uVar2 = g_INT_0061c350, (g_BIT_INTEGER32_01c38b54.dword & 2) == 0))
    {
      while( true ) {
        if (((g_BIT_INTEGER32_01c38b54.dword & 0x40) == 0) ||
           (*(int *)(uVar10 + (int)g_INT_PTR_0061c37c) <= iVar8)) {
          uVar3 = g_INT_01c35e60;
          if ((g_BIT_INTEGER32_01c38b54.dword & 1) != 0) {
            uVar3 = g_UINT_ARRAY_01c35214
                    [g_UCHAR_PTR_01c37770
                     [(uVar6 >> ((byte)g_QWORD_0061c888 & 0x1f) & (uint)g_QWORD_0061c8c8) +
                      (uVar2 >> ((byte)g_QWORD_0061c868 & 0x1f) & (uint)g_QWORD_0061c8a8)]];
          }
          *(uint *)((int)g_INT_PTR_0061c378 + uVar10) = uVar3;
          if ((g_BIT_INTEGER32_01c38b54.dword & 0x80) != 0) {
            *(int *)((int)g_INT_PTR_0061c37c + uVar10) = iVar8;
          }
        }
        uVar10 = uVar10 + 4;
        if ((uint)g_INT_0061c314 <= uVar10) break;
        uVar2 = uVar2 + g_INT_0061c780;
        uVar6 = uVar6 + g_INT_0061c784;
        iVar8 = iVar8 + g_INT_0061c788;
      }
    }
  }
  return;
}
