// Name: core_charactr.cpp_CCharacter_FUN_0042f9e0
// Address: 0042f9e0
// Address Range: [[0042f9e0, 0042f9ea]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042f9e0(CCharacter * this_ptr)
// Cross-references:
//   core_script.cpp_CScript_process_FUN_00559960 (00559960) at 005599a6 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559b20 (00559b20) at 00559d48 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042f9e0(CCharacter *this_ptr)

{
  return (int)(this_ptr->model).transformed_vertices[0xf].x;
}


// Assembly code:
// 0042f9e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042f9e0
//   XREF to: Stack[0x4] (READ)
// 0042f9e4: MOV EAX,dword ptr [EAX + 0x264]
// 0042f9ea: RET
