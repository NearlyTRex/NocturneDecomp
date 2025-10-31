// Name: core_charactr.cpp_CCharacter_FUN_0042cd90
// Address: 0042cd90
// Address Range: [[0042cd90, 0042cda3]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042cd90(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042cd90(CCharacter *this_ptr)

{
  return (uint)(*(int *)(this_ptr->field11_0x25a0 + 0x14) == 0);
}


// Assembly code:
// 0042cd90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042cd90
//   XREF to: Stack[0x4] (READ)
// 0042cd94: CMP dword ptr [EAX + 0x25b4],0x0
// 0042cd9b: SETZ AL
// 0042cd9e: AND EAX,0xff
// 0042cda3: RET
