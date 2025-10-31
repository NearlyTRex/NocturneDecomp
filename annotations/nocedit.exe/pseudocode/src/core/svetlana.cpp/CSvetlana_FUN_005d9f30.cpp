// Name: core_svetlana.cpp_CSvetlana_FUN_005d9f30
// Address: 005d9f30
// Address Range: [[005d9f30, 005d9f42]]
// Convention: __cdecl
// Signature: void core_svetlana.cpp_CSvetlana_FUN_005d9f30(CSvetlana * this_ptr)
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3fa0

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9f30(CSvetlana *this_ptr)

{
  core_hero_cpp_CHero_FUN_004f3fa0(&this_ptr->base_hero);
  return;
}


// Assembly code:
// 005d9f30: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_svetlana.cpp_CSvetlana_FUN_005d9f30
//   XREF to: Stack[0x8] (READ)
// 005d9f34: PUSH EDX
// 005d9f35: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d9f39: PUSH ECX
// 005d9f3a: CALL core_hero.cpp_CHero_FUN_004f3fa0
//   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
// 005d9f3f: ADD ESP,0x8
// 005d9f42: RET
