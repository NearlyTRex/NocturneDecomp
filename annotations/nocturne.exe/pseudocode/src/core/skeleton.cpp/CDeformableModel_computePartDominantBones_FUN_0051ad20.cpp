// Name: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20
// Address: 0051ad20
// Address Range: [[0051ad20, 0051b278]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(CDeformableModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(CDeformableModel *this_ptr)

{
  float *pfVar1;
  uchar *puVar2;
  CDeformableModel *pCVar3;
  CSkeleton *pCVar5;
  CDeformableModelInstance *pCVar6;
  int iVar7;
  CVector3i *pCVar8;
  SVert *pSVar9;
  int iVar10;
  SVert *pSVar11;
  int iVar12;
  int iVar13;
  SVert *pSVar14;
  ushort *puVar15;
  float local_230 [100];
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
  SLod *pSVar4;
  
  if (this_ptr->num_parts < 2) {
    this_ptr->parts[0].dominant_bone = 0;
    pCVar3 = this_ptr;
    do {
      pSVar4 = pCVar3->lod_info;
      pCVar3->bone_to_part_map[0] = 0;
      pCVar3 = (CDeformableModel *)pSVar4;
    } while (pSVar4 != (SLod *)(this_ptr->texture_sets[0].textures[2].textures[2].texture_name + 8))
    ;
  }
  else {
    core_skeleton_cpp_CDeformableModel_captureTextures_FUN_005180a0(this_ptr);
    pCVar5 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(this_ptr);
    local_24 = pCVar5->bone_count;
    pCVar6 = operator_new(0x22b4);
    local_20 = (CDeformableModelInstance *)0x0;
    if (pCVar6 != (CDeformableModelInstance *)0x0) {
      local_20 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(pCVar6);
    }
    if (local_20 == (CDeformableModelInstance *)0x0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 2003;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CDeformableModel::computePartDominantBones - out of memory!");
    }
    pCVar6 = local_20;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(local_20,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(pCVar6);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(pCVar6);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(pCVar6,0);
    local_34 = 0;
    if (0 < this_ptr->num_parts) {
      local_2c = this_ptr;
      iVar10 = 0;
      do {
        local_30 = local_2c->parts[0].tri_counts[0] + iVar10;
        if (0 < local_24) {
          iVar13 = local_24 * 4;
          iVar12 = 0;
          do {
            iVar7 = iVar12 + 4;
            *(uint *)((int)local_230 + iVar12) = 0;
            iVar12 = iVar7;
          } while (iVar7 < iVar13);
        }
        if (iVar10 < local_30) {
          local_1c = iVar10 * 0x12;
          local_28 = local_30 * 0x12;
          do {
            puVar15 = (ushort *)
                      ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_1c);
            pCVar8 = local_20->skinned_vertices_buffer + *puVar15;
            local_4c = (float)pCVar8->x * _DAT_005a1eb0;
            local_48 = (float)pCVar8->y * _DAT_005a1eb0;
            local_44 = (float)pCVar8->z * _DAT_005a1eb0;
            pCVar8 = local_20->skinned_vertices_buffer + puVar15[1];
            local_70 = (float)pCVar8->x * _DAT_005a1eb0;
            local_6c = (float)pCVar8->y * _DAT_005a1eb0;
            local_68 = (float)pCVar8->z * _DAT_005a1eb0;
            pCVar8 = local_20->skinned_vertices_buffer + puVar15[2];
            local_40 = (float)pCVar8->x * _DAT_005a1eb0;
            local_3c = (float)pCVar8->y * _DAT_005a1eb0;
            local_38 = (float)pCVar8->z * _DAT_005a1eb0;
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
              pSVar14 = this_ptr->vertex_data_ptr[0] + *puVar15;
              pSVar9 = pSVar14;
              pSVar11 = pSVar14;
              for (iVar10 = 0; iVar10 < (int)(uint)pSVar14->num_bone_influences; iVar10 = iVar10 + 1
                  ) {
                pfVar1 = pSVar9->bone_weights;
                puVar2 = pSVar11->bone_indices;
                pSVar9 = (SVert *)pSVar9->bone_weights;
                pSVar11 = (SVert *)pSVar11->bone_indices;
                local_230[*puVar2] = *pfVar1 * local_14 + local_230[*puVar2];
              }
              puVar15 = puVar15 + 1;
            } while (puVar15 != local_18);
            local_1c = local_1c + 0x12;
          } while (local_1c < local_28);
        }
        iVar13 = 1;
        iVar10 = 0;
        if (1 < local_24) {
          iVar12 = 4;
          do {
            if (local_230[iVar10] < *(float *)((int)local_230 + iVar12)) {
              iVar10 = iVar13;
            }
            iVar13 = iVar13 + 1;
            iVar12 = iVar12 + 4;
          } while (iVar13 < local_24);
        }
        local_2c->parts[0].dominant_bone = iVar10;
        local_34 = local_34 + 1;
        local_2c = (CDeformableModel *)(local_2c->tri_count + 3);
        iVar10 = local_30;
      } while (local_34 < this_ptr->num_parts);
    }
    if (local_20 != (CDeformableModelInstance *)0x0) {
      (*((local_20->motion_controller).vtable)->dtor)(&local_20->motion_controller,2);
    }
    iVar10 = 0;
    pCVar3 = this_ptr;
    if (0 < local_24) {
      do {
        iVar13 = core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0
                           (this_ptr,iVar10);
        iVar10 = iVar10 + 1;
        pCVar3->bone_to_part_map[0] = iVar13;
        pCVar3 = (CDeformableModel *)pCVar3->lod_info;
      } while (iVar10 < local_24);
      return;
    }
  }
  return;
}
