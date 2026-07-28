// Name: core_filmreel.cpp_CFilmReel_setup_FUN_00481ca0
// Address: 00481ca0
// Address Range: [[00481ca0, 00481d22]]
// Convention: unknown
// Signature: void core_filmreel_cpp_CFilmReel_setup_FUN_00481ca0(CDemonActor *param_1)

#include "nocturne.h"

void core_filmreel_cpp_CFilmReel_setup_FUN_00481ca0(CDemonActor *param_1)

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
  param_1[2].orient_matrix.m[1].z = fVar2;
  param_1[2].location.area_id = 0;
  return;
}
