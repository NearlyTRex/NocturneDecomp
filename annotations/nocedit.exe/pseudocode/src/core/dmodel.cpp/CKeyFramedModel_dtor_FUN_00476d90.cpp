// Name: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
// Address: 00476d90
// Address Range: [[00476d90, 00476da1]]
// Convention: __cdecl
// Signature: CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00 (00438c00) at 00438c38 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 (0047ee30) at 0047eeda [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050781c [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_dtor_FUN_00529ab0 (00529ab0) at 00529ac4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dba7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690

#include "nocturne.h"

CKeyFramedModel * __cdecl
core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(CKeyFramedModel *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00476d90: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
// 00476d91: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00476d95: PUSH EBX
// 00476d96: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 00476d9b: ADD ESP,0x4
// 00476d9e: MOV EAX,EBX
// 00476da0: POP EBX
// 00476da1: RET
