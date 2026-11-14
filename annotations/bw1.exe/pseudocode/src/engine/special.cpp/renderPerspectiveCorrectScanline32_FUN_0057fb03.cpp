// Name: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03
// Address: 0057fb03
// Address Range: [[0057fb03, 0057fd38]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

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
    DAT_006239c8 = *(int *)(&DAT_01c4354c + scanline_y * 4) + uVar2 * 4;
    DAT_00623964 = iVar4 * 4;
    piVar8 = (int *)(*(int *)(&DAT_01c4480c + scanline_y * 4) + uVar2 * 4);
    DAT_006239cc = piVar8;
    if (_DAT_01c51d14 == 0x80) {
      iVar4 = (pSVar7->base).depth_current;
      iVar6 = (int)((ulonglong)
                    ((longlong)((left_vertex->base).depth_current - iVar4) *
                    (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      uVar9 = DAT_00623964;
      DAT_006239ac = iVar4;
      DAT_00623dd8 = iVar6;
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
    if (_DAT_01c51d18 == 5) {
      uVar9 = (pSVar7->base).u_current;
      DAT_006239a0 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)(pSVar7->base).depth_current);
      uVar9 = (left_vertex->base).u_current;
      _DAT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_006239a0) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      uVar9 = (pSVar7->base).v_current;
      DAT_006239a4 = (uint)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                           (longlong)(pSVar7->base).depth_current);
      uVar9 = (left_vertex->base).v_current;
      _DAT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar9 >> 0x1f) << 0x18 | uVar9 >> 8,uVar9 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_006239a4) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    else {
      DAT_006239a0 = (pSVar7->base).u_current;
      _DAT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).u_current - DAT_006239a0) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      DAT_006239a4 = (pSVar7->base).v_current;
      _DAT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).v_current - DAT_006239a4) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    iVar4 = (pSVar7->base).depth_current;
    DAT_00623dd8 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar4) *
                         (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    uVar9 = 0;
    DAT_006239ac = iVar4;
    if ((_DAT_01c50934 == 0) &&
       (uVar5 = DAT_006239a4, uVar2 = DAT_006239a0, (_DAT_01c51d14 & 2) == 0)) {
      while( true ) {
        if (((_DAT_01c51d14 & 0x40) == 0) || (*(int *)(uVar9 + (int)DAT_006239cc) <= iVar4)) {
          uVar3 = _DAT_01c4f020;
          if ((_DAT_01c51d14 & 1) != 0) {
            uVar3 = *(uint *)
                     (&DAT_01c4e3d4 +
                     (uint)*(byte *)((uVar2 >> (DAT_00623eb8 & 0x1f) & _DAT_00623ef8) +
                                     _DAT_01c50930 +
                                    (uVar5 >> (DAT_00623ed8 & 0x1f) & _DAT_00623f18)) * 4);
          }
          *(uint *)(DAT_006239c8 + uVar9) = uVar3;
          if ((_DAT_01c51d14 & 0x80) != 0) {
            *(int *)((int)DAT_006239cc + uVar9) = iVar4;
          }
        }
        uVar9 = uVar9 + 4;
        if (DAT_00623964 <= uVar9) break;
        uVar2 = uVar2 + _DAT_00623dd0;
        uVar5 = uVar5 + _DAT_00623dd4;
        iVar4 = iVar4 + DAT_00623dd8;
      }
    }
  }
  return;
}
