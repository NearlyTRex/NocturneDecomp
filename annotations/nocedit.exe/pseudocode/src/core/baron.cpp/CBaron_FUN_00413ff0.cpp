// Name: core_baron.cpp_CBaron_FUN_00413ff0
// Address: 00413ff0
// Address Range: [[00413ff0, 00414002]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_FUN_00413ff0(CBaron * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_00413ff0(CBaron *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_0042f8a0((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 00413ff0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_baron.cpp_CBaron_FUN_00413ff0
//   XREF to: Stack[0x8] (READ)
// 00413ff4: PUSH EDX
// 00413ff5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00413ff9: PUSH ECX
// 00413ffa: CALL core_charactr.cpp_CCharacter_FUN_0042f8a0
//   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
// 00413fff: ADD ESP,0x8
// 00414002: RET
