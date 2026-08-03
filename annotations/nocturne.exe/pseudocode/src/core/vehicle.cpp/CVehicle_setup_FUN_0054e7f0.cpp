// Name: core_vehicle.cpp_CVehicle_setup_FUN_0054e7f0
// Address: 0054e7f0
// Address Range: [[0054e7f0, 0054eade]]
// Convention: unknown
// Signature: void core_vehicle_cpp_CVehicle_setup_FUN_0054e7f0(CDemonActor *param_1)

#include "nocturne.h"

void core_vehicle_cpp_CVehicle_setup_FUN_0054e7f0(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  UActorVTable UVar4;
  UActorVTable UVar5;
  CDemonActor *pCVar6;
  float fVar7;
  float fVar8;
  CBoundingBox3D *pCVar9;
  float fVar10;
  float fVar11;
  CKeyFramedModel *pCVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  CKeyFramedModelInstance *this_ptr;
  int iVar16;
  CDemonActor *local_1c;
  CDemonActor *local_18;
  UActorVTable local_14;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  iVar16 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  if (0 < *(int *)param_1[7].actor_name) {
    this_ptr = (CKeyFramedModelInstance *)(param_1[7].actor_name + 0x18);
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(this_ptr);
      iVar16 = iVar16 + 1;
      this_ptr = (CKeyFramedModelInstance *)(this_ptr[1].part_visibility_flags + 0xe);
    } while (iVar16 < *(int *)param_1[7].actor_name);
  }
  pCVar12 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                      ((CKeyFramedModelInstance *)(param_1 + 1));
  pCVar9 = pCVar12->frame_bounds;
  local_1c = (CDemonActor *)((pCVar9->max).x - (pCVar9->min).x);
  local_18 = (CDemonActor *)((pCVar9->max).y - (pCVar9->min).y);
  local_14 = (UActorVTable)((pCVar9->max).z - (pCVar9->min).z);
  if (&param_1[6].next_actor != &local_1c) {
    param_1[6].next_actor = local_1c;
    param_1[6].prev_actor = local_18;
    param_1[6].vtable = local_14;
  }
  fVar10 = param_1[6].previous_transform_state.position.z * (float)0.03125;
  pCVar1 = param_1[6].prev_actor;
  pCVar2 = param_1[6].next_actor;
  pCVar3 = param_1[6].next_actor;
  UVar4 = param_1[6].vtable;
  UVar5 = param_1[6].vtable;
  pCVar6 = param_1[6].prev_actor;
  param_1[6].previous_transform_state.orientation.vec.x = fVar10;
  fVar11 = (float)0.083333333333333301;
  fVar7 = param_1[6].previous_transform_state.orientation.vec.x;
  fVar8 = param_1[6].previous_transform_state.orientation.vec.x;
  param_1[6].previous_transform_state.orientation.vec.y =
       fVar10 * fVar11 * ((float)UVar4 * (float)UVar4 + (float)pCVar1 * (float)pCVar1);
  param_1[6].previous_transform_state.orientation.vec.z =
       fVar7 * fVar11 * ((float)UVar5 * (float)UVar5 + (float)pCVar2 * (float)pCVar2);
  param_1[6].previous_transform_state.dirty_flags =
       (int)(((float)pCVar6 * (float)pCVar6 + (float)pCVar3 * (float)pCVar3) * fVar8 * fVar11);
  param_1[6].scale.x = 0;
  param_1[6].process_disabled = param_1[6].scale.x;
  param_1[6].collision_disabled = param_1[6].process_disabled;
  param_1[6].previous_transform_state.position.y = 0.0;
  param_1[6].previous_transform_state.position.x = param_1[6].previous_transform_state.position.y;
  param_1[6].dead2 = (int)param_1[6].previous_transform_state.position.x;
  param_1[6].platform_orientation_delta.y = 0.0;
  param_1[6].platform_orientation_delta.x = param_1[6].platform_orientation_delta.y;
  param_1[6].platform_position_delta.z = param_1[6].platform_orientation_delta.x;
  param_1[6].blood_effect_timer = 0;
  param_1[6].scale.z = param_1[6].blood_effect_timer;
  param_1[6].scale.y = param_1[6].scale.z;
  param_1[6].is_transparent = 0;
  param_1[6].is_renderable = param_1[6].is_transparent;
  param_1[6].platform_orientation_delta.z = (float)param_1[6].is_renderable;
  param_1[6].dead1 = 0;
  *(int *)param_1[6].footstep_sound_code = param_1[6].dead1;
  param_1[6].blood_effect_color = *(uint *)param_1[6].footstep_sound_code;
  param_1[6].platform_position_delta.y = 0.0;
  param_1[6].platform_position_delta.x = param_1[6].platform_position_delta.y;
  param_1[6].standing_platform = (CPlatform *)param_1[6].platform_position_delta.x;
  iVar16 = 0;
  if (0 < *(int *)param_1[7].actor_name) {
    pfVar15 = &param_1[8].orient_matrix.m[1].z;
    pfVar13 = &param_1[8].orient_matrix.m[0].z;
    do {
      pfVar14 = (float *)((int)param_1 + iVar16 * 0x1b4 + 0x934);
      if (pfVar15 != pfVar14) {
        *pfVar15 = *pfVar14;
        pfVar15[1] = pfVar14[1];
        pfVar15[2] = pfVar14[2];
      }
      pfVar13[2] = 0.0;
      pfVar15 = pfVar15 + 0x6d;
      pfVar13[8] = 0.0;
      iVar16 = iVar16 + 1;
      pfVar13[1] = pfVar13[2];
      pfVar13[7] = pfVar13[8];
      *pfVar13 = pfVar13[1];
      pfVar13[6] = pfVar13[8];
      pfVar13 = pfVar13 + 0x6d;
    } while (iVar16 < *(int *)param_1[7].actor_name);
  }
  param_1[0xc].orient_matrix.m[0].z = 0.0;
  param_1[0xc].orient_matrix.m[1].x = 1.0;
  param_1[0xc].orient_matrix.m[1].y = 0.0;
  param_1[0xc].orient_matrix.m[1].z = 0.0;
  core_course_cpp_CCourse_load_FUN_0043b690
            ((CCourse *)&param_1[0xc].orient_matrix.m[2].y,(char *)&param_1[0xc].direction_hint);
  param_1[0xc].create_event[0x2c] = '\x01';
  param_1[0xc].create_event[0x2d] = '\0';
  param_1[0xc].create_event[0x2e] = '\0';
  param_1[0xc].create_event[0x2f] = '\0';
  param_1[0xc].create_event[0x14] = '\0';
  param_1[0xc].create_event[0x15] = '\0';
  param_1[0xc].create_event[0x16] = '\0';
  param_1[0xc].create_event[0x17] = '\0';
  param_1[0xc].create_event[0x18] = '\0';
  param_1[0xc].create_event[0x19] = '\0';
  param_1[0xc].create_event[0x1a] = '\0';
  param_1[0xc].create_event[0x1b] = '\0';
  param_1[0xc].create_event[0x1c] = '\0';
  param_1[0xc].create_event[0x1d] = '\0';
  param_1[0xc].create_event[0x1e] = '\0';
  param_1[0xc].create_event[0x1f] = '\0';
  return;
}
