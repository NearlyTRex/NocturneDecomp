// Name: core_dstrender.cpp_renderDepthOnlyReversed_FUN_004906e9
// Address: 004906e9
// Address Range: [[004906e9, 0049072e]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderDepthOnlyReversed_FUN_004906e9(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d557 [DATA]
// Globals:
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 DAT_02d02584

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderDepthOnlyReversed_FUN_004906e9
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  SEdgeData *pSVar9;
  uint uVar10;
  
  uVar1 = left_edge->x_current;
  uVar10 = right_edge->x_current;
  uVar5 = uVar1;
  pSVar9 = left_edge;
  if (uVar10 < uVar1) {
    uVar5 = uVar10;
    uVar10 = uVar1;
    pSVar9 = right_edge;
    right_edge = left_edge;
  }
  uVar5 = uVar5 >> 0x10;
  iVar6 = (uVar10 >> 0x10) - uVar5;
  if (iVar6 != 0 && uVar5 <= uVar10 >> 0x10) {
    puVar8 = g_ZBufferScanlineArray[scanline_y] + uVar5;
    iVar2 = right_edge->z_current;
    iVar3 = pSVar9->z_current;
    uVar1 = g_ReciprocalLookupTable[iVar6 + 1];
    uVar10 = pSVar9->z_current;
    do {
      if ((int)*puVar8 <= (int)uVar10) {
        *puVar8 = uVar10;
      }
      uVar10 = uVar10 + (int)((ulonglong)((longlong)(iVar2 - iVar3) * (longlong)(int)uVar1) >> 0x20)
      ;
      puVar8 = puVar8 + 1;
      iVar7 = iVar6 + -1;
      bVar4 = 0 < iVar6;
      iVar6 = iVar7;
    } while (iVar7 != 0 && bVar4);
  }
  return;
}


// Assembly code:
// 004906e9: PUSH ESI
//   Label: core_dstrender.cpp_renderDepthOnlyReversed_FUN_004906e9
// 004906ea: PUSH EDI
// 004906eb: MOV EAX,dword ptr [ESI + 0x8]
// 004906ee: MOV ECX,dword ptr [EDI + 0x8]
// 004906f1: CMP EAX,ECX
// 004906f3: JBE 0x004906f8
//   XREF to: 004906f8 (CONDITIONAL_JUMP)
// 004906f5: XCHG EAX,ECX
// 004906f6: XCHG EDI,ESI
// 004906f8: SHR EAX,0x10
//   Label: LAB_004906f8
// 004906fb: SHR ECX,0x10
// 004906fe: MOV EBX,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 00490705: SUB ECX,EAX
// 00490707: JLE 0x0049072c
//   XREF to: 0049072c (CONDITIONAL_JUMP)
// 00490709: SHL EAX,0x2
// 0049070c: ADD EBX,EAX
// 0049070e: MOV EAX,dword ptr [EDI + 0x28]
// 00490711: SUB EAX,dword ptr [ESI + 0x28]
// 00490714: IMUL dword ptr [ECX*0x4 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 0049071b: MOV ESI,dword ptr [ESI + 0x28]
// 0049071e: CMP ESI,dword ptr [EBX]
//   Label: LAB_0049071e
// 00490720: JL 0x00490724
//   XREF to: 00490724 (CONDITIONAL_JUMP)
// 00490722: MOV dword ptr [EBX],ESI
// 00490724: ADD ESI,EDX
//   Label: LAB_00490724
// 00490726: ADD EBX,0x4
// 00490729: DEC ECX
// 0049072a: JG 0x0049071e
//   XREF to: 0049071e (CONDITIONAL_JUMP)
// 0049072c: POP EDI
//   Label: LAB_0049072c
// 0049072d: POP ESI
// 0049072e: RET
