// Name: core_drip.cpp_FUN_0048e0e0
// Address: 0048e0e0
// Address Range: [[0048e0e0, 0048e12a]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_FUN_0048e0e0(void)

#include "nocturne.h"

/* Signature: byte actors_other_drip.cpp_FUN_0048e0e0(uint param_1) */

void __cdecl core_drip_cpp_FUN_0048e0e0(void)

{
  float fVar1;
  int in_stack_00000004;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  *(uint *)(in_stack_00000004 + 0x2ec) = 0;
  *(uint *)(in_stack_00000004 + 0x20) = *(uint *)(in_stack_00000004 + 0x2f8);
  *(uint *)(in_stack_00000004 + 0x24) = *(uint *)(in_stack_00000004 + 0x2fc);
  *(uint *)(in_stack_00000004 + 0x28) = *(uint *)(in_stack_00000004 + 0x300);
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                    (*(float *)(in_stack_00000004 + 0x2e0),*(float *)(in_stack_00000004 + 0x2e4));
  *(float *)(in_stack_00000004 + 0x2dc) = fVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&DAT_02c9b170,"stalrock.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&DAT_02c9b170);
  *(uint *)(in_stack_00000004 + 0x338) = 0;
  return;
}
