// Name: shape_design.c_configureFullPassPolygonReduction_FUN_00465810
// Address: 00465810
// Address Range: [[00465810, 004658db]]
// Convention: __cdecl
// Signature: void shape_design.c_configureFullPassPolygonReduction_FUN_00465810(int ui_mode)
// Cross-references:
//   shape_design.c_polygonReducer_FUN_004654e0 (004654e0) at 0046553f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_tolerance_angle_8__0061c5b6
//   TerminatedCString s_Ignore_different_part_na_0061c5d5
//   int g_PolygonCount
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_optimizePolygonMesh_FUN_004658e0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_configureFullPassPolygonReduction_FUN_00465810(int ui_mode)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  double dVar5;
  char *in_stack_ffffff94;
  int local_18;
  float local_14;
  
  bVar4 = 0;
  local_18 = 0;
  if (ui_mode < 1) {
    in_stack_ffffff94 = (char *)((uint)in_stack_ffffff94 & 0xffffff00);
  }
  else {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff94,0x14,0,0,"Enter tolerance angle [8.5] : ");
  }
  local_14 = 8.5;
  iVar2 = -1;
  pcVar3 = &stack0xffffff94;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    dVar5 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff94);
    local_14 = (float)dVar5;
  }
  if (0 < ui_mode) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff94,0x14,0,0x16,"Ignore different part names? [y] : ");
    iVar2 = crt_ctype_c_toupper_FUN_005ff9e0((uint)in_stack_ffffff94 & 0xff);
    if (iVar2 == 0x4e) {
      local_18 = 1;
    }
  }
  shape_design_c_optimizePolygonMesh_FUN_004658e0(local_14,local_18,ui_mode);
  return;
}


// Assembly code:
// 00465810: PUSH EBX
//   Label: shape_design.c_configureFullPassPolygonReduction_FUN_00465810
// 00465811: PUSH ESI
// 00465812: PUSH EDI
// 00465813: PUSH EBP
// 00465814: MOV EBP,ESP
// 00465816: SUB ESP,0x64
// 0046581c: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 00465821: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00465824: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0046582b: CMP dword ptr [EBP + 0x14],0x0
//   XREF to: Stack[0x4] (READ)
// 0046582f: JLE 0x00465850
//   XREF to: 00465850 (CONDITIONAL_JUMP)
// 00465831: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00465836: MOV EAX,0x61c5b6
//   XREF to: 0061c5b6 (DATA)
// 0046583b: PUSH EAX
//   XREF to: 0061c5b6 (DATA)
// 0046583c: PUSH 0x0
// 0046583e: PUSH 0x0
// 00465840: PUSH 0x14
// 00465842: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 00465845: PUSH EAX
// 00465846: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0046584b: ADD ESP,0x14
// 0046584e: JMP 0x00465854
//   XREF to: 00465854 (UNCONDITIONAL_JUMP)
// 00465850: MOV byte ptr [EBP + -0x5c],0x0
//   Label: LAB_00465850
//   XREF to: Stack[-0x6c] (WRITE)
// 00465854: MOV dword ptr [EBP + -0x4],0x41080000
//   Label: LAB_00465854
//   XREF to: Stack[-0x14] (WRITE)
// 0046585b: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0046585e: SUB ECX,ECX
// 00465860: DEC ECX
// 00465861: XOR EAX,EAX
// 00465863: SCASB.REPNE ES:EDI
// 00465865: NOT ECX
// 00465867: DEC ECX
// 00465868: TEST ECX,ECX
// 0046586a: JZ 0x00465884
//   XREF to: 00465884 (CONDITIONAL_JUMP)
// 0046586c: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0046586f: PUSH EAX
// 00465870: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 00465875: MOV dword ptr [EBP + -0x64],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00465878: MOV dword ptr [EBP + -0x60],EDX
//   XREF to: Stack[-0x70] (WRITE)
// 0046587b: FLD double ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 0046587e: ADD ESP,0x4
// 00465881: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00465884: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_00465884
//   XREF to: Stack[0x4] (READ)
// 00465888: JLE 0x004658bc
//   XREF to: 004658bc (CONDITIONAL_JUMP)
// 0046588a: MOV EAX,0x61c5d5
//   XREF to: 0061c5d5 (DATA)
// 0046588f: PUSH EAX
//   XREF to: 0061c5d5 (DATA)
// 00465890: PUSH 0x16
// 00465892: PUSH 0x0
// 00465894: PUSH 0x14
// 00465896: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 00465899: PUSH EAX
// 0046589a: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0046589f: ADD ESP,0x14
// 004658a2: XOR EAX,EAX
// 004658a4: MOV AL,byte ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 004658a7: PUSH EAX
// 004658a8: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004658ad: ADD ESP,0x4
// 004658b0: CMP EAX,0x4e
// 004658b3: JNZ 0x004658bc
//   XREF to: 004658bc (CONDITIONAL_JUMP)
// 004658b5: MOV dword ptr [EBP + -0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 004658bc: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004658bc
//   XREF to: Stack[0x4] (READ)
// 004658bf: PUSH EAX
// 004658c0: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004658c3: PUSH EAX
// 004658c4: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004658c7: SUB ESP,0x4
// 004658ca: FSTP float ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 004658cd: CALL shape_design.c_optimizePolygonMesh_FUN_004658e0
//   XREF to: 004658e0 (UNCONDITIONAL_CALL)
// 004658d2: ADD ESP,0xc
// 004658d5: MOV ESP,EBP
// 004658d7: POP EBP
// 004658d8: POP EDI
// 004658d9: POP ESI
// 004658da: POP EBX
// 004658db: RET
