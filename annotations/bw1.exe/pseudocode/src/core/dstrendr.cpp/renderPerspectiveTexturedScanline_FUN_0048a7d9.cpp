// Name: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9
// Address: 0048a7d9
// Address Range: [[0048a7d9, 0048a8b2] [0048a8c0, 0048a8c5]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  SSoftwareEdge *pSVar5;
  
  uVar3 = (right_edge->base).x_current;
  uVar4 = (left_edge->base).x_current;
  uVar1 = uVar3;
  pSVar5 = right_edge;
  if (uVar4 < uVar3) {
    uVar1 = uVar4;
    uVar4 = uVar3;
    pSVar5 = left_edge;
    left_edge = right_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar4 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar4 >> 0x10) {
    DAT_00614540 = *(int *)(&DAT_01c4354c + scanline_y * 4) + uVar1 * 4;
    DAT_00614544 = iVar2 * 4;
    uVar3 = (pSVar5->base).u_current;
    _DAT_00614534 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00614544)) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    _DAT_00614538 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00614544)) >> 0x20);
    uVar1 = 0;
    DAT_00614518 = uVar3;
    DAT_0061451c = uVar4;
    while( true ) {
      *(uint *)(DAT_00614540 + uVar1) =
           *(uint *)
            (((uVar3 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
             (uVar4 >> _DAT_00623ed8 & (uint)_DAT_00623f18)) * 4 + _DAT_01c50930);
      uVar1 = uVar1 + 4;
      if (DAT_00614544 <= uVar1) break;
      uVar3 = uVar3 + _DAT_00614534;
      uVar4 = uVar4 + _DAT_00614538;
    }
  }
  return;
}
