// Name: shape_design.c_deleteSinglePolygon_FUN_0045dcc0
// Address: 0045dcc0
// Address Range: [[0045dcc0, 0045dd6c]]
// Convention: unknown
// Signature: undefined shape_design.c_deleteSinglePolygon_FUN_0045dcc0()
// Globals:
//   TerminatedCString s_Polygon_to_delete_0061b448
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_getInputWithPrompt_FUN_004032c0

#include "nocturne.h"

void shape_design_c_deleteSinglePolygon_FUN_0045dcc0(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SShapeEditorPolygon *pSVar3;
  char *pcVar4;
  SShapeEditorPolygon *pSVar5;
  byte bVar6;
  int local_1c;
  
  bVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff94,0x14,0,0,"Polygon # to delete : ");
  iVar2 = -1;
  pcVar4 = &stack0xffffff94;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (((iVar2 != -2) && (local_1c = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff94), -1 < local_1c)
      ) && (local_1c < g_PolygonCount)) {
    for (; local_1c < g_PolygonCount + -1; local_1c = local_1c + 1) {
      pSVar3 = g_ModelPolygonData + local_1c + 1;
      pSVar5 = g_ModelPolygonData + local_1c;
      for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
        pSVar5->polygon_type = pSVar3->polygon_type;
        pSVar3 = (SShapeEditorPolygon *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
        pSVar5 = (SShapeEditorPolygon *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
    }
    g_PolygonCount = g_PolygonCount + -1;
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 0045dcc0: PUSH EBX
//   Label: shape_design.c_deleteSinglePolygon_FUN_0045dcc0
// 0045dcc1: PUSH ESI
// 0045dcc2: PUSH EDI
// 0045dcc3: PUSH EBP
// 0045dcc4: MOV EBP,ESP
// 0045dcc6: SUB ESP,0x5c
// 0045dccc: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045dcd1: MOV ECX,0x61b448
//   XREF to: 0061b448 (DATA)
// 0045dcd6: PUSH ECX
//   XREF to: 0061b448 (DATA)
// 0045dcd7: PUSH 0x0
// 0045dcd9: PUSH 0x0
// 0045dcdb: PUSH 0x14
// 0045dcdd: LEA ECX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045dce0: PUSH ECX
// 0045dce1: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045dce6: ADD ESP,0x14
// 0045dce9: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045dcec: SUB ECX,ECX
// 0045dcee: DEC ECX
// 0045dcef: XOR EAX,EAX
// 0045dcf1: SCASB.REPNE ES:EDI
// 0045dcf3: NOT ECX
// 0045dcf5: DEC ECX
// 0045dcf6: TEST ECX,ECX
// 0045dcf8: JBE 0x0045dd61
//   XREF to: 0045dd61 (CONDITIONAL_JUMP)
// 0045dcfa: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045dcfd: PUSH EAX
// 0045dcfe: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 0045dd03: ADD ESP,0x4
// 0045dd06: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045dd09: CMP dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (READ)
// 0045dd0d: JL 0x0045dd1a
//   XREF to: 0045dd1a (CONDITIONAL_JUMP)
// 0045dd0f: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045dd12: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045dd18: JL 0x0045dd1c
//   XREF to: 0045dd1c (CONDITIONAL_JUMP)
// 0045dd1a: JMP 0x0045dd61
//   Label: LAB_0045dd1a
//   XREF to: 0045dd61 (UNCONDITIONAL_JUMP)
// 0045dd1c: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045dd1c
//   XREF to: Stack[-0x14] (READ)
// 0045dd1f: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045dd22: JMP 0x0045dd2a
//   XREF to: 0045dd2a (UNCONDITIONAL_JUMP)
// 0045dd24: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045dd24
//   XREF to: Stack[-0x1c] (READ)
// 0045dd27: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045dd2a: MOV EAX,[0x016e990c]
//   Label: LAB_0045dd2a
//   XREF to: 016e990c (READ)
// 0045dd2f: DEC EAX
// 0045dd30: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045dd33: JLE 0x0045dd5b
//   XREF to: 0045dd5b (CONDITIONAL_JUMP)
// 0045dd35: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045dd38: INC EAX
// 0045dd39: IMUL EAX,EAX,0x184
// 0045dd3f: IMUL ESI,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 0045dd46: MOV ECX,0x61
// 0045dd4b: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045dd51: LEA ESI,[EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045dd57: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0045dd59: JMP 0x0045dd24
//   XREF to: 0045dd24 (UNCONDITIONAL_JUMP)
// 0045dd5b: DEC dword ptr [0x016e990c]
//   Label: LAB_0045dd5b
//   XREF to: 016e990c (READ_WRITE)
// 0045dd61: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0045dd61
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045dd66: MOV ESP,EBP
// 0045dd68: POP EBP
// 0045dd69: POP EDI
// 0045dd6a: POP ESI
// 0045dd6b: POP EBX
// 0045dd6c: RET
