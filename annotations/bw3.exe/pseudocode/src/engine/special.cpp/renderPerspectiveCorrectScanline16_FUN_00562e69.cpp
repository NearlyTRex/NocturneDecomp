// Name: engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00562e69
// Address: 00562e69
// Address Range: [[00562e69, 005630a2]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SSoftwareEdge *pSVar7;
  int *piVar8;
  uint uVar9;
  
  uVar9 = (right_vertex->base).x_current;
  uVar5 = (left_vertex->base).x_current;
  uVar3 = uVar9;
  pSVar7 = right_vertex;
  if (uVar5 < uVar9) {
    uVar3 = uVar5;
    uVar5 = uVar9;
    pSVar7 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar3 = uVar3 >> 0x10;
  iVar4 = (uVar5 >> 0x10) - uVar3;
  if (iVar4 != 0 && uVar3 <= uVar5 >> 0x10) {
    DAT_00604908 = *(int *)(&DAT_01c5faec + scanline_y * 4) + uVar3 * 2;
    DAT_006048a4 = iVar4 * 4;
    piVar8 = (int *)(*(int *)(&DAT_01c60dac + scanline_y * 4) + uVar3 * 4);
    DAT_0060490c = piVar8;
    if (_DAT_01c6e2b4 == 0x80) {
      iVar4 = (pSVar7->base).depth_current;
      iVar6 = (int)((ulonglong)
                    ((longlong)((left_vertex->base).depth_current - iVar4) *
                    (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
      uVar9 = DAT_006048a4;
      DAT_006048ec = iVar4;
      DAT_00604d18 = iVar6;
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
    if (_DAT_01c6e2b8 == 5) {
      uVar9 = (pSVar7->base).u_current;
      DAT_006048e0 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)(pSVar7->base).depth_current);
      uVar9 = (left_vertex->base).u_current;
      _DAT_00604d10 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_006048e0) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
      uVar9 = (pSVar7->base).v_current;
      DAT_006048e4 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)(pSVar7->base).depth_current);
      uVar9 = (left_vertex->base).v_current;
      _DAT_00604d14 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_006048e4) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    }
    else {
      DAT_006048e0 = (pSVar7->base).u_current;
      _DAT_00604d10 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).u_current - DAT_006048e0) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
      DAT_006048e4 = (pSVar7->base).v_current;
      _DAT_00604d14 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).v_current - DAT_006048e4) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    }
    iVar4 = (pSVar7->base).depth_current;
    DAT_00604d18 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar4) *
                         (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    uVar9 = 0;
    DAT_006048ec = iVar4;
    if ((_DAT_01c6ced4 == 0) &&
       (uVar5 = DAT_006048e4, uVar3 = DAT_006048e0, (_DAT_01c6e2b4 & 2) == 0)) {
      while( true ) {
        if (((_DAT_01c6e2b4 & 0x40) == 0) || (*(int *)(uVar9 + (int)DAT_0060490c) <= iVar4)) {
          if ((_DAT_01c6e2b4 & 1) == 0) {
            uVar2 = (ushort)_DAT_01c6b5c0;
          }
          else {
            uVar2 = *(ushort *)
                     ((uint)*(byte *)((uVar3 >> (DAT_00604df8 & 0x1f) & _DAT_00604e38) +
                                      _DAT_01c6ced0 +
                                     (uVar5 >> (DAT_00604e18 & 0x1f) & _DAT_00604e58)) * 2 +
                     0x1c6ad74);
          }
          *(ushort *)((uVar9 >> 1) + DAT_00604908) = uVar2;
          if ((_DAT_01c6e2b4 & 0x80) != 0) {
            *(int *)((int)DAT_0060490c + uVar9) = iVar4;
          }
        }
        uVar9 = uVar9 + 4;
        if (DAT_006048a4 <= uVar9) break;
        uVar3 = uVar3 + _DAT_00604d10;
        uVar5 = uVar5 + _DAT_00604d14;
        iVar4 = iVar4 + DAT_00604d18;
      }
    }
  }
  return;
}
