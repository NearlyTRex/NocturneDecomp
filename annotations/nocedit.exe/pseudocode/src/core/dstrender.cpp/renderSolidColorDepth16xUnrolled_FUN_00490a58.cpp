// Name: core_dstrender.cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58
// Address: 00490a58
// Address Range: [[00490a58, 00490c36]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 (0048a8a0) at 0048a909 [PARAM]
//   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 (0048a820) at 0048a882 [DATA]
// Globals:
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
//   int g_ActiveRenderColor
//   uint[1600] g_ReciprocalLookupTable

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  SEdgeData *pSVar10;
  uint uVar11;
  int *piVar12;
  
  iVar1 = g_ActiveRenderColor;
  uVar11 = left_edge->x_current;
  uVar9 = right_edge->x_current;
  uVar2 = uVar11;
  pSVar10 = left_edge;
  if (uVar9 < uVar11) {
    uVar2 = uVar9;
    uVar9 = uVar11;
    pSVar10 = right_edge;
    right_edge = left_edge;
  }
  uVar2 = uVar2 >> 0x10;
  iVar3 = (uVar9 >> 0x10) - uVar2;
  if (iVar3 != 0 && uVar2 <= uVar9 >> 0x10) {
    piVar6 = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar2 * 4);
    puVar7 = g_ZBufferScanlineArray[scanline_y] + uVar2;
    iVar5 = (int)((ulonglong)
                  ((longlong)(right_edge->z_current - pSVar10->z_current) *
                  (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20);
    uVar11 = pSVar10->z_current;
    while (iVar4 = iVar3 + -4, puVar8 = puVar7, piVar12 = piVar6, 3 < iVar3) {
      if ((int)*puVar7 <= (int)(uVar11 >> 8)) {
        *puVar7 = uVar11 >> 8;
        *piVar6 = iVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar7[1] <= (int)uVar9) {
        puVar7[1] = uVar9;
        piVar6[1] = iVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[2] <= (int)uVar9) {
        puVar7[2] = uVar9;
        piVar6[2] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[3] <= (int)uVar9) {
        puVar7[3] = uVar9;
        piVar6[3] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar8 = puVar7 + 4;
      piVar12 = piVar6 + 4;
      iVar4 = iVar3 + -8;
      if (iVar3 + -4 < 4) break;
      if ((int)*puVar8 <= (int)(uVar11 >> 8)) {
        *puVar8 = uVar11 >> 8;
        *piVar12 = iVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar7[5] <= (int)uVar9) {
        puVar7[5] = uVar9;
        piVar6[5] = iVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[6] <= (int)uVar9) {
        puVar7[6] = uVar9;
        piVar6[6] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[7] <= (int)uVar9) {
        puVar7[7] = uVar9;
        piVar6[7] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar8 = puVar7 + 8;
      piVar12 = piVar6 + 8;
      iVar4 = iVar3 + -0xc;
      if (iVar3 + -8 < 4) break;
      if ((int)*puVar8 <= (int)(uVar11 >> 8)) {
        *puVar8 = uVar11 >> 8;
        *piVar12 = iVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar7[9] <= (int)uVar9) {
        puVar7[9] = uVar9;
        piVar6[9] = iVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[10] <= (int)uVar9) {
        puVar7[10] = uVar9;
        piVar6[10] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[0xb] <= (int)uVar9) {
        puVar7[0xb] = uVar9;
        piVar6[0xb] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar8 = puVar7 + 0xc;
      piVar12 = piVar6 + 0xc;
      iVar4 = iVar3 + -0x10;
      if (iVar3 + -0xc < 4) break;
      if ((int)*puVar8 <= (int)(uVar11 >> 8)) {
        *puVar8 = uVar11 >> 8;
        *piVar12 = iVar1;
      }
      uVar9 = uVar11 + iVar5 >> 8;
      if ((int)puVar7[0xd] <= (int)uVar9) {
        puVar7[0xd] = uVar9;
        piVar6[0xd] = iVar1;
      }
      uVar11 = uVar11 + iVar5 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[0xe] <= (int)uVar9) {
        puVar7[0xe] = uVar9;
        piVar6[0xe] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      uVar9 = uVar11 >> 8;
      if ((int)puVar7[0xf] <= (int)uVar9) {
        puVar7[0xf] = uVar9;
        piVar6[0xf] = iVar1;
      }
      uVar11 = uVar11 + iVar5;
      puVar7 = puVar7 + 0x10;
      piVar6 = piVar6 + 0x10;
      iVar3 = iVar4;
    }
    if (iVar4 != -4 && SCARRY4(iVar4,4) == iVar4 + 4 < 0) {
      if ((int)*puVar8 <= (int)(uVar11 >> 8)) {
        *puVar8 = uVar11 >> 8;
        *piVar12 = iVar1;
      }
      if (iVar4 != -3 && 0 < iVar4 + 4) {
        uVar9 = uVar11 + iVar5 >> 8;
        if ((int)puVar8[1] <= (int)uVar9) {
          puVar8[1] = uVar9;
          piVar12[1] = iVar1;
        }
        if ((1 < iVar4 + 3) && (uVar11 = uVar11 + iVar5 + iVar5 >> 8, (int)puVar8[2] <= (int)uVar11)
           ) {
          puVar8[2] = uVar11;
          piVar12[2] = iVar1;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00490a58: PUSH ESI
//   Label: core_dstrender.cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58
// 00490a59: PUSH EDI
// 00490a5a: PUSH EBP
// 00490a5b: MOV EAX,dword ptr [ESI + 0x8]
// 00490a5e: MOV ECX,dword ptr [EDI + 0x8]
// 00490a61: CMP EAX,ECX
// 00490a63: JBE 0x00490a68
//   XREF to: 00490a68 (CONDITIONAL_JUMP)
// 00490a65: XCHG EAX,ECX
// 00490a66: XCHG EDI,ESI
// 00490a68: SHR EAX,0x10
//   Label: LAB_00490a68
// 00490a6b: SHR ECX,0x10
// 00490a6e: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 00490a75: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00490a7c: SUB ECX,EAX
// 00490a7e: JLE 0x00490c33
//   XREF to: 00490c33 (CONDITIONAL_JUMP)
// 00490a84: SHL EAX,0x2
// 00490a87: ADD EBX,EAX
// 00490a89: ADD EBP,EAX
// 00490a8b: INC ECX
// 00490a8c: MOV EAX,dword ptr [EDI + 0x28]
// 00490a8f: SUB EAX,dword ptr [ESI + 0x28]
// 00490a92: IMUL dword ptr [ECX*0x4 + 0x2d02580]
//   XREF to: 02d02580 (DATA)
// 00490a99: MOV EDI,EBX
// 00490a9b: MOV EBX,EBP
// 00490a9d: DEC ECX
// 00490a9e: MOV ESI,dword ptr [ESI + 0x28]
// 00490aa1: MOV EAX,[0x02d02570]
//   XREF to: 02d02570 (READ)
// 00490aa6: SUB ECX,0x4
//   Label: LAB_00490aa6
// 00490aa9: JL 0x00490bf7
//   XREF to: 00490bf7 (CONDITIONAL_JUMP)
// 00490aaf: MOV EBP,ESI
// 00490ab1: SHR EBP,0x8
// 00490ab4: CMP EBP,dword ptr [EBX]
// 00490ab6: JL 0x00490abc
//   XREF to: 00490abc (CONDITIONAL_JUMP)
// 00490ab8: MOV dword ptr [EBX],EBP
// 00490aba: MOV dword ptr [EDI],EAX
// 00490abc: ADD ESI,EDX
//   Label: LAB_00490abc
// 00490abe: MOV EBP,ESI
// 00490ac0: SHR EBP,0x8
// 00490ac3: CMP EBP,dword ptr [EBX + 0x4]
// 00490ac6: JL 0x00490ace
//   XREF to: 00490ace (CONDITIONAL_JUMP)
// 00490ac8: MOV dword ptr [EBX + 0x4],EBP
// 00490acb: MOV dword ptr [EDI + 0x4],EAX
// 00490ace: ADD ESI,EDX
//   Label: LAB_00490ace
// 00490ad0: MOV EBP,ESI
// 00490ad2: SHR EBP,0x8
// 00490ad5: CMP EBP,dword ptr [EBX + 0x8]
// 00490ad8: JL 0x00490ae0
//   XREF to: 00490ae0 (CONDITIONAL_JUMP)
// 00490ada: MOV dword ptr [EBX + 0x8],EBP
// 00490add: MOV dword ptr [EDI + 0x8],EAX
// 00490ae0: ADD ESI,EDX
//   Label: LAB_00490ae0
// 00490ae2: MOV EBP,ESI
// 00490ae4: SHR EBP,0x8
// 00490ae7: CMP EBP,dword ptr [EBX + 0xc]
// 00490aea: JL 0x00490af2
//   XREF to: 00490af2 (CONDITIONAL_JUMP)
// 00490aec: MOV dword ptr [EBX + 0xc],EBP
// 00490aef: MOV dword ptr [EDI + 0xc],EAX
// 00490af2: ADD ESI,EDX
//   Label: LAB_00490af2
// 00490af4: ADD EBX,0x10
// 00490af7: ADD EDI,0x10
// 00490afa: SUB ECX,0x4
// 00490afd: JL 0x00490bf7
//   XREF to: 00490bf7 (CONDITIONAL_JUMP)
// 00490b03: MOV EBP,ESI
// 00490b05: SHR EBP,0x8
// 00490b08: CMP EBP,dword ptr [EBX]
// 00490b0a: JL 0x00490b10
//   XREF to: 00490b10 (CONDITIONAL_JUMP)
// 00490b0c: MOV dword ptr [EBX],EBP
// 00490b0e: MOV dword ptr [EDI],EAX
// 00490b10: ADD ESI,EDX
//   Label: LAB_00490b10
// 00490b12: MOV EBP,ESI
// 00490b14: SHR EBP,0x8
// 00490b17: CMP EBP,dword ptr [EBX + 0x4]
// 00490b1a: JL 0x00490b22
//   XREF to: 00490b22 (CONDITIONAL_JUMP)
// 00490b1c: MOV dword ptr [EBX + 0x4],EBP
// 00490b1f: MOV dword ptr [EDI + 0x4],EAX
// 00490b22: ADD ESI,EDX
//   Label: LAB_00490b22
// 00490b24: MOV EBP,ESI
// 00490b26: SHR EBP,0x8
// 00490b29: CMP EBP,dword ptr [EBX + 0x8]
// 00490b2c: JL 0x00490b34
//   XREF to: 00490b34 (CONDITIONAL_JUMP)
// 00490b2e: MOV dword ptr [EBX + 0x8],EBP
// 00490b31: MOV dword ptr [EDI + 0x8],EAX
// 00490b34: ADD ESI,EDX
//   Label: LAB_00490b34
// 00490b36: MOV EBP,ESI
// 00490b38: SHR EBP,0x8
// 00490b3b: CMP EBP,dword ptr [EBX + 0xc]
// 00490b3e: JL 0x00490b46
//   XREF to: 00490b46 (CONDITIONAL_JUMP)
// 00490b40: MOV dword ptr [EBX + 0xc],EBP
// 00490b43: MOV dword ptr [EDI + 0xc],EAX
// 00490b46: ADD ESI,EDX
//   Label: LAB_00490b46
// 00490b48: ADD EBX,0x10
// 00490b4b: ADD EDI,0x10
// 00490b4e: SUB ECX,0x4
// 00490b51: JL 0x00490bf7
//   XREF to: 00490bf7 (CONDITIONAL_JUMP)
// 00490b57: MOV EBP,ESI
// 00490b59: SHR EBP,0x8
// 00490b5c: CMP EBP,dword ptr [EBX]
// 00490b5e: JL 0x00490b64
//   XREF to: 00490b64 (CONDITIONAL_JUMP)
// 00490b60: MOV dword ptr [EBX],EBP
// 00490b62: MOV dword ptr [EDI],EAX
// 00490b64: ADD ESI,EDX
//   Label: LAB_00490b64
// 00490b66: MOV EBP,ESI
// 00490b68: SHR EBP,0x8
// 00490b6b: CMP EBP,dword ptr [EBX + 0x4]
// 00490b6e: JL 0x00490b76
//   XREF to: 00490b76 (CONDITIONAL_JUMP)
// 00490b70: MOV dword ptr [EBX + 0x4],EBP
// 00490b73: MOV dword ptr [EDI + 0x4],EAX
// 00490b76: ADD ESI,EDX
//   Label: LAB_00490b76
// 00490b78: MOV EBP,ESI
// 00490b7a: SHR EBP,0x8
// 00490b7d: CMP EBP,dword ptr [EBX + 0x8]
// 00490b80: JL 0x00490b88
//   XREF to: 00490b88 (CONDITIONAL_JUMP)
// 00490b82: MOV dword ptr [EBX + 0x8],EBP
// 00490b85: MOV dword ptr [EDI + 0x8],EAX
// 00490b88: ADD ESI,EDX
//   Label: LAB_00490b88
// 00490b8a: MOV EBP,ESI
// 00490b8c: SHR EBP,0x8
// 00490b8f: CMP EBP,dword ptr [EBX + 0xc]
// 00490b92: JL 0x00490b9a
//   XREF to: 00490b9a (CONDITIONAL_JUMP)
// 00490b94: MOV dword ptr [EBX + 0xc],EBP
// 00490b97: MOV dword ptr [EDI + 0xc],EAX
// 00490b9a: ADD ESI,EDX
//   Label: LAB_00490b9a
// 00490b9c: ADD EBX,0x10
// 00490b9f: ADD EDI,0x10
// 00490ba2: SUB ECX,0x4
// 00490ba5: JL 0x00490bf7
//   XREF to: 00490bf7 (CONDITIONAL_JUMP)
// 00490ba7: MOV EBP,ESI
// 00490ba9: SHR EBP,0x8
// 00490bac: CMP EBP,dword ptr [EBX]
// 00490bae: JL 0x00490bb4
//   XREF to: 00490bb4 (CONDITIONAL_JUMP)
// 00490bb0: MOV dword ptr [EBX],EBP
// 00490bb2: MOV dword ptr [EDI],EAX
// 00490bb4: ADD ESI,EDX
//   Label: LAB_00490bb4
// 00490bb6: MOV EBP,ESI
// 00490bb8: SHR EBP,0x8
// 00490bbb: CMP EBP,dword ptr [EBX + 0x4]
// 00490bbe: JL 0x00490bc6
//   XREF to: 00490bc6 (CONDITIONAL_JUMP)
// 00490bc0: MOV dword ptr [EBX + 0x4],EBP
// 00490bc3: MOV dword ptr [EDI + 0x4],EAX
// 00490bc6: ADD ESI,EDX
//   Label: LAB_00490bc6
// 00490bc8: MOV EBP,ESI
// 00490bca: SHR EBP,0x8
// 00490bcd: CMP EBP,dword ptr [EBX + 0x8]
// 00490bd0: JL 0x00490bd8
//   XREF to: 00490bd8 (CONDITIONAL_JUMP)
// 00490bd2: MOV dword ptr [EBX + 0x8],EBP
// 00490bd5: MOV dword ptr [EDI + 0x8],EAX
// 00490bd8: ADD ESI,EDX
//   Label: LAB_00490bd8
// 00490bda: MOV EBP,ESI
// 00490bdc: SHR EBP,0x8
// 00490bdf: CMP EBP,dword ptr [EBX + 0xc]
// 00490be2: JL 0x00490bea
//   XREF to: 00490bea (CONDITIONAL_JUMP)
// 00490be4: MOV dword ptr [EBX + 0xc],EBP
// 00490be7: MOV dword ptr [EDI + 0xc],EAX
// 00490bea: ADD ESI,EDX
//   Label: LAB_00490bea
// 00490bec: ADD EBX,0x10
// 00490bef: ADD EDI,0x10
// 00490bf2: JMP 0x00490aa6
//   XREF to: 00490aa6 (UNCONDITIONAL_JUMP)
// 00490bf7: ADD ECX,0x4
//   Label: LAB_00490bf7
// 00490bfa: JLE 0x00490c33
//   XREF to: 00490c33 (CONDITIONAL_JUMP)
// 00490bfc: MOV EBP,ESI
// 00490bfe: SHR EBP,0x8
// 00490c01: CMP EBP,dword ptr [EBX]
// 00490c03: JL 0x00490c09
//   XREF to: 00490c09 (CONDITIONAL_JUMP)
// 00490c05: MOV dword ptr [EBX],EBP
// 00490c07: MOV dword ptr [EDI],EAX
// 00490c09: ADD ESI,EDX
//   Label: LAB_00490c09
// 00490c0b: DEC ECX
// 00490c0c: JLE 0x00490c33
//   XREF to: 00490c33 (CONDITIONAL_JUMP)
// 00490c0e: MOV EBP,ESI
// 00490c10: SHR EBP,0x8
// 00490c13: CMP EBP,dword ptr [EBX + 0x4]
// 00490c16: JL 0x00490c1e
//   XREF to: 00490c1e (CONDITIONAL_JUMP)
// 00490c18: MOV dword ptr [EBX + 0x4],EBP
// 00490c1b: MOV dword ptr [EDI + 0x4],EAX
// 00490c1e: ADD ESI,EDX
//   Label: LAB_00490c1e
// 00490c20: DEC ECX
// 00490c21: JLE 0x00490c33
//   XREF to: 00490c33 (CONDITIONAL_JUMP)
// 00490c23: MOV EBP,ESI
// 00490c25: SHR EBP,0x8
// 00490c28: CMP EBP,dword ptr [EBX + 0x8]
// 00490c2b: JL 0x00490c33
//   XREF to: 00490c33 (CONDITIONAL_JUMP)
// 00490c2d: MOV dword ptr [EBX + 0x8],EBP
// 00490c30: MOV dword ptr [EDI + 0x8],EAX
// 00490c33: POP EBP
//   Label: LAB_00490c33
// 00490c34: POP EDI
// 00490c35: POP ESI
// 00490c36: RET
