// Name: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_00473359
// Address: 00473359
// Address Range: [[00473359, 00473432] [00473440, 00473445]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

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
    g_PTR_005f4ac0 = g_ARRAY_PTR_01c5faec[scanline_y] + uVar1 * 4;
    g_INT_005f4ac4 = iVar2 * 4;
    uVar3 = (pSVar5->base).u_current;
    g_INT_005f4ab4 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar2 + 1]) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    g_INT_005f4ab8 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar2 + 1]) >> 0x20);
    uVar1 = 0;
    g_UINT_005f4a98 = uVar3;
    g_UINT_005f4a9c = uVar4;
    while( true ) {
      *(uint *)(g_PTR_005f4ac0 + uVar1) =
           *(uint *)
            (g_UCHAR_PTR_01c6ced0 +
            ((uVar3 >> g_QWORD_00604df8 & (uint)g_QWORD_00604e38) +
            (uVar4 >> g_QWORD_00604e18 & (uint)g_QWORD_00604e58)) * 4);
      uVar1 = uVar1 + 4;
      if ((uint)g_INT_005f4ac4 <= uVar1) break;
      uVar3 = uVar3 + g_INT_005f4ab4;
      uVar4 = uVar4 + g_INT_005f4ab8;
    }
  }
  return;
}
