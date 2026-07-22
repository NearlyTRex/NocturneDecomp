// Name: core_charactr.cpp_FUN_0042a150
// Address: 0042a150
// Address Range: [[0042a150, 0042a1d6]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042a150(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042a150(int param_1,uint param_2)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_applyGesture_FUN_00429560(param_1);
  core_charactr_cpp_FUN_00429e60(param_1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(param_1 + 0x150);
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0(param_1);
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220(param_1,param_2);
  if (*(int *)(param_1 + 0x2618) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
    if (iVar1 != 1) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_00438550
            (param_1 + 0x2a8c,param_1 + 0x20,param_1 + 0x30,param_2,
             *(uint *)(param_1 + 0x240c),param_1 + 0x150);
  return;
}
