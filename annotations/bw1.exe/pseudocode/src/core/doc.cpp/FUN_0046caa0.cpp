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
  EDoorSwing EVar2;
  CDemonActor *this_ptr;
  CVector3f *pCVar3;
  SMotion *pSVar4;
  CSkeleton *this_ptr_00;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  CDeformableModelInstance *pCVar9;
  CQuaternion4f *rotation_quat;
  float fVar10;
  char *motion_name;
  code *blend_callback;
  int iVar11;
  CBoundingBox3D *out_box;
  double dVar12;
  float local_2264;
  float local_2260;
  float local_225c;
  CDeformableModelInstance *local_2258;
  float local_2250;
  float local_224c;
  float fStack_2244;
  float local_2240;
  float local_2238;
  float local_2234;
  SPoseData local_221c;
  float afStack_1710 [996];
  CMatrix3x3f local_780;
  float afStack_750 [6];
  float fStack_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float local_728;
  float afStack_724 [7];
  CQuaternion4f local_708;
  CQuaternion4f local_6f8;
  float local_6e8;
  float afStack_6e4 [3];
  CQuaternion4f local_6d8;
  float local_6c8;
  float afStack_6c4 [3];
  CQuaternion4f local_6b8;
  CQuaternion4f local_6a8;
  CQuaternion4f local_698;
  float local_688;
  float afStack_684 [7];
  CQuaternion4f local_668;
  CQuaternion4f local_658;
  float local_648;
  float afStack_644 [7];
  float local_628;
  CQuaternion4f CStack_618;
  CQuaternion4f local_608;
  CQuaternion4f local_5f8;
  CQuaternion4f CStack_5e8;
  float local_5d8;
  float afStack_5d4 [3];
  CQuaternion4f local_5c8;
  float local_5b8;
  float afStack_5b4 [7];
  CQuaternion4f local_598;
  float local_588;
  float afStack_584 [7];
  float local_568;
  float local_558;
  float local_548;
  float local_538;
  float local_528;
  CQuaternion4f local_518;
  float local_508;
  float afStack_504 [3];
  CQuaternion4f local_4f8;
  float local_4e8;
  float afStack_4e4 [3];
  CQuaternion4f local_4d8;
  CQuaternion4f local_4c8;
  CQuaternion4f local_4b8;
  float local_4a8;
  float afStack_4a4 [7];
  CQuaternion4f local_488;
  CQuaternion4f local_478;
  float local_468;
  float afStack_464 [7];
  float local_448;
  float local_444;
  float local_440;
  uint local_43c;
  uint local_430;
  uint local_424;
  uint local_418;
  uint local_40c;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  uint local_3e8;
  uint uStack_3dc;
  uint local_3d0;
  float local_3c4;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  uint local_3ac;
  float local_3a0;
  float local_394;
  uint local_388;
  uint local_37c;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  uint local_358;
  float local_354;
  float local_34c;
  float fStack_348;
  float fStack_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_328;
  float fStack_31c;
  uint uStack_310;
  float local_304;
  float local_300;
  float local_2fc;
  float fStack_2f0;
  float local_2ec [4];
  float local_2dc;
  float local_2d8;
  float local_2d4;
  uint local_2c8;
  EDoorSwing local_2bc;
  EDoorSwing local_2b8;
  uint local_2b4;
  float local_2b0;
  float afStack_2ac [4];
  float local_29c;
  float fStack_298;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  uint local_268;
  float local_25c;
  float local_250;
  float local_24c;
  float local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  float local_238;
  float afStack_234 [4];
  float fStack_224;
  uint local_220;
  float local_214;
  float local_210;
  float local_20c;
  uint local_208;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  uint local_1f0;
  float fStack_1e4;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c0;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a0;
  float local_19c [5];
  float fStack_188;
  float local_184 [6];
  float local_16c;
  float local_168;
  float local_164;
  uint local_160;
  float local_154;
  float local_148;
  float local_144;
  float local_140;
  uint local_13c;
  float local_130;
  float local_12c;
  float local_128;
  uint local_124;
  uint local_118;
  uint local_10c;
  uint local_100;
  float local_f4;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_bc;
  float local_b8 [6];
  float local_a0 [4];
  float afStack_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30;
  CVector3f *local_2c;
  CDeformableModelInstance *local_28;
  CVector3f *local_24;
  int local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar7 = 0;
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_00524a40(&(param_1->base).base.model);
  local_2258 = local_18;
  if ((int)param_1->turn_blend_weight < 0x3e19999a) {
    local_2258 = (CDeformableModelInstance *)
                 ((param_1->turn_blend_weight / _DAT_005d9f6c) * (float)local_18);
  }
  dVar12 = (double)param_1->turn_blend_weight;
  if (0.8499999940395355 < dVar12) {
    local_2258 = (CDeformableModelInstance *)
                 (((1.0 - param_1->turn_blend_weight) / 0.15) * (float)local_2258);
  }
  pCVar9 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar9);
  out_box = SUB84(__BITCAST_UINT64(dVar12),0);
  if ((0.0 < (float)local_2258) && (-1 < param_1->turn_motion_index)) {
    core_doc_cpp_FUN_0046e630(param_1);
    local_221c.root_position.x = 0.0;
    local_221c.root_position.z = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830
              (pCVar9,&local_221c,(float)local_2258,-1,core_skeleton_cpp_FUN_00567360);
  }
  core_doc_cpp_CDoc_makeDrawDecision_FUN_0046ea80(param_1);
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(param_1->base).base.model.base);
  local_20 = pSVar4->state_index;
  if (((local_20 == 0x23) || (local_20 == 0x22)) || (local_20 == 0x1f)) {
    local_2c = &param_1->carry_object_world_center;
    if ((param_1->base).door_to_open == (CDoor *)0x0) {
      core_door_cpp_FUN_004783d0();
      local_2c8 = local_3ac;
      local_2ec[(uint)bVar7 * -2 + 10] = afStack_464[(uint)bVar7 * -2 + 0x2f];
      local_2ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xb] =
           afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x30];
      core_actor_cpp_FUN_00408bb0(param_1);
      local_3b8 = local_2b0;
      afStack_464[(uint)bVar7 * -2 + 0x2c] = afStack_2ac[(uint)bVar7 * -2];
      afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2d] =
           afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if ((CVector3f *)(afStack_464 + 0x2b) != local_2c) {
        local_2c->x = local_3b8;
        local_2c->y = local_3b4;
        local_2c->z = local_3b0;
      }
    }
    else {
      core_door_cpp_FUN_004783d0();
      local_13c = local_3e8;
      local_184[(uint)bVar7 * -2 + 0x13] = afStack_464[(uint)bVar7 * -2 + 0x20];
      local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x14] =
           afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x21];
      core_actor_cpp_FUN_00408bb0(param_1);
      pCVar3 = local_2c;
      local_304 = local_2d4;
      afStack_464[(uint)bVar7 * -2 + 0x59] = local_2ec[(uint)bVar7 * -2 + 7];
      afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x5a] =
           local_2ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8];
      if ((CVector3f *)(afStack_464 + 0x58) != pCVar3) {
        pCVar3->x = local_304;
        pCVar3->y = local_300;
        pCVar3->z = local_2fc;
      }
      _DAT_01b687e0 = (param_1->base).door_to_open;
    }
    pCVar9 = &(param_1->base).base.model;
    pfVar5 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x20070);
    local_130 = (param_1->carry_object_world_center).x;
    local_18 = pCVar9;
    local_184[(uint)bVar7 * -2 + 0x16] = *pfVar5;
    local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x17] = pfVar5[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(pCVar9);
    fVar10 = local_130;
    afStack_90[2] = local_184[3];
    afStack_90[(uint)bVar7 * -2 + 3] = local_184[(uint)bVar7 * -2 + 4];
    afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    fVar10 = fVar10 - afStack_90[2];
    local_148 = fVar10;
    local_144 = local_12c - afStack_90[3];
    local_140 = local_128 - local_80;
    local_250 = fVar10;
    afStack_2ac[(uint)bVar7 * -2 + 0x18] = local_184[(uint)bVar7 * -2 + 0x10];
    afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
         local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11];
    local_214 = fVar10;
    local_210 = local_144;
    local_20c = local_140;
    local_1c0 = fVar10;
    afStack_234[(uint)bVar7 * -2 + 0x1e] = afStack_234[(uint)bVar7 * -2 + 9];
    afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f] =
         afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    pCVar9 = local_18;
    local_430 = local_64;
    afStack_464[(uint)bVar7 * -2 + 0xe] = afStack_90[(uint)bVar7 * -2 + 0xc];
    afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xf] =
         afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    local_2260 = (pCVar9->base).current_frame_number;
    if ((float)_DAT_005d9f74 <= local_2260) {
      if (_DAT_005d9f7c <= (double)local_2260) {
        local_2260 = 1.0 - (local_2260 + (float)_DAT_005d9f84) * (float)_DAT_005d9f8c;
        if (local_2260 < 0.0) {
          local_2260 = 0.0;
        }
      }
      else {
        local_2260 = 1.0;
      }
    }
    else {
      local_2260 = local_2260 * (float)_DAT_005d9f94;
    }
    local_3c = SQRT(local_248 * local_248 + local_250 * local_250 + local_24c * local_24c);
    if (local_3c < _DAT_005fecd8) {
      fVar8 = (float10)local_3c / (float10)_DAT_005fecd8;
      acos();
      local_48 = (float)fVar8;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
      pCVar9 = &(param_1->base).base.model;
      local_668.w = local_558;
      pfVar5 = (float *)((int)&local_668 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(float *)((int)&local_668 + (uint)bVar7 * -8 + 4) = afStack_584[(uint)bVar7 * -2 + 0xc];
      *pfVar5 = afStack_584[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      pfVar5[(uint)bVar7 * -2 + 1] =
           (afStack_584 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1];
      local_18 = pCVar9;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar9,&local_668,local_2260,_DAT_01b68820,core_skeleton_cpp_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
      local_658.w = afStack_4a4[3];
      pfVar5 = (float *)((int)&local_658 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(float *)((int)&local_658 + (uint)bVar7 * -8 + 4) = afStack_4a4[(uint)bVar7 * -2 + 4];
      *pfVar5 = afStack_4a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
      pfVar5[(uint)bVar7 * -2 + 1] =
           (afStack_4a4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_18,&local_658,local_2260,_DAT_01b68828,core_skeleton_cpp_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0();
    pCVar9 = &(param_1->base).base.model;
    local_518.w = afStack_584[3];
    pfVar5 = (float *)((int)&local_518 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_518 + (uint)bVar7 * -8 + 4) = afStack_584[(uint)bVar7 * -2 + 4];
    *pfVar5 = afStack_584[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_584 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_18 = pCVar9;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar9,&local_518,local_2260,_DAT_01b68820,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    local_488.w = local_5b8;
    pfVar5 = (float *)((int)&local_488 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_488 + (uint)bVar7 * -8 + 4) = afStack_5b4[(uint)bVar7 * -2];
    *pfVar5 = afStack_5b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_5b4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_488,local_2260,_DAT_01b68820,core_skeleton_cpp_FUN_00567360);
    pCVar1 = (param_1->base).door_to_open;
    if (pCVar1 != (CDoor *)0x0) {
      pfVar5 = (float *)((int)pCVar1 + (uint)bVar7 * -8 + 0x9c0);
      local_3f4 = (pCVar1->open_position).x;
      afStack_464[(uint)bVar7 * -2 + 0x1d] = *pfVar5;
      afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1e] = pfVar5[(uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408bb0(pCVar1);
      local_280 = local_184[0];
      afStack_2ac[(uint)bVar7 * -2 + 0xc] = local_184[(uint)bVar7 * -2 + 1];
      afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
           local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
      param_1->door_align_timer = 0.5;
      if (local_278 < 0.0) {
        EVar2 = ((param_1->base).door_to_open)->door_swing;
        if (EVar2 == DOOR_SWING_CLOCKWISE) {
          local_2b4 = 0xc0000000;
          local_2bc = EVar2;
          local_2b8 = EVar2;
          core_actor_cpp_FUN_00408ac0((param_1->base).door_to_open);
          local_364 = local_394;
          afStack_464[(uint)bVar7 * -2 + 0x41] = afStack_464[(uint)bVar7 * -2 + 0x35];
          afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x42] =
               afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x36];
          local_3f4 = local_3f4 + local_364;
          local_3f0 = local_3f0 + local_360;
          local_3ec = local_3ec + local_35c;
        }
        if (((param_1->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          param_1->door_align_timer = 0.0;
        }
      }
      if (0.0 < local_278) {
        if (((param_1->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          local_244 = 0;
          local_23c = 0x40000000;
          local_240 = 0;
          core_actor_cpp_FUN_00408ac0((param_1->base).door_to_open);
          local_7c = local_b8[0];
          afStack_90[(uint)bVar7 * -2 + 6] = local_b8[(uint)bVar7 * -2 + 1];
          afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
          local_3f4 = local_3f4 + local_7c;
          local_3f0 = local_3f0 + local_78;
          local_3ec = local_3ec + local_74;
        }
        if (((param_1->base).door_to_open)->door_swing == DOOR_SWING_CLOCKWISE) {
          param_1->door_align_timer = 0.0;
        }
      }
      local_19c[0] = local_3f4 - (param_1->base).base.base.location.position.x;
      local_19c[1] = local_3f0 - (param_1->base).base.base.location.position.y;
      local_19c[2] = local_3ec - (param_1->base).base.base.location.position.z;
      local_448 = local_19c[0];
      afStack_464[(uint)bVar7 * -2 + 8] = local_19c[(uint)bVar7 * -2 + 1];
      afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9] =
           local_19c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
      if (&param_1->door_align_offset != (CVector3f *)(afStack_464 + 7)) {
        (param_1->door_align_offset).x = local_448;
        (param_1->door_align_offset).y = local_444;
        (param_1->door_align_offset).z = local_440;
      }
      (param_1->door_align_offset).y = 0.0;
      core_actor_cpp_FUN_00408bb0(param_1);
      local_220 = local_37c;
      afStack_234[(uint)bVar7 * -2 + 6] = afStack_464[(uint)bVar7 * -2 + 0x3b];
      afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3c];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
      local_358 = local_388;
      afStack_464[(uint)bVar7 * -2 + 0x44] = afStack_464[(uint)bVar7 * -2 + 0x38];
      afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x45] =
           afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x39];
      param_1->door_align_yaw = (param_1->base).base.base.orient.vec.y + local_354;
    }
  }
  pCVar9 = &(param_1->base).base.model;
  local_28 = pCVar9;
  if (local_20 == 0x18) {
    pfVar5 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x20070);
    local_340 = (param_1->carry_object_world_center).x;
    afStack_464[(uint)bVar7 * -2 + 0x4a] = *pfVar5;
    afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x4b] = pfVar5[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(pCVar9);
    fVar10 = local_340;
    local_1fc = local_3a0;
    afStack_234[(uint)bVar7 * -2 + 0xf] = afStack_464[(uint)bVar7 * -2 + 0x32];
    afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x33];
    local_70 = fVar10 - local_1fc;
    local_6c = local_33c - local_1f8;
    local_68 = local_338 - local_1f4;
    local_3c4 = fVar10 - local_1fc;
    afStack_464[(uint)bVar7 * -2 + 0x29] = afStack_90[(uint)bVar7 * -2 + 9];
    afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2a] =
         afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    pCVar9 = local_28;
    local_100 = local_b8[3];
    local_184[(uint)bVar7 * -2 + 0x22] = local_b8[(uint)bVar7 * -2 + 4];
    local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x23] =
         local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    local_2238 = (pCVar9->base).current_frame_number;
    if ((float)_DAT_005d9fdc <= local_2238) {
      local_2238 = 1.0 - (local_2238 + (float)_DAT_005d9fe4) * (float)_DAT_005d9fec;
      if (local_2238 < 0.0) {
        local_2238 = 0.0;
      }
    }
    else {
      local_2238 = local_2238 * (float)_DAT_005d9fec;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0();
    pCVar9 = &(param_1->base).base.model;
    local_6f8.w = local_548;
    pfVar5 = (float *)((int)&local_6f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_6f8 + (uint)bVar7 * -8 + 4) = afStack_584[(uint)bVar7 * -2 + 0x10];
    *pfVar5 = afStack_584[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_584 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11)[(uint)bVar7 * -2 + 1];
    local_18 = pCVar9;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar9,&local_6f8,local_2238,_DAT_01b68858,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    local_6b8.w = local_528;
    pfVar5 = (float *)((int)&local_6b8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_6b8 + (uint)bVar7 * -8 + 4) = afStack_584[(uint)bVar7 * -2 + 0x18];
    *pfVar5 = afStack_584[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_584 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19)[(uint)bVar7 * -2 + 1];
    rotation_quat = &local_6b8;
    pCVar9 = local_18;
    iVar11 = _DAT_01b68824;
  }
  else if (local_20 == 0x16) {
    pfVar5 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x20070);
    local_28c = (param_1->carry_object_world_center).x;
    afStack_2ac[(uint)bVar7 * -2 + 9] = *pfVar5;
    afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] = pfVar5[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(pCVar9);
    fVar10 = local_28c;
    local_2ec[0] = local_328;
    local_2ec[(uint)bVar7 * -2 + 1] = afStack_464[(uint)bVar7 * -2 + 0x50];
    local_2ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
         afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x51];
    local_d0 = fVar10 - local_2ec[0];
    local_cc = local_288 - local_2ec[1];
    local_c8 = local_284 - local_2ec[2];
    local_154 = fVar10 - local_2ec[0];
    local_184[(uint)bVar7 * -2 + 0xd] = local_184[(uint)bVar7 * -2 + 0x2e];
    local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xe] =
         local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2f];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    pCVar9 = local_28;
    local_160 = local_40c;
    local_184[(uint)bVar7 * -2 + 10] = afStack_464[(uint)bVar7 * -2 + 0x17];
    local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xb] =
         afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x18];
    local_224c = (pCVar9->base).current_frame_number;
    if ((float)_DAT_005d9fc4 <= local_224c) {
      local_224c = 1.0 - (local_224c + (float)_DAT_005d9fcc) * (float)_DAT_005d9f94;
      if (local_224c < 0.0) {
        local_224c = 0.0;
      }
    }
    else {
      local_224c = local_224c * (float)_DAT_005d9fd4;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0();
    pCVar9 = &(param_1->base).base.model;
    local_478.w = afStack_684[3];
    pfVar5 = (float *)((int)&local_478 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_478 + (uint)bVar7 * -8 + 4) = afStack_684[(uint)bVar7 * -2 + 4];
    *pfVar5 = afStack_684[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_684 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_18 = pCVar9;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar9,&local_478,local_224c,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    rotation_quat = &local_598;
    local_598.w = local_648;
    pfVar5 = (float *)((int)&local_598 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_598 + (uint)bVar7 * -8 + 4) = afStack_644[(uint)bVar7 * -2];
    *pfVar5 = afStack_644[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_644 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    pCVar9 = local_18;
    local_2238 = local_224c;
    iVar11 = _DAT_01b68824;
  }
  else if (local_20 == 0x19) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              (&local_780,&(param_1->base).target_orientation.vec);
    if ((DAT_01b687f4 & 1) == 0) {
      DAT_01b687f4 = DAT_01b687f4 | 1;
    }
    this_ptr = (param_1->base).target_actor;
    if (this_ptr != (CDemonActor *)0x0) {
      (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,out_box);
      pfVar5 = afStack_750;
      pfVar6 = &fStack_738;
      for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
        pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
      }
      fStack_bc = fStack_738 + fStack_72c;
      local_b8[0] = fStack_734 + local_728;
      local_b8[1] = fStack_730 + afStack_724[0];
      fStack_1a0 = fStack_738 + fStack_72c;
      local_19c[(uint)bVar7 * -2] = local_b8[(uint)bVar7 * -2];
      local_19c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           local_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_188 = fStack_1a0 * _DAT_005d9f9c;
      local_184[0] = local_19c[0] * _DAT_005d9f9c;
      local_184[1] = local_19c[1] * _DAT_005d9f9c;
      fStack_2f0 = fStack_1a0 * _DAT_005d9f9c;
      local_2ec[(uint)bVar7 * -2] = local_184[(uint)bVar7 * -2];
      local_2ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&stack0x00000000 != (byte *)0x1b68ad4) {
        _DAT_01b687e4 = fStack_2f0;
        _DAT_01b687e8 = local_2ec[0];
        _DAT_01b687ec = local_2ec[1];
      }
    }
    core_dirmat_cpp_FUN_0045f690(&local_780);
    local_34c = local_1cc;
    afStack_464[(uint)bVar7 * -2 + 0x47] = afStack_234[(uint)bVar7 * -2 + 0x1b];
    afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x48] =
         afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
    fStack_1b4 = (param_1->base).target_position.x + local_34c;
    fStack_1b0 = (param_1->base).target_position.y + fStack_348;
    fStack_1ac = (param_1->base).target_position.z + fStack_344;
    fStack_298 = fStack_1b4;
    afStack_2ac[(uint)bVar7 * -2 + 6] = afStack_234[(uint)bVar7 * -2 + 0x21];
    afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22];
    core_actor_cpp_FUN_00408bb0(param_1);
    fStack_274 = local_a0[3];
    afStack_2ac[(uint)bVar7 * -2 + 0xf] = afStack_90[(uint)bVar7 * -2];
    afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    local_18 = &(param_1->base).base.model;
    core_skeleton_cpp_FUN_00569040(local_18);
    fVar10 = fStack_274;
    afStack_234[2] = fStack_1e4;
    afStack_234[(uint)bVar7 * -2 + 3] = afStack_234[(uint)bVar7 * -2 + 0x15];
    afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
    fStack_e8 = fVar10 - afStack_234[2];
    fStack_e4 = fStack_270 - afStack_234[3];
    fStack_e0 = fStack_26c - fStack_224;
    fStack_31c = fVar10 - afStack_234[2];
    afStack_464[(uint)bVar7 * -2 + 0x53] = local_184[(uint)bVar7 * -2 + 0x28];
    afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x54] =
         local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x29];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    pCVar9 = local_18;
    uStack_3dc = uStack_310;
    afStack_464[(uint)bVar7 * -2 + 0x23] = afStack_464[(uint)bVar7 * -2 + 0x56];
    afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x24] =
         afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x57];
    fStack_2244 = (pCVar9->base).current_frame_number;
    if ((float)_DAT_005d9fa4 <= fStack_2244) {
      fStack_2244 = 1.0 - (fStack_2244 + (float)_DAT_005d9fac) * (float)_DAT_005d9fb4;
      if (fStack_2244 < 0.0) {
        fStack_2244 = 0.0;
      }
    }
    else {
      fStack_2244 = fStack_2244 * (float)_DAT_005d9fbc;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0();
    CStack_5e8.w = afStack_5b4[3];
    pfVar5 = (float *)((int)&CStack_5e8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&CStack_5e8 + (uint)bVar7 * -8 + 4) = afStack_5b4[(uint)bVar7 * -2 + 4];
    *pfVar5 = afStack_5b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_5b4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_18 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&CStack_5e8,fStack_2244,_DAT_01b68858,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    pCVar9 = local_18;
    rotation_quat = &CStack_618;
    CStack_618.w = afStack_464[3];
    pfVar5 = (float *)((int)&CStack_618 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&CStack_618 + (uint)bVar7 * -8 + 4) = afStack_464[(uint)bVar7 * -2 + 4];
    *pfVar5 = afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_464 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_2238 = fStack_2244;
    iVar11 = _DAT_01b68824;
  }
  else if (local_20 == 0x24) {
    local_24 = &param_1->carry_object_world_center;
    if ((param_1->base).lever_to_pull == (CLever *)0x0) {
      core_lever_cpp_FUN_004ff6b0();
      local_424 = local_1f0;
      afStack_464[(uint)bVar7 * -2 + 0x11] = afStack_234[(uint)bVar7 * -2 + 0x12];
      afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x12] =
           afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
      core_actor_cpp_FUN_00408bb0(param_1);
      afStack_2ac[2] = local_25c;
      afStack_2ac[(uint)bVar7 * -2 + 3] = afStack_2ac[(uint)bVar7 * -2 + 0x15];
      afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
      if ((CVector3f *)(afStack_2ac + 2) != local_24) {
        local_24->x = afStack_2ac[2];
        local_24->y = afStack_2ac[3];
        local_24->z = local_29c;
      }
    }
    else {
      core_lever_cpp_FUN_004ff6b0();
      local_208 = local_10c;
      afStack_234[(uint)bVar7 * -2 + 0xc] = local_184[(uint)bVar7 * -2 + 0x1f];
      afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
           local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x20];
      core_actor_cpp_FUN_00408bb0(param_1);
      pCVar3 = local_24;
      local_400 = local_238;
      afStack_464[(uint)bVar7 * -2 + 0x1a] = afStack_234[(uint)bVar7 * -2];
      afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1b] =
           afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if ((CVector3f *)(afStack_464 + 0x19) != pCVar3) {
        pCVar3->x = local_400;
        pCVar3->y = local_3fc;
        pCVar3->z = local_3f8;
      }
      _DAT_01b687f0 = (param_1->base).lever_to_pull;
    }
    pCVar9 = &(param_1->base).base.model;
    pfVar5 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x20070);
    local_16c = (param_1->carry_object_world_center).x;
    local_18 = pCVar9;
    local_184[(uint)bVar7 * -2 + 7] = *pfVar5;
    local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8] = pfVar5[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(pCVar9);
    fVar10 = local_16c;
    local_370 = local_dc;
    afStack_464[(uint)bVar7 * -2 + 0x3e] = local_184[(uint)bVar7 * -2 + 0x2b];
    afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3f] =
         local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2c];
    fVar10 = fVar10 - local_370;
    local_2ec[3] = fVar10;
    local_2dc = local_168 - local_36c;
    local_2d8 = local_164 - local_368;
    local_1d8 = fVar10;
    afStack_234[(uint)bVar7 * -2 + 0x18] = local_2ec[(uint)bVar7 * -2 + 4];
    afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
         local_2ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    local_f4 = fVar10;
    local_f0 = local_2dc;
    local_ec = local_2d8;
    local_334 = fVar10;
    afStack_464[(uint)bVar7 * -2 + 0x4d] = local_184[(uint)bVar7 * -2 + 0x25];
    afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x4e] =
         local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x26];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    pCVar9 = local_18;
    local_3d0 = local_268;
    afStack_464[(uint)bVar7 * -2 + 0x26] = afStack_2ac[(uint)bVar7 * -2 + 0x12];
    afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x27] =
         afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
    local_2250 = (pCVar9->base).current_frame_number;
    if ((float)_DAT_005d9f74 <= local_2250) {
      if (_DAT_005d9f7c <= (double)local_2250) {
        local_2250 = 1.0 - (local_2250 + (float)_DAT_005d9f84) * (float)_DAT_005d9f8c;
        if (local_2250 < 0.0) {
          local_2250 = 0.0;
        }
      }
      else {
        local_2250 = 1.0;
      }
    }
    else {
      local_2250 = local_2250 * (float)_DAT_005d9f94;
    }
    local_38 = SQRT(local_1d0 * local_1d0 + local_1d8 * local_1d8 + local_1d4 * local_1d4);
    if (local_38 < _DAT_005fecd8) {
      fVar8 = (float10)local_38 / (float10)_DAT_005fecd8;
      acos();
      local_4c = (float)fVar8;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
      pCVar9 = &(param_1->base).base.model;
      local_6d8.w = local_688;
      pfVar5 = (float *)((int)&local_6d8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(float *)((int)&local_6d8 + (uint)bVar7 * -8 + 4) = afStack_684[(uint)bVar7 * -2];
      *pfVar5 = afStack_684[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pfVar5[(uint)bVar7 * -2 + 1] =
           (afStack_684 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      local_18 = pCVar9;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar9,&local_6d8,local_2250,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
      local_4c8.w = local_4e8;
      pfVar5 = (float *)((int)&local_4c8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(float *)((int)&local_4c8 + (uint)bVar7 * -8 + 4) = afStack_4e4[(uint)bVar7 * -2];
      *pfVar5 = afStack_4e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pfVar5[(uint)bVar7 * -2 + 1] =
           (afStack_4e4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_18,&local_4c8,local_2250,_DAT_01b6882c,core_skeleton_cpp_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0();
    pCVar9 = &(param_1->base).base.model;
    local_608.w = local_468;
    pfVar5 = (float *)((int)&local_608 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_608 + (uint)bVar7 * -8 + 4) = afStack_464[(uint)bVar7 * -2];
    *pfVar5 = afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_464 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    local_18 = pCVar9;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar9,&local_608,local_2250,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    rotation_quat = &local_5f8;
    local_5f8.w = local_728;
    pfVar5 = (float *)((int)&local_5f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_5f8 + (uint)bVar7 * -8 + 4) = afStack_724[(uint)bVar7 * -2];
    *pfVar5 = afStack_724[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_724 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    pCVar9 = local_18;
    local_2238 = local_2250;
    iVar11 = _DAT_01b68824;
  }
  else if (local_20 == 0x1a) {
    local_2264 = (param_1->base).base.model.base.current_frame_number * (float)_DAT_005d9f8c;
    if (1.0 < local_2264) {
      local_2264 = 1.0;
    }
    fVar8 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005fecd8,
                            (float10)1);
    local_44 = (float)fVar8;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    local_6a8.w = local_6c8;
    pfVar5 = (float *)((int)&local_6a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_6a8 + (uint)bVar7 * -8 + 4) = afStack_6c4[(uint)bVar7 * -2];
    *pfVar5 = afStack_6c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_6c4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    local_18 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_6a8,local_2264,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    pCVar9 = local_18;
    rotation_quat = &local_6a8;
    local_6a8.w = local_508;
    pfVar5 = (float *)((int)&local_6a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_6a8 + (uint)bVar7 * -8 + 4) = afStack_504[(uint)bVar7 * -2];
    *pfVar5 = afStack_504[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_504 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    local_2238 = local_2264;
    iVar11 = _DAT_01b68820;
  }
  else if (local_20 == 0x1b) {
    local_2234 = (param_1->base).base.model.base.current_frame_number;
    if ((float)_DAT_005d9f7c <= local_2234) {
      local_2234 = 1.0 - (local_2234 + (float)_DAT_005d9f84) * (float)_DAT_005d9f8c;
    }
    else {
      local_2234 = local_2234 * (float)_DAT_005d9f8c;
    }
    if (1.0 < local_2234) {
      local_2234 = 1.0;
    }
    if (local_2234 < 0.0) {
      local_2234 = 0.0;
    }
    core_skeleton_cpp_FUN_00569040(&(param_1->base).base.model);
    local_124 = local_43c;
    local_184[(uint)bVar7 * -2 + 0x19] = afStack_464[(uint)bVar7 * -2 + 0xb];
    local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1a] =
         afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xc];
    local_30 = ((param_1->carry_object_world_center).y + (param_1->carry_object_bbox).max.y) -
               (param_1->carry_object_bbox).min.y;
    if ((param_1->base).object_to_pick_up != (CDemonActor *)0x0) {
      _DAT_01b688ac = (CDeformableModelInstance *)core_doc_cpp_FUN_00468b80();
      local_18 = _DAT_01b688ac;
    }
    local_30 = local_30 - (float)_DAT_01b688ac;
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0();
    local_4f8.w = afStack_724[3];
    pfVar5 = (float *)((int)&local_4f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_4f8 + (uint)bVar7 * -8 + 4) = afStack_724[(uint)bVar7 * -2 + 4];
    *pfVar5 = afStack_724[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_724 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_18 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_4f8,local_2234,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_4f8,local_2234,_DAT_01b68820,core_skeleton_cpp_FUN_00567360);
    fVar8 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005fecd8,
                            (float10)1);
    local_40 = (float)fVar8;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    local_4d8.w = local_538;
    pfVar5 = (float *)((int)&local_4d8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_4d8 + (uint)bVar7 * -8 + 4) = afStack_584[(uint)bVar7 * -2 + 0x14];
    *pfVar5 = afStack_584[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_584 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_4d8,local_2234,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    pCVar9 = local_18;
    rotation_quat = &local_4d8;
    local_4d8.w = local_4a8;
    pfVar5 = (float *)((int)&local_4d8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_4d8 + (uint)bVar7 * -8 + 4) = afStack_4a4[(uint)bVar7 * -2];
    *pfVar5 = afStack_4a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_4a4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    local_2238 = local_2234;
    iVar11 = _DAT_01b68820;
  }
  else if (local_20 == 0x1c) {
    local_225c = 1.0 - ((param_1->base).base.model.base.current_frame_number + (float)_DAT_005d9f84)
                       * (float)_DAT_005d9f8c;
    if (local_225c < 0.0) {
      local_225c = 0.0;
    }
    if (1.0 < local_225c) {
      local_225c = 1.0;
    }
    fVar8 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005fecd8,
                            (float10)1);
    local_1c = (float)fVar8;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    pCVar9 = &(param_1->base).base.model;
    local_4b8.w = local_6e8;
    pfVar5 = (float *)((int)&local_4b8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_4b8 + (uint)bVar7 * -8 + 4) = afStack_6e4[(uint)bVar7 * -2];
    *pfVar5 = afStack_6e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_6e4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    local_18 = pCVar9;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar9,&local_4b8,local_225c,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    rotation_quat = &local_4b8;
    local_4b8.w = local_588;
    pfVar5 = (float *)((int)&local_4b8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_4b8 + (uint)bVar7 * -8 + 4) = afStack_584[(uint)bVar7 * -2];
    *pfVar5 = afStack_584[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_584 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    pCVar9 = local_18;
    local_2238 = local_225c;
    iVar11 = _DAT_01b68820;
  }
  else {
    if (local_20 != 0x1d) goto LAB_0046d3c6;
    local_2240 = (param_1->base).base.model.base.current_frame_number;
    if (local_2240 < (float)_DAT_005d9f7c) {
      local_2240 = local_2240 * (float)_DAT_005d9f8c;
    }
    else {
      local_2240 = 1.0 - (local_2240 + (float)_DAT_005d9f84) * (float)_DAT_005d9f8c;
    }
    if (1.0 < local_2240) {
      local_2240 = 1.0;
    }
    if (local_2240 < 0.0) {
      local_2240 = 0.0;
    }
    local_18 = &(param_1->base).base.model;
    core_skeleton_cpp_FUN_00569040(local_18);
    local_118 = local_418;
    local_184[(uint)bVar7 * -2 + 0x1c] = afStack_464[(uint)bVar7 * -2 + 0x14];
    local_184[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1d] =
         afStack_464[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0();
    pCVar9 = local_18;
    local_708.w = afStack_644[3];
    pfVar5 = (float *)((int)&local_708 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_708 + (uint)bVar7 * -8 + 4) = afStack_644[(uint)bVar7 * -2 + 4];
    *pfVar5 = afStack_644[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_644 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar9,&local_708,local_2240,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_708,local_2240,_DAT_01b68820,core_skeleton_cpp_FUN_00567360);
    fVar8 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005fecd8,
                            (float10)1);
    local_50 = (float)fVar8;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    local_5c8.w = local_5d8;
    pfVar5 = (float *)((int)&local_5c8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_5c8 + (uint)bVar7 * -8 + 4) = afStack_5d4[(uint)bVar7 * -2];
    *pfVar5 = afStack_5d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_5d4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_5c8,local_2240,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30();
    pCVar9 = local_18;
    rotation_quat = &local_5c8;
    local_5c8.w = local_628;
    pfVar5 = (float *)((int)&local_5c8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_5c8 + (uint)bVar7 * -8 + 4) = afStack_644[(uint)bVar7 * -2 + 8];
    *pfVar5 = afStack_644[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_644 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    local_2238 = local_2240;
    iVar11 = _DAT_01b68820;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (pCVar9,rotation_quat,local_2238,iVar11,core_skeleton_cpp_FUN_00567360);
LAB_0046d3c6:
  if (g_CGamePtr->goggles_active != 0) {
    local_a0[1] = 0.0;
    local_a0[2] = 0.0;
    local_a0[0] = 0.0;
    if ((param_1->guns_drawn != 0) && (param_1->weapon != (CWeapon *)0x0)) {
      local_a0[0] = (param_1->right_arm_aim).target_pitch;
    }
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar10 = 1.0;
    iVar11 = _DAT_01b68814;
    core_xform_cpp_FUN_005b7ed0(local_b8 + 6);
    local_698.w = local_568;
    pfVar5 = (float *)((int)&local_698 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_698 + (uint)bVar7 * -8 + 4) = afStack_584[(uint)bVar7 * -2 + 8];
    *pfVar5 = afStack_584[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    pfVar5[(uint)bVar7 * -2 + 1] =
         (afStack_584 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (&(param_1->base).base.model,&local_698,fVar10,iVar11,blend_callback);
  }
  if (0.0 < param_1->interact_blend) {
    iVar11 = 1;
    motion_name = "?draw_holsters2aimPistols" + 1;
    pCVar9 = &(param_1->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar9);
    iVar11 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                       (&this_ptr_00->motion_list,motion_name,iVar11);
    local_34 = core_motion_cpp_FUN_00525110(pCVar9,iVar11);
    local_18 = (CDeformableModelInstance *)local_34;
    core_skeleton_cpp_FUN_00568100(pCVar9,iVar11,local_34,param_1->interact_blend,_DAT_01b68854);
    return;
  }
  return;
}
