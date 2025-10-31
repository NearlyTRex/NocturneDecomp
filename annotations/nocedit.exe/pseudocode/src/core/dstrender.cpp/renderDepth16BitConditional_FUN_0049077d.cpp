// Name: core_dstrender.cpp_renderDepth16BitConditional_FUN_0049077d
// Address: 0049077d
// Address Range: [[0049077d, 004907d0] [004907e0, 004907e6]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderDepth16BitConditional_FUN_0049077d(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950 (0048a950) at 0048a9df [PARAM]
// Globals:
//   void*[1024] g_ScreenBufferArray
//   undefined4 DAT_02d02584

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderDepth16BitConditional_FUN_0049077d
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  SEdgeData *pSVar10;
  int iVar11;
  
  uVar1 = left_edge->x_current;
  uVar6 = right_edge->x_current;
  uVar5 = uVar1;
  pSVar10 = left_edge;
  if (uVar6 < uVar1) {
    uVar5 = uVar6;
    uVar6 = uVar1;
    pSVar10 = right_edge;
    right_edge = left_edge;
  }
  uVar5 = uVar5 >> 0x10;
  iVar7 = (uVar6 >> 0x10) - uVar5;
  if (iVar7 != 0 && uVar5 <= uVar6 >> 0x10) {
    psVar9 = (short *)((int)g_ScreenBufferArray[scanline_y] + uVar5 * 2);
    iVar2 = right_edge->z_current;
    iVar3 = pSVar10->z_current;
    uVar1 = g_ReciprocalLookupTable[iVar7 + 1];
    iVar11 = pSVar10->z_current;
    do {
      if (*psVar9 != 0) {
        if ((uint)(iVar11 >> 8) < 0x10000) {
          *psVar9 = (short)((uint)iVar11 >> 8);
        }
        else {
          *psVar9 = -1;
        }
      }
      iVar11 = iVar11 + (int)((ulonglong)((longlong)(iVar2 - iVar3) * (longlong)(int)uVar1) >> 0x20)
      ;
      psVar9 = psVar9 + 1;
      iVar8 = iVar7 + -1;
      bVar4 = 0 < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar4);
  }
  return;
}


// Assembly code:
// 0049077d: PUSH ESI
//   Label: core_dstrender.cpp_renderDepth16BitConditional_FUN_0049077d
// 0049077e: PUSH EDI
// 0049077f: MOV EAX,dword ptr [ESI + 0x8]
// 00490782: MOV ECX,dword ptr [EDI + 0x8]
// 00490785: CMP EAX,ECX
// 00490787: JBE 0x0049078c
//   XREF to: 0049078c (CONDITIONAL_JUMP)
// 00490789: XCHG EAX,ECX
// 0049078a: XCHG EDI,ESI
// 0049078c: SHR EAX,0x10
//   Label: LAB_0049078c
// 0049078f: SHR ECX,0x10
// 00490792: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00490799: SUB ECX,EAX
// 0049079b: JLE 0x004907ce
//   XREF to: 004907ce (CONDITIONAL_JUMP)
// 0049079d: SHL EAX,0x1
// 0049079f: ADD EBX,EAX
// 004907a1: MOV EAX,dword ptr [EDI + 0x28]
// 004907a4: SUB EAX,dword ptr [ESI + 0x28]
// 004907a7: IMUL dword ptr [ECX*0x4 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 004907ae: MOV ESI,dword ptr [ESI + 0x28]
// 004907b1: MOV EAX,ESI
//   Label: LAB_004907b1
// 004907b3: SAR EAX,0x8
// 004907b6: CMP word ptr [EBX],0x0
// 004907ba: JZ 0x004907c6
//   XREF to: 004907c6 (CONDITIONAL_JUMP)
// 004907bc: CMP EAX,0xffff
// 004907c1: JA 0x004907e0
//   XREF to: 004907e0 (CONDITIONAL_JUMP)
// 004907c3: MOV word ptr [EBX],AX
// 004907c6: ADD ESI,EDX
//   Label: LAB_004907c6
// 004907c8: ADD EBX,0x2
// 004907cb: DEC ECX
// 004907cc: JG 0x004907b1
//   XREF to: 004907b1 (CONDITIONAL_JUMP)
// 004907ce: POP EDI
//   Label: LAB_004907ce
// 004907cf: POP ESI
// 004907d0: RET
// 004907e0: MOV word ptr [EBX],0xffff
//   Label: LAB_004907e0
// 004907e5: JMP 0x004907c6
//   XREF to: 004907c6 (UNCONDITIONAL_JUMP)
