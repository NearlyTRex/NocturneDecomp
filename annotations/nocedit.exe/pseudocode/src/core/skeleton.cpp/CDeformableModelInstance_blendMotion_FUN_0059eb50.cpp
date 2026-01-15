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
  int hierarchy_distance;
  int iVar14;
  CQuaternion4f *pCVar15;
  float *pfVar16;
  float *pfVar17;
  byte bVar18;
  float afStackY_193c [1020];
  CQuaternion4f *pCVar19;
  CQuaternion4f *in_stack_fffff6cc;
  float in_stack_fffff6d0;
  int aiStack_2f0 [100];
  uint uStack_160;
  float afStack_15c [7];
  uint uStack_140;
  CQuaternion4f CStack_13c;
  float afStack_12c [7];
  CQuaternion4f CStack_110;
  float afStack_100 [4];
  uint uStack_f0;
  float afStack_ec [7];
  CQuaternion4f CStack_d0;
  float fStack_c0;
  float afStack_bc [3];
  CQuaternion4f aCStack_b0 [4];
  float afStack_64 [3];
  int local_58;
  int aiStack_54 [3];
  CQuaternion4f *local_48;
  int local_44;
  int local_40;
  CQuaternion4f *local_3c;
  int local_38;
  CDeformableModelInstance *local_34;
  CDeformableModelInstance *local_30;
  CSkeleton *local_2c;
  CQuaternion4f *local_28;
  CQuaternion4f *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  bVar18 = 0;
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
              (&this_ptr->motion_controller,target_motion_index,target_frame_number,aiStack_54,
               &local_58,(float *)&stack0xfffff6cc);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (this_ptr->field11_0x2250 == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_28 = (this_ptr->bone_transform).bone_rotations;
        local_30 = this_ptr;
        local_18 = 0;
        do {
          iVar14 = local_18;
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                         (this_ptr_00,local_18,bone_index);
          if (-1 < hierarchy_distance) {
            (*callback_func)(iVar14,bone_index,blend_weight,hierarchy_distance,this_ptr);
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,iVar14,aiStack_54[0],local_58,(float)in_stack_fffff6cc);
            pCVar15 = local_24;
            pCVar19 = &CStack_13c;
            uStack_140 = uStack_160;
            *(float *)((int)&CStack_13c + (uint)bVar18 * -8) = afStack_15c[(uint)bVar18 * -2];
            afStack_12c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -3] =
                 afStack_15c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            (afStack_12c + (uint)bVar18 * -2 + (uint)bVar18 * -2 + -3)[(uint)bVar18 * -2 + 1] =
                 (afStack_15c + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (pCVar15,pCVar19,in_stack_fffff6cc,in_stack_fffff6d0);
            pfVar16 = (float *)((int)local_30 + (uint)bVar18 * -8 + 0x6b4);
            (local_30->bone_transform).bone_rotations[0].w = afStack_15c[3];
            pfVar17 = pfVar16 + (uint)bVar18 * -2 + 1;
            *pfVar16 = afStack_15c[(uint)bVar18 * -2 + 4];
            *pfVar17 = afStack_15c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
            pfVar17[(uint)bVar18 * -2 + 1] =
                 (afStack_15c + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1];
          }
          local_30 = (CDeformableModelInstance *)&(local_30->motion_controller).tween_speed;
          local_28 = local_28 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->field11_0x2250 == 1) {
      local_1c = 0;
      if (0 < this_ptr_00->bone_count) {
        local_40 = 0;
        local_24 = (CQuaternion4f *)0x0;
        do {
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,local_1c,bone_index);
          *(int *)((int)aiStack_2f0 + (int)local_24) = iVar14;
          if (-1 < iVar14) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,local_1c,aiStack_54[0],local_58,(float)in_stack_fffff6cc);
            pfVar16 = (float *)(&stack0xfffff6d4 + (uint)bVar18 * -8 + local_40);
            *(float *)(&stack0xfffff6d0 + local_40) = afStack_12c[3];
            *pfVar16 = afStack_12c[(uint)bVar18 * -2 + 4];
            pfVar16[(uint)bVar18 * -2 + 1] = afStack_12c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
            (pfVar16 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
                 (afStack_12c + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1];
          }
          local_1c = local_1c + 1;
          local_24 = (CQuaternion4f *)&local_24->x;
          local_40 = local_40 + 0x10;
        } while (local_1c < this_ptr_00->bone_count);
      }
      iVar14 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar14) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,iVar14,aiStack_54[0],local_58,(float)in_stack_fffff6cc);
        pfVar16 = (float *)(&stack0xfffff6d4 + (uint)bVar18 * -8 + iVar14 * 0x10);
        *(uint *)(&stack0xfffff6d0 + iVar14 * 0x10) = uStack_f0;
        *pfVar16 = afStack_ec[(uint)bVar18 * -2];
        pfVar16[(uint)bVar18 * -2 + 1] = afStack_ec[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
        (pfVar16 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
             (afStack_ec + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
      }
      local_20 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_48 = (this_ptr->bone_transform).bone_rotations;
        local_38 = 0;
        local_34 = this_ptr;
        local_2c = this_ptr_00;
        local_3c = local_48;
        do {
          if (-1 < *(int *)((int)aiStack_2f0 + local_38)) {
            iVar14 = local_2c->bone_list[0].parent_index;
            local_44 = local_20 * 0x10;
            if (iVar14 < 0) {
              pfVar16 = (float *)(&stack0xfffff6d0 + local_20 * 0x10);
            }
            else {
              iStack_14 = iVar14 * 0x10;
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        ((CQuaternion4f *)(&stack0xfffff6d0 + iStack_14),in_stack_fffff6cc);
              pCVar19 = aCStack_b0;
              pCVar15 = (CQuaternion4f *)(&stack0xfffff6d0 + local_44);
              aCStack_b0[0].w = afStack_ec[3];
              pfVar16 = (float *)((int)aCStack_b0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
              *(float *)((int)aCStack_b0 + (uint)bVar18 * -8 + 4) =
                   afStack_ec[(uint)bVar18 * -2 + 4];
              *pfVar16 = afStack_ec[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
              pfVar16[(uint)bVar18 * -2 + 1] =
                   (afStack_ec + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(pCVar15,pCVar19,in_stack_fffff6cc);
              pCVar19 = (CQuaternion4f *)((int)&local_48->w + iStack_14);
              CStack_110.w = fStack_c0;
              afStack_100[(uint)bVar18 * -2 + -3] = afStack_bc[(uint)bVar18 * -2];
              afStack_100[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -2] =
                   afStack_bc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
              (afStack_100 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + -2)[(uint)bVar18 * -2 + 1] =
                   (afStack_bc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_110,pCVar19,in_stack_fffff6cc);
              pfVar16 = afStack_100;
            }
            pfVar17 = pfVar16 + (uint)bVar18 * -2 + 1;
            CStack_d0.w = *pfVar16;
            pfVar16 = (float *)((int)&CStack_d0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
            *(float *)((int)&CStack_d0 + (uint)bVar18 * -8 + 4) = *pfVar17;
            *pfVar16 = pfVar17[(uint)bVar18 * -2 + 1];
            pfVar16[(uint)bVar18 * -2 + 1] =
                 (pfVar17 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_3c,&CStack_d0,(CQuaternion4f *)blend_weight,(float)in_stack_fffff6cc);
            pfVar16 = (float *)((int)local_34 + (uint)bVar18 * -8 + 0x6b4);
            (local_34->bone_transform).bone_rotations[0].w = CStack_13c.z;
            pfVar17 = pfVar16 + (uint)bVar18 * -2 + 1;
            *pfVar16 = afStack_12c[(uint)bVar18 * -2];
            *pfVar17 = afStack_12c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            pfVar17[(uint)bVar18 * -2 + 1] =
                 (afStack_12c + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_38 = local_38 + 4;
          local_2c = (CSkeleton *)((local_2c->motion_list).state_names[1] + 2);
          local_34 = (CDeformableModelInstance *)&(local_34->motion_controller).tween_speed;
          local_3c = local_3c + 1;
        } while (local_20 < this_ptr_00->bone_count);
      }
    }
    else {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0xa82;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if (bone_index < 0) {
      pCVar10 = this_ptr_00->frame_positions_1;
      fVar2 = pCVar10[local_58].y;
      fVar3 = pCVar10[local_58].z;
      fVar12 = 1.0 - (float)in_stack_fffff6cc;
      pCVar11 = this_ptr_00->frame_positions_1;
      fVar4 = pCVar11[aiStack_54[0]].y;
      fVar5 = pCVar11[aiStack_54[0]].z;
      fVar6 = (this_ptr->scaled_model_dimensions).y;
      fVar7 = (this_ptr->scaled_model_dimensions).z;
      fVar13 = 1.0 - blend_weight;
      pSVar1 = &this_ptr->bone_transform;
      fVar8 = (this_ptr->bone_transform).root_position.y;
      fVar9 = (this_ptr->bone_transform).root_position.z;
      if (pSVar1 != (SBoneTransformData *)afStack_64) {
        (pSVar1->root_position).x =
             (pSVar1->root_position).x * fVar13 +
             (pCVar11[aiStack_54[0]].x * fVar12 + pCVar10[local_58].x * (float)in_stack_fffff6cc) *
             (this_ptr->scaled_model_dimensions).x * blend_weight;
        (this_ptr->bone_transform).root_position.y =
             fVar8 * fVar13 +
             (fVar4 * fVar12 + fVar2 * (float)in_stack_fffff6cc) * fVar6 * blend_weight;
        (this_ptr->bone_transform).root_position.z =
             fVar9 * fVar13 +
             (fVar5 * fVar12 + fVar3 * (float)in_stack_fffff6cc) * fVar7 * blend_weight;
        return;
      }
    }
  }
  return;
}
