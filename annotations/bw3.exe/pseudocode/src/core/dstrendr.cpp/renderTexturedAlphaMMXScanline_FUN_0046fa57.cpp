// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57
// Address: 0046fa57
// Address Range: [[0046fa57, 0046fb71]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  SSoftwareEdge *pSVar6;
  uint uVar7;
  
  uVar4 = (right_edge->base).x_current;
  uVar5 = (left_edge->base).x_current;
  uVar1 = uVar4;
  pSVar6 = right_edge;
  if (uVar5 < uVar4) {
    uVar1 = uVar5;
    uVar5 = uVar4;
    pSVar6 = left_edge;
    left_edge = right_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar3 = (uVar5 >> 0x10) - uVar1;
  if (iVar3 != 0 && uVar1 <= uVar5 >> 0x10) {
    g_INT_005f4ac4 = iVar3 * 2;
    g_UINT_PTR_005f4ac8 = (uint *)(g_ARRAY_PTR_01c5faec[scanline_y] + uVar1 * 2);
    uVar4 = (pSVar6->base).u_current;
    g_INT_005f4ab4 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar4) *
               (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar3 + 1]) >> 0x20);
    uVar5 = (pSVar6->base).v_current;
    g_INT_005f4ab8 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar5) *
               (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar3 + 1]) >> 0x20);
    uVar1 = (pSVar6->base).depth_current;
    g_INT_005f4abc =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).depth_current - uVar1) *
               (longlong)(int)g_UINT_ARRAY_01c6b5d0[iVar3 + 1]) >> 0x20);
    uVar7 = 0;
    g_UINT_005f4a98 = uVar4;
    g_UINT_005f4a9c = uVar5;
    g_UINT_005f4aa4 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)((int)g_UINT_PTR_005f4ac8 + uVar7)) {
        puVar2 = g_UCHAR_PTR_01c6ced4;
        if (g_UCHAR_PTR_01c6ced4 == (uchar *)0x0) {
          puVar2 = g_UCHAR_PTR_01c6ced0;
        }
        if (puVar2[(uVar4 >> g_QWORD_00604df8 & (uint)g_QWORD_00604e38) +
                   (uVar5 >> g_QWORD_00604e18 & (uint)g_QWORD_00604e58)] != '\0') {
          *(ushort *)((int)g_UINT_PTR_005f4ac8 + uVar7) = (ushort)uVar1;
        }
      }
      uVar7 = uVar7 + 2;
      if ((uint)g_INT_005f4ac4 < uVar7) break;
      uVar4 = uVar4 + g_INT_005f4ab4;
      uVar5 = uVar5 + g_INT_005f4ab8;
      uVar1 = uVar1 + g_INT_005f4abc;
    }
  }
  return;
}
