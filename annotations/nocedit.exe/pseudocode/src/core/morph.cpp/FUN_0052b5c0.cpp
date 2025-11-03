// Name: core_morph.cpp_FUN_0052b5c0
// Address: 0052b5c0
// Address Range: [[0052b5c0, 0052b5f0]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b5c0()
// Function calls:
//   core_morph.cpp_CMorphModel_FUN_0052aa00

#include "nocturne.h"

void core_morph_cpp_FUN_0052b5c0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  core_morph_cpp_CMorphModel_FUN_0052aa00
            ((CMorphModel *)(in_stack_00000008 * 0x608 + in_stack_00000004));
  return;
}


// Assembly code:
// 0052b5c0: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b5c0
// 0052b5c1: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0052b5c5: PUSH EDX
// 0052b5c6: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052b5ca: LEA EAX,[EDX*0x4 + 0x0]
// 0052b5d1: SUB EAX,EDX
// 0052b5d3: SHL EAX,0x6
// 0052b5d6: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0052b5da: ADD EAX,EDX
// 0052b5dc: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052b5e0: SHL EAX,0x3
// 0052b5e3: PUSH ECX
// 0052b5e4: ADD EAX,EBX
// 0052b5e6: PUSH EAX
// 0052b5e7: CALL core_morph.cpp_CMorphModel_FUN_0052aa00
//   XREF to: 0052aa00 (UNCONDITIONAL_CALL)
// 0052b5ec: ADD ESP,0xc
// 0052b5ef: POP EBX
// 0052b5f0: RET
