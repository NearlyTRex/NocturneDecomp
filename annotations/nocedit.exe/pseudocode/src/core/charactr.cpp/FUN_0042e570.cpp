// Name: core_charactr.cpp_FUN_0042e570
// Address: 0042e570
// Address Range: [[0042e570, 0042e5c2]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_FUN_0042e570(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_0042e570(CCharacter *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = *(int *)(this_ptr->field13_0x2620 + 8) * 0x38;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (&this_ptr->model,*(int *)(this_ptr->field13_0x2620 + iVar1 + 0x38),
             (float)*(int *)(this_ptr->field13_0x2620 + iVar1 + 0x3c) *
             *(float *)(this_ptr->field13_0x2620 + 0x470),in_stack_00000008,in_stack_0000000c,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}
