// Name: core_charactr.cpp_CCharacter_processFire_FUN_00425fb0
// Address: 00425fb0
// Address Range: [[00425fb0, 004264cd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_00425fb0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_00425fb0(CCharacter *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  byte *puVar3;
  CSkeleton *pCVar4;
  CDeformableModel *pCVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  CCharacter *pCVar9;
  byte bVar10;
  float afStackY_1070 [1014];
  uint *puVar11;
  uint local_88;
  uint local_7c;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_54;
  float local_50;
  byte *local_4c;
  CDeformableModelInstance *local_48;
  byte *local_44;
  CSkeleton *local_40;
  CDeformableModel *local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  CCharacter *local_28;
  SFire *local_24;
  SFire *local_20;
  SFire *local_1c;
  CSkeleton *local_18;
  
  bVar10 = 0;
  this_ptr_00 = &this_ptr->model;
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  if (this_ptr->is_fully_burned == 0) {
    if (0 < this_ptr->fire_count) {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
      local_40 = pCVar4;
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
      iVar8 = 0;
      if (0 < pCVar4->bone_count) {
        iVar6 = 0;
        do {
          *(uint *)((int)&DAT_007bdc9c + iVar6) = 0;
          iVar8 = iVar8 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar8 < local_40->bone_count);
      }
      fVar1 = 0x40400000;
      iVar8 = 0;
      if (0 < this_ptr->fire_count) {
        fVar2 = (float)_DAT_005ccd76;
        pCVar9 = this_ptr;
        do {
          iVar6 = *(int *)&pCVar9->fires[0].field_0x4;
          iVar8 = iVar8 + 1;
          (&DAT_007bdc9c)[iVar6] =
               (float)(&DAT_007bdc9c)[iVar6] +
               (*(float *)&pCVar9->fires[0].field_0x14 * fVar2) / fVar1;
          pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
        } while (iVar8 < this_ptr->fire_count);
      }
      iVar8 = 0;
      local_38 = 0;
      if (0 < local_40->bone_count) {
        local_48 = &this_ptr->model;
        iVar6 = 0;
        local_3c = pCVar5;
        do {
          if ((float)_DAT_005ccd76 <= *(float *)((int)&DAT_007bdc9c + iVar6)) {
            iVar8 = iVar8 + 1;
          }
          if (local_3c->farthest_child_bone[0] == -1) {
            iVar8 = iVar8 + 1;
          }
          pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(local_48);
          if (*(int *)(&(this_ptr->model).field_0x2140 +
                      *(int *)((int)pCVar5->bone_to_part_map + iVar6) * 4) == 0) {
            iVar8 = iVar8 + 1;
          }
          iVar6 = iVar6 + 4;
          local_3c = (CDeformableModel *)local_3c->lod_info;
          local_38 = local_38 + 1;
        } while (local_38 < local_40->bone_count);
      }
      if (iVar8 == local_40->bone_count) {
        this_ptr->burn_alpha = 1.0;
        this_ptr->is_fully_burned = 1;
      }
      local_54 = (float)this_ptr->fire_count * (float)_DAT_005ccd7e * (float)_DAT_005ccd86 +
                 (float)_DAT_005ccd8e;
      iVar8 = sound_sndmain_cpp_FUN_00550f20(this_ptr->sfx_handle,local_54);
      if (iVar8 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
        sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(local_54);
        uVar7 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,"character-onfire-loop.wav");
        this_ptr->sfx_handle = uVar7;
        sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      }
    }
  }
  else {
    fVar1 = this_ptr->burn_alpha - delta_time;
    this_ptr->burn_alpha = fVar1;
    if (fVar1 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
      (*((this_ptr->base).vtable._ub)->playSound)
                (&this_ptr->base,"?character-onfire-fallapart.wav" + 1);
      core_charactr_cpp_CCharacter_dismember_FUN_00427360(this_ptr,(CVector3f *)0x0,-1.0,0);
    }
  }
  local_30 = 0;
  if (0 < this_ptr->fire_count) {
    local_4c = &(this_ptr->model).field_0xe80;
    local_44 = &this_ptr->field_0x3a20;
    local_24 = this_ptr->fires;
    local_28 = this_ptr;
    local_2c = (uint *)&this_ptr->field_0x3a40;
    do {
      if (*(int *)(&(this_ptr->model).field_0x2140 + *(int *)local_24 * 4) != 0) {
        *(uint *)&(this_ptr->base).field_0xfc = 1;
        core_xform_cpp_FUN_00591530
                  (&local_24->field_0x8,local_4c + *(int *)&local_24->field_0x4 * 0x30);
        puVar11 = &stack0xffffff9c;
        local_64 = local_7c;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar10 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff88 + (uint)bVar10 * -8);
        *(uint *)(&stack0xffffffa4 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)(&stack0xffffff8c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        core_actor_cpp_FUN_00408d70(this_ptr,puVar11);
        iVar8 = local_30;
        puVar3 = local_44;
        local_70 = local_88;
        *(uint *)((int)&stack0xffffff94 + (uint)bVar10 * -8) =
             *(uint *)(&stack0xffffff7c + (uint)bVar10 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)(&stack0xffffff80 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        *local_2c = local_70;
        local_2c[1] = local_6c;
        local_2c[2] = local_68;
        fVar1 = (float)_DAT_005ccd96;
        *(float *)&local_28->field_0x3cd4 = *(float *)&local_24->field_0x14 * fVar1;
        *(uint *)&local_28->field_0x3cd8 = *(uint *)&local_24->field_0x14;
        *(float *)&local_28->field_0x3cdc = fVar1 * *(float *)&local_24->field_0x14;
        (**(code **)(*(int *)(puVar3 + iVar8 * 0x400 + 0x2b0) + 0x14))
                  (puVar3 + iVar8 * 0x400,delta_time);
      }
      local_24 = local_24 + 1;
      local_28 = (CCharacter *)&(local_28->model).field_0x14c;
      local_2c = local_2c + 0x100;
      local_30 = local_30 + 1;
    } while (local_30 < this_ptr->fire_count);
  }
  if ((*(int *)&this_ptr->field_0x2810 == 0) && (0 < this_ptr->fire_count)) {
    local_20 = this_ptr->fires;
    local_50 = delta_time * _DAT_005f407c;
    local_34 = 0;
    do {
      local_1c = local_20;
      if ((*(int *)(&(this_ptr->model).field_0x2140 + *(int *)local_20 * 4) != 0) &&
         (fVar1 = local_50 * this_ptr->flame_scale + *(float *)&local_20->field_0x14,
         *(float *)&local_20->field_0x14 = fVar1, 0x40400000 < fVar1)) {
        *(float *)&local_20->field_0x14 = 0x40400000;
        iVar8 = 0;
        pCVar4 = local_18;
        if (0 < local_18->bone_count) {
          do {
            if (*(uint *)(pCVar4->bone_list + 0x20) == *(uint *)&local_1c->field_0x4) {
              uVar7 = *(uint *)(pCVar4->bone_list + 0x20) ^ *(uint *)&local_1c->field_0x4;
              pCVar9 = this_ptr;
              if (0 < this_ptr->fire_count) {
                do {
                  if (iVar8 == *(int *)&pCVar9->fires[0].field_0x4) break;
                  uVar7 = uVar7 + 1;
                  pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
                } while ((int)uVar7 < this_ptr->fire_count);
              }
              if (uVar7 == this_ptr->fire_count) {
                core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_00425bb0(this_ptr,local_18,iVar8);
              }
            }
            iVar8 = iVar8 + 1;
            pCVar4 = (CSkeleton *)&pCVar4->field_0x24;
          } while (iVar8 < local_18->bone_count);
        }
        iVar8 = 0;
        if (0 < this_ptr->fire_count) {
          pCVar9 = this_ptr;
          do {
            if (*(int *)(local_18->bone_list + *(int *)&local_1c->field_0x4 * 0x24 + 0x20) ==
                *(int *)&pCVar9->fires[0].field_0x4) break;
            iVar8 = iVar8 + 1;
            pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
          } while (iVar8 < this_ptr->fire_count);
        }
        if (iVar8 == this_ptr->fire_count) {
          core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_00425bb0
                    (this_ptr,local_18,
                     *(int *)(local_18->bone_list + *(int *)&local_1c->field_0x4 * 0x24 + 0x20));
        }
      }
      local_20 = local_20 + 1;
      local_34 = local_34 + 1;
    } while (local_34 < this_ptr->fire_count);
  }
  return;
}
