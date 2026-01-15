// Name: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460
// Address: 0059d460
// Address Range: [[0059d460, 0059d9d4]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(CDeformableModel * this_ptr)

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(CDeformableModel *this_ptr)

{
  float *pfVar1;
  uchar *puVar2;
  STextureSet *pSVar3;
  CSkeleton *pCVar4;
  CDeformableModelInstance *pCVar5;
  int iVar6;
  CVector3i *pCVar7;
  SVert *pSVar8;
  int iVar9;
  int iVar10;
  SVert *pSVar11;
  int iVar12;
  SVert *pSVar13;
  CDeformableModel *pCVar14;
  ushort *puVar15;
  CVector3f *in_stack_fffffdd4;
  float local_a0;
  float local_9c;
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
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  CDeformableModel *local_2c;
  int local_28;
  int local_24;
  CDeformableModelInstance *local_20;
  int local_1c;
  ushort *local_18;
  float local_14;
  
  if (this_ptr->num_parts < 2) {
    this_ptr->parts[0].dominant_bone = 0;
    pSVar3 = this_ptr->texture_sets;
    do {
      local_20 = (CDeformableModelInstance *)this_ptr->lod_info;
      this_ptr->bone_to_part_map[0] = 0;
      this_ptr = (CDeformableModel *)local_20;
    } while (local_20 !=
             (CDeformableModelInstance *)(pSVar3->textures[2].texture_variants[2].texture_name + 8))
    ;
  }
  else {
    core_skeleton_cpp_CDeformableModel_captureTextures_FUN_0059a780(this_ptr);
    pCVar4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
    local_24 = pCVar4->bone_count;
    pCVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeleton.cpp",0x7d2);
    local_20 = (CDeformableModelInstance *)0x0;
    if (pCVar5 != (CDeformableModelInstance *)0x0) {
      local_20 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(pCVar5);
    }
    if (local_20 == (CDeformableModelInstance *)0x0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x7d3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::computePartDominantBones - out of memory!");
    }
    pCVar5 = local_20;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(local_20,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar5);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar5);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(pCVar5,0);
    local_34 = 0;
    if (0 < this_ptr->num_parts) {
      local_2c = this_ptr;
      iVar9 = 0;
      do {
        local_30 = local_2c->parts[0].tri_counts[0] + iVar9;
        if (0 < local_24) {
          iVar10 = local_24 * 4;
          iVar12 = 0;
          do {
            iVar6 = iVar12 + 4;
            *(uint *)(&stack0xfffffdd0 + iVar12) = 0;
            iVar12 = iVar6;
          } while (iVar6 < iVar10);
        }
        if (iVar9 < local_30) {
          local_1c = iVar9 * 0x12;
          local_28 = local_30 * 0x12;
          do {
            puVar15 = (ushort *)
                      ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_1c);
            pCVar7 = local_20->skinned_vertices_buffer + *puVar15;
            local_4c = (float)pCVar7->x * 0.00390625f;
            local_48 = (float)pCVar7->y * 0.00390625f;
            local_44 = (float)pCVar7->z * 0.00390625f;
            pCVar7 = local_20->skinned_vertices_buffer + puVar15[1];
            local_70 = (float)pCVar7->x * 0.00390625f;
            local_6c = (float)pCVar7->y * 0.00390625f;
            local_68 = (float)pCVar7->z * 0.00390625f;
            pCVar7 = local_20->skinned_vertices_buffer + puVar15[2];
            local_40 = (float)pCVar7->x * 0.00390625f;
            local_3c = (float)pCVar7->y * 0.00390625f;
            local_38 = (float)pCVar7->z * 0.00390625f;
            local_58 = local_40 - local_70;
            local_54 = local_3c - local_6c;
            local_50 = local_38 - local_68;
            if (&local_a0 != &local_58) {
              local_a0 = local_58;
              local_9c = local_54;
              local_98 = local_50;
            }
            local_7c = local_70 - local_4c;
            local_78 = local_6c - local_48;
            local_74 = local_68 - local_44;
            if (&local_88 != &local_7c) {
              local_88 = local_7c;
              local_84 = local_78;
              local_80 = local_74;
            }
            local_94 = local_9c * local_80 - local_98 * local_84;
            local_90 = local_98 * local_88 - local_a0 * local_80;
            local_8c = local_a0 * local_84 - local_9c * local_88;
            if (&local_64 != &local_94) {
              local_64 = local_94;
              local_60 = local_90;
              local_5c = local_8c;
            }
            local_18 = puVar15 + 3;
            local_14 = SQRT(local_5c * local_5c + local_64 * local_64 + local_60 * local_60);
            do {
              pSVar13 = this_ptr->vertex_data_ptr[0] + *puVar15;
              pSVar8 = pSVar13;
              pSVar11 = pSVar13;
              for (iVar9 = 0; iVar9 < (int)(uint)pSVar13->num_bone_influences; iVar9 = iVar9 + 1) {
                pfVar1 = pSVar8->bone_weights;
                puVar2 = pSVar11->bone_indices;
                pSVar8 = (SVert *)pSVar8->bone_weights;
                pSVar11 = (SVert *)pSVar11->bone_indices;
                *(float *)(&stack0xfffffdd0 + (uint)*puVar2 * 4) =
                     *pfVar1 * local_14 + *(float *)(&stack0xfffffdd0 + (uint)*puVar2 * 4);
              }
              puVar15 = puVar15 + 1;
            } while (puVar15 != local_18);
            local_1c = local_1c + 0x12;
          } while (local_1c < local_28);
        }
        iVar12 = 1;
        iVar9 = 0;
        if (1 < local_24) {
          iVar10 = 4;
          do {
            if (*(float *)(&stack0xfffffdd0 + iVar9 * 4) < *(float *)(&stack0xfffffdd0 + iVar10)) {
              iVar9 = iVar12;
            }
            iVar12 = iVar12 + 1;
            iVar10 = iVar10 + 4;
          } while (iVar12 < local_24);
        }
        local_2c->parts[0].dominant_bone = iVar9;
        local_34 = local_34 + 1;
        local_2c = (CDeformableModel *)(local_2c->tri_count + 3);
        iVar9 = local_30;
      } while (local_34 < this_ptr->num_parts);
    }
    g_CurrentDebugLine = 0x815;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    if (local_20 != (CDeformableModelInstance *)0x0) {
      (*((local_20->motion_controller).vtable)->dtor)(&local_20->motion_controller);
    }
    iVar9 = 0;
    pCVar14 = this_ptr;
    if (0 < (int)local_20) {
      do {
        iVar12 = core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
                           (this_ptr,iVar9,in_stack_fffffdd4);
        iVar9 = iVar9 + 1;
        pCVar14->bone_to_part_map[0] = iVar12;
        pCVar14 = (CDeformableModel *)pCVar14->lod_info;
      } while (iVar9 < (int)local_20);
      return iVar12;
    }
  }
  return (int)local_20;
}
