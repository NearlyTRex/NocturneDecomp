// Name: core_charactr.cpp_CCharacter_processFire_FUN_0042a830
// Address: 0042a830
// Address Range: [[0042a830, 0042acfa]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_0042a830(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_processFire_FUN_0042a830(CCharacter *this_ptr,float delta_time)

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
  int unaff_EBP;
  SFire *pSVar10;
  CLocation *pCVar11;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CDeformableModelInstance *local_44;
  CFlame *local_40;
  CSkeleton *local_38;
  CDeformableModel *local_34;
  int local_2c;
  int local_28;
  int local_20;
  CCharacter *local_1c;
  CSkeleton *local_18;
  SFire *pSStack_14;
  
  this_ptr_00 = &this_ptr->model;
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  if (this_ptr->is_fully_burned == 0) {
    if (0 < this_ptr->fire_count) {
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      local_38 = pCVar3;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
      iVar8 = 0;
      if (0 < pCVar3->bone_count) {
        iVar5 = 0;
        do {
          *(uint *)((int)&DAT_00823c54 + iVar5) = 0;
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
          iVar5 = *(int *)(pCVar9->field65_0x2f1c[0].unk + 4);
          iVar8 = iVar8 + 1;
          (&DAT_00823c54)[iVar5] =
               (float)(&DAT_00823c54)[iVar5] +
               (*(float *)(pCVar9->field65_0x2f1c[0].unk + 0x14) * fVar2) / fVar1;
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
          if ((float)65535 <= *(float *)((int)&DAT_00823c54 + iVar5)) {
            iVar8 = iVar8 + 1;
          }
          if (local_34->farthest_child_bone[0] == -1) {
            iVar8 = iVar8 + 1;
          }
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(local_44);
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
      CStack_54.z = (float)this_ptr->fire_count * (float)0.59999999999999998 * (float)0.02 +
                    (float)0.40000000000000002;
      iVar8 = sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(this_ptr->sfx_handle,CStack_54.z);
      if (iVar8 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(CStack_54.z);
        uVar7 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,"character-onfire-loop.wav");
        this_ptr->sfx_handle = uVar7;
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
  local_20 = 0;
  if (0 < this_ptr->fire_count) {
    local_38 = (CSkeleton *)(this_ptr->model).bone_transform.bone_world_matrices;
    local_40 = this_ptr->field66_0x33cc;
    pSVar10 = this_ptr->field65_0x2f1c;
    local_1c = this_ptr;
    pCVar11 = &this_ptr->field66_0x33cc[0].base.location;
    do {
      if ((this_ptr->model).part_data.visibility_flags[*(int *)pSVar10->unk] != 0) {
        (this_ptr->base).is_transparent = 1;
        pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&CStack_54,(CVector3f *)(pSVar10->unk + 8),
                            (CMatrix3x4f *)
                            ((int)(local_38->motion_list).state_names +
                            *(int *)(pSVar10->unk + 4) * 0x30 + -4));
        pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&CStack_60,pCVar6);
        (pCVar11->position).x = pCVar6->x;
        (pCVar11->position).y = pCVar6->y;
        (pCVar11->position).z = pCVar6->z;
        fVar1 = (float)0.5;
        local_1c->field66_0x33cc[0].flame_size.x = *(float *)(pSVar10->unk + 0x14) * fVar1;
        local_1c->field66_0x33cc[0].flame_size.y = *(float *)(pSVar10->unk + 0x14);
        local_1c->field66_0x33cc[0].flame_size.z = *(float *)(pSVar10->unk + 0x14) * fVar1;
        (*(local_40[local_20].base.vtable._ub)->process)(&local_40[local_20].base,delta_time);
      }
      pSVar10 = pSVar10 + 1;
      pCVar11 = (CLocation *)((int)(pCVar11 + 0x2a) + 4);
      local_1c = (CCharacter *)&(local_1c->model).transformed_vertices[0x14].y;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->fire_count);
  }
  if ((this_ptr->is_ethereal == 0) && (0 < this_ptr->fire_count)) {
    local_18 = (CSkeleton *)this_ptr->field65_0x2f1c;
    local_34 = (CDeformableModel *)(delta_time * 2.0f);
    local_28 = 0;
    do {
      pSStack_14 = (SFire *)local_18;
      if (((this_ptr->model).part_data.visibility_flags[(local_18->motion_list).state_count] != 0)
         && (fVar1 = (float)local_34 * (float)this_ptr->fire_allow_hero +
                     *(float *)((int)&local_18->motion_list + 0x14),
            *(float *)((int)&local_18->motion_list + 0x14) = fVar1, 3.0f < fVar1)) {
        *(float *)((int)&local_18->motion_list + 0x14) = 3.0f;
        iVar5 = 0;
        iVar8 = unaff_EBP;
        if (0 < *(int *)(unaff_EBP + 0x28558)) {
          do {
            if (*(uint *)(iVar8 + 0x2857c) == *(uint *)(pSStack_14->unk + 4)) {
              uVar7 = *(uint *)(iVar8 + 0x2857c) ^ *(uint *)(pSStack_14->unk + 4);
              pCVar9 = this_ptr;
              if (0 < this_ptr->fire_count) {
                do {
                  if (iVar5 == *(int *)(pCVar9->field65_0x2f1c[0].unk + 4)) break;
                  uVar7 = uVar7 + 1;
                  pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
                } while ((int)uVar7 < this_ptr->fire_count);
              }
              if (uVar7 == this_ptr->fire_count) {
                core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520(this_ptr,unaff_EBP,iVar5);
              }
            }
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 0x24;
          } while (iVar5 < *(int *)(unaff_EBP + 0x28558));
        }
        iVar8 = 0;
        if (0 < this_ptr->fire_count) {
          pCVar9 = this_ptr;
          do {
            if (*(int *)(*(int *)(pSStack_14->unk + 4) * 0x24 + unaff_EBP + 0x2857c) ==
                *(int *)(pCVar9->field65_0x2f1c[0].unk + 4)) break;
            iVar8 = iVar8 + 1;
            pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
          } while (iVar8 < this_ptr->fire_count);
        }
        if (iVar8 == this_ptr->fire_count) {
          core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520
                    (this_ptr,unaff_EBP,
                     *(int *)(*(int *)(pSStack_14->unk + 4) * 0x24 + unaff_EBP + 0x2857c));
        }
      }
      local_18 = (CSkeleton *)((int)local_18 + 0x18);
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->fire_count);
  }
  return;
}
