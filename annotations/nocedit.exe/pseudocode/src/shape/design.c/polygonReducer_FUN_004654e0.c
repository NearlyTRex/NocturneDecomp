// Name: shape_design.c_polygonReducer_FUN_004654e0
// Address: 004654e0
// Address Range: [[004654e0, 0046555f]]
// Convention: __cdecl
// Signature: void shape_design.c_polygonReducer_FUN_004654e0(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f6dc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_1_for_full_pass_or_0061c4d9
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_configureFullPassPolygonReduction_FUN_00465810
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_polygonReducer_FUN_004654e0(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  int local_14;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                    (&stack0xffffff9c,0x14,0,0,"Enter 1 for full pass or 2 for single pass [1] : ");
  if (iVar2 != 0x1b) {
    local_14 = 1;
    iVar2 = -1;
    pcVar3 = &stack0xffffff9c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      local_14 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff9c);
    }
    if (local_14 == 1) {
      shape_design_c_configureFullPassPolygonReduction_FUN_00465810(1);
    }
    else if (local_14 == 2) {
      shape_design_c_configureSinglePassPolygonReduction_FUN_00465560(1);
    }
  }
  return;
}


// Assembly code:
// 004654e0: PUSH EBX
//   Label: shape_design.c_polygonReducer_FUN_004654e0
// 004654e1: PUSH ESI
// 004654e2: PUSH EDI
// 004654e3: PUSH EBP
// 004654e4: MOV EBP,ESP
// 004654e6: SUB ESP,0x54
// 004654ec: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004654f1: MOV EAX,0x61c4d9
//   XREF to: 0061c4d9 (DATA)
// 004654f6: PUSH EAX
//   XREF to: 0061c4d9 (DATA)
// 004654f7: PUSH 0x0
// 004654f9: PUSH 0x0
// 004654fb: PUSH 0x14
// 004654fd: LEA EAX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 00465500: PUSH EAX
// 00465501: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00465506: ADD ESP,0x14
// 00465509: CMP EAX,0x1b
// 0046550c: JNZ 0x00465510
//   XREF to: 00465510 (CONDITIONAL_JUMP)
// 0046550e: JMP 0x00465559
//   XREF to: 00465559 (UNCONDITIONAL_JUMP)
// 00465510: MOV dword ptr [EBP + -0x4],0x1
//   Label: LAB_00465510
//   XREF to: Stack[-0x14] (WRITE)
// 00465517: LEA EDI,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0046551a: SUB ECX,ECX
// 0046551c: DEC ECX
// 0046551d: XOR EAX,EAX
// 0046551f: SCASB.REPNE ES:EDI
// 00465521: NOT ECX
// 00465523: DEC ECX
// 00465524: TEST ECX,ECX
// 00465526: JZ 0x00465537
//   XREF to: 00465537 (CONDITIONAL_JUMP)
// 00465528: LEA EAX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0046552b: PUSH EAX
// 0046552c: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00465531: ADD ESP,0x4
// 00465534: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00465537: CMP dword ptr [EBP + -0x4],0x1
//   Label: LAB_00465537
//   XREF to: Stack[-0x14] (READ)
// 0046553b: JNZ 0x00465549
//   XREF to: 00465549 (CONDITIONAL_JUMP)
// 0046553d: PUSH 0x1
// 0046553f: CALL shape_design.c_configureFullPassPolygonReduction_FUN_00465810
//   XREF to: 00465810 (UNCONDITIONAL_CALL)
// 00465544: ADD ESP,0x4
// 00465547: JMP 0x00465559
//   XREF to: 00465559 (UNCONDITIONAL_JUMP)
// 00465549: CMP dword ptr [EBP + -0x4],0x2
//   Label: LAB_00465549
//   XREF to: Stack[-0x14] (READ)
// 0046554d: JNZ 0x00465559
//   XREF to: 00465559 (CONDITIONAL_JUMP)
// 0046554f: PUSH 0x1
// 00465551: CALL shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
//   XREF to: 00465560 (UNCONDITIONAL_CALL)
// 00465556: ADD ESP,0x4
// 00465559: MOV ESP,EBP
//   Label: LAB_00465559
// 0046555b: POP EBP
// 0046555c: POP EDI
// 0046555d: POP ESI
// 0046555e: POP EBX
// 0046555f: RET
