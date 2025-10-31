// Name: core_beast.cpp_FUN_00418280
// Address: 00418280
// Address Range: [[00418280, 0041829f]]
// Convention: unknown
// Signature: undefined core_beast.cpp_FUN_00418280()
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_beast.cpp_FUN_00418280(undefined4 param_1) */

void core_beast_cpp_FUN_00418280(void)

{
  CEnemy *in_stack_00000008;
  
  core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000008);
  return;
}


// Assembly code:
// 00418280: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_beast.cpp_FUN_00418280
//   XREF to: Stack[0x4] (READ)
// 00418284: ADD EAX,0x158
// 00418289: PUSH EAX
// 0041828a: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0041828f: ADD ESP,0x4
// 00418292: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00418296: PUSH EDX
// 00418297: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0041829c: ADD ESP,0x4
// 0041829f: RET
