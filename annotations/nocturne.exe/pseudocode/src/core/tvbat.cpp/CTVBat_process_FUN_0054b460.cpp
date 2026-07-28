// Name: core_tvbat.cpp_CTVBat_process_FUN_0054b460
// Address: 0054b460
// Address Range: [[0054b460, 0054bfb4]]
// Convention: unknown
// Signature: void core_tvbat_cpp_CTVBat_process_FUN_0054b460(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tvbat_cpp_CTVBat_process_FUN_0054b460(CDemonActor *param_1,float param_2)

{
  CLocation *pCVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  CKeyFramedModel *pCVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  uint uVar20;
  uint uVar21;
  float local_178;
  float local_170;
  SDamageInfo local_16c;
  SCollisionInfo SStack_130;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_58;
  float local_54;
  float local_50;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_28;
  float fStack_24;
  float local_20;
  int local_18;
  
  if ((*(int *)(param_1[0x91].create_event + 4) != 0) && (param_1[0x91].scale.x == 0)) {
    iVar14 = 0;
    for (iVar15 = 0; iVar15 < *(int *)(0x01E57284 + 0x150bf4); iVar15 = iVar15 + 1) {
      iVar10 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (*(CDemonActor **)(iVar14 + 0x150bf8 + 0x01E57284),
                          "CVampireBoss");
      if (iVar10 != 0) {
        param_1[0x91].scale.x = *(int *)(iVar14 + 0x150bf8 + 0x01E57284);
        break;
      }
      iVar14 = iVar14 + 4;
    }
  }
  if ((*(int *)(param_1[0x91].create_event + 4) != 0) &&
     (iVar14 = param_1[0x91].scale.x, iVar14 != 0)) {
    pfVar3 = &param_1[0x91].orient_matrix.m[2].z;
    if (pfVar3 != (float *)(iVar14 + 0x20)) {
      *pfVar3 = *(float *)(iVar14 + 0x20);
      param_1[0x91].runtime_state = *(int *)(iVar14 + 0x24);
      param_1[0x91].health = *(int *)(iVar14 + 0x28);
    }
    param_1[0x91].runtime_state = (int)((float)param_1[0x91].runtime_state + 4.0f);
  }
  iVar14 = *(int *)(param_1[0x91].create_event + 0x18);
  if (iVar14 == 2) {
    return;
  }
  if (iVar14 == 3) {
    return;
  }
  pCVar1 = &param_1->location;
  pfVar3 = &(param_1->location).position.z;
  pfVar2 = &(param_1->location).position.y;
  if (iVar14 == 1) {
    local_dc = (pCVar1->position).x;
    local_d8 = *pfVar2;
    local_d4 = *pfVar3;
    *(float *)(param_1[0x91].create_event + 0x10) =
         param_2 * (float)-32 + *(float *)(param_1[0x91].create_event + 0x10);
    local_94 = *(float *)(param_1[0x91].create_event + 0xc) * param_2;
    local_90 = *(float *)(param_1[0x91].create_event + 0x10) * param_2;
    local_8c = *(float *)(param_1[0x91].create_event + 0x14) * param_2;
    fVar12 = (param_1->location).position.y;
    (pCVar1->position).x = (pCVar1->position).x + local_94;
    fVar4 = (param_1->location).position.z;
    (param_1->location).position.y = fVar12 + local_90;
    (param_1->location).position.z = fVar4 + local_8c;
    (param_1->orient).vec.z =
         param_2 * (float)param_1[0x91].lifecycle_state * 2.0f + (param_1->orient).vec.z;
    fVar12 = (float)core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00();
    if ((0.0 <= fVar12) && (fVar12 < 1.0)) {
      fVar4 = ((param_1->location).position.y - local_d8) * fVar12 * 0.8f;
      fVar5 = ((param_1->location).position.z - local_d4) * fVar12 * 0.8f;
      (pCVar1->position).x = local_dc + ((pCVar1->position).x - local_dc) * fVar12 * 0.8f;
      (param_1->location).position.y = local_d8 + fVar4;
      (param_1->location).position.z = local_d4 + fVar5;
      param_1[0x91].create_event[0x14] = '\0';
      param_1[0x91].create_event[0x15] = '\0';
      param_1[0x91].create_event[0x16] = '\0';
      param_1[0x91].create_event[0x17] = '\0';
      *(uint *)(param_1[0x91].create_event + 0x10) =
           *(uint *)(param_1[0x91].create_event + 0x14);
      *(float *)(param_1[0x91].create_event + 0xc) = *(float *)(param_1[0x91].create_event + 0x10);
    }
    if (&local_88 != &local_d0) {
      local_88 = local_dc - (param_1->location).position.x;
      local_84 = local_d8 - (param_1->location).position.y;
      local_80 = local_d4 - (param_1->location).position.z;
    }
    if ((float)0.10000000000000001 <=
        SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84)) {
      return;
    }
    param_1[0x91].create_event[0x18] = '\x02';
    param_1[0x91].create_event[0x19] = '\0';
    param_1[0x91].create_event[0x1a] = '\0';
    param_1[0x91].create_event[0x1b] = '\0';
    return;
  }
  local_7c = (pCVar1->position).x;
  local_78 = *pfVar2;
  local_74 = *pfVar3;
  if (*(int *)(param_1[0x91].create_event + 4) == 0) {
    fVar12 = *(float *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    param_1[0x8f].platform_orientation_delta.z = fVar12;
    if (fVar12 != 0.0) {
      if (&local_58 != (float *)((int)fVar12 + 0x20)) {
        local_58 = *(float *)((int)fVar12 + 0x20);
        local_54 = *(float *)((int)fVar12 + 0x24);
        local_50 = *(float *)((int)fVar12 + 0x28);
      }
      local_18 = param_1->direction_hint % 8 + -4;
      local_54 = (float)local_18 * (float)0.5 +
                 *(float *)param_1[0x91].create_event + (float)4 + local_54;
      goto LAB_0054b592;
    }
  }
  else {
    param_1[0x8f].platform_orientation_delta.z = 0.0;
  }
  pfVar3 = &param_1[0x91].orient_matrix.m[2].z;
  if (&local_58 != pfVar3) {
    local_58 = *pfVar3;
    local_54 = (float)param_1[0x91].runtime_state;
    local_50 = (float)param_1[0x91].health;
  }
LAB_0054b592:
  local_b8 = param_1[0x91].orient_matrix.m[2].z - (param_1->location).position.x;
  local_b4 = (float)param_1[0x91].runtime_state - (param_1->location).position.y;
  local_b0 = (float)param_1[0x91].health - (param_1->location).position.z;
  if (&local_88 != &local_b8) {
    local_88 = local_b8;
    local_84 = local_b4;
    local_80 = local_b0;
  }
  if ((((float)param_1[0x91].validation_magic <=
        SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84)) ||
      ((float)param_1[0x91].direction_hint <= ABS(local_84))) &&
     (pfVar3 = &param_1[0x91].orient_matrix.m[2].z, &local_58 != pfVar3)) {
    local_58 = *pfVar3;
    local_54 = (float)param_1[0x91].runtime_state;
    local_50 = (float)param_1[0x91].health;
  }
  if (0.0 < *(float *)(param_1[0x91].create_event + 8)) {
    fVar12 = *(float *)(param_1[0x91].create_event + 8) - param_2;
    *(float *)(param_1[0x91].create_event + 8) = fVar12;
    if (fVar12 < 0.0) {
      param_1[0x91].create_event[8] = '\0';
      param_1[0x91].create_event[9] = '\0';
      param_1[0x91].create_event[10] = '\0';
      param_1[0x91].create_event[0xb] = '\0';
    }
    if (*0x01CEA280 != 0) {
      PTR_01cc4800 = "..\\core\\tvbat.cpp";
      INT_01cc4804 = 0x10a;
      core_main_c_FUN_004c8440("CTVBat::process - can't follow orders in network game!");
    }
    iVar14 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_58 != (float *)(iVar14 + 0x20)) {
      local_58 = *(float *)(iVar14 + 0x20);
      local_54 = *(float *)(iVar14 + 0x24);
      local_50 = *(float *)(iVar14 + 0x28);
    }
    local_54 = *(float *)param_1[0x91].create_event + (float)4 + local_54;
    param_1[0x8f].platform_orientation_delta.z = *(float *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  }
  local_70 = local_58 - (param_1->location).position.x;
  local_6c = local_54 - (param_1->location).position.y;
  local_68 = local_50 - (param_1->location).position.z;
  if (&local_88 != &local_70) {
    local_88 = local_70;
    local_84 = local_6c;
    local_80 = local_68;
  }
  uVar21 = 0x54b7af;
  atan2((float10)local_88,(float10)local_80);
  fVar16 = SQRT((float10)local_8c * (float10)local_8c + (float10)local_84 * (float10)local_84);
  uVar20 = 0x54b7d9;
  fVar17 = atan2((float10)local_88,fVar16);
  fStack_24 = (float)fVar16;
  fStack_28 = (float)-fVar17;
  if ((param_1[0x8f].platform_orientation_delta.z != 0.0) &&
     (*(int *)(param_1[0x91].create_event + 4) != 0)) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_130);
    fVar12 = param_1[0x8f].platform_orientation_delta.z;
    (**(code **)(*(int *)((int)fVar12 + 0x14c) + 0x34))(fVar12,&SStack_130,uVar20,uVar21);
    fVar12 = param_1[0x8f].platform_orientation_delta.z;
    local_f0 = (param_1->location).position.x - *(float *)((int)fVar12 + 0x20);
    local_ec = (param_1->location).position.y - *(float *)((int)fVar12 + 0x24);
    fStack_e8 = (param_1->location).position.z - *(float *)((int)fVar12 + 0x28);
    if (&local_90 != &local_f0) {
      local_90 = local_f0;
      local_8c = local_ec;
      local_88 = fStack_e8;
    }
    if (((SStack_130.cylinder_bottom_y <= local_8c) && (local_8c <= SStack_130.cylinder_top_y)) &&
       (local_178 < (float)2)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_16c);
      local_16c.damage_amount = 1.0;
      local_16c.attacker = param_1;
      local_16c.wielder = param_1;
      fVar12 = param_1[0x8f].platform_orientation_delta.z;
      (**(code **)(*(int *)((int)fVar12 + 0x14c) + 0x100))(fVar12,&local_16c);
      if (0.0 < local_16c.damage_amount) {
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                  ((CGore *)INT_005b96c4,&(param_1->location).position,(CVector3f *)0x0,3,0);
      }
    }
  }
  fVar16 = (float10)(param_1->orient).vec.x;
  fVar17 = (float10)fsin(fVar16);
  fVar18 = (float10)(param_1->orient).vec.y;
  fVar19 = (float10)fsin(fVar18);
  fVar16 = (float10)fcos(fVar16);
  fVar18 = (float10)fcos(fVar18);
  fStack_38 = (float)-fVar17;
  fStack_3c = (float)(fVar19 * fVar16);
  fStack_44 = (float)(fVar18 * fVar16);
  fStack_24 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (fStack_24 - (param_1->orient).vec.y);
  (param_1->orient).vec.y =
       fStack_24 * param_2 * (float)param_1[0x91].lifecycle_state + (param_1->orient).vec.y;
  local_20 = fStack_24;
  fStack_28 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (fStack_28 - (param_1->orient).vec.x);
  fVar12 = param_1[0x91].create_prob;
  fVar4 = param_1[0x91].create_prob;
  fVar5 = param_1[0x91].create_prob;
  fVar6 = param_1[0x91].create_prob;
  fVar9 = (float)0.33333333333333298;
  fVar7 = (float)param_1[0x91].lifecycle_state;
  *(float *)(param_1[0x91].create_event + 0xc) = param_1[0x91].create_prob * fStack_3c;
  fVar8 = param_1[0x91].create_prob;
  *(float *)(param_1[0x91].create_event + 0x10) = fVar12 * fStack_38;
  *(float *)(param_1[0x91].create_event + 0x14) = fVar8 * fStack_44;
  (param_1->orient).vec.z = -fStack_24 * fVar9;
  fVar12 = (param_1->location).position.y;
  fVar8 = (param_1->location).position.z;
  fVar9 = (param_1->orient).vec.x;
  (param_1->location).position.x = fStack_3c * fVar4 * param_2 + (param_1->location).position.x;
  (param_1->location).position.y = fStack_38 * fVar5 * param_2 + fVar12;
  (param_1->location).position.z = fStack_44 * fVar6 * param_2 + fVar8;
  (param_1->orient).vec.x = fStack_28 * param_2 * fVar7 + fVar9;
  local_cc = (param_1->location).position.x - local_84;
  local_c8 = (param_1->location).position.y - local_80;
  fStack_c4 = (param_1->location).position.z - local_7c;
  local_170 = (local_c8 * (float)4) / param_2 + (float)35;
  if (local_170 < (float)10) {
    local_170 = 10.0;
  }
  if ((float)60 < local_170) {
    local_170 = 60.0;
  }
  param_1[0x91].orient_matrix.m[2].y =
       (local_170 - param_1[0x91].orient_matrix.m[2].y) * (float)0.69999999999999996 +
       param_1[0x91].orient_matrix.m[2].y;
  param_1[0x90].location.position.y =
       param_2 * param_1[0x91].orient_matrix.m[2].y * param_1[0x91].orient_matrix.m[2].x +
       param_1[0x90].location.position.y;
  local_20 = fStack_28;
  pCVar11 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                      ((CKeyFramedModelInstance *)&param_1[0x90].location.position.z);
  local_20 = (float)pCVar11->frame_count;
  if (param_1[0x90].location.position.y < (float)(int)local_20) {
    if (param_1[0x90].location.position.y < 0.0) {
      local_20 = (float)((int)local_20 + -1);
      param_1[0x90].location.position.y = (float)(int)local_20;
    }
  }
  else {
    param_1[0x90].location.position.y = 0.0;
  }
  if ((param_1[0x91].create_event[0x1c] != '\0') &&
     (param_2 = (float)param_1[0x91].process_disabled - param_2,
     param_1[0x91].process_disabled = (int)param_2, param_2 <= 0.0)) {
    iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1[0x91].collision_disabled);
    if ((iVar14 == 0) &&
       (iVar14 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                           ((double)(param_1->location).position.x,
                            (double)(param_1->location).position.y,
                            (double)(param_1->location).position.z,50.0), iVar14 != 0)) {
      uVar13 = (*((param_1->vtable)._ub)->playAmbientSound)
                         (param_1,param_1[0x91].create_event + 0x1c);
      param_1[0x91].collision_disabled = uVar13;
    }
    iVar14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                       (param_1[0x91].is_renderable,param_1[0x91].is_transparent);
    param_1[0x91].process_disabled = iVar14;
    return;
  }
  return;
}
