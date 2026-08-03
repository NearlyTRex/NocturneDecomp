// Name: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0
// Address: 00519be0
// Address Range: [[00519be0, 00519eb1]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0(CDeformableModel *this_ptr,int bone_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0(CDeformableModel *this_ptr,int bone_index)

{
  CDeformableModelInstance *pCVar1;
  SVert *pSVar2;
  CVector3i *pCVar3;
  int iVar4;
  SVert *pSVar5;
  ushort *puVar6;
  SVert *pSVar7;
  CVector3f local_6c;
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
  
  local_40 = 0.0;
  local_48 = 1e+30;
  local_30 = 0;
  local_44 = 0;
  if (1 < this_ptr->num_parts) {
    pCVar1 = (CDeformableModelInstance *)FUN_0056497c(0x22b4);
    local_24 = (CDeformableModelInstance *)0x0;
    if (pCVar1 != (CDeformableModelInstance *)0x0) {
      local_24 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(pCVar1);
    }
    if (local_24 == (CDeformableModelInstance *)0x0) {
      g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
      g_INT_01cc4804 = 0x5f0;
      core_main_c_FUN_004c8440("Out of memory");
    }
    pCVar1 = local_24;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(local_24,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(pCVar1);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(pCVar1);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(pCVar1,0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (pCVar1,&local_6c,bone_index);
    local_38 = 0;
    if (0 < this_ptr->num_parts) {
      local_3c = this_ptr;
      do {
        local_34 = local_3c;
        local_2c = local_30 * 0x12;
        local_18 = 0.0;
        local_1c = 0;
        local_28 = 0;
        local_14 = 0.0;
        if (0 < local_3c->parts[0].tri_counts[0]) {
          do {
            puVar6 = (ushort *)
                     ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_2c);
            local_20 = puVar6 + 3;
            do {
              pSVar7 = this_ptr->vertex_data_ptr[0] + *puVar6;
              iVar4 = 0;
              pSVar2 = pSVar7;
              pSVar5 = pSVar7;
              while (iVar4 < (int)(uint)pSVar7->num_bone_influences) {
                if ((uint)pSVar5->bone_indices[0] == bone_index) {
                  local_14 = local_14 + pSVar2->bone_weights[0];
                  pSVar2 = (SVert *)pSVar2->bone_weights;
                  iVar4 = iVar4 + 1;
                  pSVar5 = (SVert *)pSVar5->bone_indices;
                }
                else {
                  pSVar2 = (SVert *)pSVar2->bone_weights;
                  iVar4 = iVar4 + 1;
                  pSVar5 = (SVert *)pSVar5->bone_indices;
                }
              }
              pCVar3 = local_24->skinned_vertices_buffer + *puVar6;
              local_60 = (float)pCVar3->x * _DAT_005a1eb0;
              local_5c = (float)pCVar3->y * _DAT_005a1eb0;
              local_58 = (float)pCVar3->z * _DAT_005a1eb0;
              puVar6 = puVar6 + 1;
              local_1c = local_1c + 1;
              local_18 = (local_58 - local_6c.z) * (local_58 - local_6c.z) +
                         (local_5c - local_6c.y) * (local_5c - local_6c.y) +
                         (local_60 - local_6c.x) * (local_60 - local_6c.x) + local_18;
            } while (puVar6 != local_20);
            local_30 = local_30 + 1;
            local_28 = local_28 + 1;
            local_2c = local_2c + 0x12;
          } while (local_28 < local_3c->parts[0].tri_counts[0]);
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
      (*((local_24->motion_controller).vtable)->dtor)(&local_24->motion_controller,2);
    }
    return local_44;
  }
  return 0;
}
