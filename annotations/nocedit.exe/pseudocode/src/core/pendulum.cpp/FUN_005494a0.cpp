// Name: core_pendulum.cpp_FUN_005494a0
// Address: 005494a0
// Address Range: [[005494a0, 005494bc]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_FUN_005494a0(void)

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_FUN_005494a0(uint param_1) */

void __cdecl core_pendulum_cpp_FUN_005494a0(void)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CDemonActor *in_stack_00000004;
  byte auStack_44 [20];
  float fStack_30;
  float fStack_8;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  pCVar3 = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)(auStack_44 + 0x10));
  if ((CBoundingBox3D *)auStack_44 != pCVar3) {
    auStack_44._0_4_ = (pCVar3->min).x;
    auStack_44._4_4_ = (pCVar3->min).y;
    auStack_44._8_4_ = (pCVar3->min).z;
  }
  if ((CVector3f *)(auStack_44 + 0xc) != &pCVar3->max) {
    auStack_44._12_4_ = (pCVar3->max).x;
    auStack_44._16_4_ = (pCVar3->max).y;
    fStack_30 = (pCVar3->max).z;
  }
  in_stack_00000004[2].unk4.z =
       SQRT(((float)auStack_44._16_4_ - (float)auStack_44._4_4_) * (float)0.03125) *
       (float)6.2831853070000001;
  fVar1 = ((float)auStack_44._4_4_ + (float)auStack_44._16_4_) * 0.5f;
  fVar2 = ((float)auStack_44._8_4_ + fStack_30) * 0.5f;
  if ((float *)(in_stack_00000004[3].actor_name + 8) == &fStack_8) {
    *(uint *)(in_stack_00000004[3].actor_name + 0xc) = auStack_44._4_4_;
    return;
  }
  *(float *)(in_stack_00000004[3].actor_name + 8) =
       ((float)auStack_44._0_4_ + (float)auStack_44._12_4_) * 0.5f;
  *(float *)(in_stack_00000004[3].actor_name + 0xc) = fVar1;
  *(float *)(in_stack_00000004[3].actor_name + 0x10) = fVar2;
  *(uint *)(in_stack_00000004[3].actor_name + 0xc) = auStack_44._4_4_;
  return;
}
