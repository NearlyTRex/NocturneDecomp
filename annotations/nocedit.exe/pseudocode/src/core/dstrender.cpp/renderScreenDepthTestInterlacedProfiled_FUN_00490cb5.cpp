// Name: core_dstrender.cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5
// Address: 00490cb5
// Address Range: [[00490cb5, 00490d34]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 (0048ab50) at 0048ab81 [DATA]
// Globals:
//   int g_RenderPixelBudget = 0x1
//   int g_RenderPixelCounter
//   int g_RenderAbortFlag
//   void*[1024] g_ScreenBufferArray
//   uint[1600] g_ReciprocalLookupTable

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
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
    puVar7 = (ushort *)((int)g_ScreenBufferArray[scanline_y] + uVar2 * 2);
    uVar9 = pSVar8->z_current;
    iVar5 = iVar4;
    do {
      if ((uVar9 >> 8 < (uint)*puVar7) &&
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
// 00490cb5: PUSH ESI
//   Label: core_dstrender.cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5
// 00490cb6: PUSH EDI
// 00490cb7: TEST EBX,0x1
// 00490cbd: JZ 0x00490cc2
//   XREF to: 00490cc2 (CONDITIONAL_JUMP)
// 00490cbf: POP EDI
// 00490cc0: POP ESI
// 00490cc1: RET
// 00490cc2: PUSH EBP
//   Label: LAB_00490cc2
// 00490cc3: MOV EAX,dword ptr [ESI + 0x8]
// 00490cc6: MOV ECX,dword ptr [EDI + 0x8]
// 00490cc9: CMP EAX,ECX
// 00490ccb: JBE 0x00490cd0
//   XREF to: 00490cd0 (CONDITIONAL_JUMP)
// 00490ccd: XCHG EAX,ECX
// 00490cce: XCHG EDI,ESI
// 00490cd0: SHR EAX,0x10
//   Label: LAB_00490cd0
// 00490cd3: SHR ECX,0x10
// 00490cd6: MOV EBP,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00490cdd: SUB ECX,EAX
// 00490cdf: JLE 0x00490d10
//   XREF to: 00490d10 (CONDITIONAL_JUMP)
// 00490ce1: SHL EAX,0x1
// 00490ce3: ADD EBP,EAX
// 00490ce5: INC ECX
// 00490ce6: MOV EAX,dword ptr [EDI + 0x28]
// 00490ce9: SUB EAX,dword ptr [ESI + 0x28]
// 00490cec: IMUL dword ptr [ECX*0x4 + 0x2d02580]
//   XREF to: 02d02580 (DATA)
// 00490cf3: MOV EBX,EBP
// 00490cf5: DEC ECX
// 00490cf6: MOV ESI,dword ptr [ESI + 0x28]
// 00490cf9: MOV EAX,ESI
//   Label: LAB_00490cf9
// 00490cfb: SHR EAX,0x8
// 00490cfe: MOVZX EDI,word ptr [EBX]
// 00490d01: CMP EAX,EDI
// 00490d03: JC 0x00490d14
//   XREF to: 00490d14 (CONDITIONAL_JUMP)
// 00490d05: LEA ESI,[ESI + EDX*0x2]
//   Label: LAB_00490d05
// 00490d08: ADD EBX,0x4
// 00490d0b: SUB ECX,0x2
// 00490d0e: JG 0x00490cf9
//   XREF to: 00490cf9 (CONDITIONAL_JUMP)
// 00490d10: POP EBP
//   Label: LAB_00490d10
// 00490d11: POP EDI
// 00490d12: POP ESI
// 00490d13: RET
// 00490d14: MOV EAX,[0x02c6d5a4]
//   Label: LAB_00490d14
//   XREF to: 02c6d5a4 (READ)
// 00490d19: INC EAX
// 00490d1a: MOV [0x02c6d5a4],EAX
//   XREF to: 02c6d5a4 (WRITE)
// 00490d1f: CMP EAX,dword ptr [0x006703f0]
//   XREF to: 006703f0 (READ)
// 00490d25: JC 0x00490d05
//   XREF to: 00490d05 (CONDITIONAL_JUMP)
// 00490d27: MOV dword ptr [0x02c6d5a8],0x1
//   XREF to: 02c6d5a8 (WRITE)
// 00490d31: POP EBP
// 00490d32: POP EDI
// 00490d33: POP ESI
// 00490d34: RET
