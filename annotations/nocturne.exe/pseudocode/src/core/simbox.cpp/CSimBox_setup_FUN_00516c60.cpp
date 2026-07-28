// Name: core_simbox.cpp_CSimBox_setup_FUN_00516c60
// Address: 00516c60
// Address Range: [[00516c60, 00516d7e]]
// Convention: unknown
// Signature: void core_simbox_cpp_CSimBox_setup_FUN_00516c60(CDemonActor *param_1)

#include "nocturne.h"

void core_simbox_cpp_CSimBox_setup_FUN_00516c60(CDemonActor *param_1)

{
  CLocation *position;
  CBoundingBox3D *pCVar1;
  CBoundingBox3D CStack_44;
  CBoundingBox3D CStack_2c;
  CVector3f CStack_14;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  pCVar1 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_44);
  if (&CStack_2c != pCVar1) {
    CStack_2c.min.x = (pCVar1->min).x;
    CStack_2c.min.y = (pCVar1->min).y;
    CStack_2c.min.z = (pCVar1->min).z;
  }
  if (&CStack_2c.max != &pCVar1->max) {
    CStack_2c.max.x = (pCVar1->max).x;
    CStack_2c.max.y = (pCVar1->max).y;
    CStack_2c.max.z = (pCVar1->max).z;
  }
  CStack_14.x = CStack_2c.max.x - CStack_2c.min.x;
  CStack_14.y = CStack_2c.max.y - CStack_2c.min.y;
  CStack_14.z = CStack_2c.max.z - CStack_2c.min.z;
  position = &param_1->location;
  core_box_cpp_CBox_setupCorners_FUN_0041a6e0
            ((CBox *)(param_1[2].create_event + 0x38),&position->position,&(param_1->orient).vec,
             &CStack_14,param_1[2].orient.vec.x);
  if ((CLocation *)&param_1[4].direction_hint != position) {
    param_1[4].direction_hint = (int)(position->position).x;
    param_1[4].lifecycle_state = (EActorLifecycleState)(param_1->location).position.y;
    param_1[4].create_prob = (param_1->location).position.z;
  }
  if ((UOrientationVector *)param_1[4].create_event != &param_1->orient) {
    *(float *)param_1[4].create_event = (param_1->orient).vec.x;
    *(float *)(param_1[4].create_event + 4) = (param_1->orient).vec.y;
    *(float *)(param_1[4].create_event + 8) = (param_1->orient).vec.z;
  }
  if (param_1[2].location.area_id != 1) {
    return;
  }
  param_1[4].health = 0;
  return;
}
