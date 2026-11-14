// Name: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0
// Address: 0042f4d0
// Address Range: [[0042f4d0, 0042f8d2]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

{
  float fVar1;
  SFire *pSVar2;
  CDeformableModel *this_ptr_00;
  int iVar3;
  CSkeleton *pCVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_10b0 [1016];
  uint *puVar10;
  float local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_98;
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
  float local_64;
  float local_60;
  uint local_5c;
  CVector3f *local_4c;
  CDeformableModelInstance *local_48;
  CFlame *local_44;
  SFire *local_40;
  CMatrix3x4f *local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  SFire *local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  if (-1 < target_bone_index) {
    iVar3 = -1;
    local_4c = (this_ptr->model).bone_origins;
    iVar7 = 0;
    local_2c = 0.0;
    pCVar4 = skeleton;
    pCVar6 = local_4c;
    if (0 < skeleton->bone_count) {
      do {
        if ((pCVar4->bone_list[0].parent_index == target_bone_index) &&
           (local_28 = SQRT(pCVar6->z * pCVar6->z + pCVar6->x * pCVar6->x + pCVar6->y * pCVar6->y),
           local_2c < local_28)) {
          iVar3 = iVar7;
          local_2c = local_28;
        }
        pCVar4 = (CSkeleton *)((pCVar4->motion_list).state_names[1] + 2);
        iVar7 = iVar7 + 1;
        pCVar6 = pCVar6 + 1;
      } while (iVar7 < skeleton->bone_count);
    }
    if (iVar3 != -1) {
      pCVar5 = local_4c + target_bone_index;
      pCVar6 = local_4c + iVar3;
      local_b0 = pCVar6->x - pCVar5->x;
      local_ac = pCVar6->y - pCVar5->y;
      local_a8 = pCVar6->z - pCVar5->z;
      fVar9 = SQRT((float10)local_a8 * (float10)local_a8 +
                   (float10)local_b0 * (float10)local_b0 + (float10)local_ac * (float10)local_ac) *
              (float10)_DAT_005d59b7;
      local_80 = local_b0;
      local_7c = local_ac;
      local_78 = local_a8;
      round();
      local_18 = (int)ROUND(fVar9);
      local_34 = local_18 + 1;
      local_20 = 0;
      if (0 < local_34) {
        local_3c = (this_ptr->model).bone_transform.bone_model_matrices;
        local_44 = this_ptr->flames;
        local_40 = this_ptr->fires;
        local_48 = &this_ptr->model;
        local_38 = local_18 + 2;
        while (this_ptr->fire_count < 0x32) {
          iVar3 = this_ptr->fire_count;
          (this_ptr->base).is_transparent = 1;
          local_1c = local_40 + iVar3;
          this_ptr->fire_count = iVar3 + 1;
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                                  (local_48);
          iVar3 = core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00565810
                            (this_ptr_00,target_bone_index);
          pSVar2 = local_1c;
          local_1c->bone_part = iVar3;
          local_1c->bone_index = target_bone_index;
          local_18 = local_38;
          local_14 = local_20 + 1;
          local_24 = (float)(local_20 + 1);
          fVar1 = (float)local_38;
          local_bc = local_80 * local_24;
          local_b8 = local_7c * local_24;
          local_b4 = local_78 * local_24;
          local_8c = local_80 * local_24;
          *(uint *)((int)&stack0xffffff78 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffff48 + (uint)bVar8 * -8);
          *(uint *)((int)&stack0xffffff7c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffff4c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          local_30 = fVar1;
          fVar1 = 1.0 / fVar1;
          local_98 = local_8c * fVar1;
          local_94 = local_88 * fVar1;
          local_90 = local_84 * fVar1;
          local_68 = local_8c * fVar1;
          (&stack0xffffff9c)[(uint)bVar8 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xffffff6c + (uint)bVar8 * -8);
          *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffff70 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if (&pSVar2->offset != (CVector3f *)&stack0xffffff98) {
            (pSVar2->offset).x = local_68;
            (pSVar2->offset).y = local_64;
            (pSVar2->offset).z = local_60;
          }
          core_xform_cpp_FUN_005b5080(&local_1c->offset,local_3c + local_1c->bone_index);
          puVar10 = &stack0xffffff5c;
          local_a4 = local_5c;
          *(uint *)((int)&stack0xffffff60 + (uint)bVar8 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffa8 + (uint)bVar8 * -8);
          *(uint *)(&stack0xffffff64 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xffffffac + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          core_actor_cpp_FUN_00408b40(this_ptr,puVar10);
          local_74 = local_c8;
          (&stack0xffffff90)[(uint)bVar8 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff3c + (uint)bVar8 * -8);
          *(uint *)((int)&stack0xffffff94 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xffffff40 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          iVar3 = this_ptr->fire_count + -1;
          local_44[iVar3].base.location.position.x = local_74;
          local_44[iVar3].base.location.position.y = local_70;
          local_44[iVar3].base.location.position.z = local_6c;
          *(uint *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x3b8) = 0;
          local_1c->size = 0.5;
          fVar1 = (float)_DAT_005d59b7;
          *(float *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x364) =
               local_1c->size * fVar1;
          *(float *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x368) = local_1c->size;
          *(float *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x36c) =
               fVar1 * local_1c->size;
          *(EFlameType *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x3b4) =
               this_ptr->pending_flame_type;
          local_20 = local_20 + 1;
          if (local_34 <= local_20) {
            return;
          }
        }
      }
    }
  }
  return;
}
