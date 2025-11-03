// Name: core_morph.cpp_FUN_0052b580
// Address: 0052b580
// Address Range: [[0052b580, 0052b5b0]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b580()
// Cross-references:
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6e0d [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e57c2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CMorphModel_FUN_0052a8d0

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_FUN_0052b580(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_morph_cpp_FUN_0052b580(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  core_morph_cpp_CMorphModel_FUN_0052a8d0
            ((CMorphModel *)(in_stack_00000008 * 0x608 + in_stack_00000004));
  return;
}


// Assembly code:
// 0052b580: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b580
// 0052b581: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0052b585: PUSH EDX
// 0052b586: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052b58a: LEA EAX,[EDX*0x4 + 0x0]
// 0052b591: SUB EAX,EDX
// 0052b593: SHL EAX,0x6
// 0052b596: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052b59a: ADD EAX,EDX
// 0052b59c: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052b5a0: SHL EAX,0x3
// 0052b5a3: PUSH ECX
// 0052b5a4: ADD EAX,EBX
// 0052b5a6: PUSH EAX
// 0052b5a7: CALL core_morph.cpp_CMorphModel_FUN_0052a8d0
//   XREF to: 0052a8d0 (UNCONDITIONAL_CALL)
// 0052b5ac: ADD ESP,0xc
// 0052b5af: POP EBX
// 0052b5b0: RET
