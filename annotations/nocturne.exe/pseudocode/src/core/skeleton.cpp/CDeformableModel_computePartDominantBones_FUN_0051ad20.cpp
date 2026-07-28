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
  SMRGLTextureBasic *pSVar3;
  CDeformableModel *pCVar4;
  CSkeleton *pCVar6;
  CDeformableModelInstance *pCVar7;
  int iVar8;
  CVector3i *pCVar9;
  SVert *pSVar10;
  int iVar11;
  SVert *pSVar12;
  int iVar13;
  int iVar14;
  SVert *pSVar15;
  ushort *puVar16;
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
  SLod *pSVar5;
  
  if (this_ptr->texture_sets[0].textures[0x28].textures[0].base.type < 2) {
    this_ptr->texture_sets[0].textures[0x29].textures[1].base.type = 0;
    pCVar4 = this_ptr;
    do {
      pSVar5 = pCVar4->lod_info;
      pSVar3 = pCVar4->texture_sets[1].textures[0x37].textures;
      pSVar3[2].texture_name[0xc] = '\0';
      pSVar3[2].texture_name[0xd] = '\0';
      pSVar3[2].texture_name[0xe] = '\0';
      pSVar3[2].texture_name[0xf] = '\0';
      pCVar4 = (CDeformableModel *)pSVar5;
    } while (pSVar5 != (SLod *)(this_ptr->texture_sets[0].textures[2].textures[2].texture_name + 8))
    ;
  }
  else {
    core_skeleton_cpp_CDeformableModel_captureTextures_FUN_005180a0(this_ptr);
    pCVar6 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(this_ptr);
    local_24 = pCVar6->bone_count;
    pCVar7 = (CDeformableModelInstance *)FUN_0056497c(0x22b4);
    local_20 = (CDeformableModelInstance *)0x0;
    if (pCVar7 != (CDeformableModelInstance *)0x0) {
      local_20 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(pCVar7);
    }
    if (local_20 == (CDeformableModelInstance *)0x0) {
      PTR_01cc4800 = "..\\core\\skeleton.cpp";
      INT_01cc4804 = 0x7d3;
      core_main_c_FUN_004c8440("CDeformableModel::computePartDominantBones - out of memory!");
    }
    pCVar7 = local_20;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(local_20,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(pCVar7);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(pCVar7);
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(pCVar7,0);
    local_34 = 0;
    if (0 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type) {
      local_2c = this_ptr;
      iVar11 = 0;
      do {
        local_30 = *(int *)(local_2c->texture_sets[0].textures[0x28].textures[1].texture_name + 4) +
                   iVar11;
        if (0 < local_24) {
          iVar14 = local_24 * 4;
          iVar13 = 0;
          do {
            iVar8 = iVar13 + 4;
            *(uint *)((int)local_230 + iVar13) = 0;
            iVar13 = iVar8;
          } while (iVar8 < iVar14);
        }
        if (iVar11 < local_30) {
          local_1c = iVar11 * 0x12;
          local_28 = local_30 * 0x12;
          do {
            puVar16 = (ushort *)
                      ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_1c);
            pCVar9 = local_20->skinned_vertices_buffer + *puVar16;
            local_4c = (float)pCVar9->x * _DAT_005a1eb0;
            local_48 = (float)pCVar9->y * _DAT_005a1eb0;
            local_44 = (float)pCVar9->z * _DAT_005a1eb0;
            pCVar9 = local_20->skinned_vertices_buffer + puVar16[1];
            local_70 = (float)pCVar9->x * _DAT_005a1eb0;
            local_6c = (float)pCVar9->y * _DAT_005a1eb0;
            local_68 = (float)pCVar9->z * _DAT_005a1eb0;
            pCVar9 = local_20->skinned_vertices_buffer + puVar16[2];
            local_40 = (float)pCVar9->x * _DAT_005a1eb0;
            local_3c = (float)pCVar9->y * _DAT_005a1eb0;
            local_38 = (float)pCVar9->z * _DAT_005a1eb0;
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
            local_18 = puVar16 + 3;
            local_14 = SQRT(local_5c * local_5c + local_64 * local_64 + local_60 * local_60);
            do {
              pSVar15 = this_ptr->vertex_data_ptr[0] + *puVar16;
              pSVar10 = pSVar15;
              pSVar12 = pSVar15;
              for (iVar11 = 0; iVar11 < (int)(uint)pSVar15->num_bone_influences; iVar11 = iVar11 + 1
                  ) {
                pfVar1 = pSVar10->bone_weights;
                puVar2 = pSVar12->bone_indices;
                pSVar10 = (SVert *)pSVar10->bone_weights;
                pSVar12 = (SVert *)pSVar12->bone_indices;
                local_230[*puVar2] = *pfVar1 * local_14 + local_230[*puVar2];
              }
              puVar16 = puVar16 + 1;
            } while (puVar16 != local_18);
            local_1c = local_1c + 0x12;
          } while (local_1c < local_28);
        }
        iVar14 = 1;
        iVar11 = 0;
        if (1 < local_24) {
          iVar13 = 4;
          do {
            if (local_230[iVar11] < *(float *)((int)local_230 + iVar13)) {
              iVar11 = iVar14;
            }
            iVar14 = iVar14 + 1;
            iVar13 = iVar13 + 4;
          } while (iVar14 < local_24);
        }
        local_2c->texture_sets[0].textures[0x29].textures[1].base.type = iVar11;
        local_34 = local_34 + 1;
        local_2c = (CDeformableModel *)(local_2c->tri_count + 3);
        iVar11 = local_30;
      } while (local_34 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type);
    }
    if (local_20 != (CDeformableModelInstance *)0x0) {
      (*((local_20->motion_controller).vtable)->dtor)(&local_20->motion_controller,2);
    }
    iVar11 = 0;
    pCVar4 = this_ptr;
    if (0 < local_24) {
      do {
        iVar14 = core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0
                           (this_ptr,iVar11);
        iVar11 = iVar11 + 1;
        *(int *)(pCVar4->texture_sets[1].textures[0x37].textures[2].texture_name + 0xc) = iVar14;
        pCVar4 = (CDeformableModel *)pCVar4->lod_info;
      } while (iVar11 < local_24);
      return;
    }
  }
  return;
}
