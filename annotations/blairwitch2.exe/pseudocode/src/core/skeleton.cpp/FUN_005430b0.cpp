// Name: core_skeleton.cpp_FUN_005430b0
// Address: 005430b0
// Address Range: [[005430b0, 005430d2]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_005430b0(CDeformableModel *param_1,undefined4 param_2)

#include "nocturne.h"

void core_skeleton_cpp_FUN_005430b0(CDeformableModel *param_1,uint param_2)

{
  *(uint *)&param_1->field_0x2a6c = param_2;
  core_skeleton_cpp_FUN_00544930(param_1);
  core_skeleton_cpp_FUN_00544ae0(param_1);
  return;
}
