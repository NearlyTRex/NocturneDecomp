// Name: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0
// Address: 004266a0
// Address Range: [[004266a0, 004269a7]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDeformableModel *this_ptr_00;
  CVector3f *pCVar4;
  int iVar5;
  CSkeleton *pCVar6;
  CVector3f *pCVar7;
  SFire *pSVar8;
  int iVar9;
  double dVar10;
  float local_78;
  CVector3f local_6c;
  CVector3f CStack_60;
  float fStack_54;
  float local_50;
  float local_4c;
  CMatrix3x4f *local_44;
  CFlame *local_40;
  SFire *local_3c;
  int local_38;
  CDeformableModelInstance *local_34;
  int local_30;
  float local_2c;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  
  if (-1 < target_bone_index) {
    iVar5 = -1;
    local_44 = (CMatrix3x4f *)(this_ptr->model).transformed_vertices;
    iVar9 = 0;
    local_24 = 0.0;
    pCVar6 = skeleton;
    pCVar4 = (CVector3f *)local_44;
    if (0 < skeleton->bone_count) {
      do {
        if ((target_bone_index == pCVar6->bone_list[0].parent_index) &&
           (local_20 = SQRT(pCVar4->z * pCVar4->z + pCVar4->x * pCVar4->x + pCVar4->y * pCVar4->y),
           local_24 < local_20)) {
          iVar5 = iVar9;
          local_24 = local_20;
        }
        pCVar6 = (CSkeleton *)((pCVar6->motion_list).state_names[1] + 2);
        iVar9 = iVar9 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar9 < skeleton->bone_count);
    }
    if (iVar5 != -1) {
      pCVar7 = (CVector3f *)((int)local_44 + target_bone_index * 0xc);
      pCVar4 = (CVector3f *)((int)local_44 + iVar5 * 0xc);
      fVar1 = pCVar4->x - pCVar7->x;
      fVar2 = pCVar4->y - pCVar7->y;
      local_6c.x = pCVar4->z - pCVar7->z;
      dVar10 = round
                         ((double)(SQRT(local_6c.x * local_6c.x + fVar1 * fVar1 + fVar2 * fVar2) *
                                  (float)0.5));
      local_1c = (int)ROUND(dVar10);
      local_30 = local_1c + 1;
      iVar5 = 0;
      if (0 < local_30) {
        local_44 = (this_ptr->model).bone_transform.bone_world_matrices;
        local_40 = this_ptr->flames;
        local_3c = this_ptr->fires;
        local_34 = &this_ptr->model;
        local_38 = local_1c + 2;
        while (this_ptr->fire_count < 0x32) {
          iVar9 = this_ptr->fire_count;
          (this_ptr->base).is_transparent = 1;
          pSVar8 = local_3c + iVar9;
          this_ptr->fire_count = iVar9 + 1;
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                                  (local_34);
          iVar9 = core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0
                            (this_ptr_00,target_bone_index);
          pSVar8->bone_part = iVar9;
          local_1c = local_38;
          local_18 = iVar5 + 1;
          pSVar8->bone_index = target_bone_index;
          local_20 = (float)local_18;
          local_2c = (float)local_38;
          local_4c = 1.0 / local_2c;
          fStack_54 = local_78 * local_20 * local_4c;
          local_50 = fVar1 * local_20 * local_4c;
          local_4c = fVar2 * local_20 * local_4c;
          if (&pSVar8->offset != (CVector3f *)&fStack_54) {
            (pSVar8->offset).x = fStack_54;
            (pSVar8->offset).y = local_50;
            (pSVar8->offset).z = local_4c;
          }
          pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                             (&local_6c,&pSVar8->offset,local_44 + pSVar8->bone_index);
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             (&this_ptr->base,&CStack_60,pCVar4);
          iVar9 = this_ptr->fire_count + -1;
          local_40[iVar9].base.location.position.x = pCVar4->x;
          local_40[iVar9].base.location.position.y = pCVar4->y;
          local_40[iVar9].base.location.position.z = pCVar4->z;
          *(uint *)((int)this_ptr->fires + this_ptr->fire_count * 0x29c + 0x3b8) = 0;
          pSVar8->size = 0.5;
          fVar3 = (float)0.5;
          *(float *)((int)this_ptr->fires + this_ptr->fire_count * 0x29c + 0x364) =
               pSVar8->size * fVar3;
          *(float *)((int)this_ptr->fires + this_ptr->fire_count * 0x29c + 0x368) = pSVar8->size;
          *(float *)((int)this_ptr->fires + this_ptr->fire_count * 0x29c + 0x36c) =
               fVar3 * pSVar8->size;
          iVar5 = iVar5 + 1;
          *(int *)((int)this_ptr->fires + this_ptr->fire_count * 0x29c + 0x3b4) =
               this_ptr->pending_flame_type;
          if (local_30 <= iVar5) {
            return;
          }
        }
      }
    }
  }
  return;
}
