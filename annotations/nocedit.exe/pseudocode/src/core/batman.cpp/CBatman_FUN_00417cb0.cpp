// Name: core_batman.cpp_CBatman_FUN_00417cb0
// Address: 00417cb0
// Address Range: [[00417cb0, 00417cce]]
// Convention: __cdecl
// Signature: int core_batman.cpp_CBatman_FUN_00417cb0(CBatman * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

int __cdecl core_batman_cpp_CBatman_FUN_00417cb0(CBatman *this_ptr)

{
  int iVar1;
  
  if (this_ptr->mist_state != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042bc20((CCharacter *)this_ptr);
  return iVar1;
}


// Assembly code:
// 00417cb0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_batman.cpp_CBatman_FUN_00417cb0
//   XREF to: Stack[0x4] (READ)
// 00417cb4: CMP dword ptr [EAX + 0xbf58],0x0
// 00417cbb: JZ 0x00417cc0
//   XREF to: 00417cc0 (CONDITIONAL_JUMP)
// 00417cbd: XOR EAX,EAX
// 00417cbf: RET
// 00417cc0: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_00417cc0
//   XREF to: Stack[0x8] (READ)
// 00417cc4: PUSH ECX
// 00417cc5: PUSH EAX
// 00417cc6: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 00417ccb: ADD ESP,0x8
// 00417cce: RET
