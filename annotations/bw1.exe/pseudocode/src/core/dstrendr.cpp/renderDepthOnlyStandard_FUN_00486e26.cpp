// Name: core_dstrendr.cpp_renderDepthOnlyStandard_FUN_00486e26
// Address: 00486e26
// Address Range: [[00486e26, 00486e73]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  SSoftwareEdge *pSVar11;
  int iVar12;
  
  uVar1 = (right_edge->base).x_current;
  uVar7 = (left_edge->base).x_current;
  uVar6 = uVar1;
  pSVar11 = right_edge;
  if (uVar7 < uVar1) {
    uVar6 = uVar7;
    uVar7 = uVar1;
    pSVar11 = left_edge;
    left_edge = right_edge;
  }
  uVar6 = uVar6 >> 0x10;
  iVar8 = (uVar7 >> 0x10) - uVar6;
  if (iVar8 != 0 && uVar6 <= uVar7 >> 0x10) {
    puVar10 = (ushort *)(*(int *)(&DAT_01c4354c + scanline_y * 4) + uVar6 * 2);
    iVar2 = (left_edge->base).depth_current;
    iVar3 = (pSVar11->base).depth_current;
    iVar4 = *(int *)(&DAT_01c4f034 + iVar8 * 4);
    iVar12 = (pSVar11->base).depth_current;
    do {
      if ((uint)(iVar12 >> 8) < (uint)*puVar10) {
        *puVar10 = (ushort)((uint)iVar12 >> 8);
      }
      iVar12 = iVar12 + (int)((ulonglong)((longlong)(iVar2 - iVar3) * (longlong)iVar4) >> 0x20);
      puVar10 = puVar10 + 1;
      iVar9 = iVar8 + -1;
      bVar5 = 0 < iVar8;
      iVar8 = iVar9;
    } while (iVar9 != 0 && bVar5);
  }
  return;
}
