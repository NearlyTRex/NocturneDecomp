// Name: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_004722e9
// Address: 004722e9
// Address Range: [[004722e9, 004723c2] [004723d0, 004723d5]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_004722e9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_004722e9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

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
    DAT_0060d260 = *(int *)(&DAT_01c2a38c + scanline_y * 4) + uVar1 * 4;
    DAT_0060d264 = iVar2 * 4;
    uVar3 = (pSVar5->base).u_current;
    _DAT_0060d254 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0060d264)) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    _DAT_0060d258 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0060d264)) >> 0x20);
    uVar1 = 0;
    DAT_0060d238 = uVar3;
    DAT_0060d23c = uVar4;
    while( true ) {
      *(uint *)(DAT_0060d260 + uVar1) =
           *(uint *)
            (((uVar3 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
             (uVar4 >> _DAT_0061c888 & (uint)_DAT_0061c8c8)) * 4 + _DAT_01c37770);
      uVar1 = uVar1 + 4;
      if (DAT_0060d264 <= uVar1) break;
      uVar3 = uVar3 + _DAT_0060d254;
      uVar4 = uVar4 + _DAT_0060d258;
    }
  }
  return;
}
