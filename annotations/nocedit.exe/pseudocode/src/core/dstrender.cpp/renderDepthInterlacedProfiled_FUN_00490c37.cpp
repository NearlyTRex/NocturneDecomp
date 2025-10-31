// Name: core_dstrender.cpp_renderDepthInterlacedProfiled_FUN_00490c37
// Address: 00490c37
// Address Range: [[00490c37, 00490cb4]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderDepthInterlacedProfiled_FUN_00490c37(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 (0048ab50) at 0048ac16 [DATA]
// Globals:
//   int g_RenderPixelBudget = 0x1
//   int g_RenderPixelCounter
//   int g_RenderAbortFlag
//   uint*[1024] g_ZBufferScanlineArray
//   uint[1600] g_ReciprocalLookupTable

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00490c37
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  SEdgeData *pSVar8;
  uint uVar9;
  
  if ((scanline_y & 1U) != 0) {
    return;
  }
  uVar9 = left_edge->x_current;
  uVar3 = right_edge->x_current;
  uVar2 = uVar9;
  pSVar8 = left_edge;
  if (uVar3 < uVar9) {
    uVar2 = uVar3;
    uVar3 = uVar9;
    pSVar8 = right_edge;
    right_edge = left_edge;
  }
  uVar2 = uVar2 >> 0x10;
  iVar4 = (uVar3 >> 0x10) - uVar2;
  if (iVar4 != 0 && uVar2 <= uVar3 >> 0x10) {
    puVar7 = g_ZBufferScanlineArray[scanline_y] + uVar2;
    uVar9 = pSVar8->z_current;
    iVar5 = iVar4;
    do {
      if (((int)*puVar7 <= (int)(uVar9 >> 8)) &&
         (g_RenderPixelCounter = g_RenderPixelCounter + 1,
         (uint)g_RenderPixelBudget <= (uint)g_RenderPixelCounter)) {
        g_RenderAbortFlag = 1;
        return;
      }
      uVar9 = uVar9 + (int)((ulonglong)
                            ((longlong)(right_edge->z_current - pSVar8->z_current) *
                            (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20) * 2;
      puVar7 = puVar7 + 2;
      iVar6 = iVar5 + -2;
      bVar1 = 1 < iVar5;
      iVar5 = iVar6;
    } while (iVar6 != 0 && bVar1);
  }
  return;
}


// Assembly code:
// 00490c37: PUSH ESI
//   Label: core_dstrender.cpp_renderDepthInterlacedProfiled_FUN_00490c37
// 00490c38: PUSH EDI
// 00490c39: TEST EBX,0x1
// 00490c3f: JZ 0x00490c44
//   XREF to: 00490c44 (CONDITIONAL_JUMP)
// 00490c41: POP EDI
// 00490c42: POP ESI
// 00490c43: RET
// 00490c44: PUSH EBP
//   Label: LAB_00490c44
// 00490c45: MOV EAX,dword ptr [ESI + 0x8]
// 00490c48: MOV ECX,dword ptr [EDI + 0x8]
// 00490c4b: CMP EAX,ECX
// 00490c4d: JBE 0x00490c52
//   XREF to: 00490c52 (CONDITIONAL_JUMP)
// 00490c4f: XCHG EAX,ECX
// 00490c50: XCHG EDI,ESI
// 00490c52: SHR EAX,0x10
//   Label: LAB_00490c52
// 00490c55: SHR ECX,0x10
// 00490c58: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 00490c5f: SUB ECX,EAX
// 00490c61: JLE 0x00490c90
//   XREF to: 00490c90 (CONDITIONAL_JUMP)
// 00490c63: SHL EAX,0x2
// 00490c66: ADD EBP,EAX
// 00490c68: INC ECX
// 00490c69: MOV EAX,dword ptr [EDI + 0x28]
// 00490c6c: SUB EAX,dword ptr [ESI + 0x28]
// 00490c6f: IMUL dword ptr [ECX*0x4 + 0x2d02580]
//   XREF to: 02d02580 (DATA)
// 00490c76: MOV EBX,EBP
// 00490c78: DEC ECX
// 00490c79: MOV ESI,dword ptr [ESI + 0x28]
// 00490c7c: MOV EAX,ESI
//   Label: LAB_00490c7c
// 00490c7e: SHR EAX,0x8
// 00490c81: CMP EAX,dword ptr [EBX]
// 00490c83: JGE 0x00490c94
//   XREF to: 00490c94 (CONDITIONAL_JUMP)
// 00490c85: LEA ESI,[ESI + EDX*0x2]
//   Label: LAB_00490c85
// 00490c88: ADD EBX,0x8
// 00490c8b: SUB ECX,0x2
// 00490c8e: JG 0x00490c7c
//   XREF to: 00490c7c (CONDITIONAL_JUMP)
// 00490c90: POP EBP
//   Label: LAB_00490c90
// 00490c91: POP EDI
// 00490c92: POP ESI
// 00490c93: RET
// 00490c94: MOV EAX,[0x02c6d5a4]
//   Label: LAB_00490c94
//   XREF to: 02c6d5a4 (READ)
// 00490c99: INC EAX
// 00490c9a: MOV [0x02c6d5a4],EAX
//   XREF to: 02c6d5a4 (WRITE)
// 00490c9f: CMP EAX,dword ptr [0x006703f0]
//   XREF to: 006703f0 (READ)
// 00490ca5: JC 0x00490c85
//   XREF to: 00490c85 (CONDITIONAL_JUMP)
// 00490ca7: MOV dword ptr [0x02c6d5a8],0x1
//   XREF to: 02c6d5a8 (WRITE)
// 00490cb1: POP EBP
// 00490cb2: POP EDI
// 00490cb3: POP ESI
// 00490cb4: RET
