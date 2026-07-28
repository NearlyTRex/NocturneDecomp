// Name: core_charactr.cpp_FUN_00427a60
// Address: 00427a60
// Address Range: [[00427a60, 00427aad]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00427a60(int param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_00427a60(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"glass-1.wav@2.0");
  if (*(char *)(param_1 + 0x23b0) == '\0') {
    *(uint *)(param_1 + 0x70) = 2;
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0051ed30
            ((CDeformableModelInstance *)(param_1 + 0x150),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),0);
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
