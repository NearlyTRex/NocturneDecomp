// Name: core_charactr.cpp_FUN_0042e8c0
// Address: 0042e8c0
// Address Range: [[0042e8c0, 0042f009]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042e8c0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042e8c0(CCharacter *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  float fVar2;
  CFlame *pCVar3;
  CSkeleton *pCVar4;
  CDeformableModel *pCVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  CCharacter *pCVar9;
  char *pcVar10;
  byte bVar11;
  float afStackY_106c [999];
  float *pfVar12;
  SDamageInfo SStack_c0;
  float local_84;
  float local_80 [5];
  float local_6c;
  uint local_60;
  float local_50;
  CFlame *local_4c;
  CMatrix3x4f *local_48;
  CDeformableModelInstance *local_44;
  float fStack_40;
  CSkeleton *local_3c;
  CDeformableModel *local_38;
  int local_34;
  int iStack_30;
  int local_2c;
  CCharacter *local_28;
  CLocation *local_24;
  SFire *local_20;
  SFire *pSStack_1c;
  SFire *pSStack_18;
  CSkeleton *local_14;
  
  bVar11 = 0;
  this_ptr = &param_1->model;
  local_14 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  if (param_1->is_fully_burned == 0) {
    if (0 < param_1->fire_count) {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
      local_3c = pCVar4;
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
      iVar6 = 0;
      if (0 < pCVar4->bone_count) {
        iVar8 = 0;
        do {
          *(uint *)((int)&DAT_007e2cf4 + iVar8) = 0;
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar6 < local_3c->bone_count);
      }
      fVar1 = 0x40400000;
      iVar6 = 0;
      if (0 < param_1->fire_count) {
        fVar2 = (float)_DAT_005b833e;
        pCVar9 = param_1;
        do {
          iVar8 = pCVar9->fires[0].bone_index;
          iVar6 = iVar6 + 1;
          (&DAT_007e2cf4)[iVar8] =
               (float)(&DAT_007e2cf4)[iVar8] + (pCVar9->fires[0].size * fVar2) / fVar1;
          pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
        } while (iVar6 < param_1->fire_count);
      }
      iVar6 = 0;
      local_34 = 0;
      if (0 < local_3c->bone_count) {
        local_44 = &param_1->model;
        iVar8 = 0;
        local_38 = pCVar5;
        do {
          if ((float)_DAT_005b833e <= *(float *)((int)&DAT_007e2cf4 + iVar8)) {
            iVar6 = iVar6 + 1;
          }
          if (local_38->farthest_child_bone[0] == -1) {
            iVar6 = iVar6 + 1;
          }
          pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(local_44);
          if ((param_1->model).part_data.visibility_flags
              [*(int *)((int)pCVar5->bone_to_part_map + iVar8)] == 0) {
            iVar6 = iVar6 + 1;
          }
          iVar8 = iVar8 + 4;
          local_38 = (CDeformableModel *)local_38->lod_info;
          local_34 = local_34 + 1;
        } while (local_34 < local_3c->bone_count);
      }
      if ((iVar6 == local_3c->bone_count) && ((int)param_1->hit_points < 0x40a00000)) {
        param_1->burn_alpha = 1.0;
        param_1->is_fully_burned = 1;
      }
      local_50 = (float)param_1->fire_count * (float)_DAT_005b8346 * (float)_DAT_005b834e +
                 (float)_DAT_005b8356;
      iVar6 = sound_sndmain_cpp_setSfxVolume_FUN_00556ab0(param_1->sfx_handle,local_50);
      if (iVar6 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
        sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(local_50);
        uVar7 = (*((param_1->base).vtable._ub)->playAmbientSound)
                          (&param_1->base,"character-onfire-loop.wav");
        param_1->sfx_handle = uVar7;
        sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      }
    }
  }
  else {
    fVar1 = param_1->burn_alpha - param_2;
    param_1->burn_alpha = fVar1;
    if (fVar1 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(param_1->sfx_handle);
      (*((param_1->base).vtable._ub)->playSound)
                (&param_1->base,"?character-onfire-fallapart.wav" + 1);
      core_charactr_cpp_FUN_004300e0(param_1,0,0xbf800000,1);
    }
  }
  local_2c = 0;
  if (0 < param_1->fire_count) {
    local_48 = (param_1->model).bone_transform.bone_model_matrices;
    local_4c = param_1->flames;
    local_20 = param_1->fires;
    local_28 = param_1;
    local_24 = &param_1->flames[0].base.location;
    do {
      if ((param_1->model).part_data.visibility_flags[local_20->bone_part] != 0) {
        (param_1->base).is_transparent = 1;
        core_xform_cpp_FUN_00583260(&local_20->offset,local_48 + local_20->bone_index);
        pfVar12 = local_80 + 2;
        local_80[2] = (float)local_60;
        local_80[(uint)bVar11 * -2 + 3] = local_80[(uint)bVar11 * -2 + 9];
        local_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             local_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
        core_actor_cpp_FUN_00408b80(param_1,pfVar12);
        iVar6 = local_2c;
        pCVar3 = local_4c;
        local_84 = local_6c;
        local_80[(uint)bVar11 * -2] = local_80[(uint)bVar11 * -2 + 6];
        local_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             local_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
        (local_24->position).x = local_84;
        (local_24->position).y = local_80[0];
        (local_24->position).z = local_80[1];
        fVar1 = (float)_DAT_005b835e;
        local_28->flames[0].flame_size.x = local_20->size * fVar1;
        local_28->flames[0].flame_size.y = local_20->size;
        local_28->flames[0].flame_size.z = fVar1 * local_20->size;
        (*((UActorVTable *)(pCVar3[iVar6].base.actor_name + 0x154))->_ub->process)
                  (&pCVar3[iVar6].base,param_2);
      }
      local_20 = local_20 + 1;
      local_28 = (CCharacter *)&(local_28->model).bone_origins[0x14].y;
      local_24 = (CLocation *)((int)(local_24 + 0x2a) + 4);
      local_2c = local_2c + 1;
    } while (local_2c < param_1->fire_count);
  }
  if ((param_1->is_ethereal == 0) && (iStack_30 = 0, 0 < param_1->fire_count)) {
    pSStack_1c = param_1->fires;
    fStack_40 = param_2 * _DAT_005dd22c;
    iStack_30 = 0;
    do {
      pSStack_18 = pSStack_1c;
      if ((param_1->model).part_data.visibility_flags[pSStack_1c->bone_part] != 0) {
        if (ABS(param_1->on_fire_time) == 0.0) {
          fVar1 = pSStack_1c->size - fStack_40 * param_1->flame_scale;
        }
        else {
          fVar1 = fStack_40 * param_1->flame_scale + pSStack_1c->size;
        }
        pSStack_1c->size = fVar1;
        if (pSStack_1c->size <= 0.0) {
          pSStack_1c->size = 0.0;
        }
        if (0x40400000 < pSStack_1c->size) {
          pSStack_1c->size = 0x40400000;
          iVar6 = 0;
          pCVar4 = local_14;
          if (0 < local_14->bone_count) {
            do {
              uVar7 = pCVar4->bone_list[0].parent_index;
              if (uVar7 == pSStack_18->bone_index) {
                uVar7 = uVar7 ^ pSStack_18->bone_index;
                pCVar9 = param_1;
                if (0 < param_1->fire_count) {
                  do {
                    if (iVar6 == pCVar9->fires[0].bone_index) break;
                    uVar7 = uVar7 + 1;
                    pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
                  } while ((int)uVar7 < param_1->fire_count);
                }
                if (uVar7 == param_1->fire_count) {
                  core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(param_1,local_14,iVar6);
                }
              }
              iVar6 = iVar6 + 1;
              pCVar4 = (CSkeleton *)((pCVar4->motion_list).state_names[1] + 2);
            } while (iVar6 < local_14->bone_count);
          }
          iVar6 = 0;
          if (0 < param_1->fire_count) {
            pCVar9 = param_1;
            do {
              if (local_14->bone_list[pSStack_18->bone_index].parent_index ==
                  pCVar9->fires[0].bone_index) break;
              iVar6 = iVar6 + 1;
              pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
            } while (iVar6 < param_1->fire_count);
          }
          if (iVar6 == param_1->fire_count) {
            core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0
                      (param_1,local_14,local_14->bone_list[pSStack_18->bone_index].parent_index);
          }
        }
      }
      pSStack_1c = pSStack_1c + 1;
      iStack_30 = iStack_30 + 1;
    } while (iStack_30 < param_1->fire_count);
  }
  if ((ABS(param_1->on_fire_time) == 0.0) && (iVar6 = param_1->fire_count + -1, -1 < iVar6)) {
    pcVar10 = (param_1->base).actor_name + param_1->fire_count * 0x18 + -0x18;
    do {
      while (((*(uint *)(pcVar10 + 0x33c0) & 0x7fffffff) != 0 ||
             (iVar8 = param_1->fire_count + -1, param_1->fire_count = iVar8, iVar8 != 0))) {
        iVar6 = iVar6 + -1;
        pcVar10 = pcVar10 + -0x18;
        if (iVar6 < 0) goto LAB_0042ec67;
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(param_1->sfx_handle);
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar10 + -0x18;
    } while (-1 < iVar6);
  }
LAB_0042ec67:
  if ((0.0 < param_1->on_fire_time) &&
     ((0x40a00000 < (int)param_1->hit_points || (param_1->hit_points <= 0.0)))) {
    param_1->on_fire_time = param_1->on_fire_time - param_2;
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_c0);
    SStack_c0.damage_amount = param_2 * (float)_DAT_005b8366;
    SStack_c0.damage_type = DAMAGE_TYPE_ATTACK_FIRE;
    (*(((param_1->base).vtable._uc)->_uc).processDamage)(param_1,&SStack_c0);
    if (param_1->on_fire_time < 0.0) {
      param_1->on_fire_time = 0.0;
      return;
    }
  }
  return;
}
