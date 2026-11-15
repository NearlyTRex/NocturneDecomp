// Name: core_doc.cpp_FUN_0046caa0
// Address: 0046caa0
// Address Range: [[0046caa0, 0046e62f]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046caa0(CDoc *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046caa0(CDoc *param_1)

{
  CDoor *pCVar1;
  CLever *this_ptr;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar2;
  SMotion *pSVar3;
  CSkeleton *this_ptr_01;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  double dVar10;
  CDeformableModelInstance *this_ptr_02;
  CDeformableModelInstance *pCVar11;
  CQuaternion4f *blend_weight;
  float fVar12;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  char *motion_name;
  code *blend_callback_00;
  int iVar13;
  CBoundingBox3D *this_ptr_03;
  CDeformableModel_MotionBlendWeightFunc *local_2268;
  float local_2264;
  CDeformableModel_MotionBlendWeightFunc *local_2260;
  CDeformableModelInstance *local_2258;
  CDeformableModel_MotionBlendWeightFunc *local_2254;
  CDeformableModel_MotionBlendWeightFunc *local_2250;
  CQuaternion4f *local_2248;
  CDeformableModel_MotionBlendWeightFunc *local_223c;
  SPoseData local_221c;
  float afStack_1714 [59];
  CMotionList *apCStack_1628 [53];
  float afStack_1554 [884];
  CMatrix3x3f CStack_784;
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
  float fStack_56c;
  float local_568 [3];
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
  float fStack_410;
  float local_40c [4];
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3e8;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d4;
  float local_3d0;
  float fStack_3c8;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  CVector3f CStack_3a4;
  CVector3f CStack_398;
  float fStack_38c;
  float local_388 [2];
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
  float local_338;
  CVector3f CStack_32c;
  float fStack_320;
  float afStack_31c [6];
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
  float fStack_26c;
  CVector3f CStack_260;
  float local_250;
  float local_24c;
  CVector3f local_248;
  CVector3f local_23c;
  float fStack_230;
  float afStack_22c [6];
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
  float fStack_158;
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
  float fStack_b0;
  float local_ac [5];
  CVector3f local_98;
  float local_88;
  float local_84 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
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
  
  bVar8 = 0;
  local_18 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&(param_1->base).base.model.base,0);
  local_2258 = local_18;
  if ((int)param_1->turn_blend_weight < 0x3e19999a) {
    local_2258 = (CDeformableModelInstance *)
                 ((param_1->turn_blend_weight / _DAT_005d9f6c) * (float)local_18);
  }
  if (0.85 < param_1->turn_blend_weight) {
    local_2258 = (CDeformableModelInstance *)
                 (((1.0 - param_1->turn_blend_weight) / 0.15) * (float)local_2258);
  }
  pCVar11 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar11);
  if ((0.0 < (float)local_2258) && (-1 < param_1->turn_motion_index)) {
    core_doc_cpp_FUN_0046e630();
    local_221c.root_position.x = 0.0;
    local_221c.root_position.z = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830
              (pCVar11,&local_221c,(float)local_2258,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
  }
  core_doc_cpp_CDoc_makeDrawDecision_FUN_0046ea80(param_1);
  this_ptr_03 = (CBoundingBox3D *)&(param_1->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr_03);
  local_20 = (CDeformableModelInstance *)pSVar3->state_index;
  if (((local_20 == (CDeformableModelInstance *)0x23) ||
      (local_20 == (CDeformableModelInstance *)0x22)) ||
     (local_20 == (CDeformableModelInstance *)0x1f)) {
    local_2c = (CDeformableModelInstance *)&param_1->carry_object_world_center;
    if ((param_1->base).door_to_open == (CDoor *)0x0) {
      core_door_cpp_FUN_004783d0();
      local_2c8._0_4_ = local_3ac;
      *(float *)(local_2c8 + (uint)bVar8 * -8 + 4) = local_40c[(uint)bVar8 * -2 + 0x19];
      *(uint *)(local_2c8 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
           *(uint *)((int)&CStack_3a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)param_1,(CVector3f *)local_2c8,&local_2b0);
      local_3b8 = local_2b0.x;
      local_40c[(uint)bVar8 * -2 + 0x16] = local_2a4[(uint)bVar8 * -2 + -2];
      local_40c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x17] =
           local_2a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1];
      if ((CDeformableModelInstance *)(local_40c + 0x15) != local_2c) {
        *(float *)&local_2c->base = local_3b8;
        *(float *)((int)local_2c + 4) = local_3b4;
        *(float *)((int)local_2c + 8) = local_3b0;
      }
    }
    else {
      core_door_cpp_FUN_004783d0();
      local_13c.x = local_3e8;
      *(float *)((int)&local_13c + (uint)bVar8 * -8 + 4) = local_40c[(uint)bVar8 * -2 + 10];
      *(float *)((int)&local_13c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           local_40c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xb];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)param_1,&local_13c,&local_2d4);
      pCVar11 = local_2c;
      local_304 = local_2d4.x;
      local_2fc[(uint)bVar8 * -2 + -1] = *(float *)(local_2c8 + (uint)bVar8 * -8 + -8);
      local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
           *(float *)(local_2c8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -4);
      if ((CDeformableModelInstance *)(afStack_31c + 6) != pCVar11) {
        *(float *)&pCVar11->base = local_304;
        *(float *)((int)pCVar11 + 4) = local_300;
        *(float *)((int)pCVar11 + 8) = local_2fc[0];
      }
      _DAT_01b687e0 = (param_1->base).door_to_open;
    }
    pCVar11 = &(param_1->base).base.model;
    pfVar4 = (float *)((int)param_1 + (uint)bVar8 * -8 + 0x20070);
    local_130 = (param_1->carry_object_world_center).x;
    local_18 = pCVar11;
    local_12c[(uint)bVar8 * -2] = *pfVar4;
    local_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar4[(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar11,(int)_DAT_01b68820,&local_178);
    fVar12 = local_130;
    local_88 = local_178.x;
    local_84[(uint)bVar8 * -2] = local_16c[(uint)bVar8 * -2 + -2];
    local_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1];
    fVar12 = fVar12 - local_88;
    local_148 = fVar12;
    local_144[0] = local_12c[0] - local_84[0];
    local_144[1] = local_12c[1] - local_84[1];
    local_250 = fVar12;
    (&local_24c)[(uint)bVar8 * -2] = local_144[(uint)bVar8 * -2];
    *(float *)((int)&local_248 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4) =
         local_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    local_214 = fVar12;
    local_210 = local_144[0];
    local_20c.x = local_144[1];
    this_ptr_03 = &local_1c0;
    local_1c0.min.x = fVar12;
    *(float *)((int)&local_1c0 + (uint)bVar8 * -8 + 4) = (&local_210)[(uint)bVar8 * -2];
    *(uint *)((int)&local_1c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
         *(uint *)((int)&local_20c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    local_430 = local_64;
    (&local_42c)[(uint)bVar8 * -2] = local_84[(uint)bVar8 * -2 + 9];
    *(float *)((int)&CStack_428 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         local_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    local_3c = SQRT(local_248.x * local_248.x + local_250 * local_250 + local_24c * local_24c);
    if (local_3c < _DAT_005fecd8) {
      this_ptr_03 = (CBoundingBox3D *)0x46cdd0;
      dVar10 = acos((double)(local_3c / _DAT_005fecd8));
      local_4c = (float)dVar10;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_4c,&CStack_55c);
      pCVar11 = &(param_1->base).base.model;
      CStack_66c.w = CStack_55c.w;
      puVar5 = (uint *)((int)&CStack_66c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(uint *)((int)&CStack_66c + (uint)bVar8 * -8 + 4) =
           *(uint *)(auStack_54c + (uint)bVar8 * -8 + -0xc);
      *puVar5 = *(uint *)(auStack_54c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8);
      puVar5[(uint)bVar8 * -2 + 1] =
           *(uint *)
            ((int)(auStack_54c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) +
            ((uint)bVar8 * -2 + 1) * 4);
      local_1c = pCVar11;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar11,&CStack_66c,local_2264,(int)_DAT_01b68820,
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_4c,&CStack_49c);
      CStack_65c.w = CStack_49c.w;
      puVar5 = (uint *)((int)&CStack_49c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(uint *)(auStack_64c + (uint)bVar8 * -8 + -0xc) =
           *(uint *)((int)&CStack_49c + (uint)bVar8 * -8 + 4);
      *(uint *)(auStack_64c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) = *puVar5;
      *(uint *)
       ((int)(auStack_64c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) + ((uint)bVar8 * -2 + 1) * 4)
           = puVar5[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_1c,&CStack_65c,local_2264,_DAT_01b68828,
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fStack_434,&CStack_57c);
    pCVar11 = &(param_1->base).base.model;
    CStack_51c.w = CStack_57c.w;
    puVar5 = (uint *)((int)&CStack_57c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)(auStack_50c + (uint)bVar8 * -8 + -0xc) =
         *(uint *)((int)&CStack_57c + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_50c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) = *puVar5;
    *(uint *)
     ((int)(auStack_50c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) + ((uint)bVar8 * -2 + 1) * 4) =
         puVar5[(uint)bVar8 * -2 + 1];
    local_1c = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar11,&CStack_51c,local_2264,(int)_DAT_01b68820,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_430,&CStack_5bc);
    CStack_48c.w = CStack_5bc.w;
    puVar6 = (uint *)((int)&CStack_48c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    puVar5 = (uint *)((int)&CStack_5bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&CStack_48c + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_5bc + (uint)bVar8 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_1c,&CStack_48c,local_2264,(int)_DAT_01b68820,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    pCVar1 = (param_1->base).door_to_open;
    if (pCVar1 != (CDoor *)0x0) {
      pfVar4 = (float *)((int)pCVar1 + (uint)bVar8 * -8 + 0x9c0);
      local_3f8 = (pCVar1->open_position).x;
      local_40c[(uint)bVar8 * -2 + 6] = *pfVar4;
      local_40c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] = pfVar4[(uint)bVar8 * -2 + 1];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (&pCVar1->base,&(param_1->base).base.base.location.position,&CStack_188);
      local_28c[2] = CStack_188.x;
      local_28c[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_188 + (uint)bVar8 * -8 + 4);
      local_28c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&CStack_188 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      param_1->door_align_timer = 0.5;
      if (fStack_27c < 0.0) {
        fVar12 = (float)((param_1->base).door_to_open)->door_swing;
        if (fVar12 == 0.0) {
          local_2b8 = -2.0;
          local_2c8._8_4_ = fVar12;
          local_2bc = fVar12;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (&((param_1->base).door_to_open)->base,(CVector3f *)(local_2c8 + 8),&CStack_398)
          ;
          local_370[2] = CStack_398.x;
          local_370[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_398 + (uint)bVar8 * -8 + 4);
          local_370[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               *(float *)((int)&CStack_398 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          local_3f8 = local_3f8 + local_370[2];
          local_3f4 = local_3f4 + local_370[3];
          local_3f0 = local_3f0 + local_360;
        }
        if (((param_1->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          param_1->door_align_timer = 0.0;
        }
      }
      if (0.0 < fStack_27c) {
        if (((param_1->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          local_248.x = 0.0;
          local_248.z = 2.0;
          local_248.y = 0.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (&((param_1->base).door_to_open)->base,&local_248,&CStack_bc);
          local_84[1] = CStack_bc.x;
          local_84[(uint)bVar8 * -2 + 2] = *(float *)((int)&CStack_bc + (uint)bVar8 * -8 + 4);
          local_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
               *(float *)((int)&CStack_bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          local_3f8 = local_3f8 + local_84[1];
          local_3f4 = local_3f4 + local_84[2];
          local_3f0 = local_3f0 + local_84[3];
        }
        if (((param_1->base).door_to_open)->door_swing == DOOR_SWING_CLOCKWISE) {
          param_1->door_align_timer = 0.0;
        }
      }
      afStack_1a0[0] = local_3f8 - (param_1->base).base.base.location.position.x;
      afStack_1a0[1] = local_3f4 - (param_1->base).base.base.location.position.y;
      afStack_1a0[2] = local_3f0 - (param_1->base).base.base.location.position.z;
      fStack_44c = afStack_1a0[0];
      local_448[(uint)bVar8 * -2] = afStack_1a0[(uint)bVar8 * -2 + 1];
      local_448[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
      if (&param_1->door_align_offset != (CVector3f *)&fStack_44c) {
        (param_1->door_align_offset).x = fStack_44c;
        (param_1->door_align_offset).y = local_448[0];
        (param_1->door_align_offset).z = local_448[1];
      }
      pCVar1 = (param_1->base).door_to_open;
      (param_1->door_align_offset).y = 0.0;
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)param_1,&pCVar1->open_position,&CStack_380);
      afStack_22c[2] = CStack_380.x;
      afStack_22c[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_380 + (uint)bVar8 * -8 + 4);
      afStack_22c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&CStack_380 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
      local_35c = fStack_38c;
      local_370[(uint)bVar8 * -2 + 6] = local_388[(uint)bVar8 * -2];
      local_370[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           local_388[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      param_1->door_align_yaw = (param_1->base).base.base.orient.vec.y + local_358;
    }
  }
  pCVar11 = &(param_1->base).base.model;
  local_2c = pCVar11;
  if (local_24 == 3.36312e-44) {
    pfVar4 = (float *)((int)param_1 + (uint)bVar8 * -8 + 0x20070);
    fStack_344 = (param_1->carry_object_world_center).x;
    local_370[(uint)bVar8 * -2 + 0xc] = *pfVar4;
    local_370[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] = pfVar4[(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar11,(int)_DAT_01b68824,&CStack_3a4);
    fVar12 = fStack_344;
    fStack_200 = CStack_3a4.x;
    local_1fc[(uint)bVar8 * -2] = *(float *)((int)&CStack_3a4 + (uint)bVar8 * -8 + 4);
    local_1fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         *(float *)((int)&CStack_3a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    local_74 = fVar12 - fStack_200;
    local_70 = local_340 - local_1fc[0];
    local_6c = local_33c - local_1fc[1];
    fStack_3c8 = fVar12 - fStack_200;
    local_40c[(uint)bVar8 * -2 + 0x12] = local_84[(uint)bVar8 * -2 + 5];
    local_40c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
         local_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    pCVar11 = local_2c;
    fStack_104 = fStack_b0;
    local_100[(uint)bVar8 * -2] = local_ac[(uint)bVar8 * -2];
    local_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    fVar12 = (pCVar11->base).current_frame_number;
    if ((float)_DAT_005d9fdc <= fVar12) {
      local_223c = (CDeformableModel_MotionBlendWeightFunc *)
                   (1.0 - (fVar12 + (float)_DAT_005d9fe4) * (float)_DAT_005d9fec);
      if ((float)local_223c < 0.0) {
        local_223c = (CDeformableModel_MotionBlendWeightFunc *)0x0;
      }
    }
    else {
      local_223c = (CDeformableModel_MotionBlendWeightFunc *)(fVar12 * (float)_DAT_005d9fec);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fStack_104,(CQuaternion4f *)auStack_54c);
    pCVar11 = &(param_1->base).base.model;
    CStack_6fc.w = (float)auStack_54c._0_4_;
    *(uint *)(auStack_6ec + (uint)bVar8 * -8 + -0xc) =
         *(uint *)(auStack_54c + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_6ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) =
         *(uint *)(auStack_54c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)
     ((int)(auStack_6ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) + ((uint)bVar8 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_54c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4
          );
    this_ptr_02 = (CDeformableModelInstance *)0x46d370;
    local_1c = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar11,&CStack_6fc,(float)local_223c,_DAT_01b68858,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_100[0],&CStack_52c);
    CStack_6bc.w = CStack_52c.w;
    puVar6 = (uint *)((int)&CStack_6bc + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4 + 4);
    puVar5 = (uint *)((int)&CStack_52c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&CStack_6bc + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_52c + (uint)bVar8 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
    pCVar11 = local_1c;
    blend_weight = &CStack_6bc;
    blend_callback = _DAT_01b68824;
  }
  else if (local_24 == 3.08286e-44) {
    pfVar4 = (float *)((int)param_1 + (uint)bVar8 * -8 + 0x20070);
    fStack_290 = (param_1->carry_object_world_center).x;
    local_28c[(uint)bVar8 * -2] = *pfVar4;
    local_28c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar4[(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar11,(int)_DAT_01b68824,&CStack_32c);
    fVar12 = fStack_290;
    local_2fc[3] = CStack_32c.x;
    local_2fc[(uint)bVar8 * -2 + 4] = *(float *)((int)&CStack_32c + (uint)bVar8 * -8 + 4);
    local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5] =
         *(float *)((int)&CStack_32c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    fStack_d4 = fVar12 - local_2fc[3];
    local_d0 = local_28c[0] - local_2ec;
    local_cc[0] = local_28c[1] - local_2e8;
    fStack_158 = fVar12 - local_2fc[3];
    local_16c[(uint)bVar8 * -2 + 6] = local_cc[(uint)bVar8 * -2 + -1];
    local_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         local_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    pCVar11 = local_2c;
    local_16c[2] = fStack_410;
    local_16c[(uint)bVar8 * -2 + 3] = local_40c[(uint)bVar8 * -2];
    local_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         local_40c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    fVar12 = (pCVar11->base).current_frame_number;
    if ((float)_DAT_005d9fc4 <= fVar12) {
      local_2250 = (CDeformableModel_MotionBlendWeightFunc *)
                   (1.0 - (fVar12 + (float)_DAT_005d9fcc) * (float)_DAT_005d9f94);
      if ((float)local_2250 < 0.0) {
        local_2250 = (CDeformableModel_MotionBlendWeightFunc *)0x0;
      }
    }
    else {
      local_2250 = (CDeformableModel_MotionBlendWeightFunc *)(fVar12 * (float)_DAT_005d9fd4);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(-local_16c[2],&CStack_67c);
    pCVar11 = &(param_1->base).base.model;
    CStack_47c.w = CStack_67c.w;
    puVar6 = (uint *)((int)&CStack_47c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    puVar5 = (uint *)((int)&CStack_67c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&CStack_47c + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_67c + (uint)bVar8 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
    this_ptr_02 = (CDeformableModelInstance *)0x46da89;
    local_1c = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar11,&CStack_47c,(float)local_2250,(int)_DAT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_16c[3],(CQuaternion4f *)auStack_64c);
    blend_weight = &CStack_59c;
    CStack_59c.w = (float)auStack_64c._0_4_;
    puVar5 = (uint *)((int)&CStack_59c + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4 + 4);
    *(uint *)((int)&CStack_59c + (uint)bVar8 * -8 + 4) =
         *(uint *)(auStack_64c + (uint)bVar8 * -8 + 4);
    *puVar5 = *(uint *)(auStack_64c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    puVar5[(uint)bVar8 * -2 + 1] =
         *(uint *)
          ((int)(auStack_64c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4
          );
    pCVar11 = local_1c;
    local_223c = local_2250;
    blend_callback = _DAT_01b68824;
  }
  else if (local_24 == 3.50325e-44) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              (&CStack_784,&(param_1->base).target_orientation.vec);
    if ((DAT_01b687f4 & 1) == 0) {
      DAT_01b687f4 = DAT_01b687f4 | 1;
    }
    this_ptr_00 = (param_1->base).target_actor;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,this_ptr_03);
      pfVar4 = afStack_754;
      pfVar7 = &fStack_73c;
      for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
        pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
      }
      local_cc[3] = fStack_73c + fStack_730;
      CStack_bc.x = fStack_738 + (float)auStack_72c._0_4_;
      CStack_bc.y = fStack_734 + (float)auStack_72c._4_4_;
      fStack_1a4 = fStack_73c + fStack_730;
      afStack_1a0[(uint)bVar8 * -2] = *(float *)((int)&CStack_bc + (uint)bVar8 * -8);
      afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
      fStack_18c = fStack_1a4 * _DAT_005d9f9c;
      CStack_188.x = afStack_1a0[0] * _DAT_005d9f9c;
      CStack_188.y = afStack_1a0[1] * _DAT_005d9f9c;
      local_2fc[2] = fStack_1a4 * _DAT_005d9f9c;
      local_2fc[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_188 + (uint)bVar8 * -8);
      local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&CStack_188 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
      if (&stack0x00000000 != (byte *)0x1b68ad8) {
        _DAT_01b687e4 = local_2fc[2];
        _DAT_01b687e8 = local_2fc[3];
        _DAT_01b687ec = local_2ec;
      }
    }
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              (&CStack_784,(CVector3f *)&DAT_01b687e4,&local_1d0);
    fStack_350 = local_1d0.x;
    local_370[(uint)bVar8 * -2 + 9] = *(float *)((int)&local_1d0 + (uint)bVar8 * -8 + 4);
    local_370[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         *(float *)((int)&local_1d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    local_1c0.min.z = (param_1->base).target_position.x + fStack_350;
    local_1c0.max.x = (param_1->base).target_position.y + local_34c;
    local_1c0.max.y = (param_1->base).target_position.z + fStack_348;
    local_29c.x = local_1c0.min.z;
    *(uint *)((int)&local_29c + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&local_1c0 + ((uint)bVar8 * -2 + -1) * 4 + 0x10);
    *(uint *)((int)&local_29c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&local_1c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 0x10);
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
              ((CDemonActor *)param_1,&local_29c,&local_98);
    local_278 = local_98.x;
    local_28c[(uint)bVar8 * -2 + 6] = *(float *)((int)&local_98 + (uint)bVar8 * -8 + 4);
    local_28c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         *(float *)((int)&local_98 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    local_1c = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (local_1c,(int)_DAT_01b68824,&CStack_1e8);
    fVar12 = local_278;
    fStack_230 = CStack_1e8.x;
    afStack_22c[(uint)bVar8 * -2] = *(float *)((int)&CStack_1e8 + (uint)bVar8 * -8 + 4);
    afStack_22c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         *(float *)((int)&CStack_1e8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    local_ec = fVar12 - fStack_230;
    fStack_e8 = fStack_274 - afStack_22c[0];
    fStack_e4 = fStack_270 - afStack_22c[1];
    fStack_320 = fVar12 - fStack_230;
    afStack_31c[(uint)bVar8 * -2] = local_100[(uint)bVar8 * -2 + 6];
    afStack_31c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    pCVar11 = local_1c;
    fStack_3e0 = afStack_31c[2];
    local_40c[(uint)bVar8 * -2 + 0xc] = afStack_31c[(uint)bVar8 * -2 + 3];
    local_40c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_31c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    fVar12 = (pCVar11->base).current_frame_number;
    if ((float)_DAT_005d9fa4 <= fVar12) {
      local_2248 = (CQuaternion4f *)(1.0 - (fVar12 + (float)_DAT_005d9fac) * (float)_DAT_005d9fb4);
      if ((float)local_2248 < 0.0) {
        local_2248 = (CQuaternion4f *)0x0;
      }
    }
    else {
      local_2248 = (CQuaternion4f *)(fVar12 * (float)_DAT_005d9fbc);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fStack_3e0,&CStack_5ac);
    auStack_5ec._0_4_ = CStack_5ac.w;
    puVar5 = (uint *)((int)&CStack_5ac + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)(auStack_5ec + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_5ac + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_5ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) = *puVar5;
    *(uint *)
     ((int)(auStack_5ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4) =
         puVar5[(uint)bVar8 * -2 + 1];
    pCVar11 = &(param_1->base).base.model;
    local_1c = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar11,(CQuaternion4f *)auStack_5ec,(float)local_2248,_DAT_01b68858,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(fStack_3dc,&CStack_45c);
    this_ptr_02 = local_1c;
    blend_weight = &CStack_61c;
    CStack_61c.w = CStack_45c.w;
    puVar6 = (uint *)((int)&CStack_61c + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4 + 4);
    puVar5 = (uint *)((int)&CStack_45c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&CStack_61c + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_45c + (uint)bVar8 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
    local_223c = (CDeformableModel_MotionBlendWeightFunc *)local_2248;
    blend_callback = _DAT_01b68824;
  }
  else if (local_24 == 5.04467e-44) {
    local_28 = &param_1->carry_object_world_center;
    this_ptr = (param_1->base).lever_to_pull;
    if (this_ptr == (CLever *)0x0) {
      core_lever_cpp_CLever_getHandlePosition_FUN_004ff6b0(_DAT_01b687f0,&local_1f4);
      CStack_428.x = local_1f4.x;
      *(uint *)((int)&CStack_428 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&local_1f4 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_428 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&local_1f4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)param_1,&CStack_428,&CStack_260);
      local_2b0.z = CStack_260.x;
      local_2a4[(uint)bVar8 * -2] = *(float *)((int)&CStack_260 + (uint)bVar8 * -8 + 4);
      local_2a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_260 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if ((CVector3f *)&local_2b0.z != local_28) {
        local_28->x = local_2b0.z;
        local_28->y = local_2a4[0];
        local_28->z = local_2a4[1];
      }
    }
    else {
      core_lever_cpp_CLever_getHandlePosition_FUN_004ff6b0(this_ptr,&CStack_110);
      local_20c.x = CStack_110.x;
      *(uint *)((int)&local_20c + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_110 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&local_20c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_110 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)param_1,&local_20c,&local_23c);
      pCVar2 = local_28;
      local_40c[2] = local_23c.x;
      local_40c[(uint)bVar8 * -2 + 3] = *(float *)((int)&local_23c + (uint)bVar8 * -8 + 4);
      local_40c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&local_23c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if ((CVector3f *)(local_40c + 2) != pCVar2) {
        pCVar2->x = local_40c[2];
        pCVar2->y = local_40c[3];
        pCVar2->z = local_3fc;
      }
      _DAT_01b687f0 = (param_1->base).lever_to_pull;
    }
    pCVar11 = &(param_1->base).base.model;
    pfVar4 = (float *)((int)param_1 + (uint)bVar8 * -8 + 0x20070);
    local_178.z = (param_1->carry_object_world_center).x;
    local_1c = pCVar11;
    local_16c[(uint)bVar8 * -2] = *pfVar4;
    local_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar4[(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (pCVar11,(int)_DAT_01b68824,&CStack_e0);
    fVar12 = local_178.z;
    fStack_374 = CStack_e0.x;
    local_370[(uint)bVar8 * -2] = *(float *)((int)&CStack_e0 + (uint)bVar8 * -8 + 4);
    local_370[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         *(float *)((int)&CStack_e0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    fVar12 = fVar12 - fStack_374;
    local_2e4 = fVar12;
    local_2e0 = local_16c[0] - local_370[0];
    local_2dc = local_16c[1] - local_370[1];
    fStack_1dc = fVar12;
    local_1d8[(uint)bVar8 * -2] = local_2fc[(uint)bVar8 * -2 + 7];
    local_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 8];
    local_100[2] = fVar12;
    local_100[3] = local_2e0;
    local_f0 = local_2dc;
    local_338 = fVar12;
    local_370[(uint)bVar8 * -2 + 0xf] = local_100[(uint)bVar8 * -2 + 3];
    local_370[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         local_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    pCVar11 = local_1c;
    fStack_3d4 = fStack_26c;
    local_40c[(uint)bVar8 * -2 + 0xf] = local_28c[(uint)bVar8 * -2 + 9];
    local_40c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         local_28c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    fVar12 = (pCVar11->base).current_frame_number;
    if ((float)_DAT_005d9f74 <= fVar12) {
      if (_DAT_005d9f7c <= (double)fVar12) {
        local_2254 = (CDeformableModel_MotionBlendWeightFunc *)
                     (1.0 - (fVar12 + (float)_DAT_005d9f84) * (float)_DAT_005d9f8c);
        if ((float)local_2254 < 0.0) {
          local_2254 = (CDeformableModel_MotionBlendWeightFunc *)0x0;
        }
      }
      else {
        local_2254 = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
      }
    }
    else {
      local_2254 = (CDeformableModel_MotionBlendWeightFunc *)(fVar12 * (float)_DAT_005d9f94);
    }
    local_3c = SQRT(local_1d8[1] * local_1d8[1] +
                    fStack_1dc * fStack_1dc + local_1d8[0] * local_1d8[0]);
    if (local_3c < _DAT_005fecd8) {
      dVar10 = acos((double)(local_3c / _DAT_005fecd8));
      fStack_54 = (float)dVar10;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30
                (fStack_54,(CQuaternion4f *)(auStack_69c + 0xc));
      pCVar11 = &(param_1->base).base.model;
      auStack_6ec._12_4_ = auStack_69c._12_4_;
      auStack_6dc[(uint)bVar8 * -2] = auStack_68c[(uint)bVar8 * -2];
      auStack_6dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           auStack_68c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      (auStack_6dc + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (auStack_68c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      local_20 = pCVar11;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar11,(CQuaternion4f *)(auStack_6ec + 0xc),(float)local_2258,(int)_DAT_01b68824,
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-fStack_54,&CStack_4f0);
      CStack_4d0.w = CStack_4f0.w;
      puVar6 = (uint *)((int)&CStack_4d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      puVar5 = (uint *)((int)&CStack_4f0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(uint *)((int)&CStack_4d0 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_4f0 + (uint)bVar8 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_20,&CStack_4d0,(float)local_2258,_DAT_01b6882c,
                 core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fStack_3d4,&CStack_46c);
    pCVar11 = &(param_1->base).base.model;
    CStack_60c.w = CStack_46c.w;
    puVar6 = (uint *)((int)&CStack_60c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    puVar5 = (uint *)((int)&CStack_46c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&CStack_60c + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_46c + (uint)bVar8 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
    local_1c = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar11,&CStack_60c,(float)local_2254,(int)_DAT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_3d0,(CQuaternion4f *)auStack_72c);
    CStack_5fc.w = (float)auStack_72c._0_4_;
    *(uint *)(auStack_5ec + (uint)bVar8 * -8 + -0xc) =
         *(uint *)(auStack_72c + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_5ec + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4 + -0xc) =
         *(uint *)(auStack_72c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)
     ((int)(auStack_5ec + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4 + -0xc) +
     ((uint)bVar8 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_72c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4
          );
    this_ptr_02 = local_1c;
    blend_weight = &CStack_5fc;
    local_223c = local_2254;
    blend_callback = _DAT_01b68824;
  }
  else if (local_24 == 3.64338e-44) {
    local_2268 = (CDeformableModel_MotionBlendWeightFunc *)
                 ((param_1->base).base.model.base.current_frame_number * (float)_DAT_005d9f8c);
    if (1.0 < (float)local_2268) {
      local_2268 = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
    }
    fVar9 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005fecd8,
                            (float10)1);
    local_48 = (float)fVar9;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_48,&CStack_6cc);
    CStack_6ac.w = CStack_6cc.w;
    puVar5 = (uint *)((int)&CStack_6cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)(auStack_69c + (uint)bVar8 * -8 + -0xc) =
         *(uint *)((int)&CStack_6cc + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_69c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) = *puVar5;
    *(uint *)
     ((int)(auStack_69c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) + ((uint)bVar8 * -2 + 1) * 4) =
         puVar5[(uint)bVar8 * -2 + 1];
    local_1c = &(param_1->base).base.model;
    this_ptr_02 = (CDeformableModelInstance *)0x46e011;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_1c,&CStack_6ac,(float)local_2268,(int)_DAT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_48,(CQuaternion4f *)auStack_50c);
    pCVar11 = local_1c;
    CStack_6ac.w = (float)auStack_50c._0_4_;
    *(uint *)(auStack_69c + (uint)bVar8 * -8 + -0xc) =
         *(uint *)(auStack_50c + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_69c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) =
         *(uint *)(auStack_50c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)
     ((int)(auStack_69c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) + ((uint)bVar8 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_50c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4
          );
    blend_weight = &CStack_6ac;
    local_223c = local_2268;
    blend_callback = _DAT_01b68820;
  }
  else if (local_24 == 3.78351e-44) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (&(param_1->base).base.model,(int)_DAT_01b68824,&local_440);
    local_12c[1] = local_440.x;
    local_12c[(uint)bVar8 * -2 + 2] = *(float *)((int)&local_440 + (uint)bVar8 * -8 + 4);
    local_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
         *(float *)((int)&local_440 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    local_34 = ((param_1->carry_object_world_center).y + (param_1->carry_object_bbox).max.y) -
               (param_1->carry_object_bbox).min.y;
    if ((param_1->base).object_to_pick_up != (CDemonActor *)0x0) {
      _DAT_01b688ac = (CDeformableModelInstance *)core_doc_cpp_FUN_00468b80();
      local_1c = _DAT_01b688ac;
    }
    local_34 = local_34 - (float)_DAT_01b688ac;
    fVar9 = atan2
                      ((float10)local_12c[2] - (float10)local_34,(float10)_DAT_005fecd8);
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
              ((float)fVar9,(CQuaternion4f *)(auStack_72c + 0xc));
    auStack_50c._12_4_ = auStack_72c._12_4_;
    afStack_4fc[(uint)bVar8 * -2] = afStack_71c[(uint)bVar8 * -2];
    afStack_4fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_71c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    (afStack_4fc + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
         (afStack_71c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    local_20 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,(CQuaternion4f *)(auStack_50c + 0xc),0.15,(int)_DAT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,(CQuaternion4f *)(auStack_50c + 0xc),0.15,(int)_DAT_01b68820,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    fVar9 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005fecd8,
                            (float10)1);
    local_48 = (float)fVar9;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_48,(CQuaternion4f *)(auStack_54c + 0xc));
    CStack_4e0.w = (float)auStack_54c._12_4_;
    puVar5 = (uint *)((int)&CStack_4e0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&CStack_4e0 + (uint)bVar8 * -8 + 4) = auStack_53c[(uint)bVar8 * -2];
    *puVar5 = auStack_53c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    puVar5[(uint)bVar8 * -2 + 1] =
         (auStack_53c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,&CStack_4e0,0.15,(int)_DAT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_48,(CQuaternion4f *)(auStack_4bc + 0xc))
    ;
    this_ptr_02 = local_20;
    CStack_4e0.w = (float)auStack_4bc._12_4_;
    puVar5 = (uint *)((int)&CStack_4e0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&CStack_4e0 + (uint)bVar8 * -8 + 4) = auStack_4ac[(uint)bVar8 * -2];
    *puVar5 = auStack_4ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    puVar5[(uint)bVar8 * -2 + 1] =
         (auStack_4ac + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    pCVar11 = (CDeformableModelInstance *)&CStack_4e0;
    blend_weight = (CQuaternion4f *)0x3e19999a;
    local_223c = _DAT_01b68820;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  }
  else if (local_24 == 3.92364e-44) {
    local_2260 = (CDeformableModel_MotionBlendWeightFunc *)
                 (1.0 - ((param_1->base).base.model.base.current_frame_number + (float)_DAT_005d9f84
                        ) * (float)_DAT_005d9f8c);
    if ((float)local_2260 < 0.0) {
      local_2260 = (CDeformableModel_MotionBlendWeightFunc *)0x0;
    }
    if (1.0 < (float)local_2260) {
      local_2260 = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
    }
    fVar9 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005fecd8,
                            (float10)1);
    local_20 = (CDeformableModelInstance *)(float)fVar9;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30((float)local_20,(CQuaternion4f *)auStack_6ec);
    pCVar11 = &(param_1->base).base.model;
    auStack_4bc._0_4_ = auStack_6ec._0_4_;
    *(uint *)(auStack_4bc + (uint)bVar8 * -8 + 4) =
         *(uint *)(auStack_6ec + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_4bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)(auStack_6ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)
     ((int)(auStack_4bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_6ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4
          );
    this_ptr_02 = (CDeformableModelInstance *)0x46e36d;
    local_1c = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar11,(CQuaternion4f *)auStack_4bc,(float)local_2260,(int)_DAT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-(float)local_20,&CStack_58c);
    auStack_4bc._0_4_ = CStack_58c.w;
    puVar5 = (uint *)((int)&CStack_58c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)(auStack_4bc + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_58c + (uint)bVar8 * -8 + 4);
    *(uint *)(auStack_4bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) = *puVar5;
    *(uint *)
     ((int)(auStack_4bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4) =
         puVar5[(uint)bVar8 * -2 + 1];
    pCVar11 = local_1c;
    blend_weight = (CQuaternion4f *)auStack_4bc;
    local_223c = local_2260;
    blend_callback = _DAT_01b68820;
  }
  else {
    if (local_24 != 4.06377e-44) goto LAB_0046d3c6;
    local_1c = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (local_1c,(int)_DAT_01b68824,&CStack_41c);
    fStack_11c = CStack_41c.x;
    local_12c[(uint)bVar8 * -2 + 5] = *(float *)((int)&CStack_41c + (uint)bVar8 * -8 + 4);
    local_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6] =
         *(float *)((int)&CStack_41c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    fVar9 = atan2
                      ((float10)local_118 - (float10)(param_1->carry_object_world_center).y,
                       (float10)_DAT_005fecd8);
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0
              ((float)fVar9,(CQuaternion4f *)(auStack_64c + 0xc));
    pCVar11 = local_20;
    CStack_710.w = (float)auStack_64c._12_4_;
    puVar5 = (uint *)((int)&CStack_710 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(CMotionList **)((int)&CStack_710 + (uint)bVar8 * -8 + 4) = apCStack_63c[(uint)bVar8 * -2];
    *puVar5 = apCStack_63c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    puVar5[(uint)bVar8 * -2 + 1] =
         (apCStack_63c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar11,&CStack_710,(float)local_2248,(int)_DAT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,&CStack_710,(float)local_2248,(int)_DAT_01b68820,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    fVar9 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005fecd8,
                            (float10)1);
    fStack_58 = (float)fVar9;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(fStack_58,(CQuaternion4f *)(auStack_5ec + 0xc))
    ;
    CStack_5d0.w = (float)auStack_5ec._12_4_;
    puVar5 = (uint *)((int)&CStack_5d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(CMotionList **)((int)&CStack_5d0 + (uint)bVar8 * -8 + 4) = apCStack_5dc[(uint)bVar8 * -2];
    *puVar5 = apCStack_5dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    puVar5[(uint)bVar8 * -2 + 1] =
         (apCStack_5dc + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_20,&CStack_5d0,(float)local_2248,(int)_DAT_01b68824,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-fStack_58,&CStack_630);
    this_ptr_02 = local_20;
    CStack_5d0.w = CStack_630.w;
    puVar6 = (uint *)((int)&CStack_5d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    puVar5 = (uint *)((int)&CStack_630 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&CStack_5d0 + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_630 + (uint)bVar8 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
    pCVar11 = (CDeformableModelInstance *)&CStack_5d0;
    blend_weight = local_2248;
    local_223c = _DAT_01b68820;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (this_ptr_02,(CQuaternion4f *)pCVar11,(float)blend_weight,(int)local_223c,blend_callback
            );
LAB_0046d3c6:
  if (g_CGamePtr->goggles_active != 0) {
    local_ac[3] = 0.0;
    local_ac[4] = 0.0;
    local_ac[2] = 0.0;
    if ((param_1->guns_drawn != 0) && (param_1->weapon != (CWeapon *)0x0)) {
      local_ac[2] = (param_1->right_arm_aim).target_pitch;
    }
    blend_callback_00 = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
    fVar12 = 1.0;
    iVar13 = _DAT_01b68814;
    core_xform_cpp_FUN_005b7ed0(local_ac + 2);
    auStack_69c._0_4_ = fStack_56c;
    *(float *)(auStack_69c + (uint)bVar8 * -8 + 4) = local_568[(uint)bVar8 * -2];
    *(float *)(auStack_69c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         local_568[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    *(float *)((int)(auStack_69c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) +
              ((uint)bVar8 * -2 + 1) * 4) =
         (local_568 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (&(param_1->base).base.model,(CQuaternion4f *)auStack_69c,fVar12,iVar13,
               blend_callback_00);
  }
  if (param_1->interact_blend <= 0.0) {
    return;
  }
  iVar13 = 1;
  motion_name = "?draw_holsters2aimPistols" + 1;
  pCVar11 = &(param_1->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar11);
  iVar13 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                     (&this_ptr_01->motion_list,motion_name,iVar13);
  local_38 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                       (&pCVar11->base,iVar13,1.0);
  local_1c = (CDeformableModelInstance *)local_38;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
            (pCVar11,iVar13,local_38,param_1->interact_blend,_DAT_01b68854,
             core_skeleton_cpp_blendWeightCallback_FUN_00567360);
  return;
}
