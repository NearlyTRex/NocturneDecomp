// Name: core_charactr.cpp_CCharacter_FUN_0042bf80
// Address: 0042bf80
// Address Range: [[0042bf80, 0042bf8a]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042bf80(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042bf80(CCharacter *this_ptr)

{
  return (int)this_ptr->grabbed_by;
}


// Assembly code:
// 0042bf80: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042bf80
//   XREF to: Stack[0x4] (READ)
// 0042bf84: MOV EAX,dword ptr [EAX + 0x2598]
// 0042bf8a: RET
