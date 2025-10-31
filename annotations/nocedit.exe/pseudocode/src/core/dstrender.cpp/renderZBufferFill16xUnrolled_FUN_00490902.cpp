// Name: core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00490902
// Address: 00490902
// Address Range: [[00490902, 00490a57]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00490902(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950 (0048a950) at 0048aa31 [PARAM]
// Globals:
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
//   uint[256] g_Hardware32BitPalette
//   int g_ActiveRenderColor
//   uint[1600] g_ReciprocalLookupTable

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00490902
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  SEdgeData *pSVar8;
  uint uVar9;
  
  uVar9 = left_edge->x_current;
  uVar2 = right_edge->x_current;
  uVar1 = uVar9;
  pSVar8 = left_edge;
  if (uVar2 < uVar9) {
    uVar1 = uVar2;
    uVar2 = uVar9;
    pSVar8 = right_edge;
    right_edge = left_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar3 = (uVar2 >> 0x10) - uVar1;
  if (iVar3 != 0 && uVar1 <= uVar2 >> 0x10) {
    puVar6 = g_ZBufferScanlineArray[scanline_y] + uVar1;
    iVar5 = (int)((ulonglong)
                  ((longlong)(right_edge->z_current - pSVar8->z_current) *
                  (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar9 = pSVar8->z_current;
    while (iVar4 = iVar3 + -4, puVar7 = puVar6, 3 < iVar3) {
      *puVar6 = uVar9 >> 8;
      puVar6[1] = uVar9 + iVar5 >> 8;
      uVar9 = uVar9 + iVar5 + iVar5;
      puVar6[2] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar6[3] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar7 = puVar6 + 4;
      iVar4 = iVar3 + -8;
      if (iVar3 + -4 < 4) break;
      *puVar7 = uVar9 >> 8;
      puVar6[5] = uVar9 + iVar5 >> 8;
      uVar9 = uVar9 + iVar5 + iVar5;
      puVar6[6] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar6[7] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar7 = puVar6 + 8;
      iVar4 = iVar3 + -0xc;
      if (iVar3 + -8 < 4) break;
      *puVar7 = uVar9 >> 8;
      puVar6[9] = uVar9 + iVar5 >> 8;
      uVar9 = uVar9 + iVar5 + iVar5;
      puVar6[10] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar6[0xb] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar7 = puVar6 + 0xc;
      iVar4 = iVar3 + -0x10;
      if (iVar3 + -0xc < 4) break;
      *puVar7 = uVar9 >> 8;
      puVar6[0xd] = uVar9 + iVar5 >> 8;
      uVar9 = uVar9 + iVar5 + iVar5;
      puVar6[0xe] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar6[0xf] = uVar9 >> 8;
      uVar9 = uVar9 + iVar5;
      puVar6 = puVar6 + 0x10;
      iVar3 = iVar4;
    }
    if (iVar4 != -4 && SCARRY4(iVar4,4) == iVar4 + 4 < 0) {
      *puVar7 = uVar9 >> 8;
      if (iVar4 != -3 && 0 < iVar4 + 4) {
        puVar7[1] = uVar9 + iVar5 >> 8;
        if (1 < iVar4 + 3) {
          puVar7[2] = uVar9 + iVar5 + iVar5 >> 8;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00490902: PUSH ESI
//   Label: core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00490902
// 00490903: PUSH EDI
// 00490904: PUSH EBP
// 00490905: MOV EAX,dword ptr [ESI + 0x8]
// 00490908: MOV ECX,dword ptr [EDI + 0x8]
// 0049090b: CMP EAX,ECX
// 0049090d: JBE 0x00490912
//   XREF to: 00490912 (CONDITIONAL_JUMP)
// 0049090f: XCHG EAX,ECX
// 00490910: XCHG EDI,ESI
// 00490912: SHR EAX,0x10
//   Label: LAB_00490912
// 00490915: SHR ECX,0x10
// 00490918: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 0049091f: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00490926: SUB ECX,EAX
// 00490928: JLE 0x00490a54
//   XREF to: 00490a54 (CONDITIONAL_JUMP)
// 0049092e: SHL EAX,0x2
// 00490931: ADD EBX,EAX
// 00490933: ADD EBP,EAX
// 00490935: INC ECX
// 00490936: MOV EAX,dword ptr [EDI + 0x28]
// 00490939: SUB EAX,dword ptr [ESI + 0x28]
// 0049093c: IMUL dword ptr [ECX*0x4 + 0x2d02580]
//   XREF to: 02d02580 (DATA)
// 00490943: MOV EDI,EBX
// 00490945: MOV EBX,EBP
// 00490947: DEC ECX
// 00490948: MOV ESI,dword ptr [ESI + 0x28]
// 0049094b: XOR EAX,EAX
// 0049094d: MOV AL,[0x02d02570]
//   XREF to: 02d02570 (READ)
// 00490952: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00490959: SUB ECX,0x4
//   Label: LAB_00490959
// 0049095c: JL 0x00490a2e
//   XREF to: 00490a2e (CONDITIONAL_JUMP)
// 00490962: MOV EBP,ESI
// 00490964: SHR EBP,0x8
// 00490967: MOV dword ptr [EBX],EBP
// 00490969: ADD ESI,EDX
// 0049096b: MOV EBP,ESI
// 0049096d: SHR EBP,0x8
// 00490970: MOV dword ptr [EBX + 0x4],EBP
// 00490973: ADD ESI,EDX
// 00490975: MOV EBP,ESI
// 00490977: SHR EBP,0x8
// 0049097a: MOV dword ptr [EBX + 0x8],EBP
// 0049097d: ADD ESI,EDX
// 0049097f: MOV EBP,ESI
// 00490981: SHR EBP,0x8
// 00490984: MOV dword ptr [EBX + 0xc],EBP
// 00490987: ADD ESI,EDX
// 00490989: ADD EBX,0x10
// 0049098c: ADD EDI,0x10
// 0049098f: SUB ECX,0x4
// 00490992: JL 0x00490a2e
//   XREF to: 00490a2e (CONDITIONAL_JUMP)
// 00490998: MOV EBP,ESI
// 0049099a: SHR EBP,0x8
// 0049099d: MOV dword ptr [EBX],EBP
// 0049099f: ADD ESI,EDX
// 004909a1: MOV EBP,ESI
// 004909a3: SHR EBP,0x8
// 004909a6: MOV dword ptr [EBX + 0x4],EBP
// 004909a9: ADD ESI,EDX
// 004909ab: MOV EBP,ESI
// 004909ad: SHR EBP,0x8
// 004909b0: MOV dword ptr [EBX + 0x8],EBP
// 004909b3: ADD ESI,EDX
// 004909b5: MOV EBP,ESI
// 004909b7: SHR EBP,0x8
// 004909ba: MOV dword ptr [EBX + 0xc],EBP
// 004909bd: ADD ESI,EDX
// 004909bf: ADD EBX,0x10
// 004909c2: ADD EDI,0x10
// 004909c5: SUB ECX,0x4
// 004909c8: JL 0x00490a2e
//   XREF to: 00490a2e (CONDITIONAL_JUMP)
// 004909ca: MOV EBP,ESI
// 004909cc: SHR EBP,0x8
// 004909cf: MOV dword ptr [EBX],EBP
// 004909d1: ADD ESI,EDX
// 004909d3: MOV EBP,ESI
// 004909d5: SHR EBP,0x8
// 004909d8: MOV dword ptr [EBX + 0x4],EBP
// 004909db: ADD ESI,EDX
// 004909dd: MOV EBP,ESI
// 004909df: SHR EBP,0x8
// 004909e2: MOV dword ptr [EBX + 0x8],EBP
// 004909e5: ADD ESI,EDX
// 004909e7: MOV EBP,ESI
// 004909e9: SHR EBP,0x8
// 004909ec: MOV dword ptr [EBX + 0xc],EBP
// 004909ef: ADD ESI,EDX
// 004909f1: ADD EBX,0x10
// 004909f4: ADD EDI,0x10
// 004909f7: SUB ECX,0x4
// 004909fa: JL 0x00490a2e
//   XREF to: 00490a2e (CONDITIONAL_JUMP)
// 004909fc: MOV EBP,ESI
// 004909fe: SHR EBP,0x8
// 00490a01: MOV dword ptr [EBX],EBP
// 00490a03: ADD ESI,EDX
// 00490a05: MOV EBP,ESI
// 00490a07: SHR EBP,0x8
// 00490a0a: MOV dword ptr [EBX + 0x4],EBP
// 00490a0d: ADD ESI,EDX
// 00490a0f: MOV EBP,ESI
// 00490a11: SHR EBP,0x8
// 00490a14: MOV dword ptr [EBX + 0x8],EBP
// 00490a17: ADD ESI,EDX
// 00490a19: MOV EBP,ESI
// 00490a1b: SHR EBP,0x8
// 00490a1e: MOV dword ptr [EBX + 0xc],EBP
// 00490a21: ADD ESI,EDX
// 00490a23: ADD EBX,0x10
// 00490a26: ADD EDI,0x10
// 00490a29: JMP 0x00490959
//   XREF to: 00490959 (UNCONDITIONAL_JUMP)
// 00490a2e: ADD ECX,0x4
//   Label: LAB_00490a2e
// 00490a31: JLE 0x00490a54
//   XREF to: 00490a54 (CONDITIONAL_JUMP)
// 00490a33: MOV EBP,ESI
// 00490a35: SHR EBP,0x8
// 00490a38: MOV dword ptr [EBX],EBP
// 00490a3a: ADD ESI,EDX
// 00490a3c: DEC ECX
// 00490a3d: JLE 0x00490a54
//   XREF to: 00490a54 (CONDITIONAL_JUMP)
// 00490a3f: MOV EBP,ESI
// 00490a41: SHR EBP,0x8
// 00490a44: MOV dword ptr [EBX + 0x4],EBP
// 00490a47: ADD ESI,EDX
// 00490a49: DEC ECX
// 00490a4a: JLE 0x00490a54
//   XREF to: 00490a54 (CONDITIONAL_JUMP)
// 00490a4c: MOV EBP,ESI
// 00490a4e: SHR EBP,0x8
// 00490a51: MOV dword ptr [EBX + 0x8],EBP
// 00490a54: POP EBP
//   Label: LAB_00490a54
// 00490a55: POP EDI
// 00490a56: POP ESI
// 00490a57: RET
