// Name: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520
// Address: 0042a520
// Address Range: [[0042a520, 0042a827]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

{
  float fVar5;
  CDeformableModel *this_ptr_00;
  int iVar7;
  CVector3f *pCVar5;
  CVector3f *pCVar9;
  int iVar6;
  CSkeleton *pCVar7;
  CVector3f *pCVar8;
  SFire *pSVar9;
  int iVar10;
  int iVar11;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f *local_44;
  CMatrix3x4f *local_40;
  CFlame *local_3c;
  SFire *local_38;
  int local_34;
  CDeformableModelInstance *local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  float fVar4;
  float fVar1;
  float fVar3;
  float fVar2;
  
  if (-1 < target_bone_index) {
    iVar6 = -1;
    local_44 = (this_ptr->model).transformed_vertices;
    iVar10 = 0;
    local_24 = 0.0;
    pCVar7 = skeleton;
    pCVar9 = local_44;
    if (0 < skeleton->bone_count) {
      do {
        if ((target_bone_index == pCVar7->bone_list[0].parent_index) &&
           (local_20 = SQRT(pCVar9->z * pCVar9->z + pCVar9->x * pCVar9->x + pCVar9->y * pCVar9->y),
           local_24 < local_20)) {
          iVar6 = iVar10;
          local_24 = local_20;
        }
        pCVar7 = (CSkeleton *)((pCVar7->motion_list).state_names[1] + 2);
        iVar10 = iVar10 + 1;
        pCVar9 = pCVar9 + 1;
      } while (iVar10 < skeleton->bone_count);
    }
    if (iVar6 != -1) {
      pCVar8 = local_44 + target_bone_index;
      pCVar9 = local_44 + iVar6;
      fVar1 = pCVar9->x - pCVar8->x;
      fVar2 = pCVar9->y - pCVar8->y;
      fVar3 = pCVar9->z - pCVar8->z;
      local_18 = (int)ROUND(ROUND(SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) *
                                  (float)0.5));
      local_2c = local_18 + 1;
      iVar11 = 0;
      if (0 < local_2c) {
        local_40 = (this_ptr->model).bone_transform.bone_world_matrices;
        local_3c = this_ptr->flames;
        local_38 = this_ptr->fire_effects;
        local_30 = &this_ptr->model;
        local_34 = local_18 + 2;
        while (this_ptr->fire_count < 0x32) {
          iVar7 = this_ptr->fire_count;
          (this_ptr->base).is_transparent = 1;
          pSVar9 = local_38 + iVar7;
          this_ptr->fire_count = iVar7 + 1;
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                                  (local_30);
          iVar7 = core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0
                            (this_ptr_00,target_bone_index);
          pSVar9->bone_part = iVar7;
          local_18 = local_34;
          local_14 = iVar11 + 1;
          pSVar9->bone_index = target_bone_index;
          local_1c = (float)local_14;
          local_28 = (float)local_34;
          fVar5 = 1.0 / local_28;
          local_50 = fVar1 * local_1c * fVar5;
          local_4c = fVar2 * local_1c * fVar5;
          local_48 = fVar3 * local_1c * fVar5;
          if (&pSVar9->offset != (CVector3f *)&local_50) {
            (pSVar9->offset).x = local_50;
            (pSVar9->offset).y = local_4c;
            (pSVar9->offset).z = local_48;
          }
          pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_68,&pSVar9->offset,local_40 + pSVar9->bone_index);
          pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (&this_ptr->base,&local_5c,pCVar5);
          iVar7 = this_ptr->fire_count + -1;
          local_3c[iVar7].base.location.position.x = pCVar9->x;
          local_3c[iVar7].base.location.position.y = pCVar9->y;
          local_3c[iVar7].base.location.position.z = pCVar9->z;
          *(uint *)((int)this_ptr->fire_effects + this_ptr->fire_count * 0x2a4 + 0x3b8) = 0;
          pSVar9->size = 0.5;
          fVar4 = (float)0.5;
          *(float *)((int)this_ptr->fire_effects + this_ptr->fire_count * 0x2a4 + 0x364) =
               pSVar9->size * fVar4;
          *(float *)((int)this_ptr->fire_effects + this_ptr->fire_count * 0x2a4 + 0x368) =
               pSVar9->size;
          *(float *)((int)this_ptr->fire_effects + this_ptr->fire_count * 0x2a4 + 0x36c) =
               fVar4 * pSVar9->size;
          iVar11 = iVar11 + 1;
          *(float *)((int)this_ptr->fire_effects + this_ptr->fire_count * 0x2a4 + 0x3b4) =
               this_ptr->fire_spread_rate;
          if (local_2c <= iVar11) {
            return;
          }
        }
      }
    }
  }
  return;
}
