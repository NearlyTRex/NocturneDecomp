// Name: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_00463b27
// Address: 00463b27
// Address Range: [[00463b27, 00463c41]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

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
    DAT_005b06e4 = iVar2 * 2;
    DAT_005b06e8 = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar1 * 2);
    uVar3 = (pSVar5->base).u_current;
    _DAT_005b06d4 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    _DAT_005b06d8 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar1 = (pSVar5->base).depth_current;
    _DAT_005b06dc =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).depth_current - uVar1) *
               (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar6 = 0;
    DAT_005b06b8 = uVar3;
    DAT_005b06bc = uVar4;
    DAT_005b06c4 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)((int)DAT_005b06e8 + uVar6)) {
        iVar2 = _DAT_01c02584;
        if (_DAT_01c02584 == 0) {
          iVar2 = _DAT_01c02580;
        }
        if (*(char *)((uVar3 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                      (uVar4 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) + iVar2) != '\0') {
          *(ushort *)((int)DAT_005b06e8 + uVar6) = (ushort)uVar1;
        }
      }
      uVar6 = uVar6 + 2;
      if (DAT_005b06e4 < uVar6) break;
      uVar3 = uVar3 + _DAT_005b06d4;
      uVar4 = uVar4 + _DAT_005b06d8;
      uVar1 = uVar1 + _DAT_005b06dc;
    }
  }
  return;
}
