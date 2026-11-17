// Name: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_00487d8d
// Address: 00487d8d
// Address Range: [[00487d8d, 00487eab]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_00487d8d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_00487d8d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

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
    g_PTR_00614540 = g_ARRAY_PTR_01c4354c[scanline_y] + uVar1 * 4;
    g_INT_00614544 = iVar2 * 4;
    g_UINT_PTR_00614548 = g_UINT_PTR_ARRAY_01c4480c[scanline_y] + uVar1;
    uVar3 = (pSVar5->base).u_current;
    g_INT_00614534 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).u_current - uVar3) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar2 + 1]) >> 0x20);
    uVar4 = (pSVar5->base).v_current;
    g_INT_00614538 =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).v_current - uVar4) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar2 + 1]) >> 0x20);
    uVar1 = (pSVar5->base).depth_current;
    g_INT_0061453c =
         (int)((ulonglong)
               ((longlong)(int)((left_edge->base).depth_current - uVar1) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar2 + 1]) >> 0x20);
    uVar6 = 0;
    g_UINT_00614518 = uVar3;
    g_UINT_0061451c = uVar4;
    g_UINT_00614524 = uVar1;
    while( true ) {
      if (*(int *)((int)g_UINT_PTR_00614548 + uVar6) <= (int)uVar1) {
        *(uint *)(g_PTR_00614540 + uVar6) =
             g_UINT_ARRAY_01c4e3d4
             [g_UCHAR_PTR_01c50930
              [(uVar3 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
               (uVar4 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)]];
      }
      uVar6 = uVar6 + 4;
      if ((uint)g_INT_00614544 < uVar6) break;
      uVar3 = uVar3 + g_INT_00614534;
      uVar4 = uVar4 + g_INT_00614538;
      uVar1 = uVar1 + g_INT_0061453c;
    }
  }
  return;
}
