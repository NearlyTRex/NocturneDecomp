// Name: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
// Address: 0059eb50
// Address Range: [[0059eb50, 0059f221]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * callback_func)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
          (CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number,
          float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

{
  SBoneTransformData *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  float fVar11;
  float fVar12;
  CSkeleton *this_ptr_00;
  float fVar13;
  int iVar14;
  CQuaternion4f *pCVar15;
  BADSPACEBASE *in_ESP;
  CSkeleton *unaff_EBP;
  float *pfVar16;
  uint *puVar18;
  uint *puVar19;
  float *pfVar20;
  byte bVar22;
  float afStackY_1938 [1018];
  CQuaternion4f *pCVar23;
  CSkeleton *pCVar24;
  CQuaternion4f *in_stack_fffff6cc;
  CSkeleton *in_stack_fffff6d0;
  CSkeleton *in_stack_fffff6d4;
  CSkeleton *pCVar25;
  int aiStack_2e8 [99];
  uint uStack_15c;
  uint auStack_158 [4];
  uint uStack_148;
  uint auStack_144 [2];
  CQuaternion4f CStack_13c;
  float fStack_128;
  uint local_124 [5];
  CQuaternion4f CStack_110;
  float afStack_fc [5];
  uint uStack_e8;
  float local_e4 [5];
  float afStack_d0 [2];
  float afStack_c8 [2];
  float fStack_c0;
  uint auStack_bc [2];
  CQuaternion4f local_b4;
  float afStack_a4 [18];
  float local_5c;
  int local_58;
  int iStack_54;
  CQuaternion4f *pCStack_50;
  CSkeleton *local_4c;
  CQuaternion4f *local_48;
  CQuaternion4f *local_40;
  int local_3c;
  CQuaternion4f *local_38;
  CQuaternion4f *local_34;
  int local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  CSkeleton *local_24;
  int local_20;
  int local_1c;
  int local_18;
  CQuaternion4f *pCStack_14;
  float *pfVar17;
  float *pfVar21;
  
  bVar22 = 0;
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
              (&this_ptr->motion_controller,target_motion_index,target_frame_number,&local_58,
               (int *)&local_5c,(float *)&stack0xfffff6c8);
    pCVar24 = (CSkeleton *)this_ptr;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (this_ptr->field11_0x2250 == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_24 = (CSkeleton *)(this_ptr->bone_transform).bone_rotations;
        local_2c = this_ptr;
        pCStack_14 = (CQuaternion4f *)0x0;
        do {
          fVar13 = (float)core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                                    (this_ptr_00,(int)unaff_EBP,bone_index);
          if (-1 < (int)fVar13) {
            pCVar15 = (CQuaternion4f *)blend_weight;
            in_stack_fffff6d4 = (CSkeleton *)this_ptr;
            (*callback_func)((int)unaff_EBP,bone_index,blend_weight,(int)fVar13,this_ptr);
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,(int)unaff_EBP,iStack_54,local_58,(float)pCVar15);
            pCVar24 = local_24;
            pCVar23 = &CStack_13c;
            auStack_144[1] = uStack_15c;
            puVar18 = (uint *)((int)&CStack_13c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 4);
            *(uint *)((int)&CStack_13c + (uint)bVar22 * -8) = auStack_158[(uint)bVar22 * -2];
            *puVar18 = auStack_158[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            puVar18[(uint)bVar22 * -2 + 1] =
                 (auStack_158 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      ((CQuaternion4f *)pCVar24,pCVar23,pCVar15,fVar13);
            puVar18 = (uint *)(local_28 + 0x6b4 + (uint)bVar22 * -8);
            *(uint *)(local_28 + 0x6b0) = uStack_148;
            puVar19 = puVar18 + (uint)bVar22 * -2 + 1;
            *puVar18 = auStack_144[(uint)bVar22 * -2];
            *puVar19 = auStack_144[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            puVar19[(uint)bVar22 * -2 + 1] =
                 (auStack_144 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1];
          }
          local_28 = local_28 + 0x10;
          local_20 = local_20 + 0x10;
          unaff_EBP = (CSkeleton *)((int)&(unaff_EBP->motion_list).state_count + 1);
        } while ((int)unaff_EBP < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->field11_0x2250 == 1) {
      local_18 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_3c = 0;
        local_20 = 0;
        do {
          pCVar24 = this_ptr_00;
          in_stack_fffff6cc = pCStack_14;
          in_stack_fffff6d0 = (CSkeleton *)bone_index;
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,(int)pCStack_14,bone_index);
          *(int *)((int)aiStack_2e8 + local_18 + 4) = iVar14;
          if (-1 < iVar14) {
            pCVar24 = unaff_EBP;
            in_stack_fffff6cc = local_48;
            in_stack_fffff6d0 = local_4c;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,(int)unaff_EBP,(int)local_48,(int)local_4c,
                       (float)in_stack_fffff6d4);
            puVar19 = (uint *)(&stack0xfffff6e4 + (uint)bVar22 * -8 + local_30);
            *(float *)(&stack0xfffff6e0 + local_30) = CStack_110.w;
            puVar18 = (uint *)((int)&CStack_110 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
            *puVar19 = *(uint *)((int)&CStack_110 + (uint)bVar22 * -8 + 4);
            puVar19[(uint)bVar22 * -2 + 1] = *puVar18;
            (puVar19 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1] =
                 puVar18[(uint)bVar22 * -2 + 1];
          }
          pCStack_14 = (CQuaternion4f *)((int)&pCStack_14->w + 1);
          local_1c = local_1c + 4;
          local_38 = local_38 + 1;
        } while ((int)pCStack_14 < this_ptr_00->bone_count);
      }
      iVar14 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar14) {
        pCVar24 = local_4c;
        in_stack_fffff6cc = pCStack_50;
        pCVar25 = in_stack_fffff6d4;
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,iVar14,(int)local_4c,(int)pCStack_50,(float)in_stack_fffff6d4);
        pfVar16 = (float *)(&stack0xfffff6dc + (uint)bVar22 * -8 + iVar14 * 0x10);
        *(uint *)(&stack0xfffff6d8 + iVar14 * 0x10) = uStack_e8;
        *pfVar16 = local_e4[(uint)bVar22 * -2];
        pfVar16[(uint)bVar22 * -2 + 1] = local_e4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
        (pfVar16 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1] =
             (local_e4 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1];
        in_stack_fffff6d0 = in_stack_fffff6d4;
        in_stack_fffff6d4 = pCVar25;
      }
      local_18 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_40 = (this_ptr->bone_transform).bone_rotations;
        local_30 = 0;
        local_2c = this_ptr;
        local_24 = this_ptr_00;
        local_34 = local_40;
        do {
          if (-1 < *(int *)((int)aiStack_2e8 + local_30)) {
            iVar14 = local_24->bone_list[0].parent_index;
            local_3c = local_18 * 0x10;
            if (iVar14 < 0) {
              pfVar20 = afStack_c8;
              pfVar16 = (float *)(&stack0xfffff6d8 + local_18 * 0x10);
            }
            else {
              in_stack_fffff6d0 = (CSkeleton *)(&stack0xfffff6d8 + iVar14 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        ((CQuaternion4f *)in_stack_fffff6d0,(CQuaternion4f *)in_stack_fffff6d4);
              pCVar23 = &local_b4;
              pCVar15 = (CQuaternion4f *)(&stack0xfffff6cc + (int)local_48);
              local_b4.z = local_e4[0];
              afStack_a4[(uint)bVar22 * -2] = local_e4[(uint)bVar22 * -2 + 1];
              afStack_a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                   local_e4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 2];
              (afStack_a4 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1] =
                   (local_e4 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 2)[(uint)bVar22 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        (pCVar15,pCVar23,(CQuaternion4f *)pCVar24);
              pCVar23 = (CQuaternion4f *)((int)&pCStack_14->w + (int)&local_48->w);
              CStack_110.w = fStack_c0;
              puVar18 = (uint *)((int)&CStack_110 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8)
              ;
              *(uint *)((int)&CStack_110 + (uint)bVar22 * -8 + 4) =
                   auStack_bc[(uint)bVar22 * -2];
              *puVar18 = auStack_bc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
              puVar18[(uint)bVar22 * -2 + 1] =
                   (auStack_bc + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1];
              pfVar20 = local_e4 + 5;
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_110,pCVar23,in_stack_fffff6cc);
              pfVar16 = afStack_fc;
            }
            pfVar21 = pfVar20 + (uint)bVar22 * -2 + 1;
            pfVar17 = pfVar16 + (uint)bVar22 * -2 + 1;
            *pfVar20 = *pfVar16;
            *pfVar21 = *pfVar17;
            pfVar21[(uint)bVar22 * -2 + 1] = pfVar17[(uint)bVar22 * -2 + 1];
            (pfVar21 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1] =
                 (pfVar17 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1];
            pCVar24 = (CSkeleton *)(local_e4 + 6);
            in_stack_fffff6cc = (CQuaternion4f *)blend_weight;
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_38,(CQuaternion4f *)pCVar24,(CQuaternion4f *)blend_weight,
                       (float)in_stack_fffff6d0);
            puVar18 = (uint *)((int)local_2c + (uint)bVar22 * -8 + 0x6b4);
            (local_2c->bone_transform).bone_rotations[0].w = fStack_128;
            puVar19 = puVar18 + (uint)bVar22 * -2 + 1;
            *puVar18 = local_124[(uint)bVar22 * -2];
            *puVar19 = local_124[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            puVar19[(uint)bVar22 * -2 + 1] =
                 (local_124 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1];
          }
          local_18 = local_18 + 1;
          local_30 = local_30 + 4;
          local_24 = (CSkeleton *)((local_24->motion_list).state_names[1] + 2);
          local_2c = (CDeformableModelInstance *)&(local_2c->motion_controller).tween_speed;
          local_34 = local_34 + 1;
        } while (local_18 < this_ptr_00->bone_count);
      }
    }
    else {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0xa82;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if (bone_index < 0) {
      pCVar9 = this_ptr_00->frame_positions_1;
      fVar13 = pCVar9[(int)pCStack_50].y;
      fVar2 = pCVar9[(int)pCStack_50].z;
      fVar11 = 1.0 - (float)in_stack_fffff6d4;
      pCVar10 = this_ptr_00->frame_positions_1;
      fVar3 = pCVar10[(int)local_4c].y;
      fVar4 = pCVar10[(int)local_4c].z;
      fVar5 = (this_ptr->scaled_model_dimensions).y;
      fVar6 = (this_ptr->scaled_model_dimensions).z;
      fVar12 = 1.0 - blend_weight;
      pSVar1 = &this_ptr->bone_transform;
      fVar7 = (this_ptr->bone_transform).root_position.y;
      fVar8 = (this_ptr->bone_transform).root_position.z;
      if (pSVar1 != (SBoneTransformData *)&local_5c) {
        (pSVar1->root_position).x =
             (pSVar1->root_position).x * fVar12 +
             (pCVar10[(int)local_4c].x * fVar11 +
             pCVar9[(int)pCStack_50].x * (float)in_stack_fffff6d4) *
             (this_ptr->scaled_model_dimensions).x * blend_weight;
        (this_ptr->bone_transform).root_position.y =
             fVar7 * fVar12 +
             (fVar3 * fVar11 + fVar13 * (float)in_stack_fffff6d4) * fVar5 * blend_weight;
        (this_ptr->bone_transform).root_position.z =
             fVar8 * fVar12 +
             (fVar4 * fVar11 + fVar2 * (float)in_stack_fffff6d4) * fVar6 * blend_weight;
        return;
      }
    }
  }
  return;
}
