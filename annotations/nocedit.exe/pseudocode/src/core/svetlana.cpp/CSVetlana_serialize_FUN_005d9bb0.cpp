// Name: core_svetlana.cpp_CSVetlana_serialize_FUN_005d9bb0
// Address: 005d9bb0
// Address Range: [[005d9bb0, 005d9bbd]]
// Convention: __cdecl
// Signature: void core_svetlana.cpp_CSVetlana_serialize_FUN_005d9bb0(CSvetlana * this_ptr)
// Function calls:
//   core_hero.cpp_CHero_serialize_FUN_004f2610

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSVetlana_serialize_FUN_005d9bb0(CSvetlana *this_ptr)

{
  core_hero_cpp_CHero_serialize_FUN_004f2610(&this_ptr->base_hero);
  return;
}


// Assembly code:
// 005d9bb0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_svetlana.cpp_CSVetlana_serialize_FUN_005d9bb0
//   XREF to: Stack[0x4] (READ)
// 005d9bb4: PUSH EDX
// 005d9bb5: CALL core_hero.cpp_CHero_serialize_FUN_004f2610
//   XREF to: 004f2610 (UNCONDITIONAL_CALL)
// 005d9bba: ADD ESP,0x4
// 005d9bbd: RET
