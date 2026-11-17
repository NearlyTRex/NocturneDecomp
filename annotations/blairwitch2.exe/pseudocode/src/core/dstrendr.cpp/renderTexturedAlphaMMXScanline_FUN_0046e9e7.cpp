// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7
// Address: 0046e9e7
// Address Range: [[0046e9e7, 0046eb01]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

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
    g_INT_0060d264 = iVar3 * 2;
    g_UINT_PTR_0060d268 = (uint *)(g_ARRAY_PTR_01c2a38c[scanline_y] + uVar1 * 2);
    uVar4 = (pSVar6->base).u_current;
    g_INT_0060d254 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar4) *
               (longlong)(int)g_UINT_ARRAY_01c35e70[iVar3 + 1]) >> 0x20);
    uVar5 = (pSVar6->base).v_current;
    g_INT_0060d258 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar5) *
               (longlong)(int)g_UINT_ARRAY_01c35e70[iVar3 + 1]) >> 0x20);
    uVar1 = (pSVar6->base).depth_current;
    g_INT_0060d25c =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).depth_current - uVar1) *
               (longlong)(int)g_UINT_ARRAY_01c35e70[iVar3 + 1]) >> 0x20);
    uVar7 = 0;
    g_UINT_0060d238 = uVar4;
    g_UINT_0060d23c = uVar5;
    g_UINT_0060d244 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)((int)g_UINT_PTR_0060d268 + uVar7)) {
        puVar2 = g_UCHAR_PTR_01c37774;
        if (g_UCHAR_PTR_01c37774 == (uchar *)0x0) {
          puVar2 = g_UCHAR_PTR_01c37770;
        }
        if (puVar2[(uVar4 >> g_QWORD_0061c868 & (uint)g_QWORD_0061c8a8) +
                   (uVar5 >> g_QWORD_0061c888 & (uint)g_QWORD_0061c8c8)] != '\0') {
          *(ushort *)((int)g_UINT_PTR_0060d268 + uVar7) = (ushort)uVar1;
        }
      }
      uVar7 = uVar7 + 2;
      if ((uint)g_INT_0060d264 < uVar7) break;
      uVar4 = uVar4 + g_INT_0060d254;
      uVar5 = uVar5 + g_INT_0060d258;
      uVar1 = uVar1 + g_INT_0060d25c;
    }
  }
  return;
}
