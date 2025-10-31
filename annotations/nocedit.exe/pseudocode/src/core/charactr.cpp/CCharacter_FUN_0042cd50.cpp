// Name: core_charactr.cpp_CCharacter_FUN_0042cd50
// Address: 0042cd50
// Address Range: [[0042cd50, 0042cd5e]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042cd50(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042cd50(CCharacter *this_ptr)

{
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(this_ptr->field11_0x25a0 + 0x14) = in_stack_00000008;
  return;
}


// Assembly code:
// 0042cd50: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042cd50
//   XREF to: Stack[0x4] (READ)
// 0042cd54: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0042cd58: MOV dword ptr [EDX + 0x25b4],EAX
// 0042cd5e: RET
