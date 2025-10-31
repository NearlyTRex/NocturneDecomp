// Name: shape_design.c_selectVertexToMove_FUN_0045c530
// Address: 0045c530
// Address Range: [[0045c530, 0045c5a6]]
// Convention: __cdecl
// Signature: void shape_design.c_selectVertexToMove_FUN_0045c530(void)
// Cross-references:
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045c869 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Point_to_move_0061b325
//   int g_VertexCount
//   int g_PointEditorMode
//   int g_SelectedPointIndex
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0

#include "nocturne.h"

/* Signature: undefined1 shape_design.c_PointToMove() */

void __cdecl shape_design_c_selectVertexToMove_FUN_0045c530(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  int local_14;
  
  bVar4 = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(&stack0xffffffd8,0x13,0,0xb,"Point to move : ");
  local_14 = -1;
  iVar2 = -1;
  pcVar3 = &stack0xffffffd8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_14 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffffd8);
  }
  if ((-1 < local_14) && (local_14 < g_VertexCount)) {
    g_PointEditorMode = 1;
    g_SelectedPointIndex = local_14;
  }
  return;
}


// Assembly code:
// 0045c530: PUSH EBX
//   Label: shape_design.c_selectVertexToMove_FUN_0045c530
// 0045c531: PUSH ESI
// 0045c532: PUSH EDI
// 0045c533: PUSH EBP
// 0045c534: MOV EBP,ESP
// 0045c536: SUB ESP,0x18
// 0045c53c: MOV ECX,0x61b325
//   XREF to: 0061b325 (DATA)
// 0045c541: PUSH ECX
//   XREF to: 0061b325 (DATA)
// 0045c542: PUSH 0xb
// 0045c544: PUSH 0x0
// 0045c546: PUSH 0x13
// 0045c548: LEA ECX,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0045c54b: PUSH ECX
// 0045c54c: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045c551: ADD ESP,0x14
// 0045c554: MOV dword ptr [EBP + -0x4],0xffffffff
//   XREF to: Stack[-0x14] (WRITE)
// 0045c55b: LEA EDI,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0045c55e: SUB ECX,ECX
// 0045c560: DEC ECX
// 0045c561: XOR EAX,EAX
// 0045c563: SCASB.REPNE ES:EDI
// 0045c565: NOT ECX
// 0045c567: DEC ECX
// 0045c568: TEST ECX,ECX
// 0045c56a: JZ 0x0045c57b
//   XREF to: 0045c57b (CONDITIONAL_JUMP)
// 0045c56c: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0045c56f: PUSH EAX
// 0045c570: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 0045c575: ADD ESP,0x4
// 0045c578: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045c57b: CMP dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045c57b
//   XREF to: Stack[-0x14] (READ)
// 0045c57f: JL 0x0045c58c
//   XREF to: 0045c58c (CONDITIONAL_JUMP)
// 0045c581: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045c584: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045c58a: JL 0x0045c58e
//   XREF to: 0045c58e (CONDITIONAL_JUMP)
// 0045c58c: JMP 0x0045c5a0
//   Label: LAB_0045c58c
//   XREF to: 0045c5a0 (UNCONDITIONAL_JUMP)
// 0045c58e: MOV dword ptr [0x01e528b0],0x1
//   Label: LAB_0045c58e
//   XREF to: 01e528b0 (WRITE)
// 0045c598: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045c59b: MOV [0x01e528b4],EAX
//   XREF to: 01e528b4 (WRITE)
// 0045c5a0: MOV ESP,EBP
//   Label: LAB_0045c5a0
// 0045c5a2: POP EBP
// 0045c5a3: POP EDI
// 0045c5a4: POP ESI
// 0045c5a5: POP EBX
// 0045c5a6: RET
