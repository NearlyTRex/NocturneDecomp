// Name: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0
// Address: 005431b0
// Address Range: [[005431b0, 0054348e]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0(CDeformableModel *this_ptr,int bone_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0(CDeformableModel *this_ptr,int bone_index)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  CVector3i *pCVar3;
  SVert *pSVar4;
  SVert *pSVar5;
  SVert *pSVar6;
  ushort *puVar7;
  byte bVar8;
  float afStackY_1060 [1015];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_48;
  int local_44;
  float local_40;
  CDeformableModel *local_3c;
  int local_38;
  CDeformableModel *local_34;
  int local_30;
  int local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  ushort *local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  bVar8 = 0;
  local_40 = 0.0;
  local_48 = 1e+30;
  local_30 = 0;
  local_44 = 0;
  if (1 < this_ptr->num_parts) {
    pCVar1 = (CDeformableModelInstance *)operator_new(0x22b4);
    local_24 = (CDeformableModelInstance *)0x0;
    if (pCVar1 != (CDeformableModelInstance *)0x0) {
      local_24 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0(pCVar1);
    }
    if (local_24 == (CDeformableModelInstance *)0x0) {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0x5ff;
      core_main_c_FUN_004e4500("Out of memory");
    }
    pCVar1 = local_24;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(local_24,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(pCVar1);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(pCVar1);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(pCVar1,0);
    core_skeleton_cpp_FUN_005469a0(pCVar1,bone_index);
    local_78 = local_6c;
    *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffff98 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    local_38 = 0;
    if (0 < this_ptr->num_parts) {
      local_3c = this_ptr;
      do {
        local_34 = local_3c;
        local_28 = local_30 * 0x12;
        local_18 = 0.0;
        local_1c = 0;
        local_2c = 0;
        local_14 = 0.0;
        if (0 < local_3c->parts[0].tri_counts[0]) {
          do {
            puVar7 = (ushort *)
                     ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_28);
            local_20 = puVar7 + 3;
            do {
              pSVar6 = this_ptr->vertex_data_ptr[0] + *puVar7;
              iVar2 = 0;
              pSVar4 = pSVar6;
              pSVar5 = pSVar6;
              while (iVar2 < (int)(uint)pSVar6->num_bone_influences) {
                if ((uint)pSVar5->bone_indices[0] == bone_index) {
                  local_14 = local_14 + pSVar4->bone_weights[0];
                  pSVar4 = (SVert *)pSVar4->bone_weights;
                  iVar2 = iVar2 + 1;
                  pSVar5 = (SVert *)pSVar5->bone_indices;
                }
                else {
                  pSVar4 = (SVert *)pSVar4->bone_weights;
                  iVar2 = iVar2 + 1;
                  pSVar5 = (SVert *)pSVar5->bone_indices;
                }
              }
              pCVar3 = local_24->skinned_vertices_buffer + *puVar7;
              local_60 = (float)pCVar3->x * _DAT_005fb9a0;
              local_5c = (float)pCVar3->y * _DAT_005fb9a0;
              local_58 = (float)pCVar3->z * _DAT_005fb9a0;
              puVar7 = puVar7 + 1;
              local_1c = local_1c + 1;
              local_18 = (local_58 - local_70) * (local_58 - local_70) +
                         (local_5c - local_74) * (local_5c - local_74) +
                         (local_60 - local_78) * (local_60 - local_78) + local_18;
            } while (puVar7 != local_20);
            local_30 = local_30 + 1;
            local_2c = local_2c + 1;
            local_28 = local_28 + 0x12;
          } while (local_2c < local_3c->parts[0].tri_counts[0]);
        }
        if (local_14 <= local_40) {
          if (ABS(local_40) == 0.0) {
            local_10 = local_1c;
            local_18 = local_18 / (float)local_1c;
            if (local_18 < local_48) {
              local_44 = local_38;
              local_48 = local_18;
            }
          }
        }
        else {
          local_40 = local_14;
          local_44 = local_38;
        }
        local_3c = (CDeformableModel *)(local_3c->tri_count + 3);
        local_38 = local_38 + 1;
      } while (local_38 < this_ptr->num_parts);
    }
    if (local_24 != (CDeformableModelInstance *)0x0) {
      (*((local_24->base).vtable)->dtor)(&local_24->base,2);
    }
    return local_44;
  }
  return 0;
}
