// Name: core_vessel.cpp_FUN_0054fa80
// Address: 0054fa80
// Address Range: [[0054fa80, 0054fbba]]
// Convention: unknown
// Signature: void core_vessel_cpp_FUN_0054fa80(CDemonActor *param_1)

#include "nocturne.h"

void core_vessel_cpp_FUN_0054fa80(CDemonActor *param_1)

{
  int iVar1;
  CBoundingBox3D CStack_28;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)param_1[4].footstep_sound_code);
  (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_28);
  iVar1 = param_1[2].collision_disabled;
  param_1[2].location.area_id = 0;
  if (iVar1 != 0) {
    fStack_10 = *(float *)(iVar1 + 0x20) - (param_1->location).position.x;
    fStack_c = *(float *)(iVar1 + 0x24) - (param_1->location).position.y;
    fStack_8 = *(float *)(iVar1 + 0x28) - (param_1->location).position.z;
    if (SQRT(fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c) <
        (float)0.5) {
      iVar1 = param_1[2].collision_disabled;
      (param_1->location).position.x = *(float *)(iVar1 + 0x20);
      (param_1->location).position.y = *(float *)(iVar1 + 0x24);
      (param_1->location).position.z = *(float *)(iVar1 + 0x28);
      (param_1->location).area_id = *(int *)(iVar1 + 0x2c);
      iVar1 = param_1[2].collision_disabled;
      if (&param_1->orient != (UOrientationVector *)(iVar1 + 0x30)) {
        (param_1->orient).vec.x = *(float *)(iVar1 + 0x30);
        (param_1->orient).vec.y = *(float *)(iVar1 + 0x34);
        (param_1->orient).vec.z = *(float *)(iVar1 + 0x38);
      }
    }
  }
  param_1[2].blood_effect_color = 1;
  param_1[4].actor_name[0x1c] = '\0';
  param_1[4].actor_name[0x1d] = '\0';
  param_1[4].actor_name[0x1e] = '\0';
  param_1[4].actor_name[0x1f] = '\0';
  param_1[4].location.position.z = 1.4013e-45;
  param_1[4].location.position.x = 0.0;
  param_1[3].footstep_sound_code[0] = '\0';
  param_1[3].footstep_sound_code[1] = '\0';
  param_1[3].footstep_sound_code[2] = '\0';
  param_1[3].footstep_sound_code[3] = '?';
  param_1[3].dead1 = 0x3f800000;
  param_1[3].dead2 = 0x3f000000;
  core_flame_cpp_CFlame_setup_FUN_0048d050(param_1[2].footstep_sound_code);
  param_1->is_transparent = 1;
  return;
}
