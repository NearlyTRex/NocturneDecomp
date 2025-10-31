// Name: shape_design.c_selectVertexToDelete_FUN_0045c5b0
// Address: 0045c5b0
// Address Range: [[0045c5b0, 0045c6bf]]
// Convention: __cdecl
// Signature: void shape_design.c_selectVertexToDelete_FUN_0045c5b0(void)
// Cross-references:
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045c854 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Point_to_delete_0061b336
//   int INT_016263f8
//   int g_CurrentModelIndex
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0

#include "nocturne.h"

void __cdecl shape_design_c_selectVertexToDelete_FUN_0045c5b0(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffffd0,0x13,0,0xb,"Point to delete : ");
  local_18 = -1;
  iVar2 = -1;
  pcVar5 = &stack0xffffffd0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_18 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffffd0);
  }
  if ((-1 < local_18) && (local_18 < g_VertexCount)) {
    for (local_14 = local_18; local_14 < g_VertexCount + -1; local_14 = local_14 + 1) {
      puVar6 = (undefined4 *)(local_14 * 0x14 + 0x1626410 + (uint)bVar8 * -8);
      puVar3 = (undefined4 *)((local_14 + 1) * 0x14 + 0x1626410 + (uint)bVar8 * -8);
      g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[local_14 + 1].vertex.x;
      puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar4 = puVar3 + (uint)bVar8 * -2 + 1;
      *puVar6 = *puVar3;
      *puVar7 = *puVar4;
      puVar7[(uint)bVar8 * -2 + 1] = puVar4[(uint)bVar8 * -2 + 1];
      (puVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (puVar4 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    }
    g_VertexCount = g_VertexCount + -1;
  }
  for (local_14 = 0; local_14 < g_PolygonCount; local_14 = local_14 + 1) {
    for (local_1c = 0; local_1c < (int)g_ModelPolygonData[local_14].vertex_indices_count;
        local_1c = local_1c + 1) {
      if (local_18 <= (int)g_ModelPolygonData[local_14].vertex_indices[local_1c]) {
        g_ModelPolygonData[local_14].vertex_indices[local_1c] =
             g_ModelPolygonData[local_14].vertex_indices[local_1c] - 1;
      }
    }
  }
  return;
}


// Assembly code:
// 0045c5b0: PUSH EBX
//   Label: shape_design.c_selectVertexToDelete_FUN_0045c5b0
// 0045c5b1: PUSH ESI
// 0045c5b2: PUSH EDI
// 0045c5b3: PUSH EBP
// 0045c5b4: MOV EBP,ESP
// 0045c5b6: SUB ESP,0x20
// 0045c5bc: MOV ECX,0x61b336
//   XREF to: 0061b336 (DATA)
// 0045c5c1: PUSH ECX
//   XREF to: 0061b336 (DATA)
// 0045c5c2: PUSH 0xb
// 0045c5c4: PUSH 0x0
// 0045c5c6: PUSH 0x13
// 0045c5c8: LEA ECX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0045c5cb: PUSH ECX
// 0045c5cc: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045c5d1: ADD ESP,0x14
// 0045c5d4: MOV dword ptr [EBP + -0x8],0xffffffff
//   XREF to: Stack[-0x18] (WRITE)
// 0045c5db: LEA EDI,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0045c5de: SUB ECX,ECX
// 0045c5e0: DEC ECX
// 0045c5e1: XOR EAX,EAX
// 0045c5e3: SCASB.REPNE ES:EDI
// 0045c5e5: NOT ECX
// 0045c5e7: DEC ECX
// 0045c5e8: TEST ECX,ECX
// 0045c5ea: JZ 0x0045c5fb
//   XREF to: 0045c5fb (CONDITIONAL_JUMP)
// 0045c5ec: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0045c5ef: PUSH EAX
// 0045c5f0: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 0045c5f5: ADD ESP,0x4
// 0045c5f8: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045c5fb: CMP dword ptr [EBP + -0x8],0x0
//   Label: LAB_0045c5fb
//   XREF to: Stack[-0x18] (READ)
// 0045c5ff: JL 0x0045c60c
//   XREF to: 0045c60c (CONDITIONAL_JUMP)
// 0045c601: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045c604: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045c60a: JL 0x0045c60e
//   XREF to: 0045c60e (CONDITIONAL_JUMP)
// 0045c60c: JMP 0x0045c64b
//   Label: LAB_0045c60c
//   XREF to: 0045c64b (UNCONDITIONAL_JUMP)
// 0045c60e: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045c60e
//   XREF to: Stack[-0x18] (READ)
// 0045c611: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045c614: JMP 0x0045c61c
//   XREF to: 0045c61c (UNCONDITIONAL_JUMP)
// 0045c616: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045c616
//   XREF to: Stack[-0x14] (READ)
// 0045c619: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045c61c: MOV EAX,[0x01626408]
//   Label: LAB_0045c61c
//   XREF to: 01626408 (READ)
// 0045c621: DEC EAX
// 0045c622: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045c625: JLE 0x0045c645
//   XREF to: 0045c645 (CONDITIONAL_JUMP)
// 0045c627: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045c62a: INC EAX
// 0045c62b: IMUL EAX,EAX,0x14
// 0045c62e: IMUL ESI,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045c632: LEA EDI,[ESI + 0x162640c]
//   XREF to: 016263f8 (DATA)
// 0045c638: LEA ESI,[EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045c63e: MOVSD ES:EDI,ESI
//   XREF to: 016263f8 (WRITE)
//   XREF to: 0162640c (DATA)
// 0045c63f: MOVSD ES:EDI,ESI
//   XREF to: 016263fc (WRITE)
//   XREF to: 01626410 (READ)
// 0045c640: MOVSD ES:EDI,ESI
//   XREF to: 01626400 (WRITE)
//   XREF to: 01626414 (READ)
// 0045c641: MOVSD ES:EDI,ESI
//   XREF to: 01626404 (WRITE)
//   XREF to: 01626418 (READ)
// 0045c642: MOVSD ES:EDI,ESI
//   XREF to: 01626408 (WRITE)
//   XREF to: 0162641c (READ)
// 0045c643: JMP 0x0045c616
//   XREF to: 0045c616 (UNCONDITIONAL_JUMP)
// 0045c645: DEC dword ptr [0x01626408]
//   Label: LAB_0045c645
//   XREF to: 01626408 (READ_WRITE)
// 0045c64b: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045c64b
//   XREF to: Stack[-0x14] (WRITE)
// 0045c652: JMP 0x0045c65a
//   XREF to: 0045c65a (UNCONDITIONAL_JUMP)
// 0045c654: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045c654
//   XREF to: Stack[-0x14] (READ)
// 0045c657: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045c65a: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045c65a
//   XREF to: Stack[-0x14] (READ)
// 0045c65d: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045c663: JGE 0x0045c6b9
//   XREF to: 0045c6b9 (CONDITIONAL_JUMP)
// 0045c665: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045c66c: JMP 0x0045c674
//   XREF to: 0045c674 (UNCONDITIONAL_JUMP)
// 0045c66e: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045c66e
//   XREF to: Stack[-0x1c] (READ)
// 0045c671: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045c674: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   Label: LAB_0045c674
//   XREF to: Stack[-0x14] (READ)
// 0045c67b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045c67e: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045c684: JGE 0x0045c6b7
//   XREF to: 0045c6b7 (CONDITIONAL_JUMP)
// 0045c686: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0045c68d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045c690: SHL EAX,0x2
// 0045c693: ADD EAX,EDX
// 0045c695: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045c69b: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045c69e: JL 0x0045c6b5
//   XREF to: 0045c6b5 (CONDITIONAL_JUMP)
// 0045c6a0: IMUL EDX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0045c6a7: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045c6aa: SHL EAX,0x2
// 0045c6ad: ADD EAX,EDX
// 0045c6af: DEC dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045c6b5: JMP 0x0045c66e
//   Label: LAB_0045c6b5
//   XREF to: 0045c66e (UNCONDITIONAL_JUMP)
// 0045c6b7: JMP 0x0045c654
//   Label: LAB_0045c6b7
//   XREF to: 0045c654 (UNCONDITIONAL_JUMP)
// 0045c6b9: MOV ESP,EBP
//   Label: LAB_0045c6b9
// 0045c6bb: POP EBP
// 0045c6bc: POP EDI
// 0045c6bd: POP ESI
// 0045c6be: POP EBX
// 0045c6bf: RET
