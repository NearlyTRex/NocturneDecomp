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
  float fVar9;
  CVector3f *pCVar10;
  CVector3f *pCVar11;
  float fVar12;
  float fVar13;
  CSkeleton *this_ptr_00;
  int iVar14;
  CQuaternion4f *result_out;
  BADSPACEBASE *in_ESP;
  CSkeleton *unaff_EBP;
  float *pfVar15;
  uint *puVar16;
  uint *puVar17;
  float *pfVar18;
  float *pfVar20;
  byte bVar21;
  float afStackY_1904 [1005];
  CQuaternion4f *pCVar22;
  CSkeleton *quat2_ptr;
  CQuaternion4f *in_stack_fffff6cc;
  CSkeleton *in_stack_fffff6d0;
  CSkeleton *in_stack_fffff6d4;
  CSkeleton *pCVar23;
  uint uStack_918;
  CQuaternion4f *in_stack_fffff704;
  float in_stack_fffff708;
  int aiStack_2e8 [112];
  float fStack_128;
  float local_124 [5];
  byte auStack_110 [16];
  float afStack_100 [6];
  uint uStack_e8;
  float local_e4 [5];
  float afStack_d0 [2];
  float afStack_c8 [2];
  float fStack_c0;
  uint auStack_bc [2];
  CQuaternion4f local_b4;
  float afStack_a4 [18];
  float local_5c;
  int local_58 [2];
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
  float *pfVar19;
  
  bVar21 = 0;
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
              (&this_ptr->motion_controller,target_motion_index,target_frame_number,local_58,
               (int *)&local_5c,(float *)&stack0xfffff6c8);
    quat2_ptr = (CSkeleton *)this_ptr;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (this_ptr->field11_0x2250 == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_24 = (CSkeleton *)(this_ptr->bone_transform).bone_rotations;
        local_2c = this_ptr;
        pCStack_14 = (CQuaternion4f *)0x0;
        do {
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,(int)unaff_EBP,bone_index);
          if (-1 < iVar14) {
            in_stack_fffff6d4 = (CSkeleton *)this_ptr;
            (*callback_func)((int)unaff_EBP,bone_index,blend_weight,iVar14,this_ptr);
            uStack_918 = 0x59ec55;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,(int)unaff_EBP,local_1c,local_20,(float)in_stack_fffff704);
            pCVar22 = (CQuaternion4f *)(auStack_110 + 0xc);
            auStack_110._8_4_ = local_124[0];
            afStack_100[(uint)bVar21 * -2 + -1] = local_124[(uint)bVar21 * -2 + 1];
            afStack_100[(uint)bVar21 * -2 + (uint)bVar21 * -2] =
                 local_124[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 2];
            (afStack_100 + (uint)bVar21 * -2 + (uint)bVar21 * -2)[(uint)bVar21 * -2 + 1] =
                 (local_124 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 2)[(uint)bVar21 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      ((CQuaternion4f *)bone_index,pCVar22,in_stack_fffff704,in_stack_fffff708);
            puVar16 = (uint *)((int)blend_weight + 0x6b4 + (uint)bVar21 * -8);
            *(uint *)((int)blend_weight + 0x6b0) = auStack_110._0_4_;
            puVar17 = puVar16 + (uint)bVar21 * -2 + 1;
            *puVar16 = *(uint *)(auStack_110 + (uint)bVar21 * -8 + 4);
            *puVar17 = *(uint *)(auStack_110 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            puVar17[(uint)bVar21 * -2 + 1] =
                 *(uint *)
                  ((int)(auStack_110 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) +
                  ((uint)bVar21 * -2 + 1) * 4);
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
          quat2_ptr = this_ptr_00;
          in_stack_fffff6cc = pCStack_14;
          in_stack_fffff6d0 = (CSkeleton *)bone_index;
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,(int)pCStack_14,bone_index);
          *(int *)((int)aiStack_2e8 + local_18 + 4) = iVar14;
          if (-1 < iVar14) {
            quat2_ptr = unaff_EBP;
            in_stack_fffff6cc = local_48;
            in_stack_fffff6d0 = local_4c;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,(int)unaff_EBP,(int)local_48,(int)local_4c,
                       (float)in_stack_fffff6d4);
            puVar16 = (uint *)(&stack0xfffff6e4 + (uint)bVar21 * -8 + local_30);
            *(uint *)(&stack0xfffff6e0 + local_30) = auStack_110._0_4_;
            *puVar16 = *(uint *)(auStack_110 + (uint)bVar21 * -8 + 4);
            puVar16[(uint)bVar21 * -2 + 1] =
                 *(uint *)(auStack_110 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            (puVar16 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
                 *(uint *)
                  ((int)(auStack_110 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) +
                  ((uint)bVar21 * -2 + 1) * 4);
          }
          pCStack_14 = (CQuaternion4f *)((int)&pCStack_14->w + 1);
          local_1c = local_1c + 4;
          local_38 = local_38 + 1;
        } while ((int)pCStack_14 < this_ptr_00->bone_count);
      }
      iVar14 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar14) {
        quat2_ptr = local_4c;
        in_stack_fffff6cc = pCStack_50;
        pCVar23 = in_stack_fffff6d4;
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,iVar14,(int)local_4c,(int)pCStack_50,(float)in_stack_fffff6d4);
        pfVar20 = (float *)(&stack0xfffff6dc + (uint)bVar21 * -8 + iVar14 * 0x10);
        *(uint *)(&stack0xfffff6d8 + iVar14 * 0x10) = uStack_e8;
        *pfVar20 = local_e4[(uint)bVar21 * -2];
        pfVar20[(uint)bVar21 * -2 + 1] = local_e4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
        (pfVar20 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
             (local_e4 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
        in_stack_fffff6d0 = in_stack_fffff6d4;
        in_stack_fffff6d4 = pCVar23;
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
              pfVar18 = afStack_c8;
              pfVar20 = (float *)(&stack0xfffff6d8 + local_18 * 0x10);
            }
            else {
              in_stack_fffff6d0 = (CSkeleton *)(&stack0xfffff6d8 + iVar14 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        ((CQuaternion4f *)in_stack_fffff6d0,(CQuaternion4f *)in_stack_fffff6d4);
              pCVar22 = &local_b4;
              result_out = (CQuaternion4f *)(&stack0xfffff6cc + (int)local_48);
              local_b4.z = local_e4[0];
              afStack_a4[(uint)bVar21 * -2] = local_e4[(uint)bVar21 * -2 + 1];
              afStack_a4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   local_e4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 2];
              (afStack_a4 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
                   (local_e4 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 2)[(uint)bVar21 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        (result_out,pCVar22,(CQuaternion4f *)quat2_ptr);
              pCVar22 = (CQuaternion4f *)((int)&pCStack_14->w + (int)&local_48->w);
              auStack_110._0_4_ = fStack_c0;
              *(uint *)(auStack_110 + (uint)bVar21 * -8 + 4) = auStack_bc[(uint)bVar21 * -2];
              *(uint *)(auStack_110 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                   auStack_bc[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              *(uint *)
               ((int)(auStack_110 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) +
               ((uint)bVar21 * -2 + 1) * 4) =
                   (auStack_bc + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
              pfVar18 = local_e4 + 5;
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        ((CQuaternion4f *)auStack_110,pCVar22,in_stack_fffff6cc);
              pfVar20 = afStack_100 + 1;
            }
            pfVar19 = pfVar18 + (uint)bVar21 * -2 + 1;
            pfVar15 = pfVar20 + (uint)bVar21 * -2 + 1;
            *pfVar18 = *pfVar20;
            *pfVar19 = *pfVar15;
            pfVar19[(uint)bVar21 * -2 + 1] = pfVar15[(uint)bVar21 * -2 + 1];
            (pfVar19 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
                 (pfVar15 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
            quat2_ptr = (CSkeleton *)(local_e4 + 6);
            in_stack_fffff6cc = (CQuaternion4f *)blend_weight;
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_38,(CQuaternion4f *)quat2_ptr,(CQuaternion4f *)blend_weight,
                       (float)in_stack_fffff6d0);
            pfVar20 = (float *)((int)local_2c + (uint)bVar21 * -8 + 0x6b4);
            (local_2c->bone_transform).bone_rotations[0].w = fStack_128;
            pfVar18 = pfVar20 + (uint)bVar21 * -2 + 1;
            *pfVar20 = local_124[(uint)bVar21 * -2];
            *pfVar18 = local_124[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            pfVar18[(uint)bVar21 * -2 + 1] =
                 (local_124 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
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
      pCVar10 = this_ptr_00->frame_positions_1;
      fVar2 = pCVar10[(int)pCStack_50].y;
      fVar3 = pCVar10[(int)pCStack_50].z;
      fVar12 = 1.0 - (float)in_stack_fffff6d4;
      pCVar11 = this_ptr_00->frame_positions_1;
      fVar4 = pCVar11[(int)local_4c].y;
      fVar5 = pCVar11[(int)local_4c].z;
      fVar6 = (this_ptr->scaled_model_dimensions).y;
      fVar7 = (this_ptr->scaled_model_dimensions).z;
      fVar13 = 1.0 - blend_weight;
      pSVar1 = &this_ptr->bone_transform;
      fVar8 = (this_ptr->bone_transform).root_position.y;
      fVar9 = (this_ptr->bone_transform).root_position.z;
      if (pSVar1 != (SBoneTransformData *)&local_5c) {
        (pSVar1->root_position).x =
             (pSVar1->root_position).x * fVar13 +
             (pCVar11[(int)local_4c].x * fVar12 +
             pCVar10[(int)pCStack_50].x * (float)in_stack_fffff6d4) *
             (this_ptr->scaled_model_dimensions).x * blend_weight;
        (this_ptr->bone_transform).root_position.y =
             fVar8 * fVar13 +
             (fVar4 * fVar12 + fVar2 * (float)in_stack_fffff6d4) * fVar6 * blend_weight;
        (this_ptr->bone_transform).root_position.z =
             fVar9 * fVar13 +
             (fVar5 * fVar12 + fVar3 * (float)in_stack_fffff6d4) * fVar7 * blend_weight;
        return;
      }
    }
  }
  return;
}
