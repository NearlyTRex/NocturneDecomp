// Name: core_trash.cpp_FUN_00546e10
// Address: 00546e10
// Address Range: [[00546e10, 00547660]]
// Convention: unknown
// Signature: void core_trash_cpp_FUN_00546e10(CDemonActor *param_1,float param_2)

#include "nocturne.h"

void core_trash_cpp_FUN_00546e10(CDemonActor *param_1,float param_2)

{
  CLocation *pCVar1;
  EActorLifecycleState *pEVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  CVector3f *pCVar10;
  int *piVar11;
  CMatrix3x4f *pCVar12;
  byte bVar13;
  byte local_1a8 [48];
  float local_178 [12];
  CMatrix3x4f local_148;
  byte local_118 [48];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  byte local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar13 = 0;
  iVar8 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(&(param_1->location).position,100.0);
  if (iVar8 == 0) {
    piVar11 = &param_1[2].location.area_id;
    iVar8 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0((CVector3f *)piVar11,100.0);
    if (iVar8 != 0) {
      return;
    }
    (param_1->location).position.x = (float)*piVar11;
    (param_1->location).position.y = param_1[2].orient.vec.x;
    (param_1->location).position.z = param_1[2].orient.vec.y;
    return;
  }
  local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbd4ccccd,0x3d4ccccd);
  pfVar9 = &param_1[2].orient_matrix.m[2].y;
  *pfVar9 = local_14 + *pfVar9;
  local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbd4ccccd,0x3d4ccccd);
  pfVar9 = &param_1[2].orient_matrix.m[2].z;
  *pfVar9 = local_14 + *pfVar9;
  local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbd4ccccd,0x3d4ccccd);
  param_1[2].runtime_state = (int)(local_14 + (float)param_1[2].runtime_state);
  iVar8 = 0x01E57284;
  local_d0 = 0x40800000;
  local_cc = 0;
  local_c8 = 0;
  if ((uint *)(0x01E57284 + 0x15a878) != &local_d0) {
    *(uint *)(0x01E57284 + 0x15a878) = 0x40800000;
    *(uint *)(iVar8 + 0x15a87c) = 0;
    *(uint *)(iVar8 + 0x15a880) = 0;
  }
  fVar4 = (float)param_1[2].direction_hint - param_2;
  param_1[2].direction_hint = (int)fVar4;
  iVar8 = 0x01E57284;
  if (fVar4 <= 0.0) {
    if (&param_1[2].lifecycle_state != (EActorLifecycleState *)(0x01E57284 + 0x15a878)) {
      param_1[2].lifecycle_state = *(EActorLifecycleState *)(0x01E57284 + 0x15a878);
      param_1[2].create_prob = *(float *)(iVar8 + 0x15a87c);
      *(uint *)param_1[2].create_event = *(uint *)(iVar8 + 0x15a880);
    }
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc1200000,0x41200000);
    param_1[2].lifecycle_state =
         (EActorLifecycleState)(local_14 + (float)param_1[2].lifecycle_state);
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41700000,0x41c80000);
    param_1[2].create_prob = local_14 + param_1[2].create_prob;
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc1200000,0x41200000);
    *(float *)param_1[2].create_event = local_14 + *(float *)param_1[2].create_event;
    iVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40c00000,0x41a00000);
    param_1[2].direction_hint = iVar8;
  }
  pEVar2 = &param_1[2].lifecycle_state;
  local_28 = *(float *)(0x01E57284 + 0x15a878) - (float)*pEVar2;
  local_24 = *(float *)(0x01E57284 + 0x15a87c) - param_1[2].create_prob;
  local_ac = local_28 * 0.05f;
  local_20 = *(float *)(0x01E57284 + 0x15a880) - *(float *)param_1[2].create_event;
  local_a8 = local_24 * 0.05f;
  local_a4 = local_20 * 0.05f;
  pfVar9 = &param_1[2].orient_matrix.m[2].y;
  *pEVar2 = (EActorLifecycleState)((float)*pEVar2 + local_ac);
  param_1[2].create_prob = param_1[2].create_prob + local_a8;
  *(float *)param_1[2].create_event = *(float *)param_1[2].create_event + local_a4;
  local_94 = (float)*pEVar2 - *pfVar9;
  local_90 = param_1[2].create_prob - param_1[2].orient_matrix.m[2].z;
  local_40 = local_94 * 0.07f;
  local_8c = *(float *)param_1[2].create_event - (float)param_1[2].runtime_state;
  local_3c = local_90 * 0.07f;
  local_38 = local_8c * 0.07f;
  fVar4 = param_1[2].orient_matrix.m[2].z;
  *pfVar9 = *pfVar9 + local_40;
  fVar5 = (float)param_1[2].runtime_state;
  param_1[2].orient_matrix.m[2].z = fVar4 + local_3c;
  param_1[2].runtime_state = (int)(fVar5 + local_38);
  local_c4 = (param_1->location).position.x;
  local_c0 = (param_1->location).position.y;
  local_bc = (param_1->location).position.z;
  local_14 = -*(float *)(param_1[2].create_event + 4);
  pfVar3 = &param_1[2].orient_matrix.m[0].y;
  local_e8 = *pfVar9 - *pfVar3;
  local_e4 = param_1[2].orient_matrix.m[2].z - param_1[2].orient_matrix.m[0].z;
  piVar11 = &param_1[2].health;
  local_e0 = (float)param_1[2].runtime_state - param_1[2].orient_matrix.m[1].x;
  local_dc = local_e8 * (float)*piVar11;
  local_48 = local_e4 * (float)*piVar11;
  local_d4 = local_e0 * (float)*piVar11;
  local_d8 = local_14 + local_48;
  local_4c = local_dc;
  local_44 = local_d4;
  pfVar9 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                              (param_1,local_70,pfVar9);
  local_a0 = *pfVar9 * 0.5f;
  local_9c = pfVar9[1] * 0.5f;
  local_98 = 0.5f * pfVar9[2];
  pfVar9 = &param_1[2].orient_matrix.m[1].y;
  fVar4 = param_1[2].orient_matrix.m[1].z * 0.8f;
  fVar5 = param_1[2].orient_matrix.m[2].x * 0.8f;
  *pfVar9 = *pfVar9 * 0.8f;
  param_1[2].orient_matrix.m[1].z = fVar4;
  param_1[2].orient_matrix.m[2].x = fVar5;
  fVar4 = param_1[2].orient_matrix.m[1].z;
  *pfVar9 = *pfVar9 + local_a0;
  fVar5 = param_1[2].orient_matrix.m[2].x;
  param_1[2].orient_matrix.m[1].z = fVar4 + local_9c;
  param_1[2].orient_matrix.m[2].x = fVar5 + local_98;
  local_7c = local_dc * param_2;
  local_78 = local_d8 * param_2;
  local_74 = local_d4 * param_2;
  fVar4 = param_1[2].orient_matrix.m[0].z;
  *pfVar3 = *pfVar3 + local_7c;
  fVar5 = param_1[2].orient_matrix.m[1].x;
  param_1[2].orient_matrix.m[0].z = fVar4 + local_78;
  param_1[2].orient_matrix.m[1].x = fVar5 + local_74;
  fVar4 = param_1[2].orient_matrix.m[1].z;
  fVar5 = param_1[2].orient_matrix.m[2].x;
  fVar4 = SQRT(fVar5 * fVar5 + *pfVar9 * *pfVar9 + fVar4 * fVar4) * (float)0.15915494309644401;
  if (1.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
    fVar5 = param_1[2].orient_matrix.m[1].z;
    fVar6 = param_1[2].orient_matrix.m[2].x;
    *pfVar9 = *pfVar9 * fVar4;
    param_1[2].orient_matrix.m[1].z = fVar5 * fVar4;
    param_1[2].orient_matrix.m[2].x = fVar6 * fVar4;
  }
  local_58 = param_1[2].orient_matrix.m[0].y * param_2;
  local_54 = param_1[2].orient_matrix.m[0].z * param_2;
  local_50 = param_1[2].orient_matrix.m[1].x * param_2;
  local_34 = param_1[2].orient_matrix.m[1].y * param_2;
  local_30 = param_1[2].orient_matrix.m[1].z * param_2;
  local_2c = param_2 * param_1[2].orient_matrix.m[2].x;
  local_14 = (float)core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                              (0x01E57284,(param_1->location).position.x,
                               (param_1->location).position.z,local_58,local_50,
                               param_1[2].validation_magic,param_1[2].orient.vec.z,
                               param_1[2].orient_matrix.m[0].x);
  bVar7 = false;
  if ((0.0 <= local_14) && (local_14 < 1.0)) {
    local_58 = local_58 * local_14;
    local_54 = local_54 * local_14;
    local_50 = local_50 * local_14;
    bVar7 = true;
  }
  pCVar1 = &param_1->location;
  fVar4 = (param_1->location).position.y;
  (pCVar1->position).x = (pCVar1->position).x + local_58;
  fVar5 = (param_1->location).position.z;
  (param_1->location).position.y = fVar4 + local_54;
  (param_1->location).position.z = fVar5 + local_50;
  local_1c = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (0x01E57284,pCVar1,
                               (float)param_1[2].validation_magic * (float)0.90000000000000002);
  if (local_1c <= (param_1->location).position.y) {
    if (!bVar7) goto LAB_005474f0;
  }
  else {
    fVar4 = (float)param_1[2].validation_magic;
    fVar5 = (float)1.5;
    (param_1->location).position.y = local_1c;
    if (fVar4 * fVar5 + local_c0 < (param_1->location).position.y) {
      (pCVar1->position).x = local_c4;
      (param_1->location).position.y = local_c0;
      (param_1->location).position.z = local_bc;
    }
  }
  pfVar9 = &param_1[2].orient_matrix.m[1].y;
  fVar4 = param_1[2].orient_matrix.m[1].z * 0.7f;
  fVar5 = param_1[2].orient_matrix.m[2].x * 0.7f;
  *pfVar9 = *pfVar9 * 0.7f;
  param_1[2].orient_matrix.m[1].z = fVar4;
  param_1[2].orient_matrix.m[2].x = fVar5;
LAB_005474f0:
  local_64 = (param_1->location).position.x - local_c4;
  local_60 = (param_1->location).position.y - local_c0;
  local_b0 = 1.0 / param_2;
  local_b8 = local_64 * local_b0;
  local_5c = (param_1->location).position.z - local_bc;
  local_b4 = local_60 * local_b0;
  local_b0 = local_5c * local_b0;
  pfVar9 = &param_1[2].orient_matrix.m[0].y;
  if (pfVar9 != &local_b8) {
    *pfVar9 = local_b8;
    param_1[2].orient_matrix.m[0].z = local_b4;
    param_1[2].orient_matrix.m[1].x = local_b0;
  }
  local_18 = (CVector3f *)&param_1->orient;
  local_14 = local_1c;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (local_1a8,&DAT_02dd1184,local_18);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (local_118,&DAT_02dd1184,&local_34);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_118,local_1a8);
  pfVar9 = local_178;
  pCVar12 = &local_148;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    pCVar12->m[0].w = *pfVar9;
    pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
    pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
  }
  pCVar10 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_148,&local_88);
  if (pCVar10 != local_18) {
    local_18->x = pCVar10->x;
    local_18->y = pCVar10->y;
    local_18->z = pCVar10->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  return;
}
