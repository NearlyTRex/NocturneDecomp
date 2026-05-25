// Name: core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520
// Address: 005be520
// MANUAL RECONSTRUCTION
// Address Range: [[005be520, 005bf711] [006056e2, 006057a8] [006088b0, 006089ad] [0060cb69, 0060cb8a] [0060fa66, 0060fb1b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_005be520(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_005be520(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  CLever *this_ptr_02;
  float fVar7;
  CDemonActor *pCVar9;
  SMotion *pSVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar10;
  CBoundingBox3D *pCVar6;
  CVector3f *pCVar7;
  CSkeleton *this_ptr_01;
  CQuaternion4f *pCVar12;
  CQuaternion4f *pCVar13;
  float10 fVar16;
  float10 fVar14;
  double dVar17;
  char local_res0;
  CQuaternion4f *rotation_quat;
  float fVar15;
  char *motion_name;
  int iVar16;
  float local_1f0c;
  float local_1f08;
  float local_1f04;
  float local_1ef8;
  float local_1ef4;
  float local_1ef0;
  float local_1ee0;
  float local_1edc;
  float fStack_1ed8;
  SPose local_1ecc;
  CMatrix3x3f local_430;
  CBoundingBox3D local_408;
  CQuaternion4f local_3f0;
  CQuaternion4f local_3d0;
  CQuaternion4f local_3c0;
  CQuaternion4f local_3a0;
  CQuaternion4f local_390;
  CQuaternion4f local_380;
  CQuaternion4f CStack_370;
  CQuaternion4f local_350;
  CQuaternion4f local_340;
  CQuaternion4f local_330;
  CQuaternion4f local_320;
  CQuaternion4f local_310;
  CQuaternion4f local_300;
  CQuaternion4f local_2f0;
  CQuaternion4f local_2d4;
  CQuaternion4f local_2c0;
  CQuaternion4f local_2b4;
  CQuaternion4f local_260;
  CQuaternion4f local_250;
  CQuaternion4f local_240;
  CQuaternion4f local_220;
  CQuaternion4f local_200;
  CQuaternion4f local_1d0;
  CQuaternion4f CStack_1b0;
  CQuaternion4f local_1a0;
  CVector3f local_190;
  CVector3f local_184;
  CVector3f local_16c;
  CVector3f local_154;
  CVector3f local_148;
  CVector3f CStack_13c;
  CVector3f CStack_124;
  CVector3f CStack_118;
  CVector3f local_10c;
  CVector3f CStack_f4;
  CVector3f CStack_dc;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  
  local_1f08 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(this_ptr->base).base.model.motion_controller,0);
  if (this_ptr->turn_blend_weight < 0.15f) {
    local_1f08 = (this_ptr->turn_blend_weight / 0.15f) * local_1f08;
  }
  if (0.85 < this_ptr->turn_blend_weight) {
    local_1f08 = ((1.0 - this_ptr->turn_blend_weight) / 0.15) * local_1f08;
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  if ((0.0 < local_1f08) && (-1 < this_ptr->turn_motion_index)) {
    core_stranger_cpp_CStranger_extractTurnPose_FUN_005bf720(this_ptr,&local_1ecc);
    local_1ecc.pose_data.root_position.x = 0.0;
    local_1ecc.pose_data.root_position.z = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
              (pCVar1,&local_1ecc.pose_data,local_1f08,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  }
  core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  pCVar2 = &this_ptr->carry_object_world_center;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  pfVar3 = &(this_ptr->carry_object_world_center).z;
  pfVar4 = &(this_ptr->carry_object_world_center).y;
  iVar16 = pSVar4->state_index;
  if (iVar16 == 0x15) {
    fVar15 = pCVar2->x;
    fVar5 = *pfVar4;
    fVar6 = *pfVar3;
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar1,&local_184,g_StrangerIndices[4]);
    local_190.x = fVar15 - local_184.x;
    local_190.y = fVar5 - local_184.y;
    local_190.z = fVar6 - local_184.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_190);
    fVar15 = (this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)13 <= fVar15) {
      local_1ee0 = 1.0 - (fVar15 + (float)-13) * (float)0.0769230769230769;
      if (local_1ee0 < 0.0) {
        local_1ee0 = 0.0;
      }
    }
    else {
      local_1ee0 = fVar15 * (float)0.0769230769230769;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_7c.x,&local_320);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (&(this_ptr->base).base.model,&local_320,local_1ee0,g_StrangerIndices[0x11],
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_7c.y,&local_300);
    rotation_quat = &local_390;
    pCVar13 = &local_390;
    pCVar12 = &local_300;
    local_1f0c = local_1ee0;
    iVar16 = g_StrangerIndices[4];
LAB_0060cb6a:
    *pCVar13 = *pCVar12;
  }
  else if (iVar16 == 0x13) {
    fVar15 = pCVar2->x;
    fVar5 = *pfVar4;
    fVar6 = *pfVar3;
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar1,&local_b8,g_StrangerIndices[4]);
    local_70.x = fVar15 - local_b8.x;
    local_70.y = fVar5 - local_b8.y;
    local_70.z = fVar6 - local_b8.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_4c,&local_70);
    fVar15 = (this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)24 <= fVar15) {
      local_1ef4 = 1.0 - (fVar15 + (float)-24) * (float)0.10000000000000001;
      if (local_1ef4 < 0.0) {
        local_1ef4 = 0.0;
      }
    }
    else {
      local_1ef4 = fVar15 * (float)0.041666666666666699;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(-local_4c.x,&local_2c0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (&(this_ptr->base).base.model,&local_2c0,local_1ef4,g_StrangerIndices[4],
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_4c.y,&local_240);
    rotation_quat = &local_240;
    local_1f0c = local_1ef4;
    iVar16 = g_StrangerIndices[4];
  }
  else {
    if (iVar16 != 0x16) {
      if (iVar16 == 0x1f) {
        this_ptr_02 = (this_ptr->base).lever_to_pull;
        if (this_ptr_02 == (CLever *)0x0) {
          pCVar10 = core_lever_cpp_CLever_getHandlePosition_FUN_00504dd0
                              (g_StrangerLeverHandle,&local_10c);
          pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&local_154,pCVar10);
          if (pCVar2 != pCVar10) {
            *pCVar2 = *pCVar10;
          }
        }
        else {
          pCVar5 = core_lever_cpp_CLever_getHandlePosition_FUN_00504dd0(this_ptr_02,&local_58);
          pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&local_a0,pCVar5);
          if (pCVar2 != pCVar10) {
            *pCVar2 = *pCVar10;
          }
          g_StrangerLeverHandle = (this_ptr->base).lever_to_pull;
        }
        fVar15 = (this_ptr->carry_object_world_center).x;
        fVar5 = (this_ptr->carry_object_world_center).y;
        fVar6 = (this_ptr->carry_object_world_center).z;
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (&(this_ptr->base).base.model,&local_94,g_StrangerIndices[4]);
        fVar15 = fVar15 - local_94.x;
        fVar5 = fVar5 - local_94.y;
        fVar6 = fVar6 - local_94.z;
        local_ac.x = fVar15;
        local_ac.y = fVar5;
        local_ac.z = fVar6;
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_148,&local_ac);
        fVar7 = (this_ptr->base).base.model.motion_controller.current_frame_number;
        if ((float)10 <= fVar7) {
          if (15 <= (double)fVar7) {
            local_1f04 = 1.0 - (fVar7 + (float)-15) * (float)0.066666666666666693;
            if (local_1f04 < 0.0) {
              local_1f04 = 0.0;
            }
          }
          else {
            local_1f04 = 1.0;
          }
        }
        else {
          local_1f04 = fVar7 * (float)0.10000000000000001;
        }
        fVar15 = SQRT(fVar6 * fVar6 + fVar15 * fVar15 + fVar5 * fVar5);
        if (fVar15 < 2.7f) {
          dVar17 = (double)(fVar15 / 2.7f);
          dVar17 = acos(dVar17);
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((float)dVar17,&local_2d4);
          pCVar1 = &(this_ptr->base).base.model;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    (pCVar1,&local_2d4,local_1f08,g_StrangerIndices[4],
                     core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-(float)dVar17,&local_2b4);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    (pCVar1,&local_2b4,local_1f08,g_StrangerIndices[6],
                     core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_148.x,&local_1d0);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (&(this_ptr->base).base.model,&local_1d0,local_1f04,g_StrangerIndices[4],
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_148.y,&local_3a0);
        rotation_quat = &local_250;
        pCVar13 = &local_250;
        pCVar12 = &local_3a0;
        local_1f0c = local_1f04;
        iVar16 = g_StrangerIndices[4];
      }
      else if (iVar16 == 0x17) {
        local_1ef8 = (this_ptr->base).base.model.motion_controller.current_frame_number *
                     (float)0.066666666666666693;
        if (1.0 < local_1ef8) {
          local_1ef8 = 1.0;
        }
        fVar16 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                 (float10)2.7f,(float10)1);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((float)fVar16,&local_3f0);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (&(this_ptr->base).base.model,&local_3f0,local_1ef8,g_StrangerIndices[4],
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-(float)fVar16,&local_310);
        rotation_quat = &local_330;
        pCVar13 = &local_330;
        pCVar12 = &local_310;
        local_1f0c = local_1ef8;
        iVar16 = g_StrangerIndices[3];
      }
      else {
        if (iVar16 != 0x18) {
          if (iVar16 == 0x19) {
            local_1f0c = 1.0 - ((this_ptr->base).base.model.motion_controller.current_frame_number +
                               (float)-15) * (float)0.066666666666666693;
            if (local_1f0c < 0.0) {
              local_1f0c = 0.0;
            }
            if (1.0 < local_1f0c) {
              local_1f0c = 1.0;
            }
            fVar14 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                     (float10)2.7f,(float10)1);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((float)fVar14,&local_260);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (&(this_ptr->base).base.model,&local_260,local_1f0c,g_StrangerIndices[4],
                       core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-(float)fVar14,&local_220);
            rotation_quat = &local_220;
            iVar16 = g_StrangerIndices[3];
          }
          else {
            if (iVar16 != 0x1a) goto LAB_005be7a1;
            fVar15 = (this_ptr->base).base.model.motion_controller.current_frame_number;
            if (fVar15 < (float)15) {
              local_1ef0 = fVar15 * (float)0.066666666666666693;
            }
            else {
              local_1ef0 = 1.0 - (fVar15 + (float)-15) * (float)0.066666666666666693;
            }
            if (1.0 < local_1ef0) {
              local_1ef0 = 1.0;
            }
            if (local_1ef0 < 0.0) {
              local_1ef0 = 0.0;
            }
            pCVar1 = &(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (pCVar1,&local_16c,g_StrangerIndices[4]);
            fVar14 = (float10)fpatan((float10)local_16c.y -
                                     (float10)(this_ptr->carry_object_world_center).y,
                                     (float10)2.7f);
            core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((float)fVar14,&local_340);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&local_340,local_1ef0,g_StrangerIndices[4],
                       core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&local_340,local_1ef0,g_StrangerIndices[3],
                       core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            fVar14 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                     (float10)2.7f,(float10)1);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((float)fVar14,&local_200);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&local_200,local_1ef0,g_StrangerIndices[4],
                       core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-(float)fVar14,&local_350);
            rotation_quat = &local_350;
            local_1f0c = local_1ef0;
            iVar16 = g_StrangerIndices[3];
          }
          goto LAB_005be799;
        }
        fVar15 = (this_ptr->base).base.model.motion_controller.current_frame_number;
        if ((float)15 <= fVar15) {
          local_1edc = 1.0 - (fVar15 + (float)-15) * (float)0.066666666666666693;
        }
        else {
          local_1edc = fVar15 * (float)0.066666666666666693;
        }
        if (1.0 < local_1edc) {
          local_1edc = 1.0;
        }
        if (local_1edc < 0.0) {
          local_1edc = 0.0;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (&(this_ptr->base).base.model,&local_c4,g_StrangerIndices[4]);
        fVar15 = (this_ptr->carry_object_world_center).y;
        fVar5 = (this_ptr->carry_object_bbox).max.y;
        fVar6 = (this_ptr->carry_object_bbox).min.y;
        pCVar9 = (this_ptr->base).object_to_pick_up;
        if (pCVar9 != (CDemonActor *)0x0) {
          g_SuccubusIndices[0] =
               (int)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005bb010(pCVar9);
        }
        fVar14 = (float10)fpatan((float10)local_c4.y -
                                 (float10)(((fVar15 + fVar5) - fVar6) - (float)g_SuccubusIndices[0])
                                 ,(float10)2.7f);
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((float)fVar14,&local_380);
        pCVar1 = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (pCVar1,&local_380,local_1edc,g_StrangerIndices[4],
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (pCVar1,&local_380,local_1edc,g_StrangerIndices[3],
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        fVar14 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                 (float10)2.7f,(float10)1);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((float)fVar14,&local_2f0);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (pCVar1,&local_2f0,local_1edc,g_StrangerIndices[4],
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-(float)fVar14,&local_3c0);
        rotation_quat = &local_1a0;
        pCVar13 = &local_1a0;
        pCVar12 = &local_3c0;
        local_1f0c = local_1edc;
        iVar16 = g_StrangerIndices[3];
      }
      goto LAB_0060cb6a;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&local_430,&(this_ptr->base).target_orientation.vec);
    if ((BYTE_03f6baac & 1) == 0) {
      BYTE_03f6baac = BYTE_03f6baac | 1;
    }
    pCVar9 = (this_ptr->base).target_actor;
    if (pCVar9 != (CDemonActor *)0x0) {
      pCVar6 = (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,&local_408);
      if (&local_res0 != g_TriListTextureNames[0] + 0x24) {
        CVector3f_03f6ba9c.x = ((pCVar6->min).x + (pCVar6->max).x) * 0.5f;
        CVector3f_03f6ba9c.y = ((pCVar6->min).y + (pCVar6->max).y) * 0.5f;
        CVector3f_03f6ba9c.z = ((pCVar6->min).z + (pCVar6->max).z) * 0.5f;
      }
    }
    pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&local_430,&local_64,&CVector3f_03f6ba9c);
    CStack_13c.x = (this_ptr->base).target_position.x + pCVar7->x;
    CStack_13c.y = (this_ptr->base).target_position.y + pCVar7->y;
    CStack_13c.z = (this_ptr->base).target_position.z + pCVar7->z;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              ((CDemonActor *)this_ptr,&CStack_124,&CStack_13c);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (&(this_ptr->base).base.model,&CStack_dc,g_StrangerIndices[4]);
    CStack_f4.x = CStack_124.x - CStack_dc.x;
    CStack_f4.y = CStack_124.y - CStack_dc.y;
    CStack_f4.z = CStack_124.z - CStack_dc.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_118,&CStack_f4);
    fVar15 = (this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)21 <= fVar15) {
      fStack_1ed8 = 1.0 - (fVar15 + (float)-21) * (float)0.071428571428571397;
      if (fStack_1ed8 < 0.0) {
        fStack_1ed8 = 0.0;
      }
    }
    else {
      fStack_1ed8 = fVar15 * (float)0.047619047619047603;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(CStack_118.x,&CStack_1b0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (&(this_ptr->base).base.model,&CStack_1b0,fStack_1ed8,g_StrangerIndices[0x11],
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(CStack_118.y,&CStack_370);
    rotation_quat = &CStack_370;
    local_1f0c = fStack_1ed8;
    iVar16 = g_StrangerIndices[4];
  }
LAB_005be799:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (&(this_ptr->base).base.model,rotation_quat,local_1f0c,iVar16,
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
LAB_005be7a1:
  if (g_CGamePtr->goggles_active != 0) {
    local_88.y = 0.0;
    local_88.z = 0.0;
    local_88.x = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      local_88.x = (this_ptr->right_arm_aim).target_pitch;
    }
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
    fVar15 = 1.0;
    iVar16 = g_StrangerIndices[0];
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_88,&local_3d0);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (&(this_ptr->base).base.model,&local_3d0,fVar15,iVar16,blend_callback);
  }
  if (this_ptr->interact_blend <= 0.0) {
    return;
  }
  iVar16 = 1;
  motion_name = "draw_holsters2aimPistols";
  pCVar1 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  iVar16 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                     (&this_ptr_01->motion_list,motion_name,iVar16);
  fVar15 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                     (&pCVar1->motion_controller,iVar16,1.0);
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (pCVar1,iVar16,fVar15,this_ptr->interact_blend,g_StrangerIndices[0x10],
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  return;
}
