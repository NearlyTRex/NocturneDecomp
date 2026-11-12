// Name: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3
// Address: 0055d0b3
// Address Range: [[0055d0b3, 0055d2e8]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SSoftwareEdge *pSVar7;
  int *piVar8;
  uint uVar9;
  
  uVar9 = (right_vertex->base).x_current;
  uVar5 = (left_vertex->base).x_current;
  uVar2 = uVar9;
  pSVar7 = right_vertex;
  if (uVar5 < uVar9) {
    uVar2 = uVar5;
    uVar5 = uVar9;
    pSVar7 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar2 = uVar2 >> 0x10;
  iVar4 = (uVar5 >> 0x10) - uVar2;
  if (iVar4 != 0 && uVar2 <= uVar5 >> 0x10) {
    DAT_0061c378 = *(int *)(&DAT_01c2a38c + scanline_y * 4) + uVar2 * 4;
    DAT_0061c314 = iVar4 * 4;
    piVar8 = (int *)(*(int *)(&DAT_01c2b64c + scanline_y * 4) + uVar2 * 4);
    DAT_0061c37c = piVar8;
    if (_DAT_01c38b54 == 0x80) {
      iVar4 = (pSVar7->base).depth_current;
      iVar6 = (int)((ulonglong)
                    ((longlong)((left_vertex->base).depth_current - iVar4) *
                    (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar9 = DAT_0061c314;
      DAT_0061c35c = iVar4;
      DAT_0061c788 = iVar6;
      do {
        *piVar8 = iVar4;
        iVar4 = iVar4 + iVar6;
        piVar8 = piVar8 + 1;
        uVar5 = uVar9 - 4;
        bVar1 = 3 < (int)uVar9;
        uVar9 = uVar5;
      } while (uVar5 != 0 && bVar1);
      return;
    }
    if (_DAT_01c38b58 == 5) {
      uVar9 = (pSVar7->base).u_current;
      DAT_0061c350 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)(pSVar7->base).depth_current);
      uVar9 = (left_vertex->base).u_current;
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar9 = (pSVar7->base).v_current;
      DAT_0061c354 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)(pSVar7->base).depth_current);
      uVar9 = (left_vertex->base).v_current;
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    else {
      DAT_0061c350 = (pSVar7->base).u_current;
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).u_current - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      DAT_0061c354 = (pSVar7->base).v_current;
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).v_current - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    iVar4 = (pSVar7->base).depth_current;
    DAT_0061c788 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar4) *
                         (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    uVar9 = 0;
    DAT_0061c35c = iVar4;
    if ((_DAT_01c37774 == 0) &&
       (uVar5 = DAT_0061c354, uVar2 = DAT_0061c350, (_DAT_01c38b54 & 2) == 0)) {
      while( true ) {
        if (((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar9 + (int)DAT_0061c37c) <= iVar4)) {
          uVar3 = _DAT_01c35e60;
          if ((_DAT_01c38b54 & 1) != 0) {
            uVar3 = *(uint *)
                     (&DAT_01c35214 +
                     (uint)*(byte *)((uVar2 >> (DAT_0061c868 & 0x1f) & _DAT_0061c8a8) +
                                     _DAT_01c37770 +
                                    (uVar5 >> (DAT_0061c888 & 0x1f) & _DAT_0061c8c8)) * 4);
          }
          *(uint *)(DAT_0061c378 + uVar9) = uVar3;
          if ((_DAT_01c38b54 & 0x80) != 0) {
            *(int *)((int)DAT_0061c37c + uVar9) = iVar4;
          }
        }
        uVar9 = uVar9 + 4;
        if (DAT_0061c314 <= uVar9) break;
        uVar2 = uVar2 + _DAT_0061c780;
        uVar5 = uVar5 + _DAT_0061c784;
        iVar4 = iVar4 + DAT_0061c788;
      }
    }
  }
  return;
}
