// Name: core_baron.cpp_CBaron_FUN_00414070
// Address: 00414070
// Address Range: [[00414070, 00414082]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_FUN_00414070(CBaron * this_ptr)
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3fa0

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_00414070(CBaron *this_ptr)

{
  core_hero_cpp_CHero_FUN_004f3fa0(&this_ptr->field0_0x0);
  return;
}


// Assembly code:
// 00414070: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_baron.cpp_CBaron_FUN_00414070
//   XREF to: Stack[0x8] (READ)
// 00414074: PUSH EDX
// 00414075: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00414079: PUSH ECX
// 0041407a: CALL core_hero.cpp_CHero_FUN_004f3fa0
//   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
// 0041407f: ADD ESP,0x8
// 00414082: RET
