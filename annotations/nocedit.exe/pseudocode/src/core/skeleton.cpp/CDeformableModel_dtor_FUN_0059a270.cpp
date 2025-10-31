// Name: core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
// Address: 0059a270
// Address Range: [[0059a270, 0059a2a5]]
// Convention: __cdecl
// Signature: CDeformableModel * core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 (004be070) at 004be12d [UNCONDITIONAL_CALL]
// Function calls:
//   core_curtain.cpp_FUN_0044baf0
//   core_skeleton.cpp_CDeformableModel_FUN_0059a2b0
//   core_skeleton.cpp_FUN_005a2030

#include "nocturne.h"

CDeformableModel * __cdecl
core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel *this_ptr)

{
  int iVar1;
  
  core_skeleton_cpp_CDeformableModel_FUN_0059a2b0();
  core_skeleton_cpp_FUN_005a2030();
  iVar1 = core_curtain_cpp_FUN_0044baf0();
  return (CDeformableModel *)(iVar1 + -0x7c90);
}


// Assembly code:
// 0059a270: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
// 0059a271: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0059a275: PUSH EBX
// 0059a276: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a2b0
//   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)
// 0059a27b: ADD ESP,0x4
// 0059a27e: PUSH 0x0
// 0059a280: ADD EBX,0x814c
// 0059a286: PUSH EBX
// 0059a287: CALL core_skeleton.cpp_FUN_005a2030
//   XREF to: 005a2030 (UNCONDITIONAL_CALL)
// 0059a28c: ADD ESP,0x8
// 0059a28f: PUSH 0x0
// 0059a291: SUB EAX,0x4bc
// 0059a296: PUSH EAX
// 0059a297: CALL core_curtain.cpp_FUN_0044baf0
//   XREF to: 0044baf0 (UNCONDITIONAL_CALL)
// 0059a29c: ADD ESP,0x8
// 0059a29f: SUB EAX,0x7c90
// 0059a2a4: POP EBX
// 0059a2a5: RET
