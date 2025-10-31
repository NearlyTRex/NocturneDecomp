// Name: core_platfrm.cpp_FUN_0054f2a0
// Address: 0054f2a0
// Address Range: [[0054f2a0, 0054f2df]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054f2a0()
// Cross-references:
//   core_conveyor.cpp_FUN_004422f0 (004422f0) at 004422fa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_data_s_00640155
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054f2a0(undefined4 param_1, undefined4
   param_2) */

void core_platfrm_cpp_FUN_0054f2a0(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  FILE *in_stack_0000000c;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),in_stack_00000008);
  if (*(char *)(in_stack_00000004 + 0x2f0) == '\0') {
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"data\\%s\n",in_stack_00000004 + 0x2f0);
  return;
}


// Assembly code:
// 0054f2a0: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054f2a0
// 0054f2a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054f2a5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0054f2a9: PUSH EDX
// 0054f2aa: LEA EAX,[EBX + 0x158]
// 0054f2b0: PUSH EAX
// 0054f2b1: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 0054f2b6: MOV AH,byte ptr [EBX + 0x2f0]
// 0054f2bc: ADD ESP,0x8
// 0054f2bf: TEST AH,AH
// 0054f2c1: JNZ 0x0054f2c5
//   XREF to: 0054f2c5 (CONDITIONAL_JUMP)
// 0054f2c3: POP EBX
// 0054f2c4: RET
// 0054f2c5: LEA EAX,[EBX + 0x2f0]
//   Label: LAB_0054f2c5
// 0054f2cb: PUSH EAX
// 0054f2cc: PUSH 0x640155
//   XREF to: 00640155 (DATA)
// 0054f2d1: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0054f2d5: PUSH ECX
// 0054f2d6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0054f2db: ADD ESP,0xc
// 0054f2de: POP EBX
// 0054f2df: RET
