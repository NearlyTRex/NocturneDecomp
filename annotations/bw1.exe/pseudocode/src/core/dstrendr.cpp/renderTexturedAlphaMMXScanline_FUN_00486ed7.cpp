// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7
// Address: 00486ed7
// Address Range: [[00486ed7, 00486ff1]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

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
    g_INT_00614544 = iVar3 * 2;
    g_UINT_PTR_00614548 = (uint *)(g_ARRAY_PTR_01c4354c[scanline_y] + uVar1 * 2);
    uVar4 = (pSVar6->base).u_current;
    g_INT_00614534 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar4) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar3 + 1]) >> 0x20);
    uVar5 = (pSVar6->base).v_current;
    g_INT_00614538 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar5) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar3 + 1]) >> 0x20);
    uVar1 = (pSVar6->base).depth_current;
    g_INT_0061453c =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).depth_current - uVar1) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar3 + 1]) >> 0x20);
    uVar7 = 0;
    g_UINT_00614518 = uVar4;
    g_UINT_0061451c = uVar5;
    g_UINT_00614524 = uVar1;
    while( true ) {
      if (uVar1 < *(ushort *)((int)g_UINT_PTR_00614548 + uVar7)) {
        puVar2 = g_UCHAR_PTR_01c50934;
        if (g_UCHAR_PTR_01c50934 == (uchar *)0x0) {
          puVar2 = g_UCHAR_PTR_01c50930;
        }
        if (puVar2[(uVar4 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                   (uVar5 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)] != '\0') {
          *(ushort *)((int)g_UINT_PTR_00614548 + uVar7) = (ushort)uVar1;
        }
      }
      uVar7 = uVar7 + 2;
      if ((uint)g_INT_00614544 < uVar7) break;
      uVar4 = uVar4 + g_INT_00614534;
      uVar5 = uVar5 + g_INT_00614538;
      uVar1 = uVar1 + g_INT_0061453c;
    }
  }
  return;
}
