// Name: core_script.cpp_CScript_removeEventXRef_FUN_005676e0
// Address: 005676e0
// Address Range: [[005676e0, 0056776b]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_removeEventXRef_FUN_005676e0()
// Cross-references:
//   core_script.cpp_FUN_00562920 (00562920) at 005633cc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_0064408b
//   TerminatedCString s_CDemonMission_removeEven_0064409e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_removeEventXRef(CScript* param_1, undefined4
   param_2) */

void core_script_cpp_CScript_removeEventXRef_FUN_005676e0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x28) <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1d77;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::removeEventXRef - invalid index");
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x28) + -1;
  *(int *)(in_stack_00000004 + 0x28) = iVar1;
  crt_string_c_memmove_FUN_005fe5e0
            ((void *)(in_stack_00000008 * 0x114 + *(int *)(in_stack_00000004 + 0x2c)),
             (void *)((in_stack_00000008 + 1) * 0x114 + *(int *)(in_stack_00000004 + 0x2c)),
             (iVar1 - in_stack_00000008) * 0x114);
  return;
}


// Assembly code:
// 005676e0: PUSH EBX
//   Label: core_script.cpp_CScript_removeEventXRef_FUN_005676e0
// 005676e1: PUSH ESI
// 005676e2: PUSH EBP
// 005676e3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005676e7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005676eb: TEST EBX,EBX
// 005676ed: JL 0x00567745
//   XREF to: 00567745 (CONDITIONAL_JUMP)
// 005676ef: CMP EBX,dword ptr [ESI + 0x28]
// 005676f2: JGE 0x00567745
//   XREF to: 00567745 (CONDITIONAL_JUMP)
// 005676f4: MOV EBP,dword ptr [ESI + 0x28]
//   Label: LAB_005676f4
// 005676f7: DEC EBP
// 005676f8: MOV EDX,EBP
// 005676fa: SUB EDX,EBX
// 005676fc: MOV EAX,EDX
// 005676fe: SHL EAX,0x4
// 00567701: ADD EAX,EDX
// 00567703: SHL EAX,0x2
// 00567706: ADD EAX,EDX
// 00567708: SHL EAX,0x2
// 0056770b: LEA EDX,[EBX + 0x1]
// 0056770e: PUSH EAX
// 0056770f: MOV EAX,EDX
// 00567711: SHL EAX,0x4
// 00567714: ADD EAX,EDX
// 00567716: SHL EAX,0x2
// 00567719: ADD EAX,EDX
// 0056771b: SHL EAX,0x2
// 0056771e: MOV EDX,dword ptr [ESI + 0x2c]
// 00567721: ADD EAX,EDX
// 00567723: PUSH EAX
// 00567724: MOV EAX,EBX
// 00567726: SHL EAX,0x4
// 00567729: ADD EAX,EBX
// 0056772b: SHL EAX,0x2
// 0056772e: ADD EAX,EBX
// 00567730: SHL EAX,0x2
// 00567733: ADD EAX,EDX
// 00567735: PUSH EAX
// 00567736: MOV dword ptr [ESI + 0x28],EBP
// 00567739: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0056773e: ADD ESP,0xc
// 00567741: POP EBP
// 00567742: POP ESI
// 00567743: POP EBX
// 00567744: RET
// 00567745: PUSH EDI
//   Label: LAB_00567745
// 00567746: MOV ECX,0x64408b
//   XREF to: 0064408b (PARAM)
// 0056774b: MOV EDI,0x1d77
// 00567750: PUSH 0x64409e
//   XREF to: 0064409e (DATA)
// 00567755: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0056775b: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00567761: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00567766: ADD ESP,0x4
// 00567769: POP EDI
// 0056776a: JMP 0x005676f4
//   XREF to: 005676f4 (UNCONDITIONAL_JUMP)
