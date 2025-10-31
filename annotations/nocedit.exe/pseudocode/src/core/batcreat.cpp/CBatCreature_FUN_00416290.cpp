// Name: core_batcreat.cpp_CBatCreature_FUN_00416290
// Address: 00416290
// Address Range: [[00416290, 004162a2]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_FUN_00416290(CBatCreature * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_FUN_00416290(CBatCreature *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_0042bc20((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 00416290: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_batcreat.cpp_CBatCreature_FUN_00416290
//   XREF to: Stack[0x8] (READ)
// 00416294: PUSH EDX
// 00416295: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00416299: PUSH ECX
// 0041629a: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 0041629f: ADD ESP,0x8
// 004162a2: RET
