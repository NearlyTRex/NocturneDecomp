// Name: engine_clipper.c_normalizeClippedVertices_FUN_00436620
// Address: 00436620
// Address Range: [[00436620, 0043668b]]
// Convention: __cdecl
// Signature: void engine_clipper.c_normalizeClippedVertices_FUN_00436620(void)
// Globals:
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00824e58
//   undefined4 DAT_00824e5c
//   undefined4 DAT_00824e60
//   undefined4 DAT_00824e88

#include "nocturne.h"

void __cdecl engine_clipper_c_normalizeClippedVertices_FUN_00436620(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < g_ClippedVertexCount) {
    pSVar4 = g_ClippedVertexBuffer;
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
// 00436620: PUSH EBX
//   Label: engine_clipper.c_normalizeClippedVertices_FUN_00436620
// 00436621: PUSH ESI
// 00436622: PUSH EDI
// 00436623: PUSH EBP
// 00436624: MOV ESI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 0043662a: XOR ECX,ECX
// 0043662c: TEST ESI,ESI
// 0043662e: JLE 0x0043664d
//   XREF to: 0043664d (CONDITIONAL_JUMP)
// 00436630: MOV EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00436635: MOV EDX,dword ptr [EAX + 0x8]
//   Label: LAB_00436635
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 00436638: TEST EDX,EDX
// 0043663a: JZ 0x00436658
//   XREF to: 00436658 (CONDITIONAL_JUMP)
// 0043663c: MOV EBX,dword ptr [EAX + 0x8]
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 0043663f: CMP EBX,dword ptr [EAX]
//   XREF to: 00824e28 (READ)
//   XREF to: 00824e58 (READ)
// 00436641: JGE 0x00436666
//   XREF to: 00436666 (CONDITIONAL_JUMP)
// 00436643: MOV dword ptr [EAX],EBX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 00436645: INC ECX
//   Label: LAB_00436645
// 00436646: ADD EAX,0x30
//   XREF to: 00824e58 (DATA)
//   XREF to: 00824e88 (DATA)
// 00436649: CMP ECX,ESI
// 0043664b: JL 0x00436635
//   XREF to: 00436635 (CONDITIONAL_JUMP)
// 0043664d: MOV dword ptr [0x00824e24],ESI
//   Label: LAB_0043664d
//   XREF to: 00824e24 (WRITE)
// 00436653: POP EBP
// 00436654: POP EDI
// 00436655: POP ESI
// 00436656: POP EBX
// 00436657: RET
// 00436658: MOV dword ptr [EAX + 0x8],0x1
//   Label: LAB_00436658
//   XREF to: 00824e60 (WRITE)
// 0043665f: MOV dword ptr [EAX],EDX
//   XREF to: 00824e58 (WRITE)
// 00436661: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 00824e5c (WRITE)
// 00436664: JMP 0x00436645
//   XREF to: 00436645 (UNCONDITIONAL_JUMP)
// 00436666: MOV EDX,EBX
//   Label: LAB_00436666
// 00436668: MOV EDI,dword ptr [EAX]
//   XREF to: 00824e58 (READ)
// 0043666a: NEG EDX
// 0043666c: CMP EDX,EDI
// 0043666e: JLE 0x00436674
//   XREF to: 00436674 (CONDITIONAL_JUMP)
// 00436670: MOV dword ptr [EAX],EDX
//   XREF to: 00824e58 (WRITE)
// 00436672: JMP 0x00436645
//   XREF to: 00436645 (UNCONDITIONAL_JUMP)
// 00436674: MOV EBP,dword ptr [EAX + 0x8]
//   Label: LAB_00436674
//   XREF to: 00824e60 (READ)
// 00436677: MOV EBX,dword ptr [EAX + 0x4]
//   XREF to: 00824e5c (READ)
// 0043667a: CMP EBX,EBP
// 0043667c: JLE 0x00436683
//   XREF to: 00436683 (CONDITIONAL_JUMP)
// 0043667e: MOV dword ptr [EAX + 0x4],EBP
//   XREF to: 00824e5c (WRITE)
// 00436681: JMP 0x00436645
//   XREF to: 00436645 (UNCONDITIONAL_JUMP)
// 00436683: CMP EDX,EBX
//   Label: LAB_00436683
// 00436685: JLE 0x00436645
//   XREF to: 00436645 (CONDITIONAL_JUMP)
// 00436687: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 00824e5c (WRITE)
// 0043668a: JMP 0x00436645
//   XREF to: 00436645 (UNCONDITIONAL_JUMP)
