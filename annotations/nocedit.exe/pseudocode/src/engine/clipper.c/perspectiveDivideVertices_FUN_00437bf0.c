// Name: engine_clipper.c_perspectiveDivideVertices_FUN_00437bf0
// Address: 00437bf0
// Address Range: [[00437bf0, 00437c5b]]
// Convention: __cdecl
// Signature: void engine_clipper.c_perspectiveDivideVertices_FUN_00437bf0(void)
// Globals:
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00824e58
//   undefined4 DAT_00824e5c
//   undefined4 DAT_00824e60
//   undefined4 DAT_00824e88

#include "nocturne.h"

void __cdecl engine_clipper_c_perspectiveDivideVertices_FUN_00437bf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  int iVar6;
  
  pSVar4 = g_ClippedVertexBuffer;
  iVar5 = 0;
  if (0 < g_ClippedVertexCount) {
    do {
      if ((pSVar4->projected_vertex).transformed_z == 0) {
        (pSVar4->projected_vertex).transformed_z = 1;
        (pSVar4->projected_vertex).transformed_x = 0;
        (pSVar4->projected_vertex).transformed_y = 0;
      }
      else {
        iVar1 = (pSVar4->projected_vertex).transformed_z;
        if (iVar1 < (pSVar4->projected_vertex).transformed_x) {
          (pSVar4->projected_vertex).transformed_x = iVar1;
        }
        else {
          iVar2 = (pSVar4->projected_vertex).transformed_x;
          iVar6 = -iVar1;
          if (-iVar2 == iVar1 || iVar6 < iVar2) {
            iVar2 = (pSVar4->projected_vertex).transformed_z;
            iVar3 = (pSVar4->projected_vertex).transformed_y;
            if (iVar2 < iVar3) {
              (pSVar4->projected_vertex).transformed_y = iVar2;
            }
            else if (-iVar3 != iVar1 && iVar3 <= iVar6) {
              (pSVar4->projected_vertex).transformed_y = iVar6;
            }
          }
          else {
            (pSVar4->projected_vertex).transformed_x = iVar6;
          }
        }
      }
      iVar5 = iVar5 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar5 < g_ClippedVertexCount);
  }
  return;
}


// Assembly code:
// 00437bf0: PUSH EBX
//   Label: engine_clipper.c_perspectiveDivideVertices_FUN_00437bf0
// 00437bf1: PUSH ESI
// 00437bf2: PUSH EDI
// 00437bf3: PUSH EBP
// 00437bf4: MOV ESI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00437bfa: MOV EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00437bff: XOR ECX,ECX
// 00437c01: TEST ESI,ESI
// 00437c03: JLE 0x00437c1d
//   XREF to: 00437c1d (CONDITIONAL_JUMP)
// 00437c05: MOV EDX,dword ptr [EAX + 0x8]
//   Label: LAB_00437c05
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 00437c08: TEST EDX,EDX
// 00437c0a: JZ 0x00437c28
//   XREF to: 00437c28 (CONDITIONAL_JUMP)
// 00437c0c: MOV EBX,dword ptr [EAX + 0x8]
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 00437c0f: CMP EBX,dword ptr [EAX]
//   XREF to: 00824e28 (READ)
//   XREF to: 00824e58 (READ)
// 00437c11: JGE 0x00437c36
//   XREF to: 00437c36 (CONDITIONAL_JUMP)
// 00437c13: MOV dword ptr [EAX],EBX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 00437c15: INC ECX
//   Label: LAB_00437c15
// 00437c16: ADD EAX,0x30
//   XREF to: 00824e58 (DATA)
//   XREF to: 00824e88 (DATA)
// 00437c19: CMP ECX,ESI
// 00437c1b: JL 0x00437c05
//   XREF to: 00437c05 (CONDITIONAL_JUMP)
// 00437c1d: MOV dword ptr [0x00824e24],ESI
//   Label: LAB_00437c1d
//   XREF to: 00824e24 (WRITE)
// 00437c23: POP EBP
// 00437c24: POP EDI
// 00437c25: POP ESI
// 00437c26: POP EBX
// 00437c27: RET
// 00437c28: MOV dword ptr [EAX + 0x8],0x1
//   Label: LAB_00437c28
//   XREF to: 00824e60 (WRITE)
// 00437c2f: MOV dword ptr [EAX],EDX
//   XREF to: 00824e58 (WRITE)
// 00437c31: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 00824e5c (WRITE)
// 00437c34: JMP 0x00437c15
//   XREF to: 00437c15 (UNCONDITIONAL_JUMP)
// 00437c36: MOV EDX,EBX
//   Label: LAB_00437c36
// 00437c38: MOV EDI,dword ptr [EAX]
//   XREF to: 00824e58 (READ)
// 00437c3a: NEG EDX
// 00437c3c: CMP EDX,EDI
// 00437c3e: JLE 0x00437c44
//   XREF to: 00437c44 (CONDITIONAL_JUMP)
// 00437c40: MOV dword ptr [EAX],EDX
//   XREF to: 00824e58 (WRITE)
// 00437c42: JMP 0x00437c15
//   XREF to: 00437c15 (UNCONDITIONAL_JUMP)
// 00437c44: MOV EBP,dword ptr [EAX + 0x8]
//   Label: LAB_00437c44
//   XREF to: 00824e60 (READ)
// 00437c47: MOV EBX,dword ptr [EAX + 0x4]
//   XREF to: 00824e5c (READ)
// 00437c4a: CMP EBX,EBP
// 00437c4c: JLE 0x00437c53
//   XREF to: 00437c53 (CONDITIONAL_JUMP)
// 00437c4e: MOV dword ptr [EAX + 0x4],EBP
//   XREF to: 00824e5c (WRITE)
// 00437c51: JMP 0x00437c15
//   XREF to: 00437c15 (UNCONDITIONAL_JUMP)
// 00437c53: CMP EDX,EBX
//   Label: LAB_00437c53
// 00437c55: JLE 0x00437c15
//   XREF to: 00437c15 (CONDITIONAL_JUMP)
// 00437c57: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 00824e5c (WRITE)
// 00437c5a: JMP 0x00437c15
//   XREF to: 00437c15 (UNCONDITIONAL_JUMP)
