// Name: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_004722e9
// Address: 004722e9
// Address Range: [[004722e9, 004723c2] [004723d0, 004723d5]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_004722e9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

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
    g_PTR_0060d260 = g_ARRAY_PTR_01c2a38c[scanline_y] + uVar1 * 4;
    g_INT_0060d264 = iVar2 * 4;
    uVar3 = (pSVar5->base).u_current;
    g_INT_0060d254 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)(int)g_UINT_ARRAY_01c35e70[iVar2 + 1]) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    g_INT_0060d258 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)(int)g_UINT_ARRAY_01c35e70[iVar2 + 1]) >> 0x20);
    uVar1 = 0;
    g_UINT_0060d238 = uVar3;
    g_UINT_0060d23c = uVar4;
    while( true ) {
      *(uint *)(g_PTR_0060d260 + uVar1) =
           *(uint *)
            (g_UCHAR_PTR_01c37770 +
            ((uVar3 >> g_QWORD_0061c868 & (uint)g_QWORD_0061c8a8) +
            (uVar4 >> g_QWORD_0061c888 & (uint)g_QWORD_0061c8c8)) * 4);
      uVar1 = uVar1 + 4;
      if ((uint)g_INT_0060d264 <= uVar1) break;
      uVar3 = uVar3 + g_INT_0060d254;
      uVar4 = uVar4 + g_INT_0060d258;
    }
  }
  return;
}
