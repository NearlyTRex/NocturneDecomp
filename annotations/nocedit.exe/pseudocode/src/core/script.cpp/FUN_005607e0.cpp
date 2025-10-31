// Name: core_script.cpp_FUN_005607e0
// Address: 005607e0
// Address Range: [[005607e0, 00560811]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005607e0()
// Cross-references:
//   core_script.cpp_CScript_WriteScriptFile_FUN_00560b50 (00560b50) at 00560cd2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_006433e6
//   TerminatedCString s_s_006433ec
//   TerminatedCString s_none_00680d58
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: void core_script.cpp_FUN_005607e0(FILE* param_1, int* param_2) */

void core_script_cpp_FUN_005607e0(void)

{
  FILE *in_stack_00000004;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 == 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000004,"\"%s\"\n","(none)");
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000004,"\"%s\"\n",*in_stack_00000008);
  return;
}


// Assembly code:
// 005607e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_script.cpp_FUN_005607e0
//   XREF to: Stack[0x4] (READ)
// 005607e4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005607e8: MOV EAX,dword ptr [EAX]
// 005607ea: TEST EAX,EAX
// 005607ec: JNZ 0x00560802
//   XREF to: 00560802 (CONDITIONAL_JUMP)
// 005607ee: PUSH 0x680d58
//   XREF to: 00680d58 (DATA)
// 005607f3: PUSH 0x6433e6
//   XREF to: 006433e6 (DATA)
// 005607f8: PUSH EDX
// 005607f9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005607fe: ADD ESP,0xc
// 00560801: RET
// 00560802: PUSH EAX
//   Label: LAB_00560802
// 00560803: PUSH 0x6433ec
//   XREF to: 006433ec (DATA)
// 00560808: PUSH EDX
// 00560809: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0056080e: ADD ESP,0xc
// 00560811: RET
