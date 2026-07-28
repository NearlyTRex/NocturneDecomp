// Name: core_pendulum.cpp_CPendulum_setup_FUN_004f2d40
// Address: 004f2d40
// Address Range: [[004f2d40, 004f2e59]]
// Convention: unknown
// Signature: void core_pendulum_cpp_CPendulum_setup_FUN_004f2d40(CDemonActor *param_1)

#include "nocturne.h"

void core_pendulum_cpp_CPendulum_setup_FUN_004f2d40(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CBoundingBox3D CStack_4c;
  CBoundingBox3D local_34;
  float afStack_10 [3];
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  pCVar3 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_34);
  if (&CStack_4c != pCVar3) {
    CStack_4c.min.x = (pCVar3->min).x;
    CStack_4c.min.y = (pCVar3->min).y;
    CStack_4c.min.z = (pCVar3->min).z;
  }
  if (&CStack_4c.max != &pCVar3->max) {
    CStack_4c.max.x = (pCVar3->max).x;
    CStack_4c.max.y = (pCVar3->max).y;
    CStack_4c.max.z = (pCVar3->max).z;
  }
  param_1[2].is_transparent =
       (int)(SQRT((CStack_4c.max.y - CStack_4c.min.y) * (float)0.03125) *
            (float)6.2831853070000001);
  fVar1 = (CStack_4c.min.y + CStack_4c.max.y) * 0.5f;
  fVar2 = (CStack_4c.min.z + CStack_4c.max.z) * 0.5f;
  if ((float *)(param_1[3].actor_name + 0x18) == afStack_10) {
    *(float *)(param_1[3].actor_name + 0x1c) = CStack_4c.min.y;
    return;
  }
  *(float *)(param_1[3].actor_name + 0x18) = (CStack_4c.min.x + CStack_4c.max.x) * 0.5f;
  *(float *)(param_1[3].actor_name + 0x1c) = fVar1;
  param_1[3].location.position.x = fVar2;
  *(float *)(param_1[3].actor_name + 0x1c) = CStack_4c.min.y;
  return;
}
