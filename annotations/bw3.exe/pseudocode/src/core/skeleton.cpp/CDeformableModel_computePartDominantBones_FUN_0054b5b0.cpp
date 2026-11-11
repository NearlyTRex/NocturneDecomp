// Name: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0
// Address: 0054b5b0
// Address Range: [[0054b5b0, 0054bb5e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0(CDeformableModel *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0(CDeformableModel *this_ptr)

{
  float *pfVar1;
  uchar *puVar2;
  CDeformableModel *pCVar3;
  CSkeleton *pCVar5;
  CDeformableModelInstance *pCVar6;
  int iVar7;
  CVector3i *pCVar8;
  int iVar9;
  SVert *pSVar10;
  SVert *pSVar11;
  int iVar12;
  SVert *pSVar13;
  ushort *puVar14;
  int iVar15;
  byte bVar16;
  float afStackY_10b0 [916];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
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
  int local_38;
  int local_34;
  CDeformableModel *local_30;
  int local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  int local_20;
  ushort *local_1c;
  float local_18;
  SLod *pSVar4;
  
  bVar16 = 0;
  if (this_ptr->num_parts < 2) {
    this_ptr->parts[0].dominant_bone = 0;
    pCVar3 = this_ptr;
    do {
      pSVar4 = pCVar3->lod_info;
      pCVar3->bone_to_part_map[0] = 0;
      pCVar3 = (CDeformableModel *)pSVar4;
    } while (pSVar4 != (SLod *)(this_ptr->texture_sets[0].textures[2].texture_name + 0x38));
  }
  else {
    core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00548750(this_ptr);
    pCVar5 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(this_ptr);
    local_28 = pCVar5->bone_count;
    pCVar6 = (CDeformableModelInstance *)operator_new(0x23a4);
    local_24 = (CDeformableModelInstance *)0x0;
    if (pCVar6 != (CDeformableModelInstance *)0x0) {
      local_24 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0054bf00(pCVar6);
    }
    if (local_24 == (CDeformableModelInstance *)0x0) {
      _DAT_01d71de0 = "..\\core\\skeleton.cpp";
      _DAT_01d71de4 = 0x7e9;
      core_main_c_FUN_004e4330("CDeformableModel::computePartDominantBones - out of memory!");
    }
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0(local_24,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(local_24);
    pCVar6 = local_24;
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(local_24);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(pCVar6,0);
    local_38 = 0;
    if (0 < this_ptr->num_parts) {
      local_30 = this_ptr;
      iVar9 = 0;
      do {
        local_34 = local_30->parts[0].tri_counts[0] + iVar9;
        if (0 < local_28) {
          iVar15 = local_28 * 4;
          iVar12 = 0;
          do {
            iVar7 = iVar12 + 4;
            *(uint *)(&stack0xfffffda8 + iVar12) = 0;
            iVar12 = iVar7;
          } while (iVar7 < iVar15);
        }
        if (iVar9 < local_34) {
          local_20 = iVar9 * 0x12;
          local_2c = local_34 * 0x12;
          do {
            puVar14 = (ushort *)
                      ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_20);
            pCVar8 = local_24->skinned_vertices_buffer + *puVar14;
            local_8c = (float)pCVar8->x * _DAT_005e4760;
            local_88 = (float)pCVar8->y * _DAT_005e4760;
            local_84 = (float)pCVar8->z * _DAT_005e4760;
            pCVar8 = local_24->skinned_vertices_buffer + puVar14[1];
            local_98 = (float)pCVar8->x * _DAT_005e4760;
            local_94 = (float)pCVar8->y * _DAT_005e4760;
            local_90 = (float)pCVar8->z * _DAT_005e4760;
            pCVar8 = local_24->skinned_vertices_buffer + puVar14[2];
            local_68 = (float)pCVar8->x * _DAT_005e4760;
            local_64 = (float)pCVar8->y * _DAT_005e4760;
            local_60 = (float)pCVar8->z * _DAT_005e4760;
            local_c8 = local_68 - local_98;
            local_c4 = local_64 - local_94;
            local_c0 = local_60 - local_90;
            local_80 = local_c8;
            (&stack0xffffff84)[(uint)bVar16 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffff3c + (uint)bVar16 * -8);
            *(uint *)((int)&stack0xffffff88 + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
                 *(uint *)((int)&stack0xffffff40 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
            if (&stack0xffffffb0 != &stack0xffffff80) {
              local_50 = local_80;
              local_4c = local_7c;
              local_48 = local_78;
            }
            local_40 = local_94 - local_88;
            local_3c = local_90 - local_84;
            local_44 = local_98 - local_8c;
            local_a4 = local_98 - local_8c;
            (&stack0xffffff60)[(uint)bVar16 * 0xfffffffe] =
                 (&stack0xffffffc0)[(uint)bVar16 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff64 + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
                 *(uint *)((int)&stack0xffffffc4 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
            if (&stack0xffffff8c != &stack0xffffff5c) {
              local_74 = local_a4;
              local_70 = local_a0;
              local_6c = local_9c;
            }
            local_5c = local_4c * local_6c - local_48 * local_70;
            local_58 = local_48 * local_74 - local_50 * local_6c;
            local_54 = local_50 * local_70 - local_4c * local_74;
            local_bc = local_5c;
            (&stack0xffffff48)[(uint)bVar16 * 0xfffffffe] =
                 (&stack0xffffffa8)[(uint)bVar16 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff4c + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
                 *(uint *)((int)&stack0xffffffac + (uint)bVar16 * -8 + (uint)bVar16 * -8);
            if (&stack0xffffff50 != &stack0xffffff44) {
              local_b0 = local_bc;
              local_ac = local_b8;
              local_a8 = local_b4;
            }
            local_1c = puVar14 + 3;
            local_18 = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
            do {
              pSVar13 = this_ptr->vertex_data_ptr[0] + *puVar14;
              pSVar10 = pSVar13;
              pSVar11 = pSVar13;
              for (iVar9 = 0; iVar9 < (int)(uint)pSVar13->num_bone_influences; iVar9 = iVar9 + 1) {
                pfVar1 = pSVar11->bone_weights;
                puVar2 = pSVar10->bone_indices;
                pSVar11 = (SVert *)pSVar11->bone_weights;
                pSVar10 = (SVert *)pSVar10->bone_indices;
                *(float *)(&stack0xfffffda8 + (uint)*puVar2 * 4) =
                     *pfVar1 * local_18 + *(float *)(&stack0xfffffda8 + (uint)*puVar2 * 4);
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != local_1c);
            local_20 = local_20 + 0x12;
          } while (local_20 < local_2c);
        }
        iVar15 = 1;
        iVar9 = 0;
        if (1 < local_28) {
          iVar12 = 4;
          do {
            if (*(float *)(&stack0xfffffda8 + iVar9 * 4) < *(float *)(&stack0xfffffda8 + iVar12)) {
              iVar9 = iVar15;
            }
            iVar15 = iVar15 + 1;
            iVar12 = iVar12 + 4;
          } while (iVar15 < local_28);
        }
        local_38 = local_38 + 1;
        local_30->parts[0].dominant_bone = iVar9;
        local_30 = (CDeformableModel *)(local_30->tri_count + 3);
        iVar9 = local_34;
      } while (local_38 < this_ptr->num_parts);
    }
    if (local_24 != (CDeformableModelInstance *)0x0) {
      (*((local_24->base).vtable)->dtor)(&local_24->base,2);
    }
    iVar9 = 0;
    pCVar3 = this_ptr;
    if (0 < local_28) {
      do {
        iVar15 = core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0
                           (this_ptr,iVar9);
        iVar9 = iVar9 + 1;
        pCVar3->bone_to_part_map[0] = iVar15;
        pCVar3 = (CDeformableModel *)pCVar3->lod_info;
      } while (iVar9 < local_28);
      return;
    }
  }
  return;
}
