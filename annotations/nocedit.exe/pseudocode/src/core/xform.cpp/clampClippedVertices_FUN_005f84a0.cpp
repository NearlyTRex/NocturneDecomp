// Name: core_xform.cpp_clampClippedVertices_FUN_005f84a0
// Address: 005f84a0
// Address Range: [[005f84a0, 005f850b]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clampClippedVertices_FUN_005f84a0(void)
// Globals:
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00824e58
//   undefined4 DAT_00824e5c
//   undefined4 DAT_00824e60
//   undefined4 DAT_00824e88

#include "nocturne.h"

void __cdecl core_xform_cpp_clampClippedVertices_FUN_005f84a0(void)

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
// 005f84a0: PUSH EBX
//   Label: core_xform.cpp_clampClippedVertices_FUN_005f84a0
// 005f84a1: PUSH ESI
// 005f84a2: PUSH EDI
// 005f84a3: PUSH EBP
// 005f84a4: MOV ESI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 005f84aa: MOV EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 005f84af: XOR ECX,ECX
// 005f84b1: TEST ESI,ESI
// 005f84b3: JLE 0x005f84cd
//   XREF to: 005f84cd (CONDITIONAL_JUMP)
// 005f84b5: MOV EDX,dword ptr [EAX + 0x8]
//   Label: LAB_005f84b5
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 005f84b8: TEST EDX,EDX
// 005f84ba: JZ 0x005f84d8
//   XREF to: 005f84d8 (CONDITIONAL_JUMP)
// 005f84bc: MOV EBX,dword ptr [EAX + 0x8]
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 005f84bf: CMP EBX,dword ptr [EAX]
//   XREF to: 00824e28 (READ)
//   XREF to: 00824e58 (READ)
// 005f84c1: JGE 0x005f84e6
//   XREF to: 005f84e6 (CONDITIONAL_JUMP)
// 005f84c3: MOV dword ptr [EAX],EBX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 005f84c5: INC ECX
//   Label: LAB_005f84c5
// 005f84c6: ADD EAX,0x30
//   XREF to: 00824e58 (DATA)
//   XREF to: 00824e88 (DATA)
// 005f84c9: CMP ECX,ESI
// 005f84cb: JL 0x005f84b5
//   XREF to: 005f84b5 (CONDITIONAL_JUMP)
// 005f84cd: MOV dword ptr [0x00824e24],ESI
//   Label: LAB_005f84cd
//   XREF to: 00824e24 (WRITE)
// 005f84d3: POP EBP
// 005f84d4: POP EDI
// 005f84d5: POP ESI
// 005f84d6: POP EBX
// 005f84d7: RET
// 005f84d8: MOV dword ptr [EAX + 0x8],0x1
//   Label: LAB_005f84d8
//   XREF to: 00824e60 (WRITE)
// 005f84df: MOV dword ptr [EAX],EDX
//   XREF to: 00824e58 (WRITE)
// 005f84e1: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 00824e5c (WRITE)
// 005f84e4: JMP 0x005f84c5
//   XREF to: 005f84c5 (UNCONDITIONAL_JUMP)
// 005f84e6: MOV EDX,EBX
//   Label: LAB_005f84e6
// 005f84e8: MOV EDI,dword ptr [EAX]
//   XREF to: 00824e58 (READ)
// 005f84ea: NEG EDX
// 005f84ec: CMP EDX,EDI
// 005f84ee: JLE 0x005f84f4
//   XREF to: 005f84f4 (CONDITIONAL_JUMP)
// 005f84f0: MOV dword ptr [EAX],EDX
//   XREF to: 00824e58 (WRITE)
// 005f84f2: JMP 0x005f84c5
//   XREF to: 005f84c5 (UNCONDITIONAL_JUMP)
// 005f84f4: MOV EBP,dword ptr [EAX + 0x8]
//   Label: LAB_005f84f4
//   XREF to: 00824e60 (READ)
// 005f84f7: MOV EBX,dword ptr [EAX + 0x4]
//   XREF to: 00824e5c (READ)
// 005f84fa: CMP EBX,EBP
// 005f84fc: JLE 0x005f8503
//   XREF to: 005f8503 (CONDITIONAL_JUMP)
// 005f84fe: MOV dword ptr [EAX + 0x4],EBP
//   XREF to: 00824e5c (WRITE)
// 005f8501: JMP 0x005f84c5
//   XREF to: 005f84c5 (UNCONDITIONAL_JUMP)
// 005f8503: CMP EDX,EBX
//   Label: LAB_005f8503
// 005f8505: JLE 0x005f84c5
//   XREF to: 005f84c5 (CONDITIONAL_JUMP)
// 005f8507: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 00824e5c (WRITE)
// 005f850a: JMP 0x005f84c5
//   XREF to: 005f84c5 (UNCONDITIONAL_JUMP)
