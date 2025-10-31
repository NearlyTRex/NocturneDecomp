// Name: core_charactr.cpp_CCharacter_FUN_0042a3f0
// Address: 0042a3f0
// Address Range: [[0042a3f0, 0042a413]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042a3f0(CCharacter * this_ptr)
// Function calls:
//   core_skeleton.cpp_CDeformableModel_FUN_0059c220
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042a3f0(CCharacter *this_ptr)

{
  int iVar1;
  
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  iVar1 = core_skeleton_cpp_CDeformableModel_FUN_0059c220();
  return *(int *)(iVar1 + 0x5c);
}


// Assembly code:
// 0042a3f0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_charactr.cpp_CCharacter_FUN_0042a3f0
//   XREF to: Stack[0x8] (READ)
// 0042a3f4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0042a3f8: PUSH EDX
// 0042a3f9: ADD EAX,0x158
// 0042a3fe: PUSH EAX
// 0042a3ff: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0042a404: ADD ESP,0x4
// 0042a407: PUSH EAX
// 0042a408: CALL core_skeleton.cpp_CDeformableModel_FUN_0059c220
//   XREF to: 0059c220 (UNCONDITIONAL_CALL)
// 0042a40d: ADD ESP,0x8
// 0042a410: MOV EAX,dword ptr [EAX + 0x5c]
// 0042a413: RET
