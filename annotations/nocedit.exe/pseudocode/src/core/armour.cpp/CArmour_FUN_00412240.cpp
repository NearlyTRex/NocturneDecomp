// Name: core_armour.cpp_CArmour_FUN_00412240
// Address: 00412240
// Address Range: [[00412240, 0041225f]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_FUN_00412240(CArmour * this_ptr)
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_FUN_00412240(CArmour *this_ptr)

{
  int in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
            ((CDeformableModelInstance *)(in_stack_00000008 + 0x158));
  return;
}


// Assembly code:
// 00412240: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_armour.cpp_CArmour_FUN_00412240
//   XREF to: Stack[0x4] (READ)
// 00412244: PUSH EDX
// 00412245: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0041224a: ADD ESP,0x4
// 0041224d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00412251: ADD EAX,0x158
// 00412256: PUSH EAX
// 00412257: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0041225c: ADD ESP,0x4
// 0041225f: RET
