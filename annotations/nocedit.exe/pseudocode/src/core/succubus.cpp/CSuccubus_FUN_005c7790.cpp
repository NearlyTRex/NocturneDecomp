// Name: core_succubus.cpp_CSuccubus_FUN_005c7790
// Address: 005c7790
// Address Range: [[005c7790, 005c77a2]]
// Convention: __cdecl
// Signature: void core_succubus.cpp_CSuccubus_FUN_005c7790(CSuccubus * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_FUN_005c7790(CSuccubus *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_0042bc20((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 005c7790: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_succubus.cpp_CSuccubus_FUN_005c7790
//   XREF to: Stack[0x8] (READ)
// 005c7794: PUSH EDX
// 005c7795: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c7799: PUSH ECX
// 005c779a: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 005c779f: ADD ESP,0x8
// 005c77a2: RET
