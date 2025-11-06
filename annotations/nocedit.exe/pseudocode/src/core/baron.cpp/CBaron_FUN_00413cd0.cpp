// Name: core_baron.cpp_CBaron_FUN_00413cd0
// Address: 00413cd0
// Address Range: [[00413cd0, 00413cef]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_FUN_00413cd0(CBaron * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042c3c0

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_00413cd0(CBaron *this_ptr)

{
  int in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000008 + 4) = 0;
  core_charactr_cpp_CCharacter_FUN_0042c3c0((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 00413cd0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_baron.cpp_CBaron_FUN_00413cd0
//   XREF to: Stack[0x8] (READ)
// 00413cd4: PUSH EAX
// 00413cd5: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00413cd9: PUSH EDX
// 00413cda: MOV dword ptr [EAX + 0x4],0x0
// 00413ce1: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 00413ce6: ADD ESP,0x8
// 00413ce9: LEA EAX,[EAX]
// 00413cef: NOP
