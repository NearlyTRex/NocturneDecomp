// Name: FUN_004b48d0
// Address: 004b48d0
// Address Range: [[004b48d0, 004b4907]]
// Convention: unknown
// Signature: void FUN_004b48d0(int param_1)

#include "nocturne.h"

void FUN_004b48d0(int param_1)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x150);
  core_charactr_cpp_CCharacter_setup_FUN_00424260(param_1);
  *(uint *)(param_1 + 0xbc8c) = 0;
  core_inv_cpp_CInventory_setupItems_FUN_004c1510(param_1 + 0x1f5a0);
  return;
}
