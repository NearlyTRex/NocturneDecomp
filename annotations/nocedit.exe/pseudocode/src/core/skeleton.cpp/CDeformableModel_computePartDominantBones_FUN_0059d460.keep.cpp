// Name: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460
// Address: 0059d460
// MANUAL RECONSTRUCTION
// Address Range: [[0059d460, 0059d9d4]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(CDeformableModel *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(CDeformableModel *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *pCVar4;
  CDeformableModelInstance *pCVar5;
  int iVar6;
  CVector3i *pCVar7;
  CVector3i *pCVar1;
  int iVar9;
  int iVar2;
  int iVar12;
  SVert *pSVar13;
  ushort *puVar15;
  int iVar3;
  float local_230 [100];
  float local_a0;
  float local_9c;
  float local_98;
  float local_88;
  float local_84;
  float local_80;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_28;
  SLod *local_24;
  CDeformableModelInstance *local_20;
  int local_1c;
  ushort *local_18;
  float local_14;
  STextureSet *pSVar3;
  
  if (this_ptr->num_parts < 2) {
    this_ptr->parts[0].dominant_bone = 0;
    pSVar3 = this_ptr->texture_sets;
    do {
      local_24 = this_ptr->lod_info;
      this_ptr->bone_to_part_map[0] = 0;
      this_ptr = (CDeformableModel *)local_24;
    } while (local_24 != (SLod *)(pSVar3->textures[2].textures[2].texture_name + 8));
  }
  else {
    core_skeleton_cpp_CDeformableModel_captureTextures_FUN_0059a780(this_ptr);
    pCVar4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
    local_24 = (SLod *)pCVar4->bone_count;
    pCVar5 = (CDeformableModelInstance *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                       (0x22b4,"..\\core\\skeleton.cpp",0x7d2);
    local_20 = (CDeformableModelInstance *)0x0;
    if (pCVar5 != (CDeformableModelInstance *)0x0) {
      local_20 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(pCVar5);
    }
    if (local_20 == (CDeformableModelInstance *)0x0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x7d3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::computePartDominantBones - out of memory!");
    }
    this_ptr_00 = local_20;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(local_20,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_00,0);
    local_34 = 0;
    if (0 < this_ptr->num_parts) {
      iVar3 = 0;
      do {
        local_30 = this_ptr->parts[local_34].tri_counts[0] + iVar3;
        if (0 < (int)local_24) {
          iVar6 = 0;
          do {
            local_230[iVar6] = 0.0f;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)local_24);
        }
        if (iVar3 < local_30) {
          local_1c = iVar3 * 0x12;
          local_28 = local_30 * 0x12;
          do {
            puVar15 = (ushort *)
                      ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_1c);
            pCVar7 = local_20->skinned_vertices_buffer + *puVar15;
            local_4c = (float)pCVar7->x * 0.00390625f;
            local_48 = (float)pCVar7->y * 0.00390625f;
            local_44 = (float)pCVar7->z * 0.00390625f;
            pCVar1 = local_20->skinned_vertices_buffer + puVar15[1];
            local_70 = (float)pCVar1->x * 0.00390625f;
            local_6c = (float)pCVar1->y * 0.00390625f;
            local_68 = (float)pCVar1->z * 0.00390625f;
            pCVar1 = local_20->skinned_vertices_buffer + puVar15[2];
            local_40 = (float)pCVar1->x * 0.00390625f;
            local_3c = (float)pCVar1->y * 0.00390625f;
            local_38 = (float)pCVar1->z * 0.00390625f;
            local_a0 = local_40 - local_70;
            local_9c = local_3c - local_6c;
            local_98 = local_38 - local_68;
            local_88 = local_70 - local_4c;
            local_84 = local_6c - local_48;
            local_80 = local_68 - local_44;
            local_64 = local_9c * local_80 - local_98 * local_84;
            local_60 = local_98 * local_88 - local_a0 * local_80;
            local_5c = local_a0 * local_84 - local_9c * local_88;
            local_18 = puVar15 + 3;
            local_14 = SQRT(local_5c * local_5c + local_64 * local_64 + local_60 * local_60);
            do {
              pSVar13 = this_ptr->vertex_data_ptr[0] + *puVar15;
              for (iVar9 = 0; iVar9 < (int)(uint)pSVar13->num_bone_influences; iVar9 = iVar9 + 1) {
                local_230[pSVar13->bone_indices[iVar9]] =
                     pSVar13->bone_weights[iVar9] * local_14 +
                     local_230[pSVar13->bone_indices[iVar9]];
              }
              puVar15 = puVar15 + 1;
            } while (puVar15 != local_18);
            local_1c = local_1c + 0x12;
          } while (local_1c < local_28);
        }
        iVar12 = 1;
        iVar3 = 0;
        if (1 < (int)local_24) {
          do {
            if (local_230[iVar3] < local_230[iVar12]) {
              iVar3 = iVar12;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)local_24);
        }
        this_ptr->parts[local_34].dominant_bone = iVar3;
        local_34 = local_34 + 1;
        iVar3 = local_30;
      } while (local_34 < this_ptr->num_parts);
    }
    g_CurrentDebugLine = 0x815;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    if (local_20 != (CDeformableModelInstance *)0x0) {
      (*((local_20->motion_controller).vtable)->dtor)(&local_20->motion_controller,2);
    }
    iVar3 = 0;
    if (0 < (int)local_24) {
      do {
        iVar2 = core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
                          (this_ptr,iVar3);
        this_ptr->bone_to_part_map[iVar3] = iVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_24);
      return iVar2;
    }
  }
  return (int)local_24;
}
