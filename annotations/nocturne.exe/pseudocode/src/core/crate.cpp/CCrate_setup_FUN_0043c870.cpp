// Name: core_crate.cpp_CCrate_setup_FUN_0043c870
// Address: 0043c870
// Address Range: [[0043c870, 0043c938]]
// Convention: unknown
// Signature: void core_crate_cpp_CCrate_setup_FUN_0043c870(CDemonActor *param_1)

#include "nocturne.h"

void core_crate_cpp_CCrate_setup_FUN_0043c870(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D CStack_24;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_24);
  fVar1 = (CStack_24.max.x - CStack_24.min.x) * (float)0.5;
  fVar2 = (CStack_24.max.z - CStack_24.min.z) * (float)0.5;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  param_1[2].orient.vec.x = fVar2;
  param_1[2].orient.vec.z = -9999.9;
  param_1[2].orient_matrix.m[0].x = -9999.9;
  param_1[2].orient_matrix.m[0].y = -9999.9;
  param_1[2].orient_matrix.m[0].z = -9999.9;
  param_1[2].orient_matrix.m[1].y = -9999.9;
  param_1[2].orient_matrix.m[1].x = -9999.9;
  param_1[2].orient_matrix.m[1].z = 9999.9;
  param_1[2].location.area_id = 0;
  return;
}
