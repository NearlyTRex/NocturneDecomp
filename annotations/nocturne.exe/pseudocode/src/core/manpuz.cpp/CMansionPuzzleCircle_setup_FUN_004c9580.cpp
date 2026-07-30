// Name: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_004c9580
// Address: 004c9580
// Address Range: [[004c9580, 004c9bdc]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_004c9580(CDemonActor *param_1)

#include "nocturne.h"

void core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_004c9580(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  UActorVTable UVar5;
  float fVar6;
  float fVar7;
  CKeyFramedModel *pCVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  int iVar11;
  char *pcVar12;
  float *pfVar13;
  uint uVar14;
  CMatrix3x4f *pCVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float local_1dc [12];
  CMatrix3x4f local_1ac;
  CMatrix3x4f local_17c;
  CVector3f local_14c;
  CVector3f local_140;
  CVector3f local_134;
  CVector3f local_128;
  CMatrix3x4f local_11c;
  CMatrix3x3f local_ec;
  int local_c4;
  float local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  uint local_a8;
  float local_a4;
  float local_a0;
  uint local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  int local_38;
  char *local_34;
  CLocation *local_30;
  char *local_2c;
  CVector3f *local_28;
  char *local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar16 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)&param_1[2].location.area_id);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)&param_1[3].orient_matrix.m[2].y);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&param_1[0xf].scale);
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  local_c4 = pCVar8->texture_list[7].textures[1].base.count;
  local_c0 = *(float *)pCVar8->texture_list[7].textures[1].texture_name;
  local_bc = *(uint *)(pCVar8->texture_list[7].textures[1].texture_name + 4);
  local_b8 = *(uint *)(pCVar8->texture_list[7].textures[1].texture_name + 8);
  local_b4 = *(float *)(pCVar8->texture_list[7].textures[1].texture_name + 0xc);
  local_b0 = (float)pCVar8->texture_list[7].textures[2].base.type;
  param_1[0x10].actor_name[4] = -0x3f;
  param_1[0x10].actor_name[5] = '9';
  param_1[0x10].actor_name[6] = 'B';
  param_1[0x10].actor_name[7] = 'A';
  fVar17 = (float10)fcos((float10)0.5235988f * (float10)0.5);
  fVar1 = *(float *)(param_1[4].create_event + 0x28);
  fVar2 = *(float *)(param_1[4].create_event + 0x24);
  fVar3 = *(float *)(param_1[4].create_event + 0x2c);
  *(float *)param_1[0x10].actor_name =
       (float)(((float10)*(float *)(param_1[0x10].actor_name + 4) + (float10)local_b0) / fVar17);
  *(float *)(param_1[0x10].actor_name + 8) = local_b4 - local_c0;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    fVar1 = *(float *)(param_1[0x10].actor_name + 8);
    param_1[4].create_event[0x24] = '\0';
    param_1[4].create_event[0x25] = '\0';
    param_1[4].create_event[0x26] = '\0';
    param_1[4].create_event[0x27] = '\0';
    fVar2 = (float)2;
    param_1[4].create_event[0x2c] = -0x33;
    param_1[4].create_event[0x2d] = -0x34;
    param_1[4].create_event[0x2e] = -0x74;
    param_1[4].create_event[0x2f] = -0x41;
    *(float *)(param_1[4].create_event + 0x28) = fVar1 + fVar2;
  }
  if (SQRT(*(float *)(param_1[4].create_event + 0x14) * *(float *)(param_1[4].create_event + 0x14) +
           *(float *)(param_1[4].create_event + 0xc) * *(float *)(param_1[4].create_event + 0xc) +
           *(float *)(param_1[4].create_event + 0x10) * *(float *)(param_1[4].create_event + 0x10))
      == 0.0) {
    param_1[4].create_event[0x10] = '\0';
    param_1[4].create_event[0x11] = '\0';
    param_1[4].create_event[0x12] = '@';
    param_1[4].create_event[0x13] = '@';
    param_1[4].create_event[0x14] = -0x33;
    param_1[4].create_event[0x15] = -0x34;
    param_1[4].create_event[0x16] = -0x34;
    param_1[4].create_event[0x17] = -0x43;
    param_1[4].create_event[0xc] = '\0';
    param_1[4].create_event[0xd] = '\0';
    param_1[4].create_event[0xe] = '\0';
    param_1[4].create_event[0xf] = '\0';
  }
  local_18 = local_b0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (&local_17c,(CVector3f *)(param_1[4].create_event + 0xc),
             (CVector3f *)(param_1[4].create_event + 0x18));
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)&param_1[2].location.area_id);
  local_ac = (float)pCVar8->texture_list[7].textures[1].base.count;
  local_a8 = *(uint *)pCVar8->texture_list[7].textures[1].texture_name;
  local_a4 = *(float *)(pCVar8->texture_list[7].textures[1].texture_name + 4);
  local_a0 = *(float *)(pCVar8->texture_list[7].textures[1].texture_name + 8);
  local_9c = *(uint *)(pCVar8->texture_list[7].textures[1].texture_name + 0xc);
  local_98 = (float)pCVar8->texture_list[7].textures[2].base.type;
  local_34 = param_1[8].actor_name + 0x18;
  local_28 = param_1[8].orient_matrix.m;
  local_2c = param_1[8].actor_name + 0x1c;
  local_30 = &param_1[8].location;
  local_38 = 0;
  do {
    iVar11 = local_38;
    core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(param_1,local_38);
    pcVar12 = local_34 + iVar11 * 0xb8;
    local_24 = pcVar12;
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20
              (param_1,iVar11,pcVar12,local_2c,local_30);
    *(int *)(pcVar12 + 0x14) = 0;
    *(float *)(pcVar12 + 0x10) = *(float *)(pcVar12 + 0x14);
    *(uint *)(pcVar12 + 0x20) = 0;
    *(float *)(pcVar12 + 0xc) = *(float *)(pcVar12 + 0x10);
    *(uint *)(pcVar12 + 0x1c) = *(uint *)(pcVar12 + 0x20);
    local_14 = iVar11;
    local_94.y = (float)iVar11 * 0.5235988f;
    pcVar12[0xac] = '\0';
    pcVar12[0xad] = '\0';
    pcVar12[0xae] = '\0';
    pcVar12[0xaf] = '\0';
    pcVar12[0xb0] = '\0';
    pcVar12[0xb1] = '\0';
    pcVar12[0xb2] = '\0';
    pcVar12[0xb3] = '\0';
    (((UOrientationVector *)(pcVar12 + 0x18))->vec).x = *(float *)(pcVar12 + 0x1c);
    pcVar12[0xb4] = '\0';
    pcVar12[0xb5] = '\0';
    pcVar12[0xb6] = '\0';
    pcVar12[0xb7] = '\0';
    local_94.x = 0.0;
    local_94.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_ec,&local_94);
    pCVar10 = &local_94;
    local_88.z = *(float *)(param_1[0x10].actor_name + 4);
    local_88.x = 0.0;
    local_88.y = 0.0;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_ec,&local_7c,&local_88)
    ;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_1ac,pCVar9,pCVar10);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_17c,&local_1ac);
    pfVar13 = local_1dc;
    pCVar15 = &local_11c;
    for (iVar11 = 0xc; pCVar10 = local_28, iVar11 != 0; iVar11 = iVar11 + -1) {
      pCVar15->m[0].w = *pfVar13;
      pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar16 * -2 + 1) * 4);
    }
    pCVar9 = core_xform_cpp_getTranslation_FUN_0055bc00(&local_11c,&local_4c);
    pcVar12 = local_24;
    if (pCVar9 != pCVar10) {
      pCVar10->x = pCVar9->x;
      pCVar10->y = pCVar9->y;
      pCVar10->z = pCVar9->z;
    }
    pCVar9 = (CVector3f *)(local_24 + 0x30);
    pCVar10 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_11c,&local_64);
    if (pCVar9 != pCVar10) {
      pCVar9->x = pCVar10->x;
      *(float *)(pcVar12 + 0x34) = pCVar10->y;
      *(float *)(pcVar12 + 0x38) = pCVar10->z;
    }
    pCVar10 = &local_14c;
    uVar14 = 0;
    __arrinit(&local_14c,4,&g_CVectorTypeInfo_005993b0);
    do {
      local_70.y = 0.0;
      local_70.x = local_ac;
      if ((uVar14 & 1) != 0) {
        local_70.x = local_a0;
      }
      local_70.z = local_a4;
      if ((uVar14 & 2) != 0) {
        local_70.z = local_98;
      }
      local_20 = local_70.x;
      local_1c = local_70.z;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_58,&local_70,&local_11c);
      if (pCVar10 != pCVar9) {
        pCVar10->x = pCVar9->x;
        pCVar10->y = pCVar9->y;
        pCVar10->z = pCVar9->z;
      }
      uVar14 = uVar14 + 1;
      pCVar10 = pCVar10 + 1;
    } while ((int)uVar14 < 4);
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
              ((CDemonTriangle *)(local_24 + 0x3c),&local_134,&local_140,&local_14c);
    local_30 = (CLocation *)((int)(local_30 + 0xb) + 8);
    iVar11 = local_38 + 1;
    local_38 = iVar11;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
              ((CDemonTriangle *)(local_24 + 0x74),&local_134,&local_128,&local_140);
    local_28 = (CVector3f *)&local_28[0xf].y;
    local_2c = local_2c + 0xb8;
  } while (iVar11 < 0xc);
  fVar17 = (float10)fcos((float10)0.5235988f);
  fVar18 = (float10)fsin((float10)0.5235988f);
  fVar1 = *(float *)(param_1[4].create_event + 0x10);
  fVar7 = (float)0.75;
  fVar19 = (float10)0.5;
  fVar2 = *(float *)(param_1[0x10].actor_name + 4);
  pfVar13 = &param_1[0xe].platform_position_delta.y;
  fVar3 = *(float *)(param_1[4].create_event + 0x28);
  fVar6 = (float)0.25;
  param_1[0xe].platform_orientation_delta.x =
       (float)(fVar17 * (float10)*(float *)(param_1[0x10].actor_name + 4) * fVar19);
  *pfVar13 = (float)((float10)fVar2 * fVar18 * fVar19);
  param_1[0xe].platform_position_delta.z = fVar3 * fVar6 + fVar1 * fVar7;
  if ((float *)(param_1[0xe].create_event + 0x60) != pfVar13) {
    *(float *)(param_1[0xe].create_event + 0x60) = *pfVar13;
    param_1[0xe].standing_platform = (CPlatform *)param_1[0xe].platform_position_delta.z;
    param_1[0xe].platform_position_delta.x = param_1[0xe].platform_orientation_delta.x;
  }
  param_1[0xe].collision_disabled = -0x425b218f;
  param_1[0xe].scale.x = 0;
  param_1[0xe].process_disabled = -0x403ad624;
  param_1[0xe].standing_platform =
       (CPlatform *)((float)param_1[0xe].standing_platform + -4.0f);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            ((CMatrix3x3f *)&param_1[0xe].scale.y,(CVector3f *)&param_1[0xe].collision_disabled);
  fVar1 = *(float *)(param_1[0xe].create_event + 0x60);
  fVar2 = param_1[0xe].platform_position_delta.x;
  pCVar4 = (CDemonActor *)param_1[0xe].platform_position_delta.z;
  fVar3 = param_1[0xe].platform_position_delta.y;
  UVar5 = (UActorVTable)param_1[0xe].platform_orientation_delta.x;
  fVar6 = (float)param_1[0xe].collision_disabled;
  param_1[0xe].previous_transform_state.orientation.vec.z = (float)param_1[0xe].standing_platform;
  iVar11 = param_1[0xe].scale.x;
  param_1[0xe].previous_transform_state.dirty_flags = (int)fVar2;
  fVar2 = (float)param_1[0xe].process_disabled;
  param_1[0xe].prev_actor = pCVar4;
  param_1[0xe].vtable = UVar5;
  ((CVector3f *)(param_1[0xf].actor_name + 0x10))->x = fVar6;
  *(int *)(param_1[0xf].actor_name + 0x18) = iVar11;
  param_1[0xe].previous_transform_state.orientation.vec.y = -fVar1;
  param_1[0xe].next_actor = (CDemonActor *)-fVar3;
  *(float *)(param_1[0xf].actor_name + 0x14) = -fVar2;
  iVar11 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            ((CMatrix3x3f *)(param_1[0xf].actor_name + 0x1c),
             (CVector3f *)(param_1[0xf].actor_name + 0x10));
  do {
    core_manpuz_cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980(param_1,iVar11);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 2);
  return;
}
