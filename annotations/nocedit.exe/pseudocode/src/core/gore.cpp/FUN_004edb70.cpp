// Name: core_gore.cpp_FUN_004edb70
// Address: 004edb70
// Address Range: [[004edb70, 004edba3]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004edb70()
// Cross-references:
//   core_gore.cpp_FUN_004ec290 (004ec290) at 004ec2d3 [UNCONDITIONAL_CALL]
// Function calls:
//   core_gore.cpp_FUN_004ec390
//   core_gore.cpp_FUN_004edaf0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004edb70(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_gore_cpp_FUN_004edb70(void)

{
  int in_stack_00000010;
  
  if (in_stack_00000010 == 2) {
    return;
  }
  core_gore_cpp_FUN_004edaf0();
  core_gore_cpp_FUN_004ec390();
  return;
}


// Assembly code:
// 004edb70: CMP dword ptr [ESP + 0x10],0x2
//   Label: core_gore.cpp_FUN_004edb70
//   XREF to: Stack[0x10] (READ)
// 004edb75: JNZ 0x004edb78
//   XREF to: 004edb78 (CONDITIONAL_JUMP)
// 004edb77: RET
// 004edb78: PUSH EDI
//   Label: LAB_004edb78
// 004edb79: PUSH ESI
// 004edb7a: PUSH EBX
// 004edb7b: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004edb7f: PUSH ECX
// 004edb80: CALL core_gore.cpp_FUN_004edaf0
//   XREF to: 004edaf0 (UNCONDITIONAL_CALL)
// 004edb85: ADD ESP,0x4
// 004edb88: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004edb8c: PUSH EBX
// 004edb8d: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004edb91: PUSH ESI
// 004edb92: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004edb96: PUSH EDI
// 004edb97: PUSH EAX
// 004edb98: CALL core_gore.cpp_FUN_004ec390
//   XREF to: 004ec390 (UNCONDITIONAL_CALL)
// 004edb9d: ADD ESP,0x10
// 004edba0: POP EBX
// 004edba1: POP ESI
// 004edba2: POP EDI
// 004edba3: RET
