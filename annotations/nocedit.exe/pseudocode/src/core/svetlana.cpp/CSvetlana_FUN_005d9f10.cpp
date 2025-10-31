// Name: core_svetlana.cpp_CSvetlana_FUN_005d9f10
// Address: 005d9f10
// Address Range: [[005d9f10, 005d9f22]]
// Convention: __cdecl
// Signature: void core_svetlana.cpp_CSvetlana_FUN_005d9f10(CSvetlana * this_ptr)
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3f20

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9f10(CSvetlana *this_ptr)

{
  core_hero_cpp_CHero_FUN_004f3f20(&this_ptr->base_hero);
  return;
}


// Assembly code:
// 005d9f10: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_svetlana.cpp_CSvetlana_FUN_005d9f10
//   XREF to: Stack[0x8] (READ)
// 005d9f14: PUSH EDX
// 005d9f15: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d9f19: PUSH ECX
// 005d9f1a: CALL core_hero.cpp_CHero_FUN_004f3f20
//   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
// 005d9f1f: ADD ESP,0x8
// 005d9f22: RET
