// Name: core_filmreel.cpp_FUN_004be720
// Address: 004be720
// Address Range: [[004be720, 004be72d]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be720()

#include "nocturne.h"

/* Signature: byte actors_other_filmreel.cpp_FUN_004be720(uint param_1) */

void core_filmreel_cpp_FUN_004be720(void)

{
  float fVar1;
  float fVar2;
  CDemonActor *in_stack_00000004;
  CBoundingBox3D CStack_24;
  float fStack_8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_24);
  fVar1 = (CStack_24.max.z - CStack_24.min.z) * (float)0.5;
  fVar2 = (fStack_8 - CStack_24.max.y) * (float)0.5;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  in_stack_00000004[2].orient_matrix.m[1].x = fVar2;
  in_stack_00000004[2].location.position.y = 0.0;
  return;
}
