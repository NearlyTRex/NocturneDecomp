// Name: core_charactr.cpp_CCharacter_processFire_FUN_0042a830
// Address: 0042a830
// Address Range: [[0042a830, 0042acfa]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_0042a830(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_0042a830(CCharacter *this_ptr,float delta_time)

{
  float fVar3;
  float fVar4;
  CSkeleton *skeleton;
  CSkeleton *pCVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  int iVar6;
  CDeformableModel *pCVar7;
  CVector3f *pCVar6;
  CVector3f *pCVar8;
  uint uVar9;
  uint uVar7;
  int iVar8;
  CCharacter *pCVar9;
  CCharacter *pCVar10;
  SFire *pSVar10;
  int iVar11;
  CLocation *pCVar11;
  CSkeleton *pCVar12;
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
  float fVar1;
  CDeformableModelInstance *this_ptr_00;
  float fVar2;
  
  this_ptr_00 = &this_ptr->model;
  skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  if (this_ptr->is_fully_burned == 0) {
    if (0 < this_ptr->fire_count) {
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
      iVar8 = 0;
      if (0 < pCVar3->bone_count) {
        iVar5 = 0;
        do {
          *(uint *)((int)&DAT_00823c54 + iVar5) = 0;
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar8 < pCVar3->bone_count);
      }
      fVar3 = 3.0f;
      iVar6 = 0;
      if (0 < this_ptr->fire_count) {
        fVar2 = (float)65535;
        pCVar10 = this_ptr;
        do {
          iVar11 = pCVar10->fire_effects[0].bone_index;
          iVar6 = iVar6 + 1;
          (&DAT_00823c54)[iVar11] =
               (float)(&DAT_00823c54)[iVar11] + (pCVar10->fire_effects[0].size * fVar2) / fVar3;
          pCVar10 = (CCharacter *)((pCVar10->base).actor_name + 0x18);
        } while (iVar6 < this_ptr->fire_count);
      }
      iVar6 = 0;
      local_2c = 0;
      if (0 < pCVar3->bone_count) {
        iVar11 = 0;
        local_34 = pCVar4;
        do {
          if ((float)65535 <= *(float *)((int)&DAT_00823c54 + iVar11)) {
            iVar6 = iVar6 + 1;
          }
          if (local_34->farthest_child_bone[0] == -1) {
            iVar6 = iVar6 + 1;
          }
          pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                             (&this_ptr->model);
          if ((this_ptr->model).part_data.visibility_flags
              [*(int *)((int)pCVar7->bone_to_part_map + iVar11)] == 0) {
            iVar6 = iVar6 + 1;
          }
          iVar11 = iVar11 + 4;
          local_34 = (CDeformableModel *)local_34->lod_info;
          local_2c = local_2c + 1;
        } while (local_2c < pCVar3->bone_count);
      }
      if (iVar6 == pCVar3->bone_count) {
        this_ptr->burn_alpha = 1.0;
        this_ptr->is_fully_burned = 1;
      }
      fVar3 = (float)this_ptr->fire_count * (float)0.59999999999999998 * (float)0.02 +
              (float)0.40000000000000002;
      iVar6 = sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(this_ptr->sfx_handle,fVar3);
      if (iVar6 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(fVar3);
        uVar9 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,"character-onfire-loop.wav");
        this_ptr->sfx_handle = uVar9;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
  }
  else {
    fVar1 = this_ptr->burn_alpha - delta_time;
    this_ptr->burn_alpha = fVar1;
    if (fVar1 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
      (*((this_ptr->base).vtable._ub)->playSound)
                (&this_ptr->base,"character-onfire-fallapart.wav");
      core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0(this_ptr,(CVector3f *)0x0,-1.0);
    }
  }
  local_28 = 0;
  if (0 < this_ptr->fire_count) {
    pSVar10 = this_ptr->fire_effects;
    local_24 = this_ptr;
    pCVar11 = &this_ptr->flames[0].base.location;
    do {
      if ((this_ptr->model).part_data.visibility_flags[pSVar10->bone_part] != 0) {
        (this_ptr->base).is_transparent = 1;
        pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_5c,&pSVar10->offset,
                            (this_ptr->model).bone_transform.bone_world_matrices +
                            pSVar10->bone_index);
        pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&local_68,pCVar6);
        (pCVar11->position).x = pCVar8->x;
        (pCVar11->position).y = pCVar8->y;
        (pCVar11->position).z = pCVar8->z;
        fVar3 = (float)0.5;
        local_24->flames[0].flame_size.x = pSVar10->size * fVar3;
        local_24->flames[0].flame_size.y = pSVar10->size;
        local_24->flames[0].flame_size.z = pSVar10->size * fVar3;
        (*((UActorVTable *)(this_ptr->flames[local_28].base.actor_name + 0x154))->_ub->process)
                  (&this_ptr->flames[local_28].base,delta_time);
      }
      pSVar10 = pSVar10 + 1;
      pCVar11 = (CLocation *)&pCVar11[0x2a].position.y;
      local_24 = (CCharacter *)&(local_24->model).transformed_vertices[0x14].y;
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->fire_count);
  }
  if ((this_ptr->is_ethereal == 0) && (0 < this_ptr->fire_count)) {
    local_20 = this_ptr->fire_effects;
    fVar3 = delta_time * 2.0f;
    local_30 = 0;
    do {
      if (((this_ptr->model).part_data.visibility_flags[local_20->bone_part] != 0) &&
         (fVar4 = fVar3 * (float)this_ptr->fire_allow_hero + local_20->size, local_20->size = fVar4,
         3.0f < fVar4)) {
        local_20->size = 3.0f;
        iVar6 = 0;
        pCVar12 = skeleton;
        if (0 < skeleton->bone_count) {
          do {
            uVar9 = pCVar12->bone_list[0].parent_index;
            if (uVar9 == local_20->bone_index) {
              uVar7 = uVar9 ^ local_20->bone_index;
              pCVar9 = this_ptr;
              if (0 < this_ptr->fire_count) {
                do {
                  if (iVar6 == pCVar9->fire_effects[0].bone_index) break;
                  uVar7 = uVar7 + 1;
                  pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
                } while ((int)uVar7 < this_ptr->fire_count);
              }
              if (uVar7 == this_ptr->fire_count) {
                core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520(this_ptr,skeleton,iVar6);
              }
            }
            iVar6 = iVar6 + 1;
            pCVar12 = (CSkeleton *)((pCVar12->motion_list).state_names[1] + 2);
          } while (iVar6 < skeleton->bone_count);
        }
        iVar6 = 0;
        if (0 < this_ptr->fire_count) {
          pCVar10 = this_ptr;
          do {
            if (skeleton->bone_list[local_20->bone_index].parent_index ==
                pCVar10->fire_effects[0].bone_index) break;
            iVar6 = iVar6 + 1;
            pCVar10 = (CCharacter *)((pCVar10->base).actor_name + 0x18);
          } while (iVar6 < this_ptr->fire_count);
        }
        if (iVar6 == this_ptr->fire_count) {
          core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520
                    (this_ptr,skeleton,skeleton->bone_list[local_20->bone_index].parent_index);
        }
      }
      local_20 = local_20 + 1;
      local_30 = local_30 + 1;
    } while (local_30 < this_ptr->fire_count);
  }
  return;
}
