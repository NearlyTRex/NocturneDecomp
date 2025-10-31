// Name: shape_design.c_deletePolygonRange_FUN_0045dd70
// Address: 0045dd70
// Address Range: [[0045dd70, 0045de7d]]
// Convention: unknown
// Signature: undefined shape_design.c_deletePolygonRange_FUN_0045dd70()
// Globals:
//   TerminatedCString s_Polygon_range_s_to_delet_0061b45f
//   TerminatedCString s_d_d_0061b483
//   TerminatedCString s_Bad_range_Hit_a_key_0061b489
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
// Function calls:
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void shape_design_c_deletePolygonRange_FUN_0045dd70(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SShapeEditorPolygon *pSVar3;
  char *pcVar4;
  SShapeEditorPolygon *pSVar5;
  byte bVar6;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff90,0x32,0,0,"Polygon range #s to delete (a,b) : ");
  iVar2 = -1;
  pcVar4 = &stack0xffffff90;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if ((iVar2 != -2) &&
     (iVar2 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffff90,"%d,%d"), iVar2 == 2)) {
    if ((local_18 < local_1c) || ((local_1c < 0 || (g_PolygonCount <= local_18)))) {
      engine_2d_c_drawText_FUN_00401fd0("Bad range.  Hit a key...",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      for (local_14 = 0; local_14 < (local_18 - local_1c) + 1; local_14 = local_14 + 1) {
        for (local_20 = local_1c; local_20 < g_PolygonCount + -1; local_20 = local_20 + 1) {
          pSVar3 = g_ModelPolygonData + local_20 + 1;
          pSVar5 = g_ModelPolygonData + local_20;
          for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
            pSVar5->polygon_type = pSVar3->polygon_type;
            pSVar3 = (SShapeEditorPolygon *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
            pSVar5 = (SShapeEditorPolygon *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
          }
        }
        g_PolygonCount = g_PolygonCount + -1;
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
  }
  return;
}


// Assembly code:
// 0045dd70: PUSH EBX
//   Label: shape_design.c_deletePolygonRange_FUN_0045dd70
// 0045dd71: PUSH ESI
// 0045dd72: PUSH EDI
// 0045dd73: PUSH EBP
// 0045dd74: MOV EBP,ESP
// 0045dd76: SUB ESP,0x60
// 0045dd7c: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045dd81: MOV ECX,0x61b45f
//   XREF to: 0061b45f (DATA)
// 0045dd86: PUSH ECX
//   XREF to: 0061b45f (DATA)
// 0045dd87: PUSH 0x0
// 0045dd89: PUSH 0x0
// 0045dd8b: PUSH 0x32
// 0045dd8d: LEA ECX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0045dd90: PUSH ECX
// 0045dd91: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045dd96: ADD ESP,0x14
// 0045dd99: LEA EDI,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0045dd9c: SUB ECX,ECX
// 0045dd9e: DEC ECX
// 0045dd9f: XOR EAX,EAX
// 0045dda1: SCASB.REPNE ES:EDI
// 0045dda3: NOT ECX
// 0045dda5: DEC ECX
// 0045dda6: TEST ECX,ECX
// 0045dda8: JNZ 0x0045ddaf
//   XREF to: 0045ddaf (CONDITIONAL_JUMP)
// 0045ddaa: JMP 0x0045de77
//   XREF to: 0045de77 (UNCONDITIONAL_JUMP)
// 0045ddaf: LEA EAX,[EBP + -0x8]
//   Label: LAB_0045ddaf
//   XREF to: Stack[-0x18] (DATA)
// 0045ddb2: PUSH EAX
// 0045ddb3: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0045ddb6: PUSH EAX
// 0045ddb7: MOV EAX,0x61b483
//   XREF to: 0061b483 (DATA)
// 0045ddbc: PUSH EAX
//   XREF to: 0061b483 (DATA)
// 0045ddbd: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0045ddc0: PUSH EAX
// 0045ddc1: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0045ddc6: ADD ESP,0x10
// 0045ddc9: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045ddcc: CMP dword ptr [EBP + -0x4],0x2
//   XREF to: Stack[-0x14] (READ)
// 0045ddd0: JZ 0x0045ddd7
//   XREF to: 0045ddd7 (CONDITIONAL_JUMP)
// 0045ddd2: JMP 0x0045de77
//   XREF to: 0045de77 (UNCONDITIONAL_JUMP)
// 0045ddd7: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045ddd7
//   XREF to: Stack[-0x1c] (READ)
// 0045ddda: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045dddd: JG 0x0045dde5
//   XREF to: 0045dde5 (CONDITIONAL_JUMP)
// 0045dddf: CMP dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (READ)
// 0045dde3: JGE 0x0045dde7
//   XREF to: 0045dde7 (CONDITIONAL_JUMP)
// 0045dde5: JMP 0x0045ddf2
//   Label: LAB_0045dde5
//   XREF to: 0045ddf2 (UNCONDITIONAL_JUMP)
// 0045dde7: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045dde7
//   XREF to: Stack[-0x18] (READ)
// 0045ddea: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045ddf0: JL 0x0045de10
//   XREF to: 0045de10 (CONDITIONAL_JUMP)
// 0045ddf2: PUSH 0x16
//   Label: LAB_0045ddf2
// 0045ddf4: PUSH 0x0
// 0045ddf6: MOV EAX,0x61b489
//   XREF to: 0061b489 (DATA)
// 0045ddfb: PUSH EAX
//   XREF to: 0061b489 (DATA)
// 0045ddfc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045de01: ADD ESP,0xc
// 0045de04: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045de09: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045de0e: JMP 0x0045de77
//   XREF to: 0045de77 (UNCONDITIONAL_JUMP)
// 0045de10: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045de10
//   XREF to: Stack[-0x14] (WRITE)
// 0045de17: JMP 0x0045de1f
//   XREF to: 0045de1f (UNCONDITIONAL_JUMP)
// 0045de19: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045de19
//   XREF to: Stack[-0x14] (READ)
// 0045de1c: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045de1f: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045de1f
//   XREF to: Stack[-0x18] (READ)
// 0045de22: SUB EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045de25: INC EAX
// 0045de26: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045de29: JLE 0x0045de72
//   XREF to: 0045de72 (CONDITIONAL_JUMP)
// 0045de2b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045de2e: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045de31: JMP 0x0045de39
//   XREF to: 0045de39 (UNCONDITIONAL_JUMP)
// 0045de33: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0045de33
//   XREF to: Stack[-0x20] (READ)
// 0045de36: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0045de39: MOV EAX,[0x016e990c]
//   Label: LAB_0045de39
//   XREF to: 016e990c (READ)
// 0045de3e: DEC EAX
// 0045de3f: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045de42: JLE 0x0045de6a
//   XREF to: 0045de6a (CONDITIONAL_JUMP)
// 0045de44: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045de47: INC EAX
// 0045de48: IMUL EAX,EAX,0x184
// 0045de4e: IMUL ESI,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 0045de55: MOV ECX,0x61
// 0045de5a: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045de60: LEA ESI,[EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0045de66: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0045de68: JMP 0x0045de33
//   XREF to: 0045de33 (UNCONDITIONAL_JUMP)
// 0045de6a: DEC dword ptr [0x016e990c]
//   Label: LAB_0045de6a
//   XREF to: 016e990c (READ_WRITE)
// 0045de70: JMP 0x0045de19
//   XREF to: 0045de19 (UNCONDITIONAL_JUMP)
// 0045de72: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0045de72
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045de77: MOV ESP,EBP
//   Label: LAB_0045de77
// 0045de79: POP EBP
// 0045de7a: POP EDI
// 0045de7b: POP ESI
// 0045de7c: POP EBX
// 0045de7d: RET
