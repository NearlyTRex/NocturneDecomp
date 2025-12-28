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
  int iVar13;
  float fVar14;
  CQuaternion4f *result_out;
  BADSPACEBASE *in_ESP;
  float *pfVar15;
  uint *puVar17;
  uint *puVar18;
  float *pfVar19;
  byte bVar21;
  float afStackY_1940 [1020];
  CQuaternion4f *pCVar22;
  CSkeleton *pCVar23;
  CDeformableModelInstance *quat2_ptr;
  CSkeleton *pCVar24;
  CSkeleton *in_stack_fffff6c8;
  CSkeleton *in_stack_fffff6cc;
  int aiStack_2f0 [99];
  float fStack_164;
  float afStack_160 [4];
  float fStack_150;
  uint auStack_14c [2];
  CQuaternion4f CStack_144;
  float fStack_130;
  uint auStack_12c [5];
  CQuaternion4f CStack_118;
  float local_104 [5];
  uint uStack_f0;
  float afStack_ec [5];
  float afStack_d8 [2];
  float afStack_d0 [2];
  float fStack_c8;
  uint local_c4 [2];
  CQuaternion4f CStack_bc;
  float afStack_ac [18];
  float afStack_64 [2];
  int local_5c;
  CDeformableModelInstance *local_58;
  CSkeleton *pCStack_54;
  CDeformableModelInstance *pCStack_50;
  CQuaternion4f *local_48;
  int local_44;
  CQuaternion4f *local_40;
  CQuaternion4f *local_3c;
  int local_38;
  CDeformableModelInstance *local_34;
  CDeformableModelInstance *local_30;
  CSkeleton *local_2c;
  CQuaternion4f *local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  CSkeleton *local_18;
  int iStack_14;
  float *pfVar16;
  float *pfVar20;
  
  bVar21 = 0;
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
              (&this_ptr->motion_controller,target_motion_index,target_frame_number,(int *)&local_58
               ,&local_5c,(float *)&stack0xfffff6c8);
    pCVar23 = (CSkeleton *)0x59eba3;
    quat2_ptr = this_ptr;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (this_ptr->field11_0x2250 == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_28 = (this_ptr->bone_transform).bone_rotations;
        local_30 = this_ptr;
        local_18 = (CSkeleton *)0x0;
        do {
          pCVar23 = local_18;
          iVar13 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,(int)local_18,bone_index);
          if (-1 < iVar13) {
            pCVar24 = (CSkeleton *)this_ptr;
            fVar14 = (*callback_func)((int)pCVar23,bone_index,blend_weight,iVar13,this_ptr);
            in_stack_fffff6cc = pCVar24;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,(int)pCVar23,(int)pCStack_54,(int)local_58,(float)pCVar24);
            pCVar23 = local_2c;
            pCVar22 = &CStack_144;
            CStack_144.x = fStack_164;
            pfVar15 = (float *)((int)&CStack_144 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 0xc);
            *(float *)((int)&CStack_144 + (uint)bVar21 * -8 + 8) = afStack_160[(uint)bVar21 * -2];
            *pfVar15 = afStack_160[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            pfVar15[(uint)bVar21 * -2 + 1] =
                 (afStack_160 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      ((CQuaternion4f *)pCVar23,pCVar22,(CQuaternion4f *)pCVar24,fVar14);
            puVar17 = (uint *)((int)local_30 + (uint)bVar21 * -8 + 0x6b4);
            (local_30->bone_transform).bone_rotations[0].w = fStack_150;
            puVar18 = puVar17 + (uint)bVar21 * -2 + 1;
            *puVar17 = auStack_14c[(uint)bVar21 * -2];
            *puVar18 = auStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            puVar18[(uint)bVar21 * -2 + 1] =
                 (auStack_14c + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
          }
          local_30 = (CDeformableModelInstance *)&(local_30->motion_controller).tween_speed;
          local_28 = local_28 + 1;
          local_18 = (CSkeleton *)((int)local_18 + 1);
        } while ((int)local_18 < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->field11_0x2250 == 1) {
      local_1c = (CDeformableModelInstance *)0x0;
      if (0 < this_ptr_00->bone_count) {
        local_40 = (CQuaternion4f *)0x0;
        local_24 = 0;
        do {
          pCVar23 = this_ptr_00;
          quat2_ptr = local_1c;
          in_stack_fffff6c8 = (CSkeleton *)bone_index;
          iVar13 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,(int)local_1c,bone_index);
          *(int *)((int)aiStack_2f0 + local_20 + 4) = iVar13;
          if (-1 < iVar13) {
            pCVar23 = local_18;
            quat2_ptr = pCStack_50;
            in_stack_fffff6c8 = pCStack_54;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,(int)local_18,(int)pCStack_50,(int)pCStack_54,
                       (float)in_stack_fffff6cc);
            puVar18 = (uint *)(&stack0xfffff6dc + (uint)bVar21 * -8 + local_38);
            *(float *)(&stack0xfffff6d8 + local_38) = CStack_118.w;
            puVar17 = (uint *)((int)&CStack_118 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            *puVar18 = *(uint *)((int)&CStack_118 + (uint)bVar21 * -8 + 4);
            puVar18[(uint)bVar21 * -2 + 1] = *puVar17;
            (puVar18 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
                 puVar17[(uint)bVar21 * -2 + 1];
          }
          local_1c = (CDeformableModelInstance *)
                     ((int)&(local_1c->motion_controller).motion_list_ptr + 1);
          local_24 = local_24 + 4;
          local_40 = local_40 + 1;
        } while ((int)local_1c < this_ptr_00->bone_count);
      }
      iVar13 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar13) {
        pCVar23 = pCStack_54;
        quat2_ptr = local_58;
        pCVar24 = in_stack_fffff6cc;
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,iVar13,(int)pCStack_54,(int)local_58,(float)in_stack_fffff6cc);
        pfVar15 = (float *)(&stack0xfffff6d4 + (uint)bVar21 * -8 + iVar13 * 0x10);
        *(uint *)(&stack0xfffff6d0 + iVar13 * 0x10) = uStack_f0;
        *pfVar15 = afStack_ec[(uint)bVar21 * -2];
        pfVar15[(uint)bVar21 * -2 + 1] = afStack_ec[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
        (pfVar15 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
             (afStack_ec + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
        in_stack_fffff6c8 = in_stack_fffff6cc;
        in_stack_fffff6cc = pCVar24;
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
            iVar13 = local_2c->bone_list[0].parent_index;
            local_44 = local_20 * 0x10;
            if (iVar13 < 0) {
              pfVar19 = afStack_d0;
              pfVar15 = (float *)(&stack0xfffff6d0 + local_20 * 0x10);
            }
            else {
              iStack_14 = iVar13 * 0x10;
              in_stack_fffff6c8 = (CSkeleton *)(&stack0xfffff6d0 + iStack_14);
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        ((CQuaternion4f *)in_stack_fffff6c8,(CQuaternion4f *)in_stack_fffff6cc);
              pCVar22 = &CStack_bc;
              result_out = (CQuaternion4f *)(&stack0xfffff6c4 + (int)pCStack_50);
              CStack_bc.z = afStack_ec[0];
              afStack_ac[(uint)bVar21 * -2] = afStack_ec[(uint)bVar21 * -2 + 1];
              afStack_ac[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   afStack_ec[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 2];
              (afStack_ac + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
                   (afStack_ec + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 2)[(uint)bVar21 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        (result_out,pCVar22,(CQuaternion4f *)pCVar23);
              pCVar22 = (CQuaternion4f *)
                        ((pCStack_50->motion_controller).current_motion_name +
                        (int)((local_1c->motion_controller).current_motion_name + -0x60));
              CStack_118.w = fStack_c8;
              puVar17 = (uint *)((int)&CStack_118 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8)
              ;
              *(uint *)((int)&CStack_118 + (uint)bVar21 * -8 + 4) =
                   local_c4[(uint)bVar21 * -2];
              *puVar17 = local_c4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              puVar17[(uint)bVar21 * -2 + 1] =
                   (local_c4 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
              pfVar19 = afStack_ec + 5;
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        (&CStack_118,pCVar22,(CQuaternion4f *)quat2_ptr);
              pfVar15 = local_104;
            }
            pfVar20 = pfVar19 + (uint)bVar21 * -2 + 1;
            pfVar16 = pfVar15 + (uint)bVar21 * -2 + 1;
            *pfVar19 = *pfVar15;
            *pfVar20 = *pfVar16;
            pfVar20[(uint)bVar21 * -2 + 1] = pfVar16[(uint)bVar21 * -2 + 1];
            (pfVar20 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
                 (pfVar16 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
            pCVar23 = (CSkeleton *)(afStack_ec + 6);
            quat2_ptr = (CDeformableModelInstance *)blend_weight;
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_40,(CQuaternion4f *)pCVar23,(CQuaternion4f *)blend_weight,
                       (float)in_stack_fffff6c8);
            puVar17 = (uint *)((int)local_34 + (uint)bVar21 * -8 + 0x6b4);
            (local_34->bone_transform).bone_rotations[0].w = fStack_130;
            puVar18 = puVar17 + (uint)bVar21 * -2 + 1;
            *puVar17 = auStack_12c[(uint)bVar21 * -2];
            *puVar18 = auStack_12c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            puVar18[(uint)bVar21 * -2 + 1] =
                 (auStack_12c + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
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
      pCVar9 = this_ptr_00->frame_positions_1;
      fVar14 = pCVar9[(int)local_58].y;
      fVar2 = pCVar9[(int)local_58].z;
      fVar11 = 1.0 - (float)in_stack_fffff6cc;
      pCVar10 = this_ptr_00->frame_positions_1;
      fVar3 = pCVar10[(int)pCStack_54].y;
      fVar4 = pCVar10[(int)pCStack_54].z;
      fVar5 = (this_ptr->scaled_model_dimensions).y;
      fVar6 = (this_ptr->scaled_model_dimensions).z;
      fVar12 = 1.0 - blend_weight;
      pSVar1 = &this_ptr->bone_transform;
      fVar7 = (this_ptr->bone_transform).root_position.y;
      fVar8 = (this_ptr->bone_transform).root_position.z;
      if (pSVar1 != (SBoneTransformData *)afStack_64) {
        (pSVar1->root_position).x =
             (pSVar1->root_position).x * fVar12 +
             (pCVar10[(int)pCStack_54].x * fVar11 +
             pCVar9[(int)local_58].x * (float)in_stack_fffff6cc) *
             (this_ptr->scaled_model_dimensions).x * blend_weight;
        (this_ptr->bone_transform).root_position.y =
             fVar7 * fVar12 +
             (fVar3 * fVar11 + fVar14 * (float)in_stack_fffff6cc) * fVar5 * blend_weight;
        (this_ptr->bone_transform).root_position.z =
             fVar8 * fVar12 +
             (fVar4 * fVar11 + fVar2 * (float)in_stack_fffff6cc) * fVar6 * blend_weight;
        return;
      }
    }
  }
  return;
}
