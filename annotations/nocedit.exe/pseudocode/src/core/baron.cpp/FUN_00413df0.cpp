// Name: core_baron.cpp_FUN_00413df0
// Address: 00413df0
// Address Range: [[00413df0, 00413e1c]]
// Convention: __cdecl
// Signature: int core_baron.cpp_FUN_00413df0(CBaronWeapon * this_ptr)
// Function calls:
//   core_baron.cpp_FUN_00413f20

#include "nocturne.h"

int __cdecl core_baron_cpp_FUN_00413df0(CBaronWeapon *this_ptr)

{
  core_baron_cpp_FUN_00413f20();
  if (this_ptr->field1_0x578 == 0) {
    return 0;
  }
  *(undefined4 *)(this_ptr->field1_0x578 + 0xbe38) = 1;
  return 1;
}


// Assembly code:
// 00413df0: PUSH EBX
//   Label: core_baron.cpp_FUN_00413df0
// 00413df1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00413df5: PUSH EBX
// 00413df6: CALL core_baron.cpp_FUN_00413f20
//   XREF to: 00413f20 (UNCONDITIONAL_CALL)
// 00413dfb: MOV EDX,dword ptr [EBX + 0x578]
// 00413e01: ADD ESP,0x4
// 00413e04: TEST EDX,EDX
// 00413e06: JNZ 0x00413e0c
//   XREF to: 00413e0c (CONDITIONAL_JUMP)
// 00413e08: XOR EAX,EAX
// 00413e0a: POP EBX
// 00413e0b: RET
// 00413e0c: MOV EAX,0x1
//   Label: LAB_00413e0c
// 00413e11: MOV dword ptr [EDX + 0xbe38],0x1
// 00413e1b: POP EBX
// 00413e1c: RET
