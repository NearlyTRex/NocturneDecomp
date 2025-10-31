// Name: core_event.cpp_FUN_004aa2a0
// Address: 004aa2a0
// Address Range: [[004aa2a0, 004aa2c9]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa2a0()
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ad7a2 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_02d0a460
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004aa2a0(undefined4 param_1, undefined1 param_2) */

undefined4 core_event_cpp_FUN_004aa2a0(void)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_00000004;
  va_list_t local_4;
  
  local_4 = &stack0x00000008;
  crt_stdio_c_vsprintf_FUN_005fdba8(&DAT_02d0a460,in_stack_00000004,&local_4);
  return 0;
}


// Assembly code:
// 004aa2a0: SUB ESP,0x4
//   Label: core_event.cpp_FUN_004aa2a0
// 004aa2a3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[0x8] (DATA)
// 004aa2a7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4] (DATA)
// 004aa2aa: MOV EAX,ESP
// 004aa2ac: PUSH EAX
// 004aa2ad: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004aa2b1: PUSH EDX
// 004aa2b2: PUSH 0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004aa2b7: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004aa2bc: ADD ESP,0xc
// 004aa2bf: XOR ECX,ECX
// 004aa2c1: XOR EAX,EAX
// 004aa2c3: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x4] (DATA)
// 004aa2c6: ADD ESP,0x4
// 004aa2c9: RET
//   Label: LAB_004aa2c9
