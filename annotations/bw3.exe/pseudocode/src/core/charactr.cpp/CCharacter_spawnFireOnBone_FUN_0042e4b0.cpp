// Name: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0
// Address: 0042e4b0
// Address Range: [[0042e4b0, 0042e8b2]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

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
  double dVar9;
  float afStackY_10b4 [1016];
  CVector3f CStack_cc;
  float fStack_c0;
  float local_bc [4];
  float local_ac;
  CVector3f local_a8;
  float fStack_9c;
  float local_98 [4];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74 [4];
  float local_64;
  CVector3f local_60;
  CDeformableModelInstance *local_4c;
  CFlame *local_48;
  SFire *local_44;
  CMatrix3x4f *local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_2c;
  float local_28;
  int local_24;
  SFire *local_20;
  int local_1c;
  int local_18;
  
  bVar8 = 0;
  if (-1 < target_bone_index) {
    iVar3 = -1;
    local_4c = (CDeformableModelInstance *)(this_ptr->model).bone_origins;
    iVar7 = 0;
    local_2c = 0.0;
    pCVar4 = skeleton;
    pCVar6 = (CVector3f *)local_4c;
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
      pCVar5 = (CVector3f *)((int)local_4c + target_bone_index * 0xc);
      pCVar6 = (CVector3f *)((int)local_4c + iVar3 * 0xc);
      local_bc[3] = pCVar6->x - pCVar5->x;
      local_ac = pCVar6->y - pCVar5->y;
      local_a8.x = pCVar6->z - pCVar5->z;
      CStack_cc.x = 6.143507e-39;
      local_80 = local_bc[3];
      local_7c = local_ac;
      local_78 = local_a8.x;
      dVar9 = round
                        ((double)(SQRT(local_a8.x * local_a8.x +
                                       local_bc[3] * local_bc[3] + local_ac * local_ac) *
                                 (float)0.5));
      local_1c = (int)ROUND(dVar9);
      local_38 = local_1c + 1;
      local_24 = 0;
      if (0 < local_38) {
        local_40 = (this_ptr->model).bone_transform.bone_model_matrices;
        local_48 = this_ptr->flames;
        local_44 = this_ptr->fires;
        local_4c = &this_ptr->model;
        local_3c = local_1c + 2;
        while (this_ptr->fire_count < 0x32) {
          iVar3 = this_ptr->fire_count;
          (this_ptr->base).is_transparent = 1;
          local_20 = local_44 + iVar3;
          this_ptr->fire_count = iVar3 + 1;
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                                  (local_4c);
          iVar3 = core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0054a3a0
                            (this_ptr_00,target_bone_index);
          pSVar2 = local_20;
          local_20->bone_part = iVar3;
          local_20->bone_index = target_bone_index;
          local_1c = local_3c;
          local_18 = local_24 + 1;
          local_28 = (float)(local_24 + 1);
          fVar1 = (float)local_3c;
          fStack_c0 = local_84 * local_28;
          local_bc[0] = local_80 * local_28;
          local_bc[1] = local_7c * local_28;
          local_98[2] = local_84 * local_28;
          local_98[(uint)bVar8 * -2 + 3] = local_bc[(uint)bVar8 * -2];
          local_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               local_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          local_34 = fVar1;
          fVar1 = 1.0 / fVar1;
          fStack_9c = local_98[2] * fVar1;
          local_98[0] = local_98[3] * fVar1;
          local_98[1] = local_88 * fVar1;
          local_74[2] = local_98[2] * fVar1;
          local_74[(uint)bVar8 * -2 + 3] = local_98[(uint)bVar8 * -2];
          local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               local_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (&pSVar2->offset != (CVector3f *)(local_74 + 2)) {
            (pSVar2->offset).x = local_74[2];
            (pSVar2->offset).y = local_74[3];
            (pSVar2->offset).z = local_64;
          }
          core_xform_cpp_transformVector3x4_FUN_00583260
                    (&local_20->offset,local_40 + local_20->bone_index,&local_60);
          pCVar6 = &local_a8;
          local_a8.x = local_60.x;
          *(uint *)((int)&local_a8 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&local_60 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&local_a8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&local_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    (&this_ptr->base,pCVar6,&CStack_cc);
          local_78 = CStack_cc.x;
          local_74[(uint)bVar8 * -2] = *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + 4);
          local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          iVar3 = this_ptr->fire_count + -1;
          local_48[iVar3].base.location.position.x = local_78;
          local_48[iVar3].base.location.position.y = local_74[0];
          local_48[iVar3].base.location.position.z = local_74[1];
          *(uint *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x3b8) = 0;
          local_20->size = 0.5;
          fVar1 = (float)0.5;
          *(float *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x364) =
               local_20->size * fVar1;
          *(float *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x368) = local_20->size;
          *(float *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x36c) =
               fVar1 * local_20->size;
          *(EFlameType *)((int)this_ptr->fires + this_ptr->fire_count * 0x2a4 + 0x3b4) =
               this_ptr->pending_flame_type;
          local_24 = local_24 + 1;
          if (local_38 <= local_24) {
            return;
          }
        }
      }
    }
  }
  return;
}
