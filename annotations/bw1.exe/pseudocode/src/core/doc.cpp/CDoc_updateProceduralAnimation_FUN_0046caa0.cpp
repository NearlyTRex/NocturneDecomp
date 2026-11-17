// Name: core_doc.cpp_CDoc_updateProceduralAnimation_FUN_0046caa0
// Address: 0046caa0
// Address Range: [[0046caa0, 0046e62f]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_updateProceduralAnimation_FUN_0046caa0(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_updateProceduralAnimation_FUN_0046caa0(CDoc *this_ptr)

{
  CDoor *pCVar1;
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
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *blend_weight;
  float fVar13;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  char *motion_name;
  code *blend_callback_00;
  int iVar14;
  CBoundingBox3D *this_ptr_03;
  float local_2268;
  float local_2264;
  float local_2260;
  CDeformableModelInstance *local_2258;
  float local_2254;
  float local_2250;
  CQuaternion4f *local_2248;
  float local_223c;
  byte local_221c [6856];
  float afStack_754 [6];
  float fStack_73c;
  float fStack_738;
  float fStack_734;
  float fStack_730;
  byte auStack_72c [16];
  float afStack_71c [3];
  CQuaternion4f CStack_710;
  CQuaternion4f CStack_6fc;
  byte auStack_6ec [16];
  uint auStack_6dc [4];
  CQuaternion4f CStack_6cc;
  CQuaternion4f CStack_6bc;
  CQuaternion4f CStack_6ac;
  byte auStack_69c [16];
  uint auStack_68c [4];
  CQuaternion4f CStack_67c;
  CQuaternion4f CStack_66c;
  CQuaternion4f CStack_65c;
  byte auStack_64c [16];
  CMotionList *apCStack_63c [3];
  CQuaternion4f CStack_630;
  CQuaternion4f CStack_61c;
  CQuaternion4f CStack_60c;
  CQuaternion4f CStack_5fc;
  byte auStack_5ec [16];
  CMotionList *apCStack_5dc [3];
  CQuaternion4f CStack_5d0;
  CQuaternion4f CStack_5bc;
  CQuaternion4f CStack_5ac;
  CQuaternion4f CStack_59c;
  CQuaternion4f CStack_58c;
  CQuaternion4f CStack_57c;
  CQuaternion4f CStack_56c;
  CQuaternion4f CStack_55c;
  byte auStack_54c [16];
  uint auStack_53c [4];
  CQuaternion4f CStack_52c;
  CQuaternion4f CStack_51c;
  byte auStack_50c [16];
  float afStack_4fc [3];
  CQuaternion4f CStack_4f0;
  CQuaternion4f CStack_4e0;
  CQuaternion4f CStack_4d0;
  byte auStack_4bc [16];
  uint auStack_4ac [4];
  CQuaternion4f CStack_49c;
  CQuaternion4f CStack_48c;
  CQuaternion4f CStack_47c;
  CQuaternion4f CStack_46c;
  CQuaternion4f CStack_45c;
  float fStack_44c;
  float local_448 [2];
  CVector3f local_440;
  float fStack_434;
  float local_430;
  float local_42c;
  CVector3f CStack_428;
  CVector3f CStack_41c;
  CVector3f CStack_410;
  float fStack_404;
  float local_400 [4];
  float local_3f0;
  CVector3f local_3e8;
  float afStack_3dc [5];
  CVector3f CStack_3c8;
  float local_3b8;
  float local_3b4 [2];
  byte local_3ac [12];
  float local_3a0 [2];
  CVector3f CStack_398;
  CVector3f CStack_38c;
  CVector3f CStack_380;
  float fStack_374;
  float local_370 [4];
  float local_360;
  float local_35c;
  float local_358;
  float fStack_350;
  float local_34c;
  float fStack_348;
  float fStack_344;
  float local_340;
  float local_33c;
  CVector3f local_338;
  CVector3f CStack_32c;
  CVector3f CStack_320;
  CVector3f CStack_314;
  float local_304;
  float local_300;
  float local_2fc [4];
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  CVector3f local_2d4;
  byte local_2c8 [12];
  float local_2bc;
  float local_2b8;
  CVector3f local_2b0;
  float local_2a4 [2];
  CVector3f local_29c;
  float fStack_290;
  float local_28c [4];
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  CVector3f CStack_26c;
  CVector3f CStack_260;
  float local_250;
  float local_24c;
  CVector3f local_248;
  CVector3f local_23c;
  float fStack_230;
  float afStack_22c [2];
  CVector3f CStack_224;
  float local_214;
  float local_210;
  CVector3f local_20c;
  float fStack_200;
  float local_1fc [2];
  CVector3f local_1f4;
  CVector3f CStack_1e8;
  float fStack_1dc;
  float local_1d8 [2];
  CVector3f local_1d0;
  CBoundingBox3D local_1c0;
  float fStack_1a4;
  float afStack_1a0 [5];
  float fStack_18c;
  CVector3f CStack_188;
  CVector3f local_178;
  float local_16c [5];
  CVector3f CStack_158;
  float local_148;
  float local_144 [2];
  CVector3f local_13c;
  float local_130;
  float local_12c [4];
  float fStack_11c;
  float local_118;
  CVector3f CStack_110;
  float fStack_104;
  float local_100 [4];
  float local_f0;
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float local_d0;
  float local_cc [4];
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f local_98;
  float local_88;
  float local_84 [4];
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_64;
  float fStack_58;
  float fStack_54;
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  float local_34;
  CDeformableModelInstance *local_2c;
  CVector3f *local_28;
  float local_24;
  CDeformableModelInstance *local_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  
  bVar9 = 0;
  local_18 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&(this_ptr->base).base.model.base,0);
  local_2258 = local_18;
  if ((int)this_ptr->turn_blend_weight < 0x3e19999a) {
    local_2258 = (CDeformableModelInstance *)
                 ((this_ptr->turn_blend_weight / 0.15f) * (float)local_18);
  }
  if (0.85 < this_ptr->turn_blend_weight) {
    local_2258 = (CDeformableModelInstance *)
                 (((1.0 - this_ptr->turn_blend_weight) / 0.15) * (float)local_2258);
  }
  pCVar12 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar12);
  if ((0.0 < (float)local_2258) && (-1 < this_ptr->turn_motion_index)) {
    core_doc_cpp_CDoc_extractTurnPose_FUN_0046e630(this_ptr,(SPose *)local_221c);
    local_221c._0_4_ = 0.0;
    local_221c._8_4_ = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830
              (pCVar12,(SPoseData *)local_221c,(float)local_2258,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
  }
  core_doc_cpp_CDoc_makeDrawDecision_FUN_0046ea80(this_ptr);
  this_ptr_03 = (CBoundingBox3D *)&(this_ptr->base).base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr_03);
  local_20 = (CDeformableModelInstance *)pSVar4->state_index;
  if (((local_20 == (CDeformableModelInstance *)0x23) ||
      (local_20 == (CDeformableModelInstance *)0x22)) ||
     (local_20 == (CDeformableModelInstance *)0x1f)) {
    local_2c = (CDeformableModelInstance *)&this_ptr->carry_object_world_center;
    pCVar1 = (this_ptr->base).door_to_open;
    if (pCVar1 == (CDoor *)0x0) {
      core_door_cpp_CDoor_getHandlePosition_FUN_004783d0
                (g_CDoor_PTR_01b687e0,(CVector3f *)local_3ac);
      local_2c8._0_4_ = local_3ac._0_4_;
      *(uint *)(local_2c8 + (uint)bVar9 * -8 + 4) =
           *(uint *)(local_3ac + (uint)bVar9 * -8 + 4);
      *(float *)(local_2c8 + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4 + 8) =
           local_3a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -1];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,(CVector3f *)local_2c8,&local_2b0);
      local_3b8 = local_2b0.x;
      local_3b4[(uint)bVar9 * -2] = local_2a4[(uint)bVar9 * -2 + -2];
      local_3b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           local_2a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -1];
      if ((CDeformableModelInstance *)&local_3b8 != local_2c) {
        *(float *)&local_2c->base = local_3b8;
        *(float *)((int)local_2c + 4) = local_3b4[0];
        *(float *)((int)local_2c + 8) = local_3b4[1];
      }
    }
    else {
      core_door_cpp_CDoor_getHandlePosition_FUN_004783d0(pCVar1,&local_3e8);
      local_13c.x = local_3e8.x;
      *(float *)((int)&local_13c + (uint)bVar9 * -8 + 4) = afStack_3dc[(uint)bVar9 * -2 + -2];
      *(float *)((int)&local_13c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_3dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -1];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&local_13c,&local_2d4);
      pCVar12 = local_2c;
      local_304 = local_2d4.x;
      local_2fc[(uint)bVar9 * -2 + -1] = *(float *)(local_2c8 + (uint)bVar9 * -8 + -8);
      local_2fc[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
           *(float *)(local_2c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -4);
      if ((CDeformableModelInstance *)&local_304 != pCVar12) {
        *(float *)&pCVar12->base = local_304;
        *(float *)((int)pCVar12 + 4) = local_300;
        *(float *)((int)pCVar12 + 8) = local_2fc[0];
      }
      g_CDoor_PTR_01b687e0 = (this_ptr->base).door_to_open;
    }
    pCVar12 = &(this_ptr->base).base.model;
    pfVar5 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x20070);
    local_130 = (this_ptr->carry_object_world_center).x;
    local_18 = pCVar12;
    local_12c[(uint)bVar9 * -2] = *pfVar5;
    local_12c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = pfVar5[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar12,g_INT_01b68820,&local_178);
    fVar13 = local_130;
    local_88 = local_178.x;
    local_84[(uint)bVar9 * -2] = local_16c[(uint)bVar9 * -2 + -2];
    local_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -1];
    fVar13 = fVar13 - local_88;
    local_148 = fVar13;
    local_144[0] = local_12c[0] - local_84[0];
    local_144[1] = local_12c[1] - local_84[1];
    local_250 = fVar13;
    (&local_24c)[(uint)bVar9 * -2] = local_144[(uint)bVar9 * -2];
    *(float *)((int)&local_248 + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4) =
         local_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_214 = fVar13;
    local_210 = local_144[0];
    local_20c.x = local_144[1];
    this_ptr_03 = &local_1c0;
    local_1c0.min.x = fVar13;
    *(float *)((int)&local_1c0 + (uint)bVar9 * -8 + 4) = (&local_210)[(uint)bVar9 * -2];
    *(uint *)((int)&local_1c0 + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4 + 8) =
         *(uint *)((int)&local_20c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&this_ptr_03->min,&local_64);
    local_430 = local_64.x;
    (&local_42c)[(uint)bVar9 * -2] = *(float *)((int)&local_64 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_428 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&local_64 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_3c = SQRT(local_248.x * local_248.x + local_250 * local_250 + local_24c * local_24c);
    if (local_3c < 2.7f) {
      this_ptr_03 = (CBoundingBox3D *)0x46cdd0;
      dVar11 = acos((double)(local_3c / 2.7f));
      local_4c = (float)dVar11;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_4c,&CStack_55c);
      pCVar12 = &(this_ptr->base).base.model;
      CStack_66c.w = CStack_55c.w;
      puVar6 = (uint *)((int)&CStack_66c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&CStack_66c + (uint)bVar9 * -8 + 4) =
           *(uint *)(auStack_54c + (uint)bVar9 * -8 + -0xc);
      *puVar6 = *(uint *)(auStack_54c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8);
      puVar6[(uint)bVar9 * -2 + 1] =
           *(uint *)
            ((int)(auStack_54c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) +
            ((uint)bVar9 * -2 + 1) * 4);
      local_1c = pCVar12;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar12,&CStack_66c,local_2264,g_INT_01b68820,
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_4c,&CStack_49c);
      CStack_65c.w = CStack_49c.w;
      puVar6 = (uint *)((int)&CStack_49c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)(auStack_64c + (uint)bVar9 * -8 + -0xc) =
           *(uint *)((int)&CStack_49c + (uint)bVar9 * -8 + 4);
      *(uint *)(auStack_64c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) = *puVar6;
      *(uint *)
       ((int)(auStack_64c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4)
           = puVar6[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_1c,&CStack_65c,local_2264,g_INT_01b68828,
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fStack_434,&CStack_57c);
    pCVar12 = &(this_ptr->base).base.model;
    CStack_51c.w = CStack_57c.w;
    puVar6 = (uint *)((int)&CStack_57c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)(auStack_50c + (uint)bVar9 * -8 + -0xc) =
         *(uint *)((int)&CStack_57c + (uint)bVar9 * -8 + 4);
    *(uint *)(auStack_50c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) = *puVar6;
    *(uint *)
     ((int)(auStack_50c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4) =
         puVar6[(uint)bVar9 * -2 + 1];
    local_1c = pCVar12;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar12,&CStack_51c,local_2264,g_INT_01b68820,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_430,&CStack_5bc);
    CStack_48c.w = CStack_5bc.w;
    puVar7 = (uint *)((int)&CStack_48c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar6 = (uint *)((int)&CStack_5bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_48c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_5bc + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_1c,&CStack_48c,local_2264,g_INT_01b68820,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    pCVar1 = (this_ptr->base).door_to_open;
    if (pCVar1 != (CDoor *)0x0) {
      pfVar5 = (float *)((int)pCVar1 + (uint)bVar9 * -8 + 0x9c0);
      local_400[2] = (pCVar1->open_position).x;
      local_400[(uint)bVar9 * -2 + 3] = *pfVar5;
      local_400[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] = pfVar5[(uint)bVar9 * -2 + 1];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (&pCVar1->base,&(this_ptr->base).base.base.location.position,&CStack_188);
      local_28c[2] = CStack_188.x;
      local_28c[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_188 + (uint)bVar9 * -8 + 4);
      local_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           *(float *)((int)&CStack_188 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      this_ptr->door_align_timer = 0.5;
      if (fStack_27c < 0.0) {
        fVar13 = (float)((this_ptr->base).door_to_open)->door_swing;
        if (fVar13 == 0.0) {
          local_2b8 = -2.0;
          local_2c8._8_4_ = fVar13;
          local_2bc = fVar13;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (&((this_ptr->base).door_to_open)->base,(CVector3f *)(local_2c8 + 8),&CStack_398
                    );
          local_370[2] = CStack_398.x;
          local_370[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_398 + (uint)bVar9 * -8 + 4);
          local_370[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               *(float *)((int)&CStack_398 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          local_400[2] = local_400[2] + local_370[2];
          local_400[3] = local_400[3] + local_370[3];
          local_3f0 = local_3f0 + local_360;
        }
        if (((this_ptr->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          this_ptr->door_align_timer = 0.0;
        }
      }
      if (0.0 < fStack_27c) {
        if (((this_ptr->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          local_248.x = 0.0;
          local_248.z = 2.0;
          local_248.y = 0.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (&((this_ptr->base).door_to_open)->base,&local_248,&CStack_bc);
          local_84[1] = CStack_bc.x;
          local_84[(uint)bVar9 * -2 + 2] = *(float *)((int)&CStack_bc + (uint)bVar9 * -8 + 4);
          local_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3] =
               *(float *)((int)&CStack_bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          local_400[2] = local_400[2] + local_84[1];
          local_400[3] = local_400[3] + local_84[2];
          local_3f0 = local_3f0 + local_84[3];
        }
        if (((this_ptr->base).door_to_open)->door_swing == DOOR_SWING_CLOCKWISE) {
          this_ptr->door_align_timer = 0.0;
        }
      }
      afStack_1a0[0] = local_400[2] - (this_ptr->base).base.base.location.position.x;
      afStack_1a0[1] = local_400[3] - (this_ptr->base).base.base.location.position.y;
      afStack_1a0[2] = local_3f0 - (this_ptr->base).base.base.location.position.z;
      fStack_44c = afStack_1a0[0];
      local_448[(uint)bVar9 * -2] = afStack_1a0[(uint)bVar9 * -2 + 1];
      local_448[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_1a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 2];
      if (&this_ptr->door_align_offset != (CVector3f *)&fStack_44c) {
        (this_ptr->door_align_offset).x = fStack_44c;
        (this_ptr->door_align_offset).y = local_448[0];
        (this_ptr->door_align_offset).z = local_448[1];
      }
      pCVar1 = (this_ptr->base).door_to_open;
      (this_ptr->door_align_offset).y = 0.0;
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&pCVar1->open_position,&CStack_380);
      CStack_224.x = CStack_380.x;
      *(uint *)((int)&CStack_224 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_380 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&CStack_224 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_380 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_224,&CStack_38c);
      local_35c = CStack_38c.x;
      local_370[(uint)bVar9 * -2 + 6] = *(float *)((int)&CStack_38c + (uint)bVar9 * -8 + 4);
      local_370[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           *(float *)((int)&CStack_38c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      this_ptr->door_align_yaw = (this_ptr->base).base.base.orient.vec.y + local_358;
    }
  }
  pCVar12 = &(this_ptr->base).base.model;
  local_2c = pCVar12;
  if (local_24 == 3.36312e-44) {
    pfVar5 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x20070);
    fStack_344 = (this_ptr->carry_object_world_center).x;
    local_370[(uint)bVar9 * -2 + 0xc] = *pfVar5;
    local_370[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] = pfVar5[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar12,g_INT_01b68824,(CVector3f *)(local_3ac + 8));
    fVar13 = fStack_344;
    fStack_200 = (float)local_3ac._8_4_;
    local_1fc[(uint)bVar9 * -2] = local_3a0[(uint)bVar9 * -2];
    local_1fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_3a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_74 = fVar13 - fStack_200;
    local_70 = local_340 - local_1fc[0];
    local_6c = local_33c - local_1fc[1];
    CStack_3c8.x = fVar13 - fStack_200;
    *(float *)((int)&CStack_3c8 + (uint)bVar9 * -8 + 4) = local_84[(uint)bVar9 * -2 + 5];
    *(float *)((int)&CStack_3c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 6];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_3c8,&CStack_b0);
    pCVar12 = local_2c;
    fStack_104 = CStack_b0.x;
    local_100[(uint)bVar9 * -2] = *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4);
    local_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fVar13 = (pCVar12->base).current_frame_number;
    if ((float)13 <= fVar13) {
      local_223c = 1.0 - (fVar13 + (float)-13) * (float)0.0769230769230769;
      if (local_223c < 0.0) {
        local_223c = 0.0;
      }
    }
    else {
      local_223c = fVar13 * (float)0.0769230769230769;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fStack_104,(CQuaternion4f *)auStack_54c);
    pCVar12 = &(this_ptr->base).base.model;
    CStack_6fc.w = (float)auStack_54c._0_4_;
    *(uint *)(auStack_6ec + (uint)bVar9 * -8 + -0xc) =
         *(uint *)(auStack_54c + (uint)bVar9 * -8 + 4);
    *(uint *)(auStack_6ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) =
         *(uint *)(auStack_54c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)
     ((int)(auStack_6ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_54c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4
          );
    this_ptr_02 = (CDeformableModelInstance *)0x46d370;
    local_1c = pCVar12;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar12,&CStack_6fc,local_223c,g_INT_01b68858,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_100[0],&CStack_52c);
    CStack_6bc.w = CStack_52c.w;
    puVar7 = (uint *)((int)&CStack_6bc + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4 + 4);
    puVar6 = (uint *)((int)&CStack_52c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_6bc + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_52c + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    pCVar12 = local_1c;
    blend_weight = &CStack_6bc;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_01b68824;
  }
  else if (local_24 == 3.08286e-44) {
    pfVar5 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x20070);
    fStack_290 = (this_ptr->carry_object_world_center).x;
    local_28c[(uint)bVar9 * -2] = *pfVar5;
    local_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = pfVar5[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar12,g_INT_01b68824,&CStack_32c);
    fVar13 = fStack_290;
    local_2fc[3] = CStack_32c.x;
    local_2fc[(uint)bVar9 * -2 + 4] = *(float *)((int)&CStack_32c + (uint)bVar9 * -8 + 4);
    local_2fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5] =
         *(float *)((int)&CStack_32c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fStack_d4 = fVar13 - local_2fc[3];
    local_d0 = local_28c[0] - local_2ec;
    local_cc[0] = local_28c[1] - local_2e8;
    CStack_158.x = fVar13 - local_2fc[3];
    *(float *)((int)&CStack_158 + (uint)bVar9 * -8 + 4) = local_cc[(uint)bVar9 * -2 + -1];
    *(float *)((int)&CStack_158 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_158,&CStack_410);
    pCVar12 = local_2c;
    local_16c[2] = CStack_410.x;
    local_16c[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_410 + (uint)bVar9 * -8 + 4);
    local_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         *(float *)((int)&CStack_410 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_2250 = (pCVar12->base).current_frame_number;
    if ((float)24 <= local_2250) {
      local_2250 = 1.0 - (local_2250 + (float)-24) * (float)0.10000000000000001;
      if (local_2250 < 0.0) {
        local_2250 = 0.0;
      }
    }
    else {
      local_2250 = local_2250 * (float)0.041666666666666699;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(-local_16c[2],&CStack_67c);
    pCVar12 = &(this_ptr->base).base.model;
    CStack_47c.w = CStack_67c.w;
    puVar7 = (uint *)((int)&CStack_47c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar6 = (uint *)((int)&CStack_67c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_47c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_67c + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    this_ptr_02 = (CDeformableModelInstance *)0x46da89;
    local_1c = pCVar12;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar12,&CStack_47c,local_2250,g_INT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_16c[3],(CQuaternion4f *)auStack_64c);
    blend_weight = &CStack_59c;
    CStack_59c.w = (float)auStack_64c._0_4_;
    puVar6 = (uint *)((int)&CStack_59c + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4 + 4);
    *(uint *)((int)&CStack_59c + (uint)bVar9 * -8 + 4) =
         *(uint *)(auStack_64c + (uint)bVar9 * -8 + 4);
    *puVar6 = *(uint *)(auStack_64c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar6[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(auStack_64c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4
          );
    pCVar12 = local_1c;
    local_223c = local_2250;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_01b68824;
  }
  else if (local_24 == 3.50325e-44) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              ((CMatrix3x3f *)(local_221c + 0x1a98),&(this_ptr->base).target_orientation.vec);
    if ((g_BYTE_01b687f4 & 1) == 0) {
      g_BYTE_01b687f4 = g_BYTE_01b687f4 | 1;
    }
    pCVar2 = (this_ptr->base).target_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,this_ptr_03);
      pfVar5 = afStack_754;
      pfVar8 = &fStack_73c;
      for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
        *pfVar8 = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
        pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
      }
      local_cc[3] = fStack_73c + fStack_730;
      CStack_bc.x = fStack_738 + (float)auStack_72c._0_4_;
      CStack_bc.y = fStack_734 + (float)auStack_72c._4_4_;
      fStack_1a4 = fStack_73c + fStack_730;
      afStack_1a0[(uint)bVar9 * -2] = *(float *)((int)&CStack_bc + (uint)bVar9 * -8);
      afStack_1a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)&CStack_bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 4);
      fStack_18c = fStack_1a4 * 0.5f;
      CStack_188.x = afStack_1a0[0] * 0.5f;
      CStack_188.y = afStack_1a0[1] * 0.5f;
      local_2fc[2] = fStack_1a4 * 0.5f;
      local_2fc[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_188 + (uint)bVar9 * -8);
      local_2fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           *(float *)((int)&CStack_188 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 4);
      if ((int *)&stack0x00000000 != &g_SMRGLPrimitiveQuad_ARRAY_01b68944[5].vertices[1].texture_v)
      {
        g_CVector3f_01b687e4.x = local_2fc[2];
        g_CVector3f_01b687e4.y = local_2fc[3];
        g_CVector3f_01b687e4.z = local_2ec;
      }
    }
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              ((CMatrix3x3f *)(local_221c + 0x1a98),&g_CVector3f_01b687e4,&local_1d0);
    fStack_350 = local_1d0.x;
    local_370[(uint)bVar9 * -2 + 9] = *(float *)((int)&local_1d0 + (uint)bVar9 * -8 + 4);
    local_370[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         *(float *)((int)&local_1d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_1c0.min.z = (this_ptr->base).target_position.x + fStack_350;
    local_1c0.max.x = (this_ptr->base).target_position.y + local_34c;
    local_1c0.max.y = (this_ptr->base).target_position.z + fStack_348;
    local_29c.x = local_1c0.min.z;
    *(uint *)((int)&local_29c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_1c0 + ((uint)bVar9 * -2 + -1) * 4 + 0x10);
    *(uint *)((int)&local_29c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&local_1c0 + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4 + 0x10);
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
              ((CDemonActor *)this_ptr,&local_29c,&local_98);
    local_278 = local_98.x;
    local_28c[(uint)bVar9 * -2 + 6] = *(float *)((int)&local_98 + (uint)bVar9 * -8 + 4);
    local_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         *(float *)((int)&local_98 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_1c = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (local_1c,g_INT_01b68824,&CStack_1e8);
    fVar13 = local_278;
    fStack_230 = CStack_1e8.x;
    afStack_22c[(uint)bVar9 * -2] = *(float *)((int)&CStack_1e8 + (uint)bVar9 * -8 + 4);
    afStack_22c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&CStack_1e8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_ec = fVar13 - fStack_230;
    fStack_e8 = fStack_274 - afStack_22c[0];
    fStack_e4 = fStack_270 - afStack_22c[1];
    CStack_320.x = fVar13 - fStack_230;
    *(float *)((int)&CStack_320 + (uint)bVar9 * -8 + 4) = local_100[(uint)bVar9 * -2 + 6];
    *(float *)((int)&CStack_320 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_320,&CStack_314);
    pCVar12 = local_1c;
    local_3e8.z = CStack_314.x;
    afStack_3dc[(uint)bVar9 * -2] = *(float *)((int)&CStack_314 + (uint)bVar9 * -8 + 4);
    afStack_3dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&CStack_314 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fVar13 = (pCVar12->base).current_frame_number;
    if ((float)21 <= fVar13) {
      local_2248 = (CQuaternion4f *)
                   (1.0 - (fVar13 + (float)-21) * (float)0.071428571428571397);
      if ((float)local_2248 < 0.0) {
        local_2248 = (CQuaternion4f *)0x0;
      }
    }
    else {
      local_2248 = (CQuaternion4f *)(fVar13 * (float)0.047619047619047603);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_3e8.z,&CStack_5ac);
    auStack_5ec._0_4_ = CStack_5ac.w;
    puVar6 = (uint *)((int)&CStack_5ac + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)(auStack_5ec + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_5ac + (uint)bVar9 * -8 + 4);
    *(uint *)(auStack_5ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) = *puVar6;
    *(uint *)
     ((int)(auStack_5ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4) =
         puVar6[(uint)bVar9 * -2 + 1];
    pCVar12 = &(this_ptr->base).base.model;
    local_1c = pCVar12;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar12,(CQuaternion4f *)auStack_5ec,(float)local_2248,g_INT_01b68858,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(afStack_3dc[0],&CStack_45c);
    this_ptr_02 = local_1c;
    blend_weight = &CStack_61c;
    CStack_61c.w = CStack_45c.w;
    puVar7 = (uint *)((int)&CStack_61c + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4 + 4);
    puVar6 = (uint *)((int)&CStack_45c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_61c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_45c + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    local_223c = (float)local_2248;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_01b68824;
  }
  else if (local_24 == 5.04467e-44) {
    local_28 = &this_ptr->carry_object_world_center;
    this_ptr_00 = (this_ptr->base).lever_to_pull;
    if (this_ptr_00 == (CLever *)0x0) {
      core_lever_cpp_CLever_getHandlePosition_FUN_004ff6b0(g_CLever_PTR_01b687f0,&local_1f4);
      CStack_428.x = local_1f4.x;
      *(uint *)((int)&CStack_428 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_1f4 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&CStack_428 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&local_1f4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&CStack_428,&CStack_260);
      local_2b0.z = CStack_260.x;
      local_2a4[(uint)bVar9 * -2] = *(float *)((int)&CStack_260 + (uint)bVar9 * -8 + 4);
      local_2a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)&CStack_260 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if ((CVector3f *)&local_2b0.z != local_28) {
        local_28->x = local_2b0.z;
        local_28->y = local_2a4[0];
        local_28->z = local_2a4[1];
      }
    }
    else {
      core_lever_cpp_CLever_getHandlePosition_FUN_004ff6b0(this_ptr_00,&CStack_110);
      local_20c.x = CStack_110.x;
      *(uint *)((int)&local_20c + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_110 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&local_20c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_110 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&local_20c,&local_23c);
      pCVar3 = local_28;
      fStack_404 = local_23c.x;
      local_400[(uint)bVar9 * -2] = *(float *)((int)&local_23c + (uint)bVar9 * -8 + 4);
      local_400[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)&local_23c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if ((CVector3f *)&fStack_404 != pCVar3) {
        pCVar3->x = fStack_404;
        pCVar3->y = local_400[0];
        pCVar3->z = local_400[1];
      }
      g_CLever_PTR_01b687f0 = (this_ptr->base).lever_to_pull;
    }
    pCVar12 = &(this_ptr->base).base.model;
    pfVar5 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x20070);
    local_178.z = (this_ptr->carry_object_world_center).x;
    local_1c = pCVar12;
    local_16c[(uint)bVar9 * -2] = *pfVar5;
    local_16c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = pfVar5[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar12,g_INT_01b68824,&CStack_e0);
    fVar13 = local_178.z;
    fStack_374 = CStack_e0.x;
    local_370[(uint)bVar9 * -2] = *(float *)((int)&CStack_e0 + (uint)bVar9 * -8 + 4);
    local_370[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&CStack_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fVar13 = fVar13 - fStack_374;
    local_2e4 = fVar13;
    local_2e0 = local_16c[0] - local_370[0];
    local_2dc = local_16c[1] - local_370[1];
    fStack_1dc = fVar13;
    local_1d8[(uint)bVar9 * -2] = local_2fc[(uint)bVar9 * -2 + 7];
    local_1d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_2fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 8];
    local_100[2] = fVar13;
    local_100[3] = local_2e0;
    local_f0 = local_2dc;
    local_338.x = fVar13;
    *(float *)((int)&local_338 + (uint)bVar9 * -8 + 4) = local_100[(uint)bVar9 * -2 + 3];
    *(float *)((int)&local_338 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_338,&CStack_26c);
    pCVar12 = local_1c;
    afStack_3dc[2] = CStack_26c.x;
    afStack_3dc[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_26c + (uint)bVar9 * -8 + 4);
    afStack_3dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         *(float *)((int)&CStack_26c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_2254 = (pCVar12->base).current_frame_number;
    if ((float)10 <= local_2254) {
      if (15 <= (double)local_2254) {
        local_2254 = 1.0 - (local_2254 + (float)-15) * (float)0.066666666666666693;
        if (local_2254 < 0.0) {
          local_2254 = 0.0;
        }
      }
      else {
        local_2254 = 1.0;
      }
    }
    else {
      local_2254 = local_2254 * (float)0.10000000000000001;
    }
    local_3c = SQRT(local_1d8[1] * local_1d8[1] +
                    fStack_1dc * fStack_1dc + local_1d8[0] * local_1d8[0]);
    if (local_3c < 2.7f) {
      dVar11 = acos((double)(local_3c / 2.7f));
      fStack_54 = (float)dVar11;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30
                (fStack_54,(CQuaternion4f *)(auStack_69c + 0xc));
      pCVar12 = &(this_ptr->base).base.model;
      auStack_6ec._12_4_ = auStack_69c._12_4_;
      auStack_6dc[(uint)bVar9 * -2] = auStack_68c[(uint)bVar9 * -2];
      auStack_6dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           auStack_68c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      (auStack_6dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_68c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      local_20 = pCVar12;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar12,(CQuaternion4f *)(auStack_6ec + 0xc),(float)local_2258,g_INT_01b68824,
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-fStack_54,&CStack_4f0);
      CStack_4d0.w = CStack_4f0.w;
      puVar7 = (uint *)((int)&CStack_4d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar6 = (uint *)((int)&CStack_4f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&CStack_4d0 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_4f0 + (uint)bVar9 * -8 + 4);
      *puVar7 = *puVar6;
      puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_20,&CStack_4d0,(float)local_2258,g_INT_01b6882c,
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(afStack_3dc[2],&CStack_46c);
    pCVar12 = &(this_ptr->base).base.model;
    CStack_60c.w = CStack_46c.w;
    puVar7 = (uint *)((int)&CStack_60c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar6 = (uint *)((int)&CStack_46c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_60c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_46c + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    local_1c = pCVar12;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar12,&CStack_60c,local_2254,g_INT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(afStack_3dc[3],(CQuaternion4f *)auStack_72c);
    CStack_5fc.w = (float)auStack_72c._0_4_;
    *(uint *)(auStack_5ec + (uint)bVar9 * -8 + -0xc) =
         *(uint *)(auStack_72c + (uint)bVar9 * -8 + 4);
    *(uint *)(auStack_5ec + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4 + -0xc) =
         *(uint *)(auStack_72c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)
     ((int)(auStack_5ec + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4 + -0xc) +
     ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_72c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4
          );
    this_ptr_02 = local_1c;
    blend_weight = &CStack_5fc;
    local_223c = local_2254;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_01b68824;
  }
  else if (local_24 == 3.64338e-44) {
    local_2268 = (this_ptr->base).base.model.base.current_frame_number * (float)0.066666666666666693;
    if (1.0 < local_2268) {
      local_2268 = 1.0;
    }
    fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_48 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_48,&CStack_6cc);
    CStack_6ac.w = CStack_6cc.w;
    puVar6 = (uint *)((int)&CStack_6cc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)(auStack_69c + (uint)bVar9 * -8 + -0xc) =
         *(uint *)((int)&CStack_6cc + (uint)bVar9 * -8 + 4);
    *(uint *)(auStack_69c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) = *puVar6;
    *(uint *)
     ((int)(auStack_69c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4) =
         puVar6[(uint)bVar9 * -2 + 1];
    local_1c = &(this_ptr->base).base.model;
    this_ptr_02 = (CDeformableModelInstance *)0x46e011;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_1c,&CStack_6ac,local_2268,g_INT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_48,(CQuaternion4f *)auStack_50c);
    pCVar12 = local_1c;
    CStack_6ac.w = (float)auStack_50c._0_4_;
    *(uint *)(auStack_69c + (uint)bVar9 * -8 + -0xc) =
         *(uint *)(auStack_50c + (uint)bVar9 * -8 + 4);
    *(uint *)(auStack_69c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) =
         *(uint *)(auStack_50c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)
     ((int)(auStack_69c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_50c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4
          );
    blend_weight = &CStack_6ac;
    local_223c = local_2268;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_01b68820;
  }
  else if (local_24 == 3.78351e-44) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (&(this_ptr->base).base.model,g_INT_01b68824,&local_440);
    local_12c[1] = local_440.x;
    local_12c[(uint)bVar9 * -2 + 2] = *(float *)((int)&local_440 + (uint)bVar9 * -8 + 4);
    local_12c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3] =
         *(float *)((int)&local_440 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_34 = ((this_ptr->carry_object_world_center).y + (this_ptr->carry_object_bbox).max.y) -
               (this_ptr->carry_object_bbox).min.y;
    pCVar2 = (this_ptr->base).object_to_pick_up;
    if (pCVar2 != (CDemonActor *)0x0) {
      g_FLOAT_01b688ac = core_doc_cpp_getCarriedObjectVerticalOffset_FUN_00468b80(pCVar2);
      local_1c = (CDeformableModelInstance *)g_FLOAT_01b688ac;
    }
    local_34 = local_34 - g_FLOAT_01b688ac;
    fVar10 = atan2
                       ((float10)local_12c[2] - (float10)local_34,(float10)2.7f);
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
              ((float)fVar10,(CQuaternion4f *)(auStack_72c + 0xc));
    auStack_50c._12_4_ = auStack_72c._12_4_;
    afStack_4fc[(uint)bVar9 * -2] = afStack_71c[(uint)bVar9 * -2];
    afStack_4fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_71c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (afStack_4fc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_71c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    local_20 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,(CQuaternion4f *)(auStack_50c + 0xc),0.15,g_INT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,(CQuaternion4f *)(auStack_50c + 0xc),0.15,g_INT_01b68820,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_48 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_48,(CQuaternion4f *)(auStack_54c + 0xc));
    CStack_4e0.w = (float)auStack_54c._12_4_;
    puVar6 = (uint *)((int)&CStack_4e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_4e0 + (uint)bVar9 * -8 + 4) = auStack_53c[(uint)bVar9 * -2];
    *puVar6 = auStack_53c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    puVar6[(uint)bVar9 * -2 + 1] =
         (auStack_53c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,&CStack_4e0,0.15,g_INT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_48,(CQuaternion4f *)(auStack_4bc + 0xc))
    ;
    this_ptr_02 = local_20;
    CStack_4e0.w = (float)auStack_4bc._12_4_;
    puVar6 = (uint *)((int)&CStack_4e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_4e0 + (uint)bVar9 * -8 + 4) = auStack_4ac[(uint)bVar9 * -2];
    *puVar6 = auStack_4ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    puVar6[(uint)bVar9 * -2 + 1] =
         (auStack_4ac + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    pCVar12 = (CDeformableModelInstance *)&CStack_4e0;
    blend_weight = (CQuaternion4f *)0x3e19999a;
    local_223c = (float)g_INT_01b68820;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  }
  else if (local_24 == 3.92364e-44) {
    local_2260 = 1.0 - ((this_ptr->base).base.model.base.current_frame_number +
                       (float)-15) * (float)0.066666666666666693;
    if (local_2260 < 0.0) {
      local_2260 = 0.0;
    }
    if (1.0 < local_2260) {
      local_2260 = 1.0;
    }
    fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_20 = (CDeformableModelInstance *)(float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30((float)local_20,(CQuaternion4f *)auStack_6ec);
    pCVar12 = &(this_ptr->base).base.model;
    auStack_4bc._0_4_ = auStack_6ec._0_4_;
    *(uint *)(auStack_4bc + (uint)bVar9 * -8 + 4) =
         *(uint *)(auStack_6ec + (uint)bVar9 * -8 + 4);
    *(uint *)(auStack_4bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)(auStack_6ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)
     ((int)(auStack_4bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_6ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4
          );
    this_ptr_02 = (CDeformableModelInstance *)0x46e36d;
    local_1c = pCVar12;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar12,(CQuaternion4f *)auStack_4bc,local_2260,g_INT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-(float)local_20,&CStack_58c);
    auStack_4bc._0_4_ = CStack_58c.w;
    puVar6 = (uint *)((int)&CStack_58c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)(auStack_4bc + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_58c + (uint)bVar9 * -8 + 4);
    *(uint *)(auStack_4bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) = *puVar6;
    *(uint *)
     ((int)(auStack_4bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4) =
         puVar6[(uint)bVar9 * -2 + 1];
    pCVar12 = local_1c;
    blend_weight = (CQuaternion4f *)auStack_4bc;
    local_223c = local_2260;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_01b68820;
  }
  else {
    if (local_24 != 4.06377e-44) goto LAB_0046d3c6;
    local_1c = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (local_1c,g_INT_01b68824,&CStack_41c);
    fStack_11c = CStack_41c.x;
    local_12c[(uint)bVar9 * -2 + 5] = *(float *)((int)&CStack_41c + (uint)bVar9 * -8 + 4);
    local_12c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 6] =
         *(float *)((int)&CStack_41c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fVar10 = atan2
                       ((float10)local_118 - (float10)(this_ptr->carry_object_world_center).y,
                        (float10)2.7f);
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
              ((float)fVar10,(CQuaternion4f *)(auStack_64c + 0xc));
    pCVar12 = local_20;
    CStack_710.w = (float)auStack_64c._12_4_;
    puVar6 = (uint *)((int)&CStack_710 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(CMotionList **)((int)&CStack_710 + (uint)bVar9 * -8 + 4) = apCStack_63c[(uint)bVar9 * -2];
    *puVar6 = apCStack_63c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    puVar6[(uint)bVar9 * -2 + 1] =
         (apCStack_63c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar12,&CStack_710,(float)local_2248,g_INT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,&CStack_710,(float)local_2248,g_INT_01b68820,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    fStack_58 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(fStack_58,(CQuaternion4f *)(auStack_5ec + 0xc))
    ;
    CStack_5d0.w = (float)auStack_5ec._12_4_;
    puVar6 = (uint *)((int)&CStack_5d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(CMotionList **)((int)&CStack_5d0 + (uint)bVar9 * -8 + 4) = apCStack_5dc[(uint)bVar9 * -2];
    *puVar6 = apCStack_5dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    puVar6[(uint)bVar9 * -2 + 1] =
         (apCStack_5dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,&CStack_5d0,(float)local_2248,g_INT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-fStack_58,&CStack_630);
    this_ptr_02 = local_20;
    CStack_5d0.w = CStack_630.w;
    puVar7 = (uint *)((int)&CStack_5d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    puVar6 = (uint *)((int)&CStack_630 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)((int)&CStack_5d0 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_630 + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    pCVar12 = (CDeformableModelInstance *)&CStack_5d0;
    blend_weight = local_2248;
    local_223c = (float)g_INT_01b68820;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (this_ptr_02,(CQuaternion4f *)pCVar12,(float)blend_weight,(int)local_223c,blend_callback
            );
LAB_0046d3c6:
  if (g_CGamePtr->goggles_active != 0) {
    CStack_a4.y = 0.0;
    CStack_a4.z = 0.0;
    CStack_a4.x = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      CStack_a4.x = (this_ptr->right_arm_aim).target_pitch;
    }
    blend_callback_00 = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
    fVar13 = 1.0;
    iVar14 = g_INT_01b68814;
    core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(&CStack_a4,&CStack_56c);
    auStack_69c._0_4_ = CStack_56c.w;
    puVar6 = (uint *)((int)&CStack_56c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)(auStack_69c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_56c + (uint)bVar9 * -8 + 4);
    *(uint *)(auStack_69c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) = *puVar6;
    *(uint *)
     ((int)(auStack_69c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4) =
         puVar6[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (&(this_ptr->base).base.model,(CQuaternion4f *)auStack_69c,fVar13,iVar14,
               blend_callback_00);
  }
  if (this_ptr->interact_blend <= 0.0) {
    return;
  }
  iVar14 = 1;
  motion_name = "draw_holsters2aimPistols";
  pCVar12 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar12);
  iVar14 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                     (&this_ptr_01->motion_list,motion_name,iVar14);
  local_38 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                       (&pCVar12->base,iVar14,1.0);
  local_1c = (CDeformableModelInstance *)local_38;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
            (pCVar12,iVar14,local_38,this_ptr->interact_blend,g_INT_01b68854,
             core_skeleton_cpp_blendWeightCallback_FUN_00567360);
  return;
}
