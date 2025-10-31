// Name: core_charactr.cpp_CCharacter_FUN_0042ca20
// Address: 0042ca20
// Address Range: [[0042ca20, 0042ca2e]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042ca20(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ca20(CCharacter *this_ptr)

{
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(this_ptr->field11_0x25a0 + 0xc) = in_stack_00000008;
  return;
}


// Assembly code:
// 0042ca20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042ca20
//   XREF to: Stack[0x4] (READ)
// 0042ca24: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0042ca28: MOV dword ptr [EDX + 0x25ac],EAX
// 0042ca2e: RET
