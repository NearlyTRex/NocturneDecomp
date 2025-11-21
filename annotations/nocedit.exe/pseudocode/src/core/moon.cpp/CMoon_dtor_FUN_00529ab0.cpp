// Name: core_moon.cpp_CMoon_dtor_FUN_00529ab0
// Address: 00529ab0
// Address Range: [[00529ab0, 00529ad0]]
// Convention: __cdecl
// Signature: CMoon * core_moon.cpp_CMoon_dtor_FUN_00529ab0(CMoon * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
//   core_moon.cpp_CMoon_free_FUN_00529ce0

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_00529ab0(CMoon *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  core_moon_cpp_CMoon_free_FUN_00529ce0(this_ptr);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(&this_ptr->moon);
  return (CMoon *)&pCVar1[-1].rotation_matrix_workspace.m[2].z;
}


// Assembly code:
// 00529ab0: PUSH EBX
//   Label: core_moon.cpp_CMoon_dtor_FUN_00529ab0
// 00529ab1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00529ab5: PUSH EBX
// 00529ab6: CALL core_moon.cpp_CMoon_free_FUN_00529ce0
//   XREF to: 00529ce0 (UNCONDITIONAL_CALL)
// 00529abb: ADD ESP,0x4
// 00529abe: PUSH 0x0
// 00529ac0: ADD EBX,0x8
// 00529ac3: PUSH EBX
// 00529ac4: CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
//   XREF to: 00476d90 (UNCONDITIONAL_CALL)
// 00529ac9: ADD ESP,0x8
// 00529acc: SUB EAX,0x8
// 00529acf: POP EBX
// 00529ad0: RET
