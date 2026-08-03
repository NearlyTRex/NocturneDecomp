// Name: core_charactr.cpp_CCharacter_processFire_FUN_004269b0
// Address: 004269b0
// Address Range: [[004269b0, 00426e7a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_004269b0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_004269b0(CCharacter *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  CSkeleton *pCVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  uint uVar7;
  int iVar8;
  CCharacter *pCVar9;
  SFire *pSVar10;
  CLocation *pCVar11;
  CVector3f local_68;
  CVector3f local_5c;
  float local_4c;
  CFlame *local_48;
  CDeformableModelInstance *local_44;
  CMatrix3x4f *local_40;
  float local_3c;
  CSkeleton *local_38;
  CDeformableModel *local_34;
  int local_30;
  int local_2c;
  int local_28;
  CCharacter *local_24;
  SFire *local_20;
  SFire *local_1c;
  CSkeleton *local_18;
  
  this_ptr_00 = &this_ptr->model;
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  if (this_ptr->is_fully_burned == 0) {
    if (0 < this_ptr->fire_count) {
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
      local_38 = pCVar3;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr_00);
      iVar8 = 0;
      if (0 < pCVar3->bone_count) {
        iVar5 = 0;
        do {
          *(uint *)((int)&DAT_00765aa0 + iVar5) = 0;
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar8 < local_38->bone_count);
      }
      fVar1 = 3.0f;
      iVar8 = 0;
      if (0 < this_ptr->fire_count) {
        fVar2 = (float)65535;
        pCVar9 = this_ptr;
        do {
          iVar5 = pCVar9->fires[0].bone_index;
          iVar8 = iVar8 + 1;
          (&DAT_00765aa0)[iVar5] =
               (float)(&DAT_00765aa0)[iVar5] + (pCVar9->fires[0].size * fVar2) / fVar1;
          pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
        } while (iVar8 < this_ptr->fire_count);
      }
      iVar8 = 0;
      local_2c = 0;
      if (0 < local_38->bone_count) {
        local_44 = &this_ptr->model;
        iVar5 = 0;
        local_34 = pCVar4;
        do {
          if ((float)65535 <= *(float *)((int)&DAT_00765aa0 + iVar5)) {
            iVar8 = iVar8 + 1;
          }
          if (local_34->farthest_child_bone[0] == -1) {
            iVar8 = iVar8 + 1;
          }
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(local_44);
          if ((this_ptr->model).part_data.visibility_flags
              [*(int *)((int)pCVar4->bone_to_part_map + iVar5)] == 0) {
            iVar8 = iVar8 + 1;
          }
          iVar5 = iVar5 + 4;
          local_34 = (CDeformableModel *)local_34->lod_info;
          local_2c = local_2c + 1;
        } while (local_2c < local_38->bone_count);
      }
      if (iVar8 == local_38->bone_count) {
        this_ptr->burn_alpha = 1.0;
        this_ptr->is_fully_burned = 1;
      }
      local_4c = (float)this_ptr->fire_count * (float)0.59999999999999998 * (float)0.02 +
                 (float)0.40000000000000002;
      iVar8 = sound_sndmain_cpp_setSfxVolume_FUN_005270d0(this_ptr->sfx_handle,local_4c);
      if (iVar8 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(local_4c);
        uVar7 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,"character-onfire-loop.wav");
        this_ptr->sfx_handle = uVar7;
        sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      }
    }
  }
  else {
    fVar1 = this_ptr->burn_alpha - delta_time;
    this_ptr->burn_alpha = fVar1;
    if (fVar1 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
      (*((this_ptr->base).vtable._ub)->playSound)
                (&this_ptr->base,"character-onfire-fallapart.wav");
      core_charactr_cpp_CCharacter_dismember_FUN_00427b60(this_ptr,(CVector3f *)0x0,-1.0,0);
    }
  }
  local_28 = 0;
  if (0 < this_ptr->fire_count) {
    local_40 = (this_ptr->model).bone_transform.bone_world_matrices;
    local_48 = this_ptr->flames;
    pSVar10 = this_ptr->fires;
    local_24 = this_ptr;
    pCVar11 = &this_ptr->flames[0].base.location;
    do {
      if ((this_ptr->model).part_data.visibility_flags[pSVar10->bone_part] != 0) {
        (this_ptr->base).is_transparent = 1;
        pCVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                           (&local_5c,&pSVar10->offset,local_40 + pSVar10->bone_index);
        pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                           (&this_ptr->base,&local_68,pCVar6);
        (pCVar11->position).x = pCVar6->x;
        (pCVar11->position).y = pCVar6->y;
        (pCVar11->position).z = pCVar6->z;
        fVar1 = (float)0.5;
        local_24->flames[0].flame_size.x = pSVar10->size * fVar1;
        local_24->flames[0].flame_size.y = pSVar10->size;
        local_24->flames[0].flame_size.z = pSVar10->size * fVar1;
        (*((UActorVTable *)(local_48[local_28].base.actor_name + 0x14c))->_ub->process)
                  (&local_48[local_28].base,delta_time);
      }
      pSVar10 = pSVar10 + 1;
      pCVar11 = (CLocation *)((int)(pCVar11 + 0x29) + 0xc);
      local_24 = (CCharacter *)&(local_24->model).transformed_vertices[0x14].y;
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->fire_count);
  }
  if ((this_ptr->is_ethereal == 0) && (0 < this_ptr->fire_count)) {
    local_20 = this_ptr->fires;
    local_3c = delta_time * 2.0f;
    local_30 = 0;
    do {
      local_1c = local_20;
      if (((this_ptr->model).part_data.visibility_flags[local_20->bone_part] != 0) &&
         (fVar1 = local_3c * this_ptr->flame_scale + local_20->size, local_20->size = fVar1,
         3.0f < fVar1)) {
        local_20->size = 3.0f;
        iVar8 = 0;
        pCVar3 = local_18;
        if (0 < local_18->bone_count) {
          do {
            uVar7 = pCVar3->bone_list[0].parent_index;
            if (uVar7 == local_1c->bone_index) {
              uVar7 = uVar7 ^ local_1c->bone_index;
              pCVar9 = this_ptr;
              if (0 < this_ptr->fire_count) {
                do {
                  if (iVar8 == pCVar9->fires[0].bone_index) break;
                  uVar7 = uVar7 + 1;
                  pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
                } while ((int)uVar7 < this_ptr->fire_count);
              }
              if (uVar7 == this_ptr->fire_count) {
                core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(this_ptr,local_18,iVar8);
              }
            }
            iVar8 = iVar8 + 1;
            pCVar3 = (CSkeleton *)((pCVar3->motion_list).state_names[1] + 2);
          } while (iVar8 < local_18->bone_count);
        }
        iVar8 = 0;
        if (0 < this_ptr->fire_count) {
          pCVar9 = this_ptr;
          do {
            if (local_18->bone_list[local_1c->bone_index].parent_index ==
                pCVar9->fires[0].bone_index) break;
            iVar8 = iVar8 + 1;
            pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
          } while (iVar8 < this_ptr->fire_count);
        }
        if (iVar8 == this_ptr->fire_count) {
          core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0
                    (this_ptr,local_18,local_18->bone_list[local_1c->bone_index].parent_index);
        }
      }
      local_20 = local_20 + 1;
      local_30 = local_30 + 1;
    } while (local_30 < this_ptr->fire_count);
  }
  return;
}
