// Name: core_charactr.cpp_CCharacter_processFire_FUN_0042f8e0
// Address: 0042f8e0
// Address Range: [[0042f8e0, 0042fdfe]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_0042f8e0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_0042f8e0(CCharacter *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  CSkeleton *pCVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  CCharacter *pCVar8;
  byte bVar9;
  float afStackY_1070 [1014];
  uint *puVar10;
  float local_88;
  uint local_7c;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  float local_54;
  float local_50;
  CMatrix3x4f *local_4c;
  CDeformableModelInstance *local_48;
  CFlame *local_44;
  CSkeleton *local_40;
  CDeformableModel *local_3c;
  int local_38;
  int local_34;
  int local_30;
  CLocation *local_2c;
  CCharacter *local_28;
  SFire *local_24;
  SFire *local_20;
  SFire *local_1c;
  CSkeleton *local_18;
  
  bVar9 = 0;
  this_ptr_00 = &this_ptr->model;
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  if (this_ptr->is_fully_burned == 0) {
    if (0 < this_ptr->fire_count) {
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
      local_40 = pCVar3;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
      iVar7 = 0;
      if (0 < pCVar3->bone_count) {
        iVar5 = 0;
        do {
          *(uint *)((int)&DAT_007c6384 + iVar5) = 0;
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar7 < local_40->bone_count);
      }
      fVar1 = 0x40400000;
      iVar7 = 0;
      if (0 < this_ptr->fire_count) {
        fVar2 = (float)_DAT_005d59ff;
        pCVar8 = this_ptr;
        do {
          iVar5 = pCVar8->fires[0].bone_index;
          iVar7 = iVar7 + 1;
          (&DAT_007c6384)[iVar5] =
               (float)(&DAT_007c6384)[iVar5] + (pCVar8->fires[0].size * fVar2) / fVar1;
          pCVar8 = (CCharacter *)((pCVar8->base).actor_name + 0x18);
        } while (iVar7 < this_ptr->fire_count);
      }
      iVar7 = 0;
      local_38 = 0;
      if (0 < local_40->bone_count) {
        local_48 = &this_ptr->model;
        iVar5 = 0;
        local_3c = pCVar4;
        do {
          if ((float)_DAT_005d59ff <= *(float *)((int)&DAT_007c6384 + iVar5)) {
            iVar7 = iVar7 + 1;
          }
          if (local_3c->farthest_child_bone[0] == -1) {
            iVar7 = iVar7 + 1;
          }
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(local_48);
          if ((this_ptr->model).part_data.visibility_flags
              [*(int *)((int)pCVar4->bone_to_part_map + iVar5)] == 0) {
            iVar7 = iVar7 + 1;
          }
          iVar5 = iVar5 + 4;
          local_3c = (CDeformableModel *)local_3c->lod_info;
          local_38 = local_38 + 1;
        } while (local_38 < local_40->bone_count);
      }
      if (iVar7 == local_40->bone_count) {
        this_ptr->burn_alpha = 1.0;
        this_ptr->is_fully_burned = 1;
      }
      local_54 = (float)this_ptr->fire_count * (float)_DAT_005d5a07 * (float)_DAT_005d5a0f +
                 (float)_DAT_005d5a17;
      iVar7 = sound_sndmain_cpp_FUN_00573950(this_ptr->sfx_handle,local_54);
      if (iVar7 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
        sound_sndmain_cpp_FUN_005728e0(local_54);
        uVar6 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,"character-onfire-loop.wav");
        this_ptr->sfx_handle = uVar6;
        sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
      }
    }
  }
  else {
    fVar1 = this_ptr->burn_alpha - delta_time;
    this_ptr->burn_alpha = fVar1;
    if (fVar1 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
      (*((this_ptr->base).vtable._ub)->playSound)
                (&this_ptr->base,"?character-onfire-fallapart.wav" + 1);
      core_charactr_cpp_CCharacter_dismember_FUN_00430d90(this_ptr,(CVector3f *)0x0,-1.0,0);
    }
  }
  local_30 = 0;
  if (0 < this_ptr->fire_count) {
    local_4c = (this_ptr->model).bone_transform.bone_model_matrices;
    local_44 = this_ptr->flames;
    local_24 = this_ptr->fires;
    local_28 = this_ptr;
    local_2c = &this_ptr->flames[0].base.location;
    do {
      if ((this_ptr->model).part_data.visibility_flags[local_24->bone_part] != 0) {
        (this_ptr->base).is_transparent = 1;
        core_xform_cpp_FUN_005b5080(&local_24->offset,local_4c + local_24->bone_index);
        puVar10 = &stack0xffffff9c;
        local_64 = local_7c;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar9 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff88 + (uint)bVar9 * -8);
        *(uint *)(&stack0xffffffa4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)(&stack0xffffff8c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        core_actor_cpp_FUN_00408b40(this_ptr,puVar10);
        iVar7 = local_30;
        local_70 = local_88;
        *(uint *)((int)&stack0xffffff94 + (uint)bVar9 * -8) =
             *(uint *)(&stack0xffffff7c + (uint)bVar9 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)(&stack0xffffff80 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        (local_2c->position).x = local_70;
        (local_2c->position).y = local_6c;
        (local_2c->position).z = local_68;
        fVar1 = (float)_DAT_005d5a1f;
        local_28->flames[0].flame_size.x = local_24->size * fVar1;
        local_28->flames[0].flame_size.y = local_24->size;
        local_28->flames[0].flame_size.z = fVar1 * local_24->size;
        (*((UActorVTable *)(local_44[iVar7].base.actor_name + 0x154))->_ub->process)
                  (&local_44[iVar7].base,delta_time);
      }
      local_24 = local_24 + 1;
      local_28 = (CCharacter *)&(local_28->model).bone_origins[0x14].y;
      local_2c = (CLocation *)((int)(local_2c + 0x2a) + 4);
      local_30 = local_30 + 1;
    } while (local_30 < this_ptr->fire_count);
  }
  if ((this_ptr->is_ethereal == 0) && (0 < this_ptr->fire_count)) {
    local_20 = this_ptr->fires;
    local_50 = delta_time * _DAT_005fd60c;
    local_34 = 0;
    do {
      local_1c = local_20;
      if (((this_ptr->model).part_data.visibility_flags[local_20->bone_part] != 0) &&
         (fVar1 = local_50 * this_ptr->flame_scale + local_20->size, local_20->size = fVar1,
         0x40400000 < fVar1)) {
        local_20->size = 0x40400000;
        iVar7 = 0;
        pCVar3 = local_18;
        if (0 < local_18->bone_count) {
          do {
            uVar6 = pCVar3->bone_list[0].parent_index;
            if (uVar6 == local_1c->bone_index) {
              uVar6 = uVar6 ^ local_1c->bone_index;
              pCVar8 = this_ptr;
              if (0 < this_ptr->fire_count) {
                do {
                  if (iVar7 == pCVar8->fires[0].bone_index) break;
                  uVar6 = uVar6 + 1;
                  pCVar8 = (CCharacter *)((pCVar8->base).actor_name + 0x18);
                } while ((int)uVar6 < this_ptr->fire_count);
              }
              if (uVar6 == this_ptr->fire_count) {
                core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0(this_ptr,local_18,iVar7);
              }
            }
            iVar7 = iVar7 + 1;
            pCVar3 = (CSkeleton *)((pCVar3->motion_list).state_names[1] + 2);
          } while (iVar7 < local_18->bone_count);
        }
        iVar7 = 0;
        if (0 < this_ptr->fire_count) {
          pCVar8 = this_ptr;
          do {
            if (local_18->bone_list[local_1c->bone_index].parent_index ==
                pCVar8->fires[0].bone_index) break;
            iVar7 = iVar7 + 1;
            pCVar8 = (CCharacter *)((pCVar8->base).actor_name + 0x18);
          } while (iVar7 < this_ptr->fire_count);
        }
        if (iVar7 == this_ptr->fire_count) {
          core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0
                    (this_ptr,local_18,local_18->bone_list[local_1c->bone_index].parent_index);
        }
      }
      local_20 = local_20 + 1;
      local_34 = local_34 + 1;
    } while (local_34 < this_ptr->fire_count);
  }
  return;
}
