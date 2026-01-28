// Name: core_crate.cpp_FUN_00448530
// Address: 00448530
// Address Range: [[00448530, 0044853d]]
// Convention: unknown
// Signature: void core_crate_cpp_FUN_00448530(void)

#include "nocturne.h"

/* Signature: byte actors_other_crate.cpp_FUN_00448530(uint param_1) */

void core_crate_cpp_FUN_00448530(void)

{
  float fVar1;
  float fVar2;
  CDemonActor *in_stack_00000004;
  CBoundingBox3D CStack_24;
  float fStack_8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  (*((in_stack_00000004->vtable)._ub)->getBoundingBox)(in_stack_00000004,&CStack_24);
  fVar1 = (CStack_24.max.z - CStack_24.min.z) * (float)0.5;
  fVar2 = (fStack_8 - CStack_24.max.y) * (float)0.5;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  in_stack_00000004[2].location.position.z = fVar2;
  in_stack_00000004[2].orient.pitch = -9999.9;
  in_stack_00000004[2].orient.bank = -9999.9;
  in_stack_00000004[2].orient.heading = -9999.9;
  in_stack_00000004[2].orient_matrix.m[0].x = -9999.9;
  in_stack_00000004[2].orient_matrix.m[0].z = -9999.9;
  in_stack_00000004[2].orient_matrix.m[0].y = -9999.9;
  in_stack_00000004[2].orient_matrix.m[1].x = 9999.9;
  in_stack_00000004[2].location.position.y = 0.0;
  return;
}
