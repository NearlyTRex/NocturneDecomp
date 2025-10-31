// Name: core_moon.cpp_FUN_00529a80
// Address: 00529a80
// Address Range: [[00529a80, 00529aa0]]
// Convention: __cdecl
// Signature: CMoon * core_moon.cpp_FUN_00529a80(CMoon * this_ptr)
// Cross-references:
//   core_menu.cpp_staticInit_FUN_0050fdb0 (0050fdb0) at 0050fdd6 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_FUN_00529a80(CMoon *this_ptr)

{
  CKeyFramedModel *pCVar1;
  float *pfVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0((CKeyFramedModel *)&this_ptr->moon);
  pfVar2 = &pCVar1[-1].rotation_matrix_workspace.m[2].z;
  pCVar1[-1].padding = 0;
  *pfVar2 = 0.0;
  return (CMoon *)pfVar2;
}


// Assembly code:
// 00529a80: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_moon.cpp_FUN_00529a80
//   XREF to: Stack[0x4] (READ)
// 00529a84: ADD EAX,0x8
// 00529a87: PUSH EAX
// 00529a88: CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   XREF to: 00476cf0 (UNCONDITIONAL_CALL)
// 00529a8d: SUB EAX,0x8
// 00529a90: MOV dword ptr [EAX + 0x4],0x0
// 00529a97: ADD ESP,0x4
// 00529a9a: MOV dword ptr [EAX],0x0
// 00529aa0: RET
