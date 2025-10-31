// Name: core_charactr.cpp_CCharacter_FUN_0042f9c0
// Address: 0042f9c0
// Address Range: [[0042f9c0, 0042f9ca]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042f9c0(CCharacter * this_ptr)
// Cross-references:
//   core_script.cpp_FUN_00562920 (00562920) at 00563ed3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042f9c0(CCharacter *this_ptr)

{
  return *(int *)(this_ptr->cloth_data + 0x46a8);
}


// Assembly code:
// 0042f9c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042f9c0
//   XREF to: Stack[0x4] (READ)
// 0042f9c4: MOV EAX,dword ptr [EAX + 0x7140]
// 0042f9ca: RET
