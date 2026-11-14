// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7
// Address: 0046e9e7
// Address Range: [[0046e9e7, 0046eb01]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  SSoftwareEdge *pSVar5;
  uint uVar6;
  
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
    DAT_0060d264 = iVar2 * 2;
    DAT_0060d268 = *(int *)(&DAT_01c2a38c + scanline_y * 4) + uVar1 * 2;
    uVar3 = (pSVar5->base).u_current;
    _DAT_0060d254 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)*(int *)(&DAT_01c35e74 + iVar2 * 4)) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    _DAT_0060d258 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)*(int *)(&DAT_01c35e74 + iVar2 * 4)) >> 0x20);
    uVar1 = (pSVar5->base).depth_current;
    _DAT_0060d25c =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).depth_current - uVar1) *
               (longlong)*(int *)(&DAT_01c35e74 + iVar2 * 4)) >> 0x20);
    uVar6 = 0;
    DAT_0060d238 = uVar3;
    DAT_0060d23c = uVar4;
    DAT_0060d244 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)(DAT_0060d268 + uVar6)) {
        iVar2 = _DAT_01c37774;
        if (_DAT_01c37774 == 0) {
          iVar2 = _DAT_01c37770;
        }
        if (*(char *)((uVar3 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                      (uVar4 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) + iVar2) != '\0') {
          *(ushort *)(DAT_0060d268 + uVar6) = (ushort)uVar1;
        }
      }
      uVar6 = uVar6 + 2;
      if (DAT_0060d264 < uVar6) break;
      uVar3 = uVar3 + _DAT_0060d254;
      uVar4 = uVar4 + _DAT_0060d258;
      uVar1 = uVar1 + _DAT_0060d25c;
    }
  }
  return;
}
