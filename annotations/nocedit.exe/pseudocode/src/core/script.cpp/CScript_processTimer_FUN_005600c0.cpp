// Name: core_script.cpp_CScript_processTimer_FUN_005600c0
// Address: 005600c0
// Address Range: [[005600c0, 0056013f]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_processTimer_FUN_005600c0()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c4dd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_006431b8
//   TerminatedCString s_CScript_processTimer_inv_006431cb
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_processTimer(CScript* param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 core_script_cpp_CScript_processTimer_FUN_005600c0(void)

{
  int in_stack_00000004;
  float in_stack_00000008;
  float *in_stack_0000000c;
  
  if (in_stack_00000008 < 0.0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xdf7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::processTimer - invalidTimeToWait");
  }
  if (*(float *)(in_stack_00000004 + 0x4c) < 0.0) {
    *(float **)(in_stack_00000004 + 0x4c) = in_stack_0000000c;
  }
  if (*(float *)(in_stack_00000004 + 0x4c) <= *in_stack_0000000c) {
    *in_stack_0000000c = *in_stack_0000000c - *(float *)(in_stack_00000004 + 0x4c);
    *(undefined4 *)(in_stack_00000004 + 0x4c) = 0;
    return 1;
  }
  *(float *)(in_stack_00000004 + 0x4c) = *(float *)(in_stack_00000004 + 0x4c) - *in_stack_0000000c;
  *in_stack_0000000c = 0.0;
  return 0;
}


// Assembly code:
// 005600c0: PUSH EBX
//   Label: core_script.cpp_CScript_processTimer_FUN_005600c0
// 005600c1: PUSH ESI
// 005600c2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005600c6: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005600ca: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005600ce: FLDZ
// 005600d0: FCOMPP
// 005600d2: FNSTSW AX
// 005600d4: SAHF
// 005600d5: JA 0x00560108
//   XREF to: 00560108 (CONDITIONAL_JUMP)
// 005600d7: FLDZ
//   Label: LAB_005600d7
// 005600d9: FCOMP float ptr [EBX + 0x4c]
// 005600dc: FNSTSW AX
// 005600de: SAHF
// 005600df: JBE 0x005600e8
//   XREF to: 005600e8 (CONDITIONAL_JUMP)
// 005600e1: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005600e5: MOV dword ptr [EBX + 0x4c],EAX
// 005600e8: FLD float ptr [EBX + 0x4c]
//   Label: LAB_005600e8
// 005600eb: FCOMP float ptr [ESI]
// 005600ed: FNSTSW AX
// 005600ef: SAHF
// 005600f0: JA 0x0056012d
//   XREF to: 0056012d (CONDITIONAL_JUMP)
// 005600f2: FLD float ptr [EBX + 0x4c]
// 005600f5: FSUBR float ptr [ESI]
// 005600f7: MOV EAX,0x1
// 005600fc: FSTP float ptr [ESI]
// 005600fe: MOV dword ptr [EBX + 0x4c],0x0
// 00560105: POP ESI
// 00560106: POP EBX
// 00560107: RET
// 00560108: MOV EDX,0x6431b8
//   Label: LAB_00560108
//   XREF to: 006431b8 (PARAM)
// 0056010d: MOV ECX,0xdf7
// 00560112: PUSH 0x6431cb
//   XREF to: 006431cb (DATA)
// 00560117: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0056011d: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00560123: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00560128: ADD ESP,0x4
// 0056012b: JMP 0x005600d7
//   XREF to: 005600d7 (UNCONDITIONAL_JUMP)
// 0056012d: FLD float ptr [ESI]
//   Label: LAB_0056012d
// 0056012f: FSUBR float ptr [EBX + 0x4c]
// 00560132: XOR EAX,EAX
// 00560134: FSTP float ptr [EBX + 0x4c]
// 00560137: MOV dword ptr [ESI],0x0
// 0056013d: POP ESI
// 0056013e: POP EBX
// 0056013f: RET
