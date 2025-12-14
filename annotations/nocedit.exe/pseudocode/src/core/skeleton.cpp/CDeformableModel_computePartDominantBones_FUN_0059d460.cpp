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
  CDeformableModel *model_ptr;
  CSkeleton *pCVar4;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  SVert *pSVar9;
  SVert *pSVar10;
  int unaff_EBX;
  int iVar11;
  int iVar12;
  BADSPACEBASE *in_ESP;
  SVert *pSVar13;
  CDeformableModel *pCVar14;
  ushort *puVar15;
  CMotionController *unaff_retaddr;
  SLod *in_stack_00000008;
  float in_stack_0000000c;
  float fStack_210;
  CVector3f *in_stack_fffffdfc;
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
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  model_ptr = this_ptr;
  if (this_ptr->num_parts < 2) {
    this_ptr->parts[0].dominant_bone = 0;
    pSVar3 = this_ptr->texture_sets;
    do {
      in_stack_00000008 = this_ptr->lod_info;
      this_ptr->bone_to_part_map[0] = 0;
      this_ptr = (CDeformableModel *)in_stack_00000008;
    } while (in_stack_00000008 != (SLod *)(pSVar3->textures[2].texture_variants[2].texture_name + 8)
            );
  }
  else {
    core_skeleton_cpp_CDeformableModel_captureTextures_FUN_0059a780(this_ptr);
    pCVar4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
    local_1c = (float)pCVar4->bone_count;
    this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                            (0x22b4,"..\\core\\skeleton.cpp",0x7d2);
    this_ptr_01 = (CDeformableModelInstance *)0x0;
    if (this_ptr_00 != (CDeformableModelInstance *)0x0) {
      this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr_00);
    }
    if (this_ptr_01 == (CDeformableModelInstance *)0x0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x7d3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::computePartDominantBones - out of memory!");
    }
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
              (this_ptr_01,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_01);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_01);
    iVar11 = 0;
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_01,0);
    local_14 = 0;
    pCVar14 = this_ptr;
    if (0 < this_ptr->num_parts) {
      do {
        iVar5 = pCVar14->parts[0].tri_counts[0] + iVar11;
        if (0 < unaff_EBX) {
          iVar12 = 0;
          do {
            iVar6 = iVar12 + 4;
            *(uint *)((int)&fStack_210 + iVar12) = 0;
            iVar12 = iVar6;
          } while (iVar6 < unaff_EBX * 4);
        }
        if (iVar11 < iVar5) {
          this_ptr = (CDeformableModel *)(iVar11 * 0x12);
          do {
            puVar15 = (ushort *)
                      ((int)&this_ptr->lod_info[0].pixel_height +
                      (int)&model_ptr->tri_data_ptr[0][-1].v_coord_1);
            piVar7 = (int *)((uint)*puVar15 * 0xc + (int)unaff_retaddr[0x68].tween_progress);
            local_2c = (float)*piVar7 * 0.00390625f;
            local_28 = (float)piVar7[1] * 0.00390625f;
            local_24 = (float)piVar7[2] * 0.00390625f;
            piVar8 = (int *)((int)unaff_retaddr[0x68].tween_progress + (uint)puVar15[1] * 0xc);
            local_50 = (float)*piVar8 * 0.00390625f;
            local_4c = (float)piVar8[1] * 0.00390625f;
            local_48 = (float)piVar8[2] * 0.00390625f;
            piVar8 = (int *)((uint)puVar15[2] * 0xc + (int)unaff_retaddr[0x68].tween_progress);
            local_20 = (float)*piVar8 * 0.00390625f;
            local_1c = (float)piVar8[1] * 0.00390625f;
            local_18 = (float)piVar8[2] * 0.00390625f;
            local_38 = (float)*piVar8 * 0.00390625f - local_50;
            local_34 = (float)piVar8[1] * 0.00390625f - local_4c;
            local_30 = (float)piVar8[2] * 0.00390625f - local_48;
            if (&local_80 != &local_38) {
              local_80 = local_38;
              local_7c = local_34;
              local_78 = local_30;
            }
            local_5c = local_50 - (float)*piVar7 * 0.00390625f;
            local_58 = local_4c - (float)piVar7[1] * 0.00390625f;
            local_54 = local_48 - (float)piVar7[2] * 0.00390625f;
            if (&local_68 != &local_5c) {
              local_68 = local_5c;
              local_64 = local_58;
              local_60 = local_54;
            }
            local_74 = local_7c * local_60 - local_78 * local_64;
            local_70 = local_78 * local_68 - local_80 * local_60;
            local_6c = local_80 * local_64 - local_7c * local_68;
            if (&local_44 != &local_74) {
              local_44 = local_74;
              local_40 = local_70;
              local_3c = local_6c;
            }
            in_stack_0000000c =
                 SQRT(local_3c * local_3c + local_44 * local_44 + local_40 * local_40);
            in_stack_00000008 = (SLod *)(puVar15 + 3);
            do {
              pSVar13 = model_ptr->vertex_data_ptr[0] + *puVar15;
              pSVar9 = pSVar13;
              pSVar10 = pSVar13;
              for (iVar11 = 0; iVar11 < (int)(uint)pSVar13->num_bone_influences; iVar11 = iVar11 + 1
                  ) {
                pfVar1 = pSVar9->bone_weights;
                puVar2 = pSVar10->bone_indices;
                pSVar9 = (SVert *)pSVar9->bone_weights;
                pSVar10 = (SVert *)pSVar10->bone_indices;
                (&fStack_210)[*puVar2] = *pfVar1 * in_stack_0000000c + (&fStack_210)[*puVar2];
              }
              puVar15 = puVar15 + 1;
            } while ((SLod *)puVar15 != in_stack_00000008);
            this_ptr = (CDeformableModel *)((int)&this_ptr->lod_info[1].shadow_only_flag + 2);
          } while ((int)this_ptr < iVar5 * 0x12);
        }
        iVar12 = 1;
        iVar11 = 0;
        if (1 < unaff_EBX) {
          iVar6 = 4;
          do {
            if ((&fStack_210)[iVar11] < *(float *)((int)&fStack_210 + iVar6)) {
              iVar11 = iVar12;
            }
            iVar12 = iVar12 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar12 < unaff_EBX);
        }
        pCVar14->parts[0].dominant_bone = iVar11;
        local_14 = local_14 + 1;
        iVar11 = iVar5;
        pCVar14 = (CDeformableModel *)(pCVar14->tri_count + 3);
      } while (local_14 < model_ptr->num_parts);
    }
    g_CurrentDebugLine = 0x815;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    if (unaff_retaddr != (CMotionController *)0x0) {
      (*unaff_retaddr->vtable->dtor)(unaff_retaddr);
    }
    iVar11 = 0;
    pCVar14 = model_ptr;
    if (0 < (int)in_stack_00000008) {
      do {
        fStack_210 = 8.25123e-39;
        iVar5 = core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
                          (model_ptr,iVar11,in_stack_fffffdfc);
        iVar11 = iVar11 + 1;
        pCVar14->bone_to_part_map[0] = iVar5;
        pCVar14 = (CDeformableModel *)pCVar14->lod_info;
      } while (iVar11 < (int)in_stack_0000000c);
      return iVar5;
    }
  }
  return (int)in_stack_00000008;
}
