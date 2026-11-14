// Name: core_dstrendr.cpp_renderDepthInterlacedProfiled_FUN_00487327
// Address: 00487327
// Address Range: [[00487327, 004873a4]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_00487327(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_00487327(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  SSoftwareEdge *pSVar8;
  uint uVar9;
  
  if ((scanline_y & 1U) != 0) {
    return;
  }
  uVar9 = (right_edge->base).x_current;
  uVar3 = (left_edge->base).x_current;
  uVar2 = uVar9;
  pSVar8 = right_edge;
  if (uVar3 < uVar9) {
    uVar2 = uVar3;
    uVar3 = uVar9;
    pSVar8 = left_edge;
    left_edge = right_edge;
  }
  uVar2 = uVar2 >> 0x10;
  iVar4 = (uVar3 >> 0x10) - uVar2;
  if (iVar4 != 0 && uVar2 <= uVar3 >> 0x10) {
    piVar7 = (int *)(*(int *)(&DAT_01c4480c + scanline_y * 4) + uVar2 * 4);
    uVar9 = (pSVar8->base).depth_current;
    iVar5 = iVar4;
    do {
      if ((*piVar7 <= (int)(uVar9 >> 8)) &&
         (_DAT_01bc1238 = _DAT_01bc1238 + 1, DAT_00612564 <= _DAT_01bc1238)) {
        _DAT_01bc123c = 1;
        return;
      }
      uVar9 = uVar9 + (int)((ulonglong)
                            ((longlong)
                             ((left_edge->base).depth_current - (pSVar8->base).depth_current) *
                            (longlong)*(int *)(&DAT_01c4f030 + (iVar4 + 1) * 4)) >> 0x20) * 2;
      piVar7 = piVar7 + 2;
      iVar6 = iVar5 + -2;
      bVar1 = 1 < iVar5;
      iVar5 = iVar6;
    } while (iVar6 != 0 && bVar1);
  }
  return;
}
