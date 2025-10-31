// Name: core_armour.cpp_CArmour_FUN_00412450
// Address: 00412450
// Address Range: [[00412450, 00412462]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_FUN_00412450(CArmour * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_FUN_00412450(CArmour *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_0042bc20((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 00412450: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_armour.cpp_CArmour_FUN_00412450
//   XREF to: Stack[0x8] (READ)
// 00412454: PUSH EDX
// 00412455: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00412459: PUSH ECX
// 0041245a: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 0041245f: ADD ESP,0x8
// 00412462: RET
