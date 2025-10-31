// Name: core_actor.cpp_FUN_0040cf10
// Address: 0040cf10
// Address Range: [[0040cf10, 0040cf43]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040cf10()
// Cross-references:
//   core_actor.cpp_FUN_0040cf50 (0040cf50) at 0040cf5c [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040cf70 (0040cf70) at 0040cf7c [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_FUN_0040ce30

#include "nocturne.h"

undefined4 core_actor_cpp_FUN_0040cf10(undefined4 param_1)

{
  int in_stack_0000000c;
  
  if (0 < in_stack_0000000c) {
    do {
      in_stack_0000000c = in_stack_0000000c + -1;
      param_1 = core_actor_cpp_FUN_0040ce30();
    } while (0 < in_stack_0000000c);
  }
  return param_1;
}


// Assembly code:
// 0040cf10: PUSH EBX
//   Label: core_actor.cpp_FUN_0040cf10
// 0040cf11: PUSH ESI
// 0040cf12: PUSH EDI
// 0040cf13: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040cf17: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040cf1b: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040cf1f: TEST ESI,ESI
// 0040cf21: JLE 0x0040cf40
//   XREF to: 0040cf40 (CONDITIONAL_JUMP)
// 0040cf23: XOR EAX,EAX
//   Label: LAB_0040cf23
// 0040cf25: MOV AL,byte ptr [EBX]
// 0040cf27: PUSH EAX
// 0040cf28: PUSH EDI
// 0040cf29: INC EBX
// 0040cf2a: DEC ESI
// 0040cf2b: CALL core_actor.cpp_FUN_0040ce30
//   XREF to: 0040ce30 (UNCONDITIONAL_CALL)
// 0040cf30: ADD ESP,0x8
// 0040cf33: TEST ESI,ESI
// 0040cf35: JG 0x0040cf23
//   XREF to: 0040cf23 (CONDITIONAL_JUMP)
// 0040cf37: LEA EAX,[EAX]
// 0040cf3d: LEA EDX,[EDX]
// 0040cf40: POP EDI
//   Label: LAB_0040cf40
// 0040cf41: POP ESI
// 0040cf42: POP EBX
// 0040cf43: RET
