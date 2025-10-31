// Name: core_svetlana.cpp_CSvetlana_FUN_005d9ef0
// Address: 005d9ef0
// Address Range: [[005d9ef0, 005d9f02]]
// Convention: __cdecl
// Signature: void core_svetlana.cpp_CSvetlana_FUN_005d9ef0(CSvetlana * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9ef0(CSvetlana *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_0042f8a0((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 005d9ef0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_svetlana.cpp_CSvetlana_FUN_005d9ef0
//   XREF to: Stack[0x8] (READ)
// 005d9ef4: PUSH EDX
// 005d9ef5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d9ef9: PUSH ECX
// 005d9efa: CALL core_charactr.cpp_CCharacter_FUN_0042f8a0
//   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
// 005d9eff: ADD ESP,0x8
// 005d9f02: RET
