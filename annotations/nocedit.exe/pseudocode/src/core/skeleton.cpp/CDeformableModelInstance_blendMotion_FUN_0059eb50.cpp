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
  CQuaternion4f *result_out;
  CSkeleton *this_ptr_00;
  int iVar14;
  CQuaternion4f *quat2_ptr;
  float *pfVar15;
  float *pfVar16;
  byte bVar17;
  float afStackY_192c [1015];
  CQuaternion4f *pCVar18;
  CQuaternion4f *in_stack_fffff6c8;
  CQuaternion4f *pCVar19;
  float in_stack_fffff6dc;
  int aiStack_2f4 [105];
  float fStack_150;
  float afStack_14c [6];
  float local_134;
  CQuaternion4f CStack_130;
  float afStack_120 [3];
  CQuaternion4f local_114;
  float local_104 [4];
  uint local_f4;
  float afStack_f0 [7];
  CQuaternion4f local_d4;
  float local_c4;
  float afStack_c0 [3];
  CQuaternion4f local_b4 [4];
  float afStack_68 [3];
  int local_5c;
  int local_58 [3];
  CQuaternion4f *local_4c;
  int local_48;
  int local_44;
  CQuaternion4f *local_40;
  int local_3c;
  CDeformableModelInstance *local_38;
  CDeformableModelInstance *local_34;
  CSkeleton *local_30;
  CQuaternion4f *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CQuaternion4f *local_1c;
  CQuaternion4f *local_18;
  
  bVar17 = 0;
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
              (&this_ptr->motion_controller,target_motion_index,target_frame_number,local_58,
               &local_5c,(float *)&stack0xfffff6c8);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (this_ptr->field11_0x2250 == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_2c = (this_ptr->bone_transform).bone_rotations;
        local_34 = this_ptr;
        local_1c = (CQuaternion4f *)0x0;
        do {
          pCVar18 = local_1c;
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,(int)local_1c,bone_index);
          if (-1 < iVar14) {
            quat2_ptr = (CQuaternion4f *)
                        (*callback_func)((int)pCVar18,bone_index,blend_weight,iVar14,this_ptr);
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,(int)pCVar18,local_44,local_48,in_stack_fffff6dc);
            result_out = local_18;
            pCVar19 = &CStack_130;
            CStack_130.w = fStack_150;
            afStack_120[(uint)bVar17 * -2 + -3] = afStack_14c[(uint)bVar17 * -2];
            afStack_120[(uint)bVar17 * -2 + (uint)bVar17 * -2 + -2] =
                 afStack_14c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            (afStack_120 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + -2)[(uint)bVar17 * -2 + 1] =
                 (afStack_14c + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (result_out,pCVar19,quat2_ptr,in_stack_fffff6dc);
            pfVar15 = (float *)(local_20 + 0x6b4 + (uint)bVar17 * -8);
            *(float *)(local_20 + 0x6b0) = afStack_14c[3];
            pfVar16 = pfVar15 + (uint)bVar17 * -2 + 1;
            *pfVar15 = afStack_14c[(uint)bVar17 * -2 + 4];
            *pfVar16 = afStack_14c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 5];
            pfVar16[(uint)bVar17 * -2 + 1] =
                 (afStack_14c + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 5)[(uint)bVar17 * -2 + 1];
            in_stack_fffff6c8 = pCVar18;
          }
          local_34 = (CDeformableModelInstance *)&(local_34->motion_controller).tween_speed;
          local_2c = local_2c + 1;
          local_1c = (CQuaternion4f *)((int)&local_1c->w + 1);
        } while ((int)local_1c < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->field11_0x2250 == 1) {
      local_20 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_44 = 0;
        local_28 = 0;
        do {
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,local_20,bone_index);
          *(int *)((int)aiStack_2f4 + local_28) = iVar14;
          if (-1 < iVar14) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,local_20,local_58[0],local_5c,(float)in_stack_fffff6c8);
            pfVar15 = (float *)(&stack0xfffff6d0 + (uint)bVar17 * -8 + local_44);
            *(float *)(&stack0xfffff6cc + local_44) = CStack_130.z;
            *pfVar15 = afStack_120[(uint)bVar17 * -2];
            pfVar15[(uint)bVar17 * -2 + 1] = afStack_120[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            (pfVar15 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                 (afStack_120 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_44 = local_44 + 0x10;
        } while (local_20 < this_ptr_00->bone_count);
      }
      iVar14 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar14) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,iVar14,local_58[0],local_5c,(float)in_stack_fffff6c8);
        pfVar15 = (float *)(&stack0xfffff6d0 + (uint)bVar17 * -8 + iVar14 * 0x10);
        *(uint *)(&stack0xfffff6cc + iVar14 * 0x10) = local_f4;
        *pfVar15 = afStack_f0[(uint)bVar17 * -2];
        pfVar15[(uint)bVar17 * -2 + 1] = afStack_f0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
        (pfVar15 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
             (afStack_f0 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
      }
      local_24 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_4c = (this_ptr->bone_transform).bone_rotations;
        local_3c = 0;
        local_38 = this_ptr;
        local_30 = this_ptr_00;
        local_40 = local_4c;
        do {
          if (-1 < *(int *)((int)aiStack_2f4 + local_3c)) {
            iVar14 = local_30->bone_list[0].parent_index;
            local_48 = local_24 * 0x10;
            if (iVar14 < 0) {
              pfVar15 = (float *)(&stack0xfffff6cc + local_24 * 0x10);
            }
            else {
              local_18 = (CQuaternion4f *)(iVar14 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        ((CQuaternion4f *)(&stack0xfffff6cc + (int)local_18),in_stack_fffff6c8);
              pCVar18 = local_b4;
              pCVar19 = (CQuaternion4f *)(&stack0xfffff6cc + local_48);
              local_b4[0].w = afStack_f0[3];
              pfVar15 = (float *)((int)local_b4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
              *(float *)((int)local_b4 + (uint)bVar17 * -8 + 4) = afStack_f0[(uint)bVar17 * -2 + 4];
              *pfVar15 = afStack_f0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 5];
              pfVar15[(uint)bVar17 * -2 + 1] =
                   (afStack_f0 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 5)[(uint)bVar17 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(pCVar19,pCVar18,in_stack_fffff6c8);
              pCVar18 = (CQuaternion4f *)((int)&local_18->w + (int)&local_4c->w);
              local_114.w = local_c4;
              local_104[(uint)bVar17 * -2 + -3] = afStack_c0[(uint)bVar17 * -2];
              local_104[(uint)bVar17 * -2 + (uint)bVar17 * -2 + -2] =
                   afStack_c0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
              (local_104 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + -2)[(uint)bVar17 * -2 + 1] =
                   (afStack_c0 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_114,pCVar18,in_stack_fffff6c8);
              pfVar15 = local_104;
            }
            pfVar16 = pfVar15 + (uint)bVar17 * -2 + 1;
            local_d4.w = *pfVar15;
            pfVar15 = (float *)((int)&local_d4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(float *)((int)&local_d4 + (uint)bVar17 * -8 + 4) = *pfVar16;
            *pfVar15 = pfVar16[(uint)bVar17 * -2 + 1];
            pfVar15[(uint)bVar17 * -2 + 1] =
                 (pfVar16 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_40,&local_d4,(CQuaternion4f *)blend_weight,(float)in_stack_fffff6c8);
            pfVar15 = (float *)((int)local_38 + (uint)bVar17 * -8 + 0x6b4);
            (local_38->bone_transform).bone_rotations[0].w = local_134;
            pfVar16 = pfVar15 + (uint)bVar17 * -2 + 1;
            *pfVar15 = afStack_120[(uint)bVar17 * -2 + -4];
            *pfVar16 = afStack_120[(uint)bVar17 * -2 + (uint)bVar17 * -2 + -3];
            pfVar16[(uint)bVar17 * -2 + 1] =
                 (afStack_120 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + -3)[(uint)bVar17 * -2 + 1];
          }
          local_24 = local_24 + 1;
          local_3c = local_3c + 4;
          local_30 = (CSkeleton *)((local_30->motion_list).state_names[1] + 2);
          local_38 = (CDeformableModelInstance *)&(local_38->motion_controller).tween_speed;
          local_40 = local_40 + 1;
        } while (local_24 < this_ptr_00->bone_count);
      }
    }
    else {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0xa82;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if (bone_index < 0) {
      pCVar10 = this_ptr_00->frame_positions_1;
      fVar2 = pCVar10[local_5c].y;
      fVar3 = pCVar10[local_5c].z;
      fVar12 = 1.0 - (float)in_stack_fffff6c8;
      pCVar11 = this_ptr_00->frame_positions_1;
      fVar4 = pCVar11[local_58[0]].y;
      fVar5 = pCVar11[local_58[0]].z;
      fVar6 = (this_ptr->scaled_model_dimensions).y;
      fVar7 = (this_ptr->scaled_model_dimensions).z;
      fVar13 = 1.0 - blend_weight;
      pSVar1 = &this_ptr->bone_transform;
      fVar8 = (this_ptr->bone_transform).root_position.y;
      fVar9 = (this_ptr->bone_transform).root_position.z;
      if (pSVar1 != (SBoneTransformData *)afStack_68) {
        (pSVar1->root_position).x =
             (pSVar1->root_position).x * fVar13 +
             (pCVar11[local_58[0]].x * fVar12 + pCVar10[local_5c].x * (float)in_stack_fffff6c8) *
             (this_ptr->scaled_model_dimensions).x * blend_weight;
        (this_ptr->bone_transform).root_position.y =
             fVar8 * fVar13 +
             (fVar4 * fVar12 + fVar2 * (float)in_stack_fffff6c8) * fVar6 * blend_weight;
        (this_ptr->bone_transform).root_position.z =
             fVar9 * fVar13 +
             (fVar5 * fVar12 + fVar3 * (float)in_stack_fffff6c8) * fVar7 * blend_weight;
        return;
      }
    }
  }
  return;
}
