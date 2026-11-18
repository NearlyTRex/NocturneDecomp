// Name: core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0
// Address: 00588ad0
// Address Range: [[00588ad0, 00589f0b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CLever *this_ptr_00;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  SMotion *pSVar4;
  CSkeleton *this_ptr_01;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  byte bVar9;
  float10 fVar10;
  double dVar11;
  CDeformableModelInstance *this_ptr_02;
  CQuaternion4f *rotation_quat;
  float fVar12;
  char *motion_name;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  code *blend_callback_00;
  int iVar13;
  ulonglong in_stack_ffffdf6c;
  CBoundingBox3D *out_box;
  float *local_2050;
  float *local_2040;
  float local_2038;
  float *local_2034;
  float local_202c;
  float *local_2028;
  CQuaternion4f *local_2020;
  float local_2010;
  byte local_200c [6812];
  CMatrix3x3f local_570;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float local_530;
  float fStack_52c;
  float afStack_528 [4];
  byte local_518 [16];
  float local_508 [4];
  byte local_4f8 [16];
  float local_4e8 [3];
  CQuaternion4f CStack_4dc;
  CQuaternion4f CStack_4cc;
  CQuaternion4f CStack_4bc;
  byte local_4a8 [16];
  float local_498 [3];
  CQuaternion4f CStack_48c;
  CQuaternion4f local_478;
  byte local_468 [16];
  float afStack_458 [3];
  CQuaternion4f CStack_44c;
  CQuaternion4f CStack_43c;
  CQuaternion4f CStack_42c;
  CQuaternion4f CStack_41c;
  byte local_408 [16];
  float local_3f8 [3];
  CQuaternion4f CStack_3ec;
  CQuaternion4f CStack_3dc;
  float local_3c8;
  float afStack_3c4 [3];
  byte local_3b8 [16];
  float local_3a8 [3];
  CQuaternion4f CStack_39c;
  CQuaternion4f CStack_38c;
  byte local_378 [16];
  float afStack_368 [3];
  CQuaternion4f CStack_35c;
  float local_348;
  float afStack_344 [2];
  CQuaternion4f CStack_33c;
  CQuaternion4f CStack_32c;
  CQuaternion4f local_318;
  CQuaternion4f local_308;
  byte local_2f8 [16];
  float afStack_2e8 [4];
  CQuaternion4f local_2d8;
  float afStack_2c8 [4];
  float fStack_2b8;
  float afStack_2b4 [4];
  CVector3f local_2a4;
  CVector3f local_294;
  float afStack_288 [2];
  CVector3f CStack_280;
  CVector3f local_270;
  CVector3f local_264;
  float fStack_250;
  CVector3f local_24c;
  float local_240;
  float local_23c [4];
  float local_22c;
  float local_228;
  float local_224;
  float local_21c;
  float local_218;
  float local_214;
  float fStack_208;
  byte local_204 [12];
  float afStack_1f8 [3];
  CVector3f local_1ec;
  float local_1e0;
  float local_1dc;
  float local_1d8 [4];
  float afStack_1c8 [3];
  CVector3f local_1bc;
  float local_1b0;
  float local_1ac;
  CVector3f CStack_1a8;
  float fStack_19c;
  float fStack_198;
  float afStack_194 [4];
  CVector3f local_184;
  CVector3f CStack_178;
  CVector3f local_168;
  float local_15c;
  float local_158 [4];
  float local_148;
  CVector3f local_144;
  float local_138;
  float local_134 [2];
  CVector3f local_12c;
  float local_120 [6];
  CVector3f local_108;
  float afStack_fc [6];
  CVector3f local_e4;
  float local_d8;
  float local_d4 [4];
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  byte local_a8 [12];
  uint local_9c;
  uint local_98;
  CVector3f local_90;
  float local_84;
  float local_80 [4];
  float local_70;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  float fStack_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  CVector3f *local_20;
  CDeformableModelInstance *local_1c;
  CQuaternion4f *local_18;
  
  bVar9 = 0;
  out_box = (CBoundingBox3D *)((ulonglong)in_stack_ffffdf6c >> 0x20);
  local_18 = (CQuaternion4f *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&(this_ptr->base).base.model.base,0);
  local_2020 = local_18;
  if ((int)this_ptr->turn_blend_weight < 0x3e19999a) {
    local_2020 = (CQuaternion4f *)
                 ((this_ptr->turn_blend_weight / 0.15f) * (float)local_18);
  }
  if (0.85 < this_ptr->turn_blend_weight) {
    local_2020 = (CQuaternion4f *)(((1.0 - this_ptr->turn_blend_weight) / 0.15) * (float)local_2020)
    ;
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar1);
  if ((0.0 < (float)local_2020) && (-1 < this_ptr->turn_motion_index)) {
    core_stranger_cpp_CStranger_extractTurnPose_FUN_00589f10(this_ptr,(SPose *)local_200c);
    local_200c._0_4_ = 0.0;
    local_200c._8_4_ = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830
              (pCVar1,(SPoseData *)local_200c,(float)local_2020,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
  }
  core_stranger_cpp_CStranger_makeDrawDecision_FUN_0058a360(this_ptr);
  local_1c = &(this_ptr->base).base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&local_1c->base);
  pCVar1 = local_1c;
  iVar13 = pSVar4->state_index;
  if (iVar13 == 0x20) {
    pfVar5 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x20070);
    local_84 = (this_ptr->carry_object_world_center).x;
    local_80[(uint)bVar9 * -2] = *pfVar5;
    local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = pfVar5[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar1,g_INT_ARRAY_02c83600[4],&local_270);
    fVar12 = local_84;
    afStack_2b4[2] = local_270.x;
    afStack_2b4[(uint)bVar9 * -2 + 3] = *(float *)((int)&local_270 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&local_2a4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&local_270 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_23c[2] = fVar12 - afStack_2b4[2];
    local_23c[3] = local_80[0] - afStack_2b4[3];
    local_22c = local_80[1] - local_2a4.x;
    local_6c.x = fVar12 - afStack_2b4[2];
    *(float *)((int)&local_6c + (uint)bVar9 * -8 + 4) = local_23c[(uint)bVar9 * -2 + 3];
    *(float *)((int)&local_6c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_23c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_6c,&local_1bc);
    pCVar1 = local_1c;
    local_1b0 = local_1bc.x;
    (&local_1ac)[(uint)bVar9 * -2] = *(float *)((int)&local_1bc + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_1a8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&local_1bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fVar12 = (pCVar1->base).current_frame_number;
    if ((float)13 <= fVar12) {
      local_2034 = (float *)(1.0 - (fVar12 + (float)-13) * (float)0.0769230769230769);
      if ((float)local_2034 < 0.0) {
        local_2034 = (float *)0x0;
      }
    }
    else {
      local_2034 = (float *)(fVar12 * (float)0.0769230769230769);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_1b0,&local_478);
    local_308.w = local_478.w;
    *(uint *)(local_2f8 + (uint)bVar9 * -8 + -0xc) =
         *(uint *)(local_468 + (uint)bVar9 * -8 + -0xc);
    *(uint *)(local_2f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) =
         *(uint *)(local_468 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8);
    *(uint *)
     ((int)(local_2f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_468 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4)
    ;
    local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
    this_ptr_02 = (CDeformableModelInstance *)0x588d2b;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)local_18,&local_308,(float)local_2034,
               g_INT_ARRAY_02c83600[0x11],core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_1ac,&local_318);
    rotation_quat = local_18;
    local_2028 = &local_348;
    local_348 = local_318.w;
    pfVar5 = (float *)((int)&local_318 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    afStack_344[(uint)bVar9 * -2] = *(float *)((int)&local_318 + (uint)bVar9 * -8 + 4);
    afStack_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = *pfVar5;
    (afStack_344 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         pfVar5[(uint)bVar9 * -2 + 1];
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_ARRAY_02c83600[4];
  }
  else if (iVar13 == 0x1e) {
    pfVar5 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x20070);
    local_d4[2] = (this_ptr->carry_object_world_center).x;
    local_d4[(uint)bVar9 * -2 + 3] = *pfVar5;
    local_d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] = pfVar5[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (local_1c,g_INT_ARRAY_02c83600[4],&local_1ec);
    fVar12 = local_d4[2];
    local_1e0 = local_1ec.x;
    local_1d8[(uint)bVar9 * -2 + -1] = *(float *)((int)&local_1ec + (uint)bVar9 * -8 + 4);
    local_1d8[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
         *(float *)((int)&local_1ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_15c = fVar12 - local_1e0;
    local_158[0] = local_d4[3] - local_1dc;
    local_158[1] = local_c4 - local_1d8[0];
    local_a8._0_4_ = fVar12 - local_1e0;
    *(float *)(local_a8 + (uint)bVar9 * -8 + 4) = local_158[(uint)bVar9 * -2];
    *(float *)(local_a8 + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4 + 8) =
         local_158[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
              ((CVector3f *)local_a8,&local_12c);
    pCVar1 = local_1c;
    local_d8 = local_12c.x;
    local_d4[(uint)bVar9 * -2] = local_120[(uint)bVar9 * -2 + -2];
    local_d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -1];
    local_202c = (pCVar1->base).current_frame_number;
    if ((float)24 <= local_202c) {
      local_202c = 1.0 - (local_202c + (float)-24) * (float)0.10000000000000001;
      if (local_202c < 0.0) {
        local_202c = 0.0;
      }
    }
    else {
      local_202c = local_202c * (float)0.041666666666666699;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(-local_d8,(CQuaternion4f *)local_4a8);
    pCVar1 = &(this_ptr->base).base.model;
    local_4f8._0_4_ = local_4a8._0_4_;
    *(uint *)(local_4f8 + (uint)bVar9 * -8 + 4) =
         *(uint *)(local_4a8 + (uint)bVar9 * -8 + 4);
    *(uint *)(local_4f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)(local_4a8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)
     ((int)(local_4f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_4a8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4);
    this_ptr_02 = (CDeformableModelInstance *)0x589358;
    local_18 = (CQuaternion4f *)pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar1,(CQuaternion4f *)local_4f8,local_202c,g_INT_ARRAY_02c83600[4],
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_d4[0],(CQuaternion4f *)local_3b8);
    local_3c8 = (float)local_3b8._0_4_;
    afStack_3c4[(uint)bVar9 * -2] = *(float *)(local_3b8 + (uint)bVar9 * -8 + 4);
    afStack_3c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)(local_3b8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    (afStack_3c4 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(float *)((int)(local_3b8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) +
                   ((uint)bVar9 * -2 + 1) * 4);
    local_2028 = &local_3c8;
    rotation_quat = local_18;
    local_2034 = (float *)local_202c;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_ARRAY_02c83600[4];
  }
  else if (iVar13 == 0x21) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              (&local_570,&(this_ptr->base).target_orientation.vec);
    if ((g_StrangerBoundsCenterInit & 1) == 0) {
      g_StrangerBoundsCenterInit = g_StrangerBoundsCenterInit | 1;
    }
    pCVar2 = (this_ptr->base).target_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,out_box);
      pfVar5 = afStack_528;
      pfVar8 = &fStack_540;
      for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
        *pfVar8 = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
        pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
      }
      fStack_250 = fStack_540 + fStack_534;
      local_24c.x = fStack_53c + local_530;
      local_24c.y = fStack_538 + fStack_52c;
      local_1d8[3] = fStack_540 + fStack_534;
      afStack_1c8[(uint)bVar9 * -2] = *(float *)((int)&local_24c + (uint)bVar9 * -8);
      afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)&local_24c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 4);
      afStack_1c8[2] = local_1d8[3] * 0.5f;
      local_1bc.x = afStack_1c8[0] * 0.5f;
      local_1bc.y = afStack_1c8[1] * 0.5f;
      fStack_208 = local_1d8[3] * 0.5f;
      *(uint *)(local_204 + (uint)bVar9 * -8) =
           *(uint *)((int)&local_1bc + (uint)bVar9 * -8);
      afStack_1f8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -2] =
           *(float *)((int)&local_1bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 4);
      if (&stack0x00000000 != g_CDemonActorType_02c837cc.class_name + 0xc) {
        g_StrangerBoundsCenter.x = fStack_208;
        g_StrangerBoundsCenter.y = (float)local_204._0_4_;
        g_StrangerBoundsCenter.z = (float)local_204._4_4_;
      }
    }
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              ((CMatrix3x3f *)(local_200c + 0x1a98),&g_StrangerBoundsCenter,&CStack_1a8);
    local_12c.z = CStack_1a8.x;
    local_120[(uint)bVar9 * -2] = *(float *)((int)&CStack_1a8 + (uint)bVar9 * -8 + 4);
    local_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&CStack_1a8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_108.z = (this_ptr->base).target_position.x + local_12c.z;
    afStack_fc[0] = (this_ptr->base).target_position.y + local_120[0];
    afStack_fc[1] = (this_ptr->base).target_position.z + local_120[1];
    CStack_178.x = local_108.z;
    *(float *)((int)&CStack_178 + (uint)bVar9 * -8 + 4) = afStack_fc[(uint)bVar9 * -2];
    *(float *)((int)&CStack_178 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
              ((CDemonActor *)this_ptr,&CStack_178,(CVector3f *)(local_204 + 8));
    pCVar1 = &(this_ptr->base).base.model;
    local_1c = pCVar1;
    local_294.z = (float)local_204._8_4_;
    afStack_288[(uint)bVar9 * -2] = afStack_1f8[(uint)bVar9 * -2];
    afStack_288[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_1f8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar1,g_INT_ARRAY_02c83600[4],&local_2a4);
    fVar12 = local_294.z;
    afStack_2c8[3] = local_2a4.x;
    afStack_2b4[(uint)bVar9 * -2 + -1] = *(float *)((int)&local_2a4 + (uint)bVar9 * -8 + 4);
    afStack_2b4[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
         *(float *)((int)&local_2a4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fStack_19c = fVar12 - afStack_2c8[3];
    fStack_198 = afStack_288[0] - fStack_2b8;
    afStack_194[0] = afStack_288[1] - afStack_2b4[0];
    local_184.x = fVar12 - afStack_2c8[3];
    *(float *)((int)&local_184 + (uint)bVar9 * -8 + 4) = afStack_194[(uint)bVar9 * -2 + -1];
    *(float *)((int)&local_184 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_194[(uint)bVar9 * -2 + (uint)bVar9 * -2];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_184,&CStack_280);
    pCVar1 = local_1c;
    afStack_fc[2] = CStack_280.x;
    afStack_fc[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_280 + (uint)bVar9 * -8 + 4);
    afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         *(float *)((int)&CStack_280 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fVar12 = (pCVar1->base).current_frame_number;
    if ((float)21 <= fVar12) {
      local_2034 = (float *)(1.0 - (fVar12 + (float)-21) * (float)0.071428571428571397);
      if ((float)local_2034 < 0.0) {
        local_2034 = (float *)0x0;
      }
    }
    else {
      local_2034 = (float *)(fVar12 * (float)0.047619047619047603);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
              (afStack_fc[2],(CQuaternion4f *)(local_468 + 0xc));
    pCVar1 = &(this_ptr->base).base.model;
    local_2f8._12_4_ = local_468._12_4_;
    afStack_2e8[(uint)bVar9 * -2] = afStack_458[(uint)bVar9 * -2];
    afStack_2e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_458[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (afStack_2e8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_458 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    local_1c = pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar1,(CQuaternion4f *)(local_2f8 + 0xc),(float)local_2034,
               g_INT_ARRAY_02c83600[0x11],core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30
              (afStack_fc[3],(CQuaternion4f *)(local_378 + 0xc));
    local_2d8.z = (float)local_378._12_4_;
    afStack_2c8[(uint)bVar9 * -2] = afStack_368[(uint)bVar9 * -2];
    afStack_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_368[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (afStack_2c8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_368 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    this_ptr_02 = local_1c;
    rotation_quat = (CQuaternion4f *)&local_2d8.z;
    local_2028 = local_2034;
    local_2034 = (float *)g_INT_ARRAY_02c83600[4];
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  }
  else if (iVar13 == 0x2c) {
    local_20 = &this_ptr->carry_object_world_center;
    this_ptr_00 = (this_ptr->base).lever_to_pull;
    if (this_ptr_00 == (CLever *)0x0) {
      core_lever_cpp_CLever_getHandlePosition_FUN_004ff6b0(g_StrangerLeverHandle,&local_168);
      local_264.x = local_168.x;
      *(uint *)((int)&local_264 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_168 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&local_264 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&local_168 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&local_264,&local_e4);
      pCVar3 = local_20;
      afStack_194[2] = local_e4.x;
      afStack_194[(uint)bVar9 * -2 + 3] = *(float *)((int)&local_e4 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&local_184 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           *(uint *)((int)&local_e4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if ((CVector3f *)(afStack_194 + 2) != pCVar3) {
        pCVar3->x = afStack_194[2];
        pCVar3->y = afStack_194[3];
        pCVar3->z = local_184.x;
      }
    }
    else {
      core_lever_cpp_CLever_getHandlePosition_FUN_004ff6b0(this_ptr_00,&local_24c);
      local_144.x = local_24c.x;
      *(uint *)((int)&local_144 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_24c + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&local_144 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&local_24c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&local_144,&local_294);
      local_80[2] = local_294.x;
      local_80[(uint)bVar9 * -2 + 3] = afStack_288[(uint)bVar9 * -2 + -2];
      local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_288[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -1];
      if ((CVector3f *)(local_80 + 2) != local_20) {
        local_20->x = local_80[2];
        local_20->y = local_80[3];
        local_20->z = local_70;
      }
      g_StrangerLeverHandle = (this_ptr->base).lever_to_pull;
    }
    pfVar5 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x20070);
    local_158[2] = (this_ptr->carry_object_world_center).x;
    local_158[(uint)bVar9 * -2 + 3] = *pfVar5;
    local_158[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] = pfVar5[(uint)bVar9 * -2 + 1];
    local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              ((CDeformableModelInstance *)local_18,g_INT_ARRAY_02c83600[4],&local_108);
    fVar12 = local_158[2];
    local_21c = local_108.x;
    local_23c[(uint)bVar9 * -2 + 9] = afStack_fc[(uint)bVar9 * -2 + -2];
    local_23c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -1];
    fVar12 = fVar12 - local_21c;
    local_240 = fVar12;
    local_23c[0] = local_158[3] - local_218;
    local_23c[1] = local_148 - local_214;
    local_c0 = fVar12;
    local_d4[(uint)bVar9 * -2 + 6] = local_23c[(uint)bVar9 * -2];
    local_d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         local_23c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_b4 = fVar12;
    local_b0 = local_23c[0];
    local_ac = local_23c[1];
    local_54.x = fVar12;
    *(float *)((int)&local_54 + (uint)bVar9 * -8 + 4) = local_d4[(uint)bVar9 * -2 + 9];
    *(float *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_54,&local_90);
    local_120[3] = local_90.x;
    local_120[(uint)bVar9 * -2 + 4] = *(float *)((int)&local_90 + (uint)bVar9 * -8 + 4);
    local_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5] =
         *(float *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_28 = SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc);
    if (local_28 < 2.7f) {
      dVar11 = acos((double)(local_28 / 2.7f));
      local_34 = (float)dVar11;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_34,&CStack_33c);
      CStack_38c.w = CStack_33c.w;
      puVar7 = (uint *)((int)&CStack_38c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar6 = (uint *)((int)&CStack_33c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&CStack_38c + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_33c + (uint)bVar9 * -8 + 4);
      *puVar7 = *puVar6;
      puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
      local_1c = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_1c,&CStack_38c,(float)local_2028,g_INT_ARRAY_02c83600[4],
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_34,&CStack_32c);
      pCVar1 = local_1c;
      CStack_35c.w = CStack_32c.w;
      puVar7 = (uint *)((int)&CStack_35c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar6 = (uint *)((int)&CStack_32c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&CStack_35c + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_32c + (uint)bVar9 * -8 + 4);
      *puVar7 = *puVar6;
      puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar1,&CStack_35c,(float)local_2028,g_INT_ARRAY_02c83600[6],
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_120[2],&CStack_4dc);
    pCVar1 = &(this_ptr->base).base.model;
    local_4a8._12_4_ = CStack_4dc.w;
    pfVar5 = (float *)((int)&CStack_4dc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_498[(uint)bVar9 * -2] = *(float *)((int)&CStack_4dc + (uint)bVar9 * -8 + 4);
    local_498[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = *pfVar5;
    (local_498 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         pfVar5[(uint)bVar9 * -2 + 1];
    local_1c = pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar1,(CQuaternion4f *)(local_4a8 + 0xc),(float)local_2028,g_INT_ARRAY_02c83600[4],
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_120[3],&CStack_42c);
    CStack_4cc.w = CStack_42c.w;
    puVar7 = (uint *)((int)&CStack_4cc + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4 + 4);
    puVar6 = (uint *)((int)&CStack_42c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_4cc + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_42c + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    this_ptr_02 = local_1c;
    rotation_quat = &CStack_4cc;
    local_2034 = (float *)g_INT_ARRAY_02c83600[4];
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  }
  else if (iVar13 == 0x22) {
    local_2038 = (local_1c->base).current_frame_number * (float)0.066666666666666693;
    if (1.0 < local_2038) {
      local_2038 = 1.0;
    }
    fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_3c = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_3c,(CQuaternion4f *)local_468);
    pCVar1 = &(this_ptr->base).base.model;
    local_2f8._0_4_ = local_468._0_4_;
    *(uint *)(local_2f8 + (uint)bVar9 * -8 + 4) =
         *(uint *)(local_468 + (uint)bVar9 * -8 + 4);
    *(uint *)(local_2f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)(local_468 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)
     ((int)(local_2f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_468 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4);
    this_ptr_02 = (CDeformableModelInstance *)0x5898dd;
    local_18 = (CQuaternion4f *)pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar1,(CQuaternion4f *)local_2f8,local_2038,g_INT_ARRAY_02c83600[4],
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_3c,(CQuaternion4f *)local_518);
    local_2028 = (float *)local_2f8;
    local_2f8._0_4_ = local_518._0_4_;
    *(uint *)(local_2f8 + (uint)bVar9 * -8 + 4) =
         *(uint *)(local_518 + (uint)bVar9 * -8 + 4);
    *(uint *)(local_2f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)(local_518 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)
     ((int)(local_2f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_518 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4);
    rotation_quat = local_18;
    local_2034 = (float *)local_2038;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_ARRAY_02c83600[3];
  }
  else if (iVar13 == 0x23) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (&(this_ptr->base).base.model,g_INT_ARRAY_02c83600[4],&local_60);
    local_228 = local_60.x;
    local_23c[(uint)bVar9 * -2 + 6] = *(float *)((int)&local_60 + (uint)bVar9 * -8 + 4);
    local_23c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         *(float *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_24 = ((this_ptr->carry_object_world_center).y + (this_ptr->carry_object_bbox).max.y) -
               (this_ptr->carry_object_bbox).min.y;
    pCVar2 = (this_ptr->base).object_to_pick_up;
    if (pCVar2 != (CDemonActor *)0x0) {
      g_FLOAT_02c83698 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00585170(pCVar2);
      local_18 = (CQuaternion4f *)g_FLOAT_02c83698;
    }
    local_24 = local_24 - g_FLOAT_02c83698;
    fVar10 = atan2
                       ((float10)local_224 - (float10)local_24,(float10)2.7f);
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0((float)fVar10,&CStack_39c);
    pCVar1 = &(this_ptr->base).base.model;
    CStack_48c.w = CStack_39c.w;
    puVar7 = (uint *)((int)&CStack_48c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar6 = (uint *)((int)&CStack_39c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_48c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_39c + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    local_1c = pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar1,&CStack_48c,(float)local_2050,g_INT_ARRAY_02c83600[4],
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_1c,&CStack_48c,(float)local_2050,g_INT_ARRAY_02c83600[3],
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_38 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_38,&CStack_4bc);
    pCVar1 = local_1c;
    CStack_41c.w = CStack_4bc.w;
    puVar7 = (uint *)((int)&CStack_41c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar6 = (uint *)((int)&CStack_4bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_41c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_4bc + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar1,&CStack_41c,(float)local_2050,g_INT_ARRAY_02c83600[4],
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_38,&CStack_3dc);
    CStack_41c.w = CStack_3dc.w;
    puVar7 = (uint *)((int)&CStack_41c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar6 = (uint *)((int)&CStack_3dc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_41c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_3dc + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    this_ptr_02 = local_1c;
    rotation_quat = &CStack_41c;
    local_2028 = local_2050;
    local_2034 = (float *)g_INT_ARRAY_02c83600[3];
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  }
  else if (iVar13 == 0x24) {
    local_2010 = 1.0 - ((local_1c->base).current_frame_number + (float)-15) *
                       (float)0.066666666666666693;
    if (local_2010 < 0.0) {
      local_2010 = 0.0;
    }
    if (1.0 < local_2010) {
      local_2010 = 1.0;
    }
    fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_38 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_38,(CQuaternion4f *)local_378);
    pCVar1 = &(this_ptr->base).base.model;
    local_408._0_4_ = local_378._0_4_;
    *(uint *)(local_408 + (uint)bVar9 * -8 + 4) =
         *(uint *)(local_378 + (uint)bVar9 * -8 + 4);
    *(uint *)(local_408 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)(local_378 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)
     ((int)(local_408 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_378 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4);
    this_ptr_02 = (CDeformableModelInstance *)0x589c53;
    local_18 = (CQuaternion4f *)pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar1,(CQuaternion4f *)local_408,local_2010,g_INT_ARRAY_02c83600[4],
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_38,&local_2d8);
    local_408._0_4_ = local_2d8.w;
    *(float *)(local_408 + (uint)bVar9 * -8 + 4) = afStack_2c8[(uint)bVar9 * -2 + -3];
    *(float *)(local_408 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_2c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -2];
    *(float *)((int)(local_408 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) +
              ((uint)bVar9 * -2 + 1) * 4) =
         (afStack_2c8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + -2)[(uint)bVar9 * -2 + 1];
    local_2028 = (float *)local_408;
    rotation_quat = local_18;
    local_2034 = (float *)local_2010;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_ARRAY_02c83600[3];
  }
  else {
    if (iVar13 != 0x25) goto LAB_00588d7e;
    local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              ((CDeformableModelInstance *)local_18,g_INT_ARRAY_02c83600[4],(CVector3f *)local_204);
    local_138 = (float)local_204._0_4_;
    local_134[(uint)bVar9 * -2] = *(float *)(local_204 + (uint)bVar9 * -8 + 4);
    local_134[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_1f8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -1];
    fVar10 = atan2
                       ((float10)local_134[0] - (float10)(this_ptr->carry_object_world_center).y,
                        (float10)2.7f);
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0((float)fVar10,&CStack_3ec);
    local_408._12_4_ = CStack_3ec.w;
    pfVar5 = (float *)((int)&CStack_3ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_3f8[(uint)bVar9 * -2] = *(float *)((int)&CStack_3ec + (uint)bVar9 * -8 + 4);
    pCVar1 = local_1c;
    local_3f8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = *pfVar5;
    (local_3f8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         pfVar5[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_1c,(CQuaternion4f *)(local_408 + 0xc),(float)local_2040,g_INT_ARRAY_02c83600[4]
               ,core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar1,(CQuaternion4f *)(local_408 + 0xc),(float)local_2040,g_INT_ARRAY_02c83600[3],
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    fStack_44 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(fStack_44,(CQuaternion4f *)(local_518 + 0xc));
    pCVar1 = local_1c;
    local_4f8._12_4_ = local_518._12_4_;
    local_4e8[(uint)bVar9 * -2] = local_508[(uint)bVar9 * -2];
    local_4e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_508[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (local_4e8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (local_508 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar1,(CQuaternion4f *)(local_4f8 + 0xc),(float)local_2040,g_INT_ARRAY_02c83600[4],
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-fStack_44,&CStack_43c);
    local_4f8._12_4_ = CStack_43c.w;
    pfVar5 = (float *)((int)&CStack_43c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_4e8[(uint)bVar9 * -2] = *(float *)((int)&CStack_43c + (uint)bVar9 * -8 + 4);
    local_4e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = *pfVar5;
    (local_4e8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         pfVar5[(uint)bVar9 * -2 + 1];
    this_ptr_02 = local_1c;
    rotation_quat = (CQuaternion4f *)(local_4f8 + 0xc);
    local_2028 = local_2040;
    local_2034 = (float *)g_INT_ARRAY_02c83600[3];
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (this_ptr_02,rotation_quat,(float)local_2028,(int)local_2034,blend_callback);
LAB_00588d7e:
  if (g_CGamePtr->goggles_active != 0) {
    local_9c = 0;
    local_98 = 0;
    local_a8._8_4_ = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      local_a8._8_4_ = (this_ptr->right_arm_aim).target_pitch;
    }
    blend_callback_00 = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
    fVar12 = 1.0;
    iVar13 = g_INT_ARRAY_02c83600[0];
    core_xform_cpp_eulerToQuaternion_FUN_005b7ed0
              ((CVector3f *)(local_a8 + 8),(CQuaternion4f *)(local_3b8 + 0xc));
    CStack_44c.w = (float)local_3b8._12_4_;
    pfVar5 = (float *)((int)&CStack_44c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&CStack_44c + (uint)bVar9 * -8 + 4) = local_3a8[(uint)bVar9 * -2];
    *pfVar5 = local_3a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar5[(uint)bVar9 * -2 + 1] =
         (local_3a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (&(this_ptr->base).base.model,&CStack_44c,fVar12,iVar13,blend_callback_00);
  }
  if (this_ptr->interact_blend <= 0.0) {
    return;
  }
  iVar13 = 1;
  motion_name = "draw_holsters2aimPistols";
  pCVar1 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar1);
  iVar13 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                     (&this_ptr_01->motion_list,motion_name,iVar13);
  local_30 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                       (&pCVar1->base,iVar13,1.0);
  local_1c = (CDeformableModelInstance *)local_30;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
            (pCVar1,iVar13,local_30,this_ptr->interact_blend,g_INT_ARRAY_02c83600[0x10],
             core_skeleton_cpp_blendWeightCallback_FUN_00567360);
  return;
}
