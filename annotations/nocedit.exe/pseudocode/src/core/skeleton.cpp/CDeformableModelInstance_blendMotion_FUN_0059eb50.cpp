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
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  float fVar10;
  float fVar11;
  CSkeleton *this_ptr_00;
  int iVar12;
  float fVar13;
  CQuaternion4f *pCVar14;
  CQuaternion4f *pCVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  float *pfVar19;
  float *pfVar20;
  byte bVar21;
  float afStackY_192c [1015];
  float in_stack_fffff6c8;
  float fVar22;
  float fStack_924;
  int aiStack_2f4 [105];
  float fStack_150;
  float afStack_14c [3];
  byte auStack_140 [16];
  CQuaternion4f CStack_130;
  float afStack_120 [3];
  CQuaternion4f local_114;
  CQuaternion4f local_104;
  uint local_f4;
  float afStack_f0 [3];
  CQuaternion4f local_e4;
  CQuaternion4f local_d4;
  CQuaternion4f local_c4;
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
  float local_1c;
  CQuaternion4f *local_18;
  
  bVar21 = 0;
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
              (&this_ptr->motion_controller,target_motion_index,target_frame_number,local_58,
               &local_5c,(float *)&stack0xfffff6c8);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (this_ptr->unk == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_2c = (this_ptr->bone_transform).bone_rotations;
        local_34 = this_ptr;
        local_1c = 0.0;
        do {
          fVar22 = local_1c;
          iVar12 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,(int)local_1c,bone_index);
          if (-1 < iVar12) {
            fVar13 = (*callback_func)((int)fVar22,bone_index,blend_weight,iVar12,this_ptr);
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,(int)fVar22,local_44,local_48,fStack_924);
            pCVar14 = local_18;
            pCVar15 = &CStack_130;
            CStack_130.w = fStack_150;
            afStack_120[(uint)bVar21 * -2 + -3] = afStack_14c[(uint)bVar21 * -2];
            afStack_120[(uint)bVar21 * -2 + (uint)bVar21 * -2 + -2] =
                 afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            (afStack_120 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + -2)[(uint)bVar21 * -2 + 1] =
                 (afStack_14c + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (pCVar14,pCVar15,fVar13,(CQuaternion4f *)auStack_140);
            puVar16 = (uint *)(local_20 + 0x6b4 + (uint)bVar21 * -8);
            *(uint *)(local_20 + 0x6b0) = auStack_140._0_4_;
            puVar17 = puVar16 + (uint)bVar21 * -2 + 1;
            *puVar16 = *(uint *)(auStack_140 + (uint)bVar21 * -8 + 4);
            *puVar17 = *(uint *)(auStack_140 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            puVar17[(uint)bVar21 * -2 + 1] =
                 *(uint *)
                  ((int)(auStack_140 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) +
                  ((uint)bVar21 * -2 + 1) * 4);
            in_stack_fffff6c8 = fVar22;
          }
          local_34 = (CDeformableModelInstance *)&(local_34->motion_controller).tween_speed;
          local_2c = local_2c + 1;
          local_1c = (float)((int)local_1c + 1);
        } while ((int)local_1c < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->unk == 1) {
      local_20 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_44 = 0;
        local_28 = 0;
        do {
          iVar12 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,local_20,bone_index);
          *(int *)((int)aiStack_2f4 + local_28) = iVar12;
          if (-1 < iVar12) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,local_20,local_58[0],local_5c,in_stack_fffff6c8);
            pfVar19 = (float *)(&stack0xfffff6d0 + (uint)bVar21 * -8 + local_44);
            *(float *)(&stack0xfffff6cc + local_44) = CStack_130.z;
            *pfVar19 = afStack_120[(uint)bVar21 * -2];
            pfVar19[(uint)bVar21 * -2 + 1] = afStack_120[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            (pfVar19 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
                 (afStack_120 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_44 = local_44 + 0x10;
        } while (local_20 < this_ptr_00->bone_count);
      }
      iVar12 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar12) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,iVar12,local_58[0],local_5c,in_stack_fffff6c8);
        pfVar19 = (float *)(&stack0xfffff6d0 + (uint)bVar21 * -8 + iVar12 * 0x10);
        *(uint *)(&stack0xfffff6cc + iVar12 * 0x10) = local_f4;
        *pfVar19 = afStack_f0[(uint)bVar21 * -2];
        pfVar19[(uint)bVar21 * -2 + 1] = afStack_f0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
        (pfVar19 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
             (afStack_f0 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
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
            iVar12 = local_30->bone_list[0].parent_index;
            local_48 = local_24 * 0x10;
            if (iVar12 < 0) {
              pCVar15 = (CQuaternion4f *)(&stack0xfffff6cc + local_24 * 0x10);
            }
            else {
              local_18 = (CQuaternion4f *)(iVar12 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        ((CQuaternion4f *)(&stack0xfffff6cc + (int)local_18),&local_e4);
              pCVar15 = local_b4;
              pCVar14 = (CQuaternion4f *)(&stack0xfffff6cc + local_48);
              local_b4[0].w = local_e4.w;
              puVar17 = (uint *)((int)local_b4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
              puVar16 = (uint *)((int)&local_e4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
              *(uint *)((int)local_b4 + (uint)bVar21 * -8 + 4) =
                   *(uint *)((int)&local_e4 + (uint)bVar21 * -8 + 4);
              *puVar17 = *puVar16;
              puVar17[(uint)bVar21 * -2 + 1] = puVar16[(uint)bVar21 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(pCVar14,pCVar15,&local_c4);
              pCVar15 = (CQuaternion4f *)((int)&local_18->w + (int)&local_4c->w);
              local_114.w = local_c4.w;
              puVar17 = (uint *)((int)&local_114 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
              puVar16 = (uint *)((int)local_b4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + -8);
              *(uint *)((int)&local_114 + (uint)bVar21 * -8 + 4) =
                   *(uint *)((int)local_b4 + (uint)bVar21 * -8 + -0xc);
              *puVar17 = *puVar16;
              puVar17[(uint)bVar21 * -2 + 1] = puVar16[(uint)bVar21 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_114,pCVar15,&local_104);
              pCVar15 = &local_104;
            }
            puVar16 = (uint *)((int)pCVar15 + ((uint)bVar21 * -2 + 1) * 4);
            local_d4.w = pCVar15->w;
            puVar18 = (uint *)((int)&local_d4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            puVar17 = puVar16 + (uint)bVar21 * -2 + 1;
            *(uint *)((int)&local_d4 + (uint)bVar21 * -8 + 4) = *puVar16;
            *puVar18 = *puVar17;
            puVar18[(uint)bVar21 * -2 + 1] = puVar17[(uint)bVar21 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_40,&local_d4,blend_weight,(CQuaternion4f *)(auStack_140 + 0xc));
            pfVar19 = (float *)((int)local_38 + (uint)bVar21 * -8 + 0x6b4);
            (local_38->bone_transform).bone_rotations[0].w = (float)auStack_140._12_4_;
            pfVar20 = pfVar19 + (uint)bVar21 * -2 + 1;
            *pfVar19 = afStack_120[(uint)bVar21 * -2 + -4];
            *pfVar20 = afStack_120[(uint)bVar21 * -2 + (uint)bVar21 * -2 + -3];
            pfVar20[(uint)bVar21 * -2 + 1] =
                 (afStack_120 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + -3)[(uint)bVar21 * -2 + 1];
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
      pCVar8 = this_ptr_00->frame_positions_1;
      fVar22 = pCVar8[local_5c].y;
      fVar13 = pCVar8[local_5c].z;
      fVar10 = 1.0 - in_stack_fffff6c8;
      pCVar9 = this_ptr_00->frame_positions_1;
      fVar2 = pCVar9[local_58[0]].y;
      fVar3 = pCVar9[local_58[0]].z;
      fVar4 = (this_ptr->scaled_model_dimensions).y;
      fVar5 = (this_ptr->scaled_model_dimensions).z;
      fVar11 = 1.0 - blend_weight;
      pSVar1 = &this_ptr->bone_transform;
      fVar6 = (this_ptr->bone_transform).root_position.y;
      fVar7 = (this_ptr->bone_transform).root_position.z;
      if (pSVar1 != (SBoneTransformData *)afStack_68) {
        (pSVar1->root_position).x =
             (pSVar1->root_position).x * fVar11 +
             (pCVar9[local_58[0]].x * fVar10 + pCVar8[local_5c].x * in_stack_fffff6c8) *
             (this_ptr->scaled_model_dimensions).x * blend_weight;
        (this_ptr->bone_transform).root_position.y =
             fVar6 * fVar11 + (fVar2 * fVar10 + fVar22 * in_stack_fffff6c8) * fVar4 * blend_weight;
        (this_ptr->bone_transform).root_position.z =
             fVar7 * fVar11 + (fVar3 * fVar10 + fVar13 * in_stack_fffff6c8) * fVar5 * blend_weight;
        return;
      }
    }
  }
  return;
}
