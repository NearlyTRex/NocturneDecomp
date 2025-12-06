// Name: core_pendulum.cpp_FUN_005494a0
// Address: 005494a0
// Address Range: [[005494a0, 005494bc]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_005494a0()

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_FUN_005494a0(uint param_1) */

void core_pendulum_cpp_FUN_005494a0(void)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  byte auStack_30 [8];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  pCVar3 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)(auStack_30 + 4));
  if ((CBoundingBox3D *)auStack_30 != pCVar3) {
    auStack_30._0_4_ = (pCVar3->min).x;
    auStack_30._4_4_ = (pCVar3->min).y;
    fStack_28 = (pCVar3->min).z;
  }
  if ((CVector3f *)&fStack_24 != &pCVar3->max) {
    fStack_24 = (pCVar3->max).x;
    fStack_20 = (pCVar3->max).y;
    fStack_1c = (pCVar3->max).z;
  }
  in_stack_00000004[2].field13_0xec.z =
       SQRT((fStack_20 - (float)auStack_30._4_4_) * (float)0.03125) * (float)6.2831853070000001
  ;
  fVar1 = ((float)auStack_30._4_4_ + fStack_20) * 0.5f;
  fVar2 = (fStack_28 + fStack_1c) * 0.5f;
  if ((float *)(in_stack_00000004[3].actor_name + 8) == &stack0x0000000c) {
    *(uint *)(in_stack_00000004[3].actor_name + 0xc) = auStack_30._4_4_;
    return;
  }
  *(float *)(in_stack_00000004[3].actor_name + 8) =
       ((float)auStack_30._0_4_ + fStack_24) * 0.5f;
  *(float *)(in_stack_00000004[3].actor_name + 0xc) = fVar1;
  *(float *)(in_stack_00000004[3].actor_name + 0x10) = fVar2;
  *(uint *)(in_stack_00000004[3].actor_name + 0xc) = auStack_30._4_4_;
  return;
}
