// Name: core_charactr.cpp_FUN_0042e570
// Address: 0042e570
// Address Range: [[0042e570, 0042e5c2]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_FUN_0042e570()

#include "nocturne.h"

void core_charactr_cpp_FUN_0042e570(void)

{
  int iVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x2628) * 0x38;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
             *(int *)(iVar1 + 0x2c + in_stack_00000004 + 0x262c),
             (float)*(int *)(iVar1 + 0x30 + in_stack_00000004 + 0x262c) *
             *(float *)(in_stack_00000004 + 0x2a90),in_stack_00000008,in_stack_0000000c,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}
