// Name: core_trash.cpp_FUN_00546e10
// Address: 00546e10
// Address Range: [[00546e10, 00547660]]
// Convention: unknown
// Signature: void core_trash_cpp_FUN_00546e10(CDemonActor *param_1,float param_2)

#include "nocturne.h"

void core_trash_cpp_FUN_00546e10(CDemonActor *param_1,float param_2)

{
  CLocation *position;
  EActorLifecycleState *pEVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  CDemonSet *pCVar6;
  int iVar7;
  float fVar8;
  CVector3f *pCVar9;
  int *piVar10;
  float *pfVar11;
  CMatrix3x4f *pCVar12;
  byte bVar13;
  CMatrix3x4f local_1a8;
  float local_178 [12];
  CMatrix3x4f local_148;
  CMatrix3x4f local_118;
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
  CVector3f local_70;
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
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar13 = 0;
  iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(&(param_1->location).position,100.0);
  if (iVar7 == 0) {
    piVar10 = &param_1[2].location.area_id;
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0((CVector3f *)piVar10,100.0);
    if (iVar7 != 0) {
      return;
    }
    (param_1->location).position.x = (float)*piVar10;
    (param_1->location).position.y = param_1[2].orient.vec.x;
    (param_1->location).position.z = param_1[2].orient.vec.y;
    return;
  }
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.05,0.05);
  pfVar11 = &param_1[2].orient_matrix.m[2].y;
  *pfVar11 = local_14 + *pfVar11;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.05,0.05);
  pfVar11 = &param_1[2].orient_matrix.m[2].z;
  *pfVar11 = local_14 + *pfVar11;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.05,0.05);
  param_1[2].runtime_state = (int)(local_14 + (float)param_1[2].runtime_state);
  pCVar6 = 0x01E57284;
  local_d0 = 0x40800000;
  local_cc = 0;
  local_c8 = 0;
  if (0x01E57284->renderable_actors + 0x6e2 != (CDemonActor **)&local_d0) {
    0x01E57284->renderable_actors[0x6e2] = (CDemonActor *)0x40800000;
    pCVar6->renderable_actors[0x6e3] = (CDemonActor *)0x0;
    pCVar6->renderable_actors[0x6e4] = (CDemonActor *)0x0;
  }
  fVar8 = (float)param_1[2].direction_hint - param_2;
  param_1[2].direction_hint = (int)fVar8;
  pCVar6 = 0x01E57284;
  if (fVar8 <= 0.0) {
    if ((CDemonActor **)&param_1[2].lifecycle_state != 0x01E57284->renderable_actors + 0x6e2) {
      param_1[2].lifecycle_state = (EActorLifecycleState)0x01E57284->renderable_actors[0x6e2];
      param_1[2].create_prob = (float)pCVar6->renderable_actors[0x6e3];
      *(CDemonActor **)param_1[2].create_event = pCVar6->renderable_actors[0x6e4];
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-10.0,10.0);
    param_1[2].lifecycle_state =
         (EActorLifecycleState)(local_14 + (float)param_1[2].lifecycle_state);
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(15.0,25.0);
    param_1[2].create_prob = local_14 + param_1[2].create_prob;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-10.0,10.0);
    *(float *)param_1[2].create_event = local_14 + *(float *)param_1[2].create_event;
    fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(6.0,20.0);
    param_1[2].direction_hint = (int)fVar8;
  }
  pEVar1 = &param_1[2].lifecycle_state;
  local_28 = (float)0x01E57284->renderable_actors[0x6e2] - (float)*pEVar1;
  local_24 = (float)0x01E57284->renderable_actors[0x6e3] - param_1[2].create_prob;
  local_ac = local_28 * 0.05f;
  local_20 = (float)0x01E57284->renderable_actors[0x6e4] - *(float *)param_1[2].create_event;
  local_a8 = local_24 * 0.05f;
  local_a4 = local_20 * 0.05f;
  pfVar11 = &param_1[2].orient_matrix.m[2].y;
  *pEVar1 = (EActorLifecycleState)((float)*pEVar1 + local_ac);
  param_1[2].create_prob = param_1[2].create_prob + local_a8;
  *(float *)param_1[2].create_event = *(float *)param_1[2].create_event + local_a4;
  local_94 = (float)*pEVar1 - *pfVar11;
  local_90 = param_1[2].create_prob - param_1[2].orient_matrix.m[2].z;
  local_40 = local_94 * 0.07f;
  local_8c = *(float *)param_1[2].create_event - (float)param_1[2].runtime_state;
  local_3c = local_90 * 0.07f;
  local_38 = local_8c * 0.07f;
  fVar8 = param_1[2].orient_matrix.m[2].z;
  *pfVar11 = *pfVar11 + local_40;
  fVar3 = (float)param_1[2].runtime_state;
  param_1[2].orient_matrix.m[2].z = fVar8 + local_3c;
  param_1[2].runtime_state = (int)(fVar3 + local_38);
  local_c4 = (param_1->location).position.x;
  local_c0 = (param_1->location).position.y;
  local_bc = (param_1->location).position.z;
  local_14 = -*(float *)(param_1[2].create_event + 4);
  pfVar2 = &param_1[2].orient_matrix.m[0].y;
  local_e8 = *pfVar11 - *pfVar2;
  local_e4 = param_1[2].orient_matrix.m[2].z - param_1[2].orient_matrix.m[0].z;
  piVar10 = &param_1[2].health;
  local_e0 = (float)param_1[2].runtime_state - param_1[2].orient_matrix.m[1].x;
  local_dc = local_e8 * (float)*piVar10;
  local_48 = local_e4 * (float)*piVar10;
  local_d4 = local_e0 * (float)*piVar10;
  local_d8 = local_14 + local_48;
  local_4c = local_dc;
  local_44 = local_d4;
  pCVar9 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                     (param_1,&local_70,(CVector3f *)pfVar11);
  local_a0 = pCVar9->x * 0.5f;
  local_9c = pCVar9->y * 0.5f;
  local_98 = 0.5f * pCVar9->z;
  pfVar11 = &param_1[2].orient_matrix.m[1].y;
  fVar8 = param_1[2].orient_matrix.m[1].z * 0.8f;
  fVar3 = param_1[2].orient_matrix.m[2].x * 0.8f;
  *pfVar11 = *pfVar11 * 0.8f;
  param_1[2].orient_matrix.m[1].z = fVar8;
  param_1[2].orient_matrix.m[2].x = fVar3;
  fVar8 = param_1[2].orient_matrix.m[1].z;
  *pfVar11 = *pfVar11 + local_a0;
  fVar3 = param_1[2].orient_matrix.m[2].x;
  param_1[2].orient_matrix.m[1].z = fVar8 + local_9c;
  param_1[2].orient_matrix.m[2].x = fVar3 + local_98;
  local_7c = local_dc * param_2;
  local_78 = local_d8 * param_2;
  local_74 = local_d4 * param_2;
  fVar8 = param_1[2].orient_matrix.m[0].z;
  *pfVar2 = *pfVar2 + local_7c;
  fVar3 = param_1[2].orient_matrix.m[1].x;
  param_1[2].orient_matrix.m[0].z = fVar8 + local_78;
  param_1[2].orient_matrix.m[1].x = fVar3 + local_74;
  fVar8 = param_1[2].orient_matrix.m[1].z;
  fVar3 = param_1[2].orient_matrix.m[2].x;
  fVar8 = SQRT(fVar3 * fVar3 + *pfVar11 * *pfVar11 + fVar8 * fVar8) * (float)0.15915494309644401;
  if (1.0 < fVar8) {
    fVar8 = 1.0 / fVar8;
    fVar3 = param_1[2].orient_matrix.m[1].z;
    fVar4 = param_1[2].orient_matrix.m[2].x;
    *pfVar11 = *pfVar11 * fVar8;
    param_1[2].orient_matrix.m[1].z = fVar3 * fVar8;
    param_1[2].orient_matrix.m[2].x = fVar4 * fVar8;
  }
  local_58 = param_1[2].orient_matrix.m[0].y * param_2;
  local_54 = param_1[2].orient_matrix.m[0].z * param_2;
  local_50 = param_1[2].orient_matrix.m[1].x * param_2;
  local_34.x = param_1[2].orient_matrix.m[1].y * param_2;
  local_34.y = param_1[2].orient_matrix.m[1].z * param_2;
  local_34.z = param_2 * param_1[2].orient_matrix.m[2].x;
  local_14 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                       (0x01E57284,(param_1->location).position.x,(param_1->location).position.z,
                        local_58,local_50,(float)param_1[2].validation_magic,param_1[2].orient.vec.z
                        ,param_1[2].orient_matrix.m[0].x);
  bVar5 = false;
  if ((0.0 <= local_14) && (local_14 < 1.0)) {
    local_58 = local_58 * local_14;
    local_54 = local_54 * local_14;
    local_50 = local_50 * local_14;
    bVar5 = true;
  }
  position = &param_1->location;
  fVar8 = (param_1->location).position.y;
  (position->position).x = (position->position).x + local_58;
  fVar3 = (param_1->location).position.z;
  (param_1->location).position.y = fVar8 + local_54;
  (param_1->location).position.z = fVar3 + local_50;
  local_1c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                       (0x01E57284,&position->position,
                        (float)param_1[2].validation_magic * (float)0.90000000000000002);
  if (local_1c <= (param_1->location).position.y) {
    if (!bVar5) goto LAB_005474f0;
  }
  else {
    fVar8 = (float)param_1[2].validation_magic;
    fVar3 = (float)1.5;
    (param_1->location).position.y = local_1c;
    if (fVar8 * fVar3 + local_c0 < (param_1->location).position.y) {
      (position->position).x = local_c4;
      (param_1->location).position.y = local_c0;
      (param_1->location).position.z = local_bc;
    }
  }
  pfVar11 = &param_1[2].orient_matrix.m[1].y;
  fVar8 = param_1[2].orient_matrix.m[1].z * 0.7f;
  fVar3 = param_1[2].orient_matrix.m[2].x * 0.7f;
  *pfVar11 = *pfVar11 * 0.7f;
  param_1[2].orient_matrix.m[1].z = fVar8;
  param_1[2].orient_matrix.m[2].x = fVar3;
LAB_005474f0:
  local_64 = (param_1->location).position.x - local_c4;
  local_60 = (param_1->location).position.y - local_c0;
  local_b0 = 1.0 / param_2;
  local_b8 = local_64 * local_b0;
  local_5c = (param_1->location).position.z - local_bc;
  local_b4 = local_60 * local_b0;
  local_b0 = local_5c * local_b0;
  pfVar11 = &param_1[2].orient_matrix.m[0].y;
  if (pfVar11 != &local_b8) {
    *pfVar11 = local_b8;
    param_1[2].orient_matrix.m[0].z = local_b4;
    param_1[2].orient_matrix.m[1].x = local_b0;
  }
  local_18 = (CVector3f *)&param_1->orient;
  local_14 = local_1c;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (&local_1a8,(CVector3f *)&DAT_02dd1184,local_18);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (&local_118,(CVector3f *)&DAT_02dd1184,&local_34);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_118,&local_1a8);
  pfVar11 = local_178;
  pCVar12 = &local_148;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    pCVar12->m[0].w = *pfVar11;
    pfVar11 = pfVar11 + (uint)bVar13 * -2 + 1;
    pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
  }
  pCVar9 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_148,&local_88);
  if (pCVar9 != local_18) {
    local_18->x = pCVar9->x;
    local_18->y = pCVar9->y;
    local_18->z = pCVar9->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  return;
}
