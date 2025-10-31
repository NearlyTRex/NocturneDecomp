// Name: core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35
// Address: 00490d35
// Address Range: [[00490d35, 00490ebf]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50 (0048aa50) at 0048ab29 [DATA]
// Globals:
//   int g_RenderPixelCounter
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
//   uint[1600] g_ReciprocalLookupTable

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  SEdgeData *pSVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = left_edge->x_current;
  uVar8 = right_edge->x_current;
  uVar1 = uVar9;
  pSVar7 = left_edge;
  if (uVar8 < uVar9) {
    uVar1 = uVar8;
    uVar8 = uVar9;
    pSVar7 = right_edge;
    right_edge = left_edge;
  }
  uVar1 = uVar1 >> 0x10;
  iVar2 = (uVar8 >> 0x10) - uVar1;
  if (iVar2 != 0 && uVar1 <= uVar8 >> 0x10) {
    puVar5 = g_ZBufferScanlineArray[scanline_y] + uVar1;
    iVar4 = (int)((ulonglong)
                  ((longlong)(right_edge->z_current - pSVar7->z_current) *
                  (longlong)(int)g_ReciprocalLookupTable[iVar2 + 1]) >> 0x20);
    uVar9 = pSVar7->z_current;
    while (iVar3 = iVar2 + -4, puVar6 = puVar5, 3 < iVar2) {
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      g_RenderPixelCounter =
           ((((g_RenderPixelCounter - (uint)(uVar9 >> 8 < *puVar5)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar5[1])) - (uint)(uVar8 >> 8 < puVar5[2])) + 4) -
           (uint)(uVar1 >> 8 < puVar5[3]);
      uVar9 = uVar1 + iVar4;
      puVar6 = puVar5 + 4;
      iVar3 = iVar2 + -8;
      if (iVar2 + -4 < 4) break;
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      g_RenderPixelCounter =
           ((((g_RenderPixelCounter - (uint)(uVar9 >> 8 < *puVar6)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar5[5])) - (uint)(uVar8 >> 8 < puVar5[6])) + 4) -
           (uint)(uVar1 >> 8 < puVar5[7]);
      uVar9 = uVar1 + iVar4;
      puVar6 = puVar5 + 8;
      iVar3 = iVar2 + -0xc;
      if (iVar2 + -8 < 4) break;
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      g_RenderPixelCounter =
           ((((g_RenderPixelCounter - (uint)(uVar9 >> 8 < *puVar6)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar5[9])) - (uint)(uVar8 >> 8 < puVar5[10])) + 4) -
           (uint)(uVar1 >> 8 < puVar5[0xb]);
      uVar9 = uVar1 + iVar4;
      puVar6 = puVar5 + 0xc;
      iVar3 = iVar2 + -0x10;
      if (iVar2 + -0xc < 4) break;
      uVar8 = uVar9 + iVar4 + iVar4;
      uVar1 = uVar8 + iVar4;
      g_RenderPixelCounter =
           ((((g_RenderPixelCounter - (uint)(uVar9 >> 8 < *puVar6)) -
             (uint)(uVar9 + iVar4 >> 8 < puVar5[0xd])) - (uint)(uVar8 >> 8 < puVar5[0xe])) + 4) -
           (uint)(uVar1 >> 8 < puVar5[0xf]);
      uVar9 = uVar1 + iVar4;
      puVar5 = puVar5 + 0x10;
      iVar2 = iVar3;
    }
    if (iVar3 != -4 && SCARRY4(iVar3,4) == iVar3 + 4 < 0) {
      g_RenderPixelCounter = (g_RenderPixelCounter + 1) - (uint)(uVar9 >> 8 < *puVar6);
      if (iVar3 != -3 && 0 < iVar3 + 4) {
        g_RenderPixelCounter = (g_RenderPixelCounter + 1) - (uint)(uVar9 + iVar4 >> 8 < puVar6[1]);
        if (1 < iVar3 + 3) {
          g_RenderPixelCounter =
               (g_RenderPixelCounter + 1) - (uint)(uVar9 + iVar4 + iVar4 >> 8 < puVar6[2]);
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00490d35: PUSH ESI
//   Label: core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35
// 00490d36: PUSH EDI
// 00490d37: PUSH EBP
// 00490d38: MOV EAX,dword ptr [ESI + 0x8]
// 00490d3b: MOV ECX,dword ptr [EDI + 0x8]
// 00490d3e: CMP EAX,ECX
// 00490d40: JBE 0x00490d45
//   XREF to: 00490d45 (CONDITIONAL_JUMP)
// 00490d42: XCHG EAX,ECX
// 00490d43: XCHG EDI,ESI
// 00490d45: SHR EAX,0x10
//   Label: LAB_00490d45
// 00490d48: SHR ECX,0x10
// 00490d4b: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 00490d52: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00490d59: SUB ECX,EAX
// 00490d5b: JLE 0x00490ebc
//   XREF to: 00490ebc (CONDITIONAL_JUMP)
// 00490d61: ADD EBX,EAX
// 00490d63: SHL EAX,0x2
// 00490d66: ADD EBP,EAX
// 00490d68: INC ECX
// 00490d69: MOV EAX,dword ptr [EDI + 0x28]
// 00490d6c: SUB EAX,dword ptr [ESI + 0x28]
// 00490d6f: IMUL dword ptr [ECX*0x4 + 0x2d02580]
//   XREF to: 02d02580 (DATA)
// 00490d76: MOV EDI,EBX
// 00490d78: MOV EBX,EBP
// 00490d7a: DEC ECX
// 00490d7b: MOV ESI,dword ptr [ESI + 0x28]
// 00490d7e: MOV EAX,[0x02c6d5a4]
//   XREF to: 02c6d5a4 (READ)
// 00490d83: SUB ECX,0x4
//   Label: LAB_00490d83
// 00490d86: JL 0x00490e88
//   XREF to: 00490e88 (CONDITIONAL_JUMP)
// 00490d8c: MOV EBP,ESI
// 00490d8e: SHR EBP,0x8
// 00490d91: CMP EBP,dword ptr [EBX]
// 00490d93: SBB EAX,-0x1
// 00490d96: ADD ESI,EDX
// 00490d98: MOV EBP,ESI
// 00490d9a: SHR EBP,0x8
// 00490d9d: CMP EBP,dword ptr [EBX + 0x4]
// 00490da0: SBB EAX,-0x1
// 00490da3: ADD ESI,EDX
// 00490da5: MOV EBP,ESI
// 00490da7: SHR EBP,0x8
// 00490daa: CMP EBP,dword ptr [EBX + 0x8]
// 00490dad: SBB EAX,-0x1
// 00490db0: ADD ESI,EDX
// 00490db2: MOV EBP,ESI
// 00490db4: SHR EBP,0x8
// 00490db7: CMP EBP,dword ptr [EBX + 0xc]
// 00490dba: SBB EAX,-0x1
// 00490dbd: ADD ESI,EDX
// 00490dbf: ADD EBX,0x10
// 00490dc2: ADD EDI,0x4
// 00490dc5: SUB ECX,0x4
// 00490dc8: JL 0x00490e88
//   XREF to: 00490e88 (CONDITIONAL_JUMP)
// 00490dce: MOV EBP,ESI
// 00490dd0: SHR EBP,0x8
// 00490dd3: CMP EBP,dword ptr [EBX]
// 00490dd5: SBB EAX,-0x1
// 00490dd8: ADD ESI,EDX
// 00490dda: MOV EBP,ESI
// 00490ddc: SHR EBP,0x8
// 00490ddf: CMP EBP,dword ptr [EBX + 0x4]
// 00490de2: SBB EAX,-0x1
// 00490de5: ADD ESI,EDX
// 00490de7: MOV EBP,ESI
// 00490de9: SHR EBP,0x8
// 00490dec: CMP EBP,dword ptr [EBX + 0x8]
// 00490def: SBB EAX,-0x1
// 00490df2: ADD ESI,EDX
// 00490df4: MOV EBP,ESI
// 00490df6: SHR EBP,0x8
// 00490df9: CMP EBP,dword ptr [EBX + 0xc]
// 00490dfc: SBB EAX,-0x1
// 00490dff: ADD ESI,EDX
// 00490e01: ADD EBX,0x10
// 00490e04: ADD EDI,0x4
// 00490e07: SUB ECX,0x4
// 00490e0a: JL 0x00490e88
//   XREF to: 00490e88 (CONDITIONAL_JUMP)
// 00490e0c: MOV EBP,ESI
// 00490e0e: SHR EBP,0x8
// 00490e11: CMP EBP,dword ptr [EBX]
// 00490e13: SBB EAX,-0x1
// 00490e16: ADD ESI,EDX
// 00490e18: MOV EBP,ESI
// 00490e1a: SHR EBP,0x8
// 00490e1d: CMP EBP,dword ptr [EBX + 0x4]
// 00490e20: SBB EAX,-0x1
// 00490e23: ADD ESI,EDX
// 00490e25: MOV EBP,ESI
// 00490e27: SHR EBP,0x8
// 00490e2a: CMP EBP,dword ptr [EBX + 0x8]
// 00490e2d: SBB EAX,-0x1
// 00490e30: ADD ESI,EDX
// 00490e32: MOV EBP,ESI
// 00490e34: SHR EBP,0x8
// 00490e37: CMP EBP,dword ptr [EBX + 0xc]
// 00490e3a: SBB EAX,-0x1
// 00490e3d: ADD ESI,EDX
// 00490e3f: ADD EBX,0x10
// 00490e42: ADD EDI,0x4
// 00490e45: SUB ECX,0x4
// 00490e48: JL 0x00490e88
//   XREF to: 00490e88 (CONDITIONAL_JUMP)
// 00490e4a: MOV EBP,ESI
// 00490e4c: SHR EBP,0x8
// 00490e4f: CMP EBP,dword ptr [EBX]
// 00490e51: SBB EAX,-0x1
// 00490e54: ADD ESI,EDX
// 00490e56: MOV EBP,ESI
// 00490e58: SHR EBP,0x8
// 00490e5b: CMP EBP,dword ptr [EBX + 0x4]
// 00490e5e: SBB EAX,-0x1
// 00490e61: ADD ESI,EDX
// 00490e63: MOV EBP,ESI
// 00490e65: SHR EBP,0x8
// 00490e68: CMP EBP,dword ptr [EBX + 0x8]
// 00490e6b: SBB EAX,-0x1
// 00490e6e: ADD ESI,EDX
// 00490e70: MOV EBP,ESI
// 00490e72: SHR EBP,0x8
// 00490e75: CMP EBP,dword ptr [EBX + 0xc]
// 00490e78: SBB EAX,-0x1
// 00490e7b: ADD ESI,EDX
// 00490e7d: ADD EBX,0x10
// 00490e80: ADD EDI,0x4
// 00490e83: JMP 0x00490d83
//   XREF to: 00490d83 (UNCONDITIONAL_JUMP)
// 00490e88: ADD ECX,0x4
//   Label: LAB_00490e88
// 00490e8b: JLE 0x00490eb7
//   XREF to: 00490eb7 (CONDITIONAL_JUMP)
// 00490e8d: MOV EBP,ESI
// 00490e8f: SHR EBP,0x8
// 00490e92: CMP EBP,dword ptr [EBX]
// 00490e94: SBB EAX,-0x1
// 00490e97: ADD ESI,EDX
// 00490e99: DEC ECX
// 00490e9a: JLE 0x00490eb7
//   XREF to: 00490eb7 (CONDITIONAL_JUMP)
// 00490e9c: MOV EBP,ESI
// 00490e9e: SHR EBP,0x8
// 00490ea1: CMP EBP,dword ptr [EBX + 0x4]
// 00490ea4: SBB EAX,-0x1
// 00490ea7: ADD ESI,EDX
// 00490ea9: DEC ECX
// 00490eaa: JLE 0x00490eb7
//   XREF to: 00490eb7 (CONDITIONAL_JUMP)
// 00490eac: MOV EBP,ESI
// 00490eae: SHR EBP,0x8
// 00490eb1: CMP EBP,dword ptr [EBX + 0x8]
// 00490eb4: SBB EAX,-0x1
// 00490eb7: MOV [0x02c6d5a4],EAX
//   Label: LAB_00490eb7
//   XREF to: 02c6d5a4 (WRITE)
// 00490ebc: POP EBP
//   Label: LAB_00490ebc
// 00490ebd: POP EDI
// 00490ebe: POP ESI
// 00490ebf: RET
