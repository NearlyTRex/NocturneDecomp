// Name: core_gore.cpp_FUN_004edb40
// Address: 004edb40
// Address Range: [[004edb40, 004edb6c]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004edb40()
// Cross-references:
//   core_gore.cpp_FUN_004ec290 (004ec290) at 004ec2b4 [UNCONDITIONAL_CALL]
// Function calls:
//   core_gore.cpp_FUN_004ec2f0
//   core_gore.cpp_FUN_004edaf0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004edb40(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_gore_cpp_FUN_004edb40(void)

{
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 2) {
    return;
  }
  core_gore_cpp_FUN_004edaf0();
  core_gore_cpp_FUN_004ec2f0();
  return;
}


// Assembly code:
// 004edb40: CMP dword ptr [ESP + 0xc],0x2
//   Label: core_gore.cpp_FUN_004edb40
//   XREF to: Stack[0xc] (READ)
// 004edb45: JNZ 0x004edb48
//   XREF to: 004edb48 (CONDITIONAL_JUMP)
// 004edb47: RET
// 004edb48: PUSH ESI
//   Label: LAB_004edb48
// 004edb49: PUSH EBX
// 004edb4a: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004edb4e: PUSH ECX
// 004edb4f: CALL core_gore.cpp_FUN_004edaf0
//   XREF to: 004edaf0 (UNCONDITIONAL_CALL)
// 004edb54: ADD ESP,0x4
// 004edb57: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004edb5b: PUSH EBX
// 004edb5c: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004edb60: PUSH ESI
// 004edb61: PUSH EAX
// 004edb62: CALL core_gore.cpp_FUN_004ec2f0
//   XREF to: 004ec2f0 (UNCONDITIONAL_CALL)
// 004edb67: ADD ESP,0xc
// 004edb6a: POP EBX
// 004edb6b: POP ESI
// 004edb6c: RET
