// Name: core_prye.cpp_FUN_0051c1c0
// Address: 0051c1c0
// Address Range: [[0051c1c0, 0051e277]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051c1c0(CPrye *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051c1c0(CPrye *param_1)

{
  CDoor *pCVar1;
  EDoorSwing EVar2;
  CMotionController *pCVar3;
  CVector3f *pCVar4;
  SMotion *pSVar5;
  CSkeleton *this_ptr;
  CDemonActor *pCVar6;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  float10 fVar10;
  CDeformableModelInstance *pCVar11;
  CQuaternion4f *pCVar12;
  float fVar13;
  char *motion_name;
  code *pcVar14;
  int iVar15;
  CBoundingBox3D *in_stack_ffffdb68;
  float local_2450;
  float local_244c;
  float local_2448;
  float local_2444;
  float local_2434;
  float local_2424;
  CDeformableModelInstance *local_2420;
  float local_2418;
  float fStack_2414;
  float local_240c;
  SPoseData local_2404;
  float afStack_1dac [1297];
  CMatrix3x3f local_968;
  float afStack_938 [6];
  float fStack_920;
  float fStack_91c;
  float fStack_918;
  float fStack_914;
  float local_910;
  float afStack_90c [7];
  CQuaternion4f local_8f0;
  float local_8e0;
  float afStack_8dc [7];
  float local_8c0;
  float local_8b0 [4];
  uint local_8a0;
  CQuaternion4f local_890;
  float local_880;
  float afStack_87c [7];
  float local_860 [4];
  float local_850 [4];
  float local_840;
  float local_830;
  uint local_820;
  CQuaternion4f local_810;
  float local_800;
  float afStack_7fc [3];
  CQuaternion4f local_7f0;
  float local_7e0;
  float afStack_7dc [3];
  CQuaternion4f local_7d0;
  float local_7c0;
  float afStack_7bc [7];
  CQuaternion4f local_7a0;
  float local_790;
  float afStack_78c [7];
  float local_770;
  uint local_760;
  float local_750;
  float local_740;
  float local_730;
  CQuaternion4f local_720;
  CQuaternion4f CStack_710;
  float local_700;
  float afStack_6fc [7];
  float local_6e0 [4];
  float fStack_6d0;
  float local_6c0;
  CQuaternion4f local_6b0;
  uint local_6a0;
  float afStack_69c [7];
  CQuaternion4f local_680;
  CQuaternion4f local_670;
  float local_660;
  float afStack_65c [3];
  CQuaternion4f local_650;
  float local_640;
  float afStack_63c [7];
  CQuaternion4f local_620;
  float local_610;
  float afStack_60c [3];
  CQuaternion4f local_600;
  float local_5f0;
  float afStack_5ec [7];
  CQuaternion4f local_5d0;
  CQuaternion4f local_5c0;
  uint local_5b0;
  float afStack_5ac [7];
  float local_590;
  CQuaternion4f local_580;
  CQuaternion4f local_570;
  uint local_560;
  float afStack_55c [7];
  uint local_540;
  CQuaternion4f local_530;
  uint local_520;
  float afStack_51c [7];
  uint local_500;
  float local_4f0;
  float local_4e0;
  float local_4d0;
  CQuaternion4f CStack_4c0;
  float local_4b0;
  float afStack_4ac [3];
  CQuaternion4f local_4a0;
  uint local_490;
  float afStack_48c [7];
  CQuaternion4f local_470;
  uint local_460;
  float afStack_45c [6];
  uint uStack_444;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float fStack_400;
  float local_3fc [6];
  uint local_3e4;
  float local_3d8;
  float local_3cc;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  uint local_384;
  float local_380;
  uint local_378;
  CVector3f local_36c;
  float local_360;
  float afStack_35c [5];
  uint local_348;
  float local_33c;
  float local_338;
  float local_334;
  CVector3f local_330;
  float local_324;
  float local_320 [5];
  uint local_30c;
  CVector3f local_300;
  CVector3f CStack_2f4;
  float local_2e8;
  float local_2e4;
  float local_2e0 [4];
  float local_2d0 [6];
  float local_2b8 [4];
  float local_2a8 [5];
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  uint local_270;
  uint local_264;
  uint local_260;
  uint local_25c;
  float fStack_258;
  float afStack_254 [4];
  float local_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  uint uStack_234;
  CVector3f local_228;
  uint local_21c;
  float afStack_218 [5];
  float local_204;
  float local_1f8;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  uint local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint local_1b0;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float fStack_178;
  float afStack_174 [4];
  float local_164;
  float local_160;
  EDoorSwing local_15c;
  EDoorSwing local_158;
  uint local_154;
  CVector3f local_150;
  uint local_144;
  float afStack_140 [5];
  float local_12c;
  float local_128;
  float local_124;
  uint local_120;
  float local_114;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_dc;
  float afStack_d8 [6];
  float fStack_c0;
  float local_b4;
  float fStack_a8;
  float local_9c;
  uint local_90;
  uint local_84;
  CVector3f local_78;
  float local_6c;
  float afStack_68 [4];
  float local_58;
  CDeformableModelInstance *local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CQuaternion4f *local_2c;
  float local_28;
  CVector3f *local_24;
  CVector3f *local_20;
  int local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar9 = 0;
  pCVar11 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar11);
  local_14 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(pCVar11);
  local_2420 = local_14;
  if ((int)param_1->turn_blend_weight < 0x3e19999a) {
    local_2420 = (CDeformableModelInstance *)
                 ((param_1->turn_blend_weight / _DAT_005cd337) * (float)local_14);
  }
  if (0.85 < param_1->turn_blend_weight) {
    local_2420 = (CDeformableModelInstance *)
                 (((1.0 - param_1->turn_blend_weight) / 0.15) * (float)local_2420);
  }
  pCVar11 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCVar11);
  if ((0.0 < (float)local_2420) && (-1 < param_1->turn_motion_index)) {
    core_prye_cpp_FUN_0051e280(param_1);
    local_2404.root_position.x = 0.0;
    local_2404.root_position.z = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0054d3c0
              (pCVar11,&local_2404,(float)local_2420,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
  }
  core_prye_cpp_CPrye_makeDrawDecision_FUN_0051e6d0(param_1);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(param_1->base).base.model.base);
  local_1c = pSVar5->state_index;
  if (((local_1c == 0x2b) || (local_1c == 0x2a)) || (local_1c == 0x27)) {
    local_24 = &param_1->carry_object_world_center;
    if ((param_1->base).door_to_open == (CDoor *)0x0) {
      core_door_cpp_FUN_00464c10();
      local_378 = afStack_35c[2];
      local_3fc[(uint)bVar9 * -2 + 0x22] = afStack_35c[(uint)bVar9 * -2 + 3];
      local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x23] =
           afStack_35c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      core_actor_cpp_FUN_00408bf0(param_1);
      local_12c = local_360;
      afStack_140[(uint)bVar9 * -2 + 6] = afStack_35c[(uint)bVar9 * -2];
      afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           afStack_35c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if ((CVector3f *)(afStack_140 + 5) != local_24) {
        local_24->x = local_12c;
        local_24->y = local_128;
        local_24->z = local_124;
      }
    }
    else {
      core_door_cpp_FUN_00464c10();
      local_2a8[2] = afStack_d8[3];
      local_2a8[(uint)bVar9 * -2 + 3] = afStack_d8[(uint)bVar9 * -2 + 4];
      local_2a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      core_actor_cpp_FUN_00408bf0(param_1);
      pCVar4 = local_24;
      afStack_174[3] = local_9c;
      afStack_174[(uint)bVar9 * -2 + 4] = afStack_d8[(uint)bVar9 * -2 + 0x10];
      afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5] =
           afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11];
      if ((CVector3f *)(afStack_174 + 3) != pCVar4) {
        pCVar4->x = afStack_174[3];
        pCVar4->y = local_164;
        pCVar4->z = local_160;
      }
      _DAT_01ed36a8 = (param_1->base).door_to_open;
    }
    pCVar11 = &(param_1->base).base.model;
    pfVar7 = (float *)((int)param_1 + (uint)bVar9 * -8 + 0x20c90);
    local_fc = (param_1->carry_object_world_center).x;
    local_14 = pCVar11;
    afStack_140[(uint)bVar9 * -2 + 0x12] = *pfVar7;
    afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] = pfVar7[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar11,_DAT_01ed36e8,&local_150);
    fVar13 = local_fc;
    local_288 = local_150.x;
    local_2a8[(uint)bVar9 * -2 + 9] = *(float *)((int)&local_150 + (uint)bVar9 * -8 + 4);
    local_2a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         *(float *)((int)&local_150 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fVar13 = fVar13 - local_288;
    local_33c = fVar13;
    local_338 = local_f8 - local_284;
    local_334 = local_f4 - local_280;
    local_294 = fVar13;
    local_2a8[(uint)bVar9 * -2 + 6] = afStack_35c[(uint)bVar9 * -2 + 9];
    local_2a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_35c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    local_27c = fVar13;
    local_278 = local_338;
    local_274 = local_334;
    local_2d0[0] = fVar13;
    local_2d0[(uint)bVar9 * -2 + 1] = local_2a8[(uint)bVar9 * -2 + 0xc];
    local_2d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 2] =
         local_2a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    pCVar11 = local_14;
    afStack_140[2] = local_3fc[3];
    afStack_140[(uint)bVar9 * -2 + 3] = local_3fc[(uint)bVar9 * -2 + 4];
    afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    local_2450 = (pCVar11->base).current_frame_number;
    if ((float)_DAT_005cd33f <= local_2450) {
      if (_DAT_005cd347 <= (double)local_2450) {
        local_2450 = 1.0 - (local_2450 + (float)_DAT_005cd34f) * (float)_DAT_005cd357;
        if (local_2450 < 0.0) {
          local_2450 = 0.0;
        }
      }
      else {
        local_2450 = 1.0;
      }
    }
    else {
      local_2450 = local_2450 * (float)_DAT_005cd35f;
    }
    local_38 = SQRT(local_28c * local_28c + local_294 * local_294 + local_290 * local_290);
    if (local_38 < _DAT_005e352c) {
      fVar10 = (float10)local_38 / (float10)_DAT_005e352c;
      acos();
      local_40 = (float)fVar10;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
      pCVar11 = &(param_1->base).base.model;
      local_620.w = local_660;
      pfVar7 = (float *)((int)&local_620 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(float *)((int)&local_620 + (uint)bVar9 * -8 + 4) = afStack_65c[(uint)bVar9 * -2];
      *pfVar7 = afStack_65c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      pfVar7[(uint)bVar9 * -2 + 1] =
           (afStack_65c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      local_14 = pCVar11;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar11,&local_620,local_2450,_DAT_01ed36e8,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
      local_470.w = local_750;
      pfVar7 = (float *)((int)&local_470 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(float *)((int)&local_470 + (uint)bVar9 * -8 + 4) = afStack_78c[(uint)bVar9 * -2 + 0x10];
      *pfVar7 = afStack_78c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11];
      pfVar7[(uint)bVar9 * -2 + 1] =
           (afStack_78c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_14,&local_470,local_2450,_DAT_01ed36f0,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0();
    pCVar11 = &(param_1->base).base.model;
    local_580.w = local_7c0;
    pfVar7 = (float *)((int)&local_580 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_580 + (uint)bVar9 * -8 + 4) = afStack_7bc[(uint)bVar9 * -2];
    *pfVar7 = afStack_7bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_7bc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    local_14 = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar11,&local_580,local_2450,_DAT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    local_890.w = local_840;
    pfVar7 = (float *)((int)&local_890 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_890 + (uint)bVar9 * -8 + 4) = afStack_87c[(uint)bVar9 * -2 + 0x10];
    *pfVar7 = afStack_87c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_87c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_890,local_2450,_DAT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    pCVar1 = (param_1->base).door_to_open;
    if (pCVar1 != (CDoor *)0x0) {
      pfVar7 = (float *)((int)pCVar1 + (uint)bVar9 * -8 + 0x9c0);
      local_390 = (pCVar1->open_position).x;
      local_3fc[(uint)bVar9 * -2 + 0x1c] = *pfVar7;
      local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1d] = pfVar7[(uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408bf0(pCVar1);
      local_1e0 = local_3e4;
      afStack_218[(uint)bVar9 * -2 + 0xf] = local_3fc[(uint)bVar9 * -2 + 7];
      afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 8];
      param_1->door_align_timer = 0.5;
      if (local_1d8 < 0.0) {
        EVar2 = ((param_1->base).door_to_open)->door_swing;
        if (EVar2 == DOOR_SWING_CLOCKWISE) {
          local_154 = 0xc0000000;
          local_15c = EVar2;
          local_158 = EVar2;
          core_actor_cpp_FUN_00408b00((param_1->base).door_to_open);
          local_18c = local_b4;
          afStack_218[(uint)bVar9 * -2 + 0x24] = afStack_d8[(uint)bVar9 * -2 + 10];
          afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
               afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xb];
          local_390 = local_390 + local_18c;
          local_38c = local_38c + local_188;
          local_388 = local_388 + local_184;
        }
        if (((param_1->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          param_1->door_align_timer = 0.0;
        }
      }
      if (0.0 < local_1d8) {
        if (((param_1->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          local_264 = 0;
          local_25c = 0x40000000;
          local_260 = 0;
          core_actor_cpp_FUN_00408b00((param_1->base).door_to_open);
          local_1a4 = local_1f8;
          afStack_218[(uint)bVar9 * -2 + 0x1e] = afStack_218[(uint)bVar9 * -2 + 9];
          afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
               afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          local_390 = local_390 + local_1a4;
          local_38c = local_38c + local_1a0;
          local_388 = local_388 + local_19c;
        }
        if (((param_1->base).door_to_open)->door_swing == DOOR_SWING_CLOCKWISE) {
          param_1->door_align_timer = 0.0;
        }
      }
      local_324 = local_390 - (param_1->base).base.base.location.position.x;
      local_320[0] = local_38c - (param_1->base).base.base.location.position.y;
      local_320[1] = local_388 - (param_1->base).base.base.location.position.z;
      local_1d4 = local_324;
      afStack_218[(uint)bVar9 * -2 + 0x12] = local_320[(uint)bVar9 * -2];
      afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
           local_320[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if (&param_1->door_align_offset != (CVector3f *)(afStack_218 + 0x11)) {
        (param_1->door_align_offset).x = local_1d4;
        (param_1->door_align_offset).y = local_1d0;
        (param_1->door_align_offset).z = local_1cc;
      }
      (param_1->door_align_offset).y = 0.0;
      core_actor_cpp_FUN_00408bf0(param_1);
      local_348 = afStack_218[2];
      afStack_35c[(uint)bVar9 * -2 + 6] = afStack_218[(uint)bVar9 * -2 + 3];
      afStack_35c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      local_384 = local_30c;
      local_3fc[(uint)bVar9 * -2 + 0x1f] = local_320[(uint)bVar9 * -2 + 6];
      local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x20] =
           local_320[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      param_1->door_align_yaw = (param_1->base).base.base.orient.vec.y + local_380;
    }
  }
  pCVar11 = &(param_1->base).base.model;
  local_18 = pCVar11;
  if (local_1c == 0x20) {
    pfVar7 = (float *)((int)param_1 + (uint)bVar9 * -8 + 0x20c90);
    local_414 = (param_1->carry_object_world_center).x;
    afStack_45c[(uint)bVar9 * -2 + 0x13] = *pfVar7;
    afStack_45c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x14] = pfVar7[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar11,_DAT_01ed36ec,&local_78);
    fVar13 = local_414;
    local_3b4 = local_78.x;
    local_3fc[(uint)bVar9 * -2 + 0x13] = *(float *)((int)&local_78 + (uint)bVar9 * -8 + 4);
    local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x14] =
         *(float *)((int)&local_78 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_420 = fVar13 - local_3b4;
    local_41c = local_410 - local_3b0;
    local_418 = local_40c - local_3ac;
    local_f0 = fVar13 - local_3b4;
    afStack_140[(uint)bVar9 * -2 + 0x15] = afStack_45c[(uint)bVar9 * -2 + 0x10];
    afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
         afStack_45c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    pCVar11 = local_18;
    local_3fc[0] = local_2d0[3];
    local_3fc[(uint)bVar9 * -2 + 1] = local_2d0[(uint)bVar9 * -2 + 4];
    local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 2] =
         local_2d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    local_2448 = (pCVar11->base).current_frame_number;
    if ((float)_DAT_005cd3a7 <= local_2448) {
      local_2448 = 1.0 - (local_2448 + (float)_DAT_005cd3af) * (float)_DAT_005cd3b7;
      if (local_2448 < 0.0) {
        local_2448 = 0.0;
      }
    }
    else {
      local_2448 = local_2448 * (float)_DAT_005cd3b7;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0();
    pCVar11 = &(param_1->base).base.model;
    local_8f0.w = local_5f0;
    pfVar7 = (float *)((int)&local_8f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_8f0 + (uint)bVar9 * -8 + 4) = afStack_5ec[(uint)bVar9 * -2];
    *pfVar7 = afStack_5ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_5ec + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    local_14 = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar11,&local_8f0,local_2448,_DAT_01ed3720,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    local_720.w = local_4b0;
    pfVar7 = (float *)((int)&local_720 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_720 + (uint)bVar9 * -8 + 4) = afStack_4ac[(uint)bVar9 * -2];
    *pfVar7 = afStack_4ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_4ac + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    pCVar12 = &local_720;
    pCVar11 = local_14;
    iVar15 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x1e) {
    pfVar7 = (float *)((int)param_1 + (uint)bVar9 * -8 + 0x20c90);
    local_198 = (param_1->carry_object_world_center).x;
    afStack_218[(uint)bVar9 * -2 + 0x21] = *pfVar7;
    afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22] = pfVar7[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar11,_DAT_01ed36ec,&local_228);
    fVar13 = local_198;
    local_1ec = local_228.x;
    afStack_218[(uint)bVar9 * -2 + 0xc] = *(float *)((int)&local_228 + (uint)bVar9 * -8 + 4);
    afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         *(float *)((int)&local_228 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_3c0 = fVar13 - local_1ec;
    local_3bc = local_194 - local_1e8;
    local_3b8 = local_190 - local_1e4;
    local_6c = fVar13 - local_1ec;
    afStack_68[(uint)bVar9 * -2] = local_3fc[(uint)bVar9 * -2 + 0x10];
    afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    pCVar11 = local_18;
    local_90 = local_320[2];
    afStack_d8[(uint)bVar9 * -2 + 0x13] = local_320[(uint)bVar9 * -2 + 3];
    afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x14] =
         local_320[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    local_2444 = (pCVar11->base).current_frame_number;
    if ((float)_DAT_005cd38f <= local_2444) {
      local_2444 = 1.0 - (local_2444 + (float)_DAT_005cd397) * (float)_DAT_005cd35f;
      if (local_2444 < 0.0) {
        local_2444 = 0.0;
      }
    }
    else {
      local_2444 = local_2444 * (float)_DAT_005cd39f;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0();
    pCVar11 = &(param_1->base).base.model;
    local_810.w = local_830;
    pfVar7 = (float *)((int)&local_810 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_810 + (uint)bVar9 * -8 + 4) = afStack_87c[(uint)bVar9 * -2 + 0x14];
    *pfVar7 = afStack_87c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_87c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15)[(uint)bVar9 * -2 + 1];
    local_14 = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar11,&local_810,local_2444,_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar12 = &local_4a0;
    local_4a0.w = local_8e0;
    pfVar7 = (float *)((int)&local_4a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_4a0 + (uint)bVar9 * -8 + 4) = afStack_8dc[(uint)bVar9 * -2];
    *pfVar7 = afStack_8dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_8dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    pCVar11 = local_14;
    local_2448 = local_2444;
    iVar15 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x21) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
              (&local_968,&(param_1->base).target_orientation.vec);
    if ((DAT_01ed36bc & 1) == 0) {
      DAT_01ed36bc = DAT_01ed36bc | 1;
    }
    pCVar6 = (param_1->base).target_actor;
    if (pCVar6 != (CDemonActor *)0x0) {
      (*((pCVar6->vtable)._ub)->getBoundingBox)(pCVar6,in_stack_ffffdb68);
      pfVar7 = afStack_938;
      pfVar8 = &fStack_920;
      for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
        pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
      }
      fStack_400 = fStack_920 + fStack_914;
      local_3fc[0] = fStack_91c + local_910;
      local_3fc[1] = fStack_918 + afStack_90c[0];
      local_2e0[3] = fStack_920 + fStack_914;
      local_2d0[(uint)bVar9 * -2] = local_3fc[(uint)bVar9 * -2];
      local_2d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      fStack_dc = local_2e0[3] * _DAT_005cd367;
      afStack_d8[0] = local_2d0[0] * _DAT_005cd367;
      afStack_d8[1] = local_2d0[1] * _DAT_005cd367;
      fStack_178 = local_2e0[3] * _DAT_005cd367;
      afStack_174[(uint)bVar9 * -2] = afStack_d8[(uint)bVar9 * -2];
      afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if (&stack0x00000000 != (byte *)0x1ed3824) {
        _DAT_01ed36ac = fStack_178;
        _DAT_01ed36b0 = afStack_174[0];
        _DAT_01ed36b4 = afStack_174[1];
      }
    }
    core_dirmat_cpp_FUN_0045b800(&local_968);
    local_1c8 = local_3cc;
    afStack_218[(uint)bVar9 * -2 + 0x15] = local_3fc[(uint)bVar9 * -2 + 0xd];
    afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
         local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xe];
    afStack_d8[0] = (param_1->base).target_position.x + local_1c8;
    afStack_d8[1] = (param_1->base).target_position.y + fStack_1c4;
    afStack_d8[2] = (param_1->base).target_position.z + fStack_1c0;
    fStack_1bc = afStack_d8[0];
    afStack_218[(uint)bVar9 * -2 + 0x18] = afStack_d8[(uint)bVar9 * -2 + 1];
    afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
         afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 2];
    core_actor_cpp_FUN_00408bf0(param_1);
    fStack_240 = fStack_a8;
    afStack_254[(uint)bVar9 * -2 + 6] = afStack_d8[(uint)bVar9 * -2 + 0xd];
    afStack_254[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xe];
    local_14 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (local_14,_DAT_01ed36ec,&CStack_2f4);
    fVar13 = fStack_240;
    afStack_174[0] = CStack_2f4.x;
    afStack_174[(uint)bVar9 * -2 + 1] = *(float *)((int)&CStack_2f4 + (uint)bVar9 * -8 + 4);
    afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 2] =
         *(float *)((int)&CStack_2f4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fStack_258 = fVar13 - afStack_174[0];
    afStack_254[0] = fStack_23c - afStack_174[1];
    afStack_254[1] = fStack_238 - afStack_174[2];
    fStack_c0 = fVar13 - afStack_174[0];
    afStack_d8[(uint)bVar9 * -2 + 7] = afStack_254[(uint)bVar9 * -2];
    afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 8] =
         afStack_254[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    pCVar11 = local_14;
    uStack_234 = uStack_444;
    afStack_254[(uint)bVar9 * -2 + 9] = afStack_45c[(uint)bVar9 * -2 + 7];
    afStack_254[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         afStack_45c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 8];
    fStack_2414 = (pCVar11->base).current_frame_number;
    if ((float)_DAT_005cd36f <= fStack_2414) {
      fStack_2414 = 1.0 - (fStack_2414 + (float)_DAT_005cd377) * (float)_DAT_005cd37f;
      if (fStack_2414 < 0.0) {
        fStack_2414 = 0.0;
      }
    }
    else {
      fStack_2414 = fStack_2414 * (float)_DAT_005cd387;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0();
    CStack_710.w = afStack_63c[3];
    pfVar7 = (float *)((int)&CStack_710 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&CStack_710 + (uint)bVar9 * -8 + 4) = afStack_63c[(uint)bVar9 * -2 + 4];
    *pfVar7 = afStack_63c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_63c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    local_14 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&CStack_710,fStack_2414,_DAT_01ed3720,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar11 = local_14;
    pCVar12 = &CStack_4c0;
    CStack_4c0.w = fStack_6d0;
    pfVar7 = (float *)((int)&CStack_4c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&CStack_4c0 + (uint)bVar9 * -8 + 4) = afStack_6fc[(uint)bVar9 * -2 + 0xc];
    *pfVar7 = afStack_6fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_6fc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1];
    local_2448 = fStack_2414;
    iVar15 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x2c) {
    local_20 = &param_1->carry_object_world_center;
    if ((param_1->base).lever_to_pull == (CLever *)0x0) {
      core_lever_cpp_FUN_004e0770();
      local_21c = local_270;
      afStack_218[(uint)bVar9 * -2] = local_2a8[(uint)bVar9 * -2 + 0xf];
      afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           local_2a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
      core_actor_cpp_FUN_00408bf0(param_1);
      local_39c = afStack_45c[3];
      local_3fc[(uint)bVar9 * -2 + 0x19] = afStack_45c[(uint)bVar9 * -2 + 4];
      local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1a] =
           afStack_45c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      if ((CVector3f *)(local_3fc + 0x18) != local_20) {
        local_20->x = local_39c;
        local_20->y = local_398;
        local_20->z = local_394;
      }
    }
    else {
      core_lever_cpp_FUN_004e0770();
      local_144 = local_120;
      afStack_140[(uint)bVar9 * -2] = afStack_140[(uint)bVar9 * -2 + 9];
      afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
      core_actor_cpp_FUN_00408bf0(param_1);
      pCVar4 = local_20;
      local_108 = local_114;
      afStack_140[(uint)bVar9 * -2 + 0xf] = afStack_140[(uint)bVar9 * -2 + 0xc];
      afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      if ((CVector3f *)(afStack_140 + 0xe) != pCVar4) {
        pCVar4->x = local_108;
        pCVar4->y = local_104;
        pCVar4->z = local_100;
      }
      _DAT_01ed36b8 = (param_1->base).lever_to_pull;
    }
    pCVar11 = &(param_1->base).base.model;
    pfVar7 = (float *)((int)param_1 + (uint)bVar9 * -8 + 0x20c90);
    local_438 = (param_1->carry_object_world_center).x;
    local_14 = pCVar11;
    afStack_45c[(uint)bVar9 * -2 + 10] = *pfVar7;
    afStack_45c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xb] = pfVar7[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar11,_DAT_01ed36ec,&local_36c);
    fVar13 = local_438;
    local_3a8 = local_36c.x;
    local_3fc[(uint)bVar9 * -2 + 0x16] = *(float *)((int)&local_36c + (uint)bVar9 * -8 + 4);
    local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x17] =
         *(float *)((int)&local_36c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fVar13 = fVar13 - local_3a8;
    local_2e8 = fVar13;
    local_2e4 = local_434 - local_3a4;
    local_2e0[0] = local_430 - local_3a0;
    local_42c = fVar13;
    afStack_45c[(uint)bVar9 * -2 + 0xd] = local_2e0[(uint)bVar9 * -2 + -1];
    afStack_45c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xe] =
         local_2e0[(uint)bVar9 * -2 + (uint)bVar9 * -2];
    afStack_254[2] = fVar13;
    afStack_254[3] = local_2e4;
    local_244 = local_2e0[0];
    local_3d8 = fVar13;
    local_3fc[(uint)bVar9 * -2 + 10] = afStack_254[(uint)bVar9 * -2 + 3];
    local_3fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xb] =
         afStack_254[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    pCVar11 = local_14;
    local_84 = local_1b0;
    afStack_d8[(uint)bVar9 * -2 + 0x16] = afStack_218[(uint)bVar9 * -2 + 0x1b];
    afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x17] =
         afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
    local_2424 = (pCVar11->base).current_frame_number;
    if ((float)_DAT_005cd33f <= local_2424) {
      if (_DAT_005cd347 <= (double)local_2424) {
        local_2424 = 1.0 - (local_2424 + (float)_DAT_005cd34f) * (float)_DAT_005cd357;
        if (local_2424 < 0.0) {
          local_2424 = 0.0;
        }
      }
      else {
        local_2424 = 1.0;
      }
    }
    else {
      local_2424 = local_2424 * (float)_DAT_005cd35f;
    }
    local_3c = SQRT(local_424 * local_424 + local_42c * local_42c + local_428 * local_428);
    if (local_3c < _DAT_005e352c) {
      fVar10 = (float10)local_3c / (float10)_DAT_005e352c;
      acos();
      local_4c = (float)fVar10;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
      pCVar11 = &(param_1->base).base.model;
      local_5c0.w = afStack_7bc[3];
      pfVar7 = (float *)((int)&local_5c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(float *)((int)&local_5c0 + (uint)bVar9 * -8 + 4) = afStack_7bc[(uint)bVar9 * -2 + 4];
      *pfVar7 = afStack_7bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      pfVar7[(uint)bVar9 * -2 + 1] =
           (afStack_7bc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
      local_14 = pCVar11;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar11,&local_5c0,local_2424,_DAT_01ed36ec,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
      local_650.w = local_610;
      pfVar7 = (float *)((int)&local_650 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(float *)((int)&local_650 + (uint)bVar9 * -8 + 4) = afStack_60c[(uint)bVar9 * -2];
      *pfVar7 = afStack_60c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      pfVar7[(uint)bVar9 * -2 + 1] =
           (afStack_60c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_14,&local_650,local_2424,_DAT_01ed36f4,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0();
    pCVar11 = &(param_1->base).base.model;
    local_530.w = local_790;
    pfVar7 = (float *)((int)&local_530 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_530 + (uint)bVar9 * -8 + 4) = afStack_78c[(uint)bVar9 * -2];
    *pfVar7 = afStack_78c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_78c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    local_14 = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar11,&local_530,local_2424,_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar12 = &local_600;
    local_600.w = afStack_51c[3];
    pfVar7 = (float *)((int)&local_600 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_600 + (uint)bVar9 * -8 + 4) = afStack_51c[(uint)bVar9 * -2 + 4];
    *pfVar7 = afStack_51c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_51c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    pCVar11 = local_14;
    local_2448 = local_2424;
    iVar15 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x22) {
    local_244c = (param_1->base).base.model.base.current_frame_number * (float)_DAT_005cd357;
    if (1.0 < local_244c) {
      local_244c = 1.0;
    }
    fVar10 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005e352c,
                             (float10)1);
    local_48 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    local_670.w = afStack_55c[3];
    pfVar7 = (float *)((int)&local_670 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_670 + (uint)bVar9 * -8 + 4) = afStack_55c[(uint)bVar9 * -2 + 4];
    *pfVar7 = afStack_55c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_55c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    local_14 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_670,local_244c,_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar11 = local_14;
    pCVar12 = &local_670;
    local_670.w = local_4e0;
    pfVar7 = (float *)((int)&local_670 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_670 + (uint)bVar9 * -8 + 4) = afStack_51c[(uint)bVar9 * -2 + 0x10];
    *pfVar7 = afStack_51c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_51c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11)[(uint)bVar9 * -2 + 1];
    local_2448 = local_244c;
    iVar15 = _DAT_01ed36e8;
  }
  else if (local_1c == 0x23) {
    local_2434 = (param_1->base).base.model.base.current_frame_number;
    if ((float)_DAT_005cd347 <= local_2434) {
      local_2434 = 1.0 - (local_2434 + (float)_DAT_005cd34f) * (float)_DAT_005cd357;
    }
    else {
      local_2434 = local_2434 * (float)_DAT_005cd357;
    }
    if (1.0 < local_2434) {
      local_2434 = 1.0;
    }
    if (local_2434 < 0.0) {
      local_2434 = 0.0;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (&(param_1->base).base.model,_DAT_01ed36ec,&local_300);
    local_204 = local_300.x;
    afStack_218[(uint)bVar9 * -2 + 6] = *(float *)((int)&local_300 + (uint)bVar9 * -8 + 4);
    afStack_218[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         *(float *)((int)&local_300 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    local_34 = ((param_1->carry_object_world_center).y + (param_1->carry_object_bbox).max.y) -
               (param_1->carry_object_bbox).min.y;
    pCVar6 = (param_1->base).object_to_pick_up;
    if (pCVar6 != (CDemonActor *)0x0) {
      _DAT_01ed3784 =
           (CDeformableModelInstance *)
           core_prye_cpp_getCarriedObjectVerticalOffset_FUN_00517e80(pCVar6);
      local_14 = _DAT_01ed3784;
    }
    local_34 = local_34 - (float)_DAT_01ed3784;
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0();
    local_7f0.w = local_700;
    pfVar7 = (float *)((int)&local_7f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_7f0 + (uint)bVar9 * -8 + 4) = afStack_6fc[(uint)bVar9 * -2];
    *pfVar7 = afStack_6fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_6fc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    local_14 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_7f0,local_2434,_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_7f0,local_2434,_DAT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    fVar10 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005e352c,
                             (float10)1);
    local_44 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    local_7d0.w = afStack_69c[3];
    pfVar7 = (float *)((int)&local_7d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_7d0 + (uint)bVar9 * -8 + 4) = afStack_69c[(uint)bVar9 * -2 + 4];
    *pfVar7 = afStack_69c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_69c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_7d0,local_2434,_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar11 = local_14;
    pCVar12 = &local_7d0;
    local_7d0.w = afStack_78c[3];
    pfVar7 = (float *)((int)&local_7d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_7d0 + (uint)bVar9 * -8 + 4) = afStack_78c[(uint)bVar9 * -2 + 4];
    *pfVar7 = afStack_78c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_78c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    local_2448 = local_2434;
    iVar15 = _DAT_01ed36e8;
  }
  else if (local_1c == 0x24) {
    local_240c = 1.0 - ((param_1->base).base.model.base.current_frame_number + (float)_DAT_005cd34f)
                       * (float)_DAT_005cd357;
    if (local_240c < 0.0) {
      local_240c = 0.0;
    }
    if (1.0 < local_240c) {
      local_240c = 1.0;
    }
    fVar10 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005e352c,
                             (float10)1);
    local_30 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar11 = &(param_1->base).base.model;
    local_680.w = local_8c0;
    pfVar7 = (float *)((int)&local_680 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_680 + (uint)bVar9 * -8 + 4) = afStack_8dc[(uint)bVar9 * -2 + 8];
    *pfVar7 = afStack_8dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_8dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
    local_14 = pCVar11;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar11,&local_680,local_240c,_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar12 = &local_680;
    local_680.w = local_7e0;
    pfVar7 = (float *)((int)&local_680 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_680 + (uint)bVar9 * -8 + 4) = afStack_7dc[(uint)bVar9 * -2];
    *pfVar7 = afStack_7dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_7dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    pCVar11 = local_14;
    local_2448 = local_240c;
    iVar15 = _DAT_01ed36e8;
  }
  else {
    if (local_1c != 0x25) goto LAB_0051cae3;
    local_2418 = (param_1->base).base.model.base.current_frame_number;
    if (local_2418 < (float)_DAT_005cd347) {
      local_2418 = local_2418 * (float)_DAT_005cd357;
    }
    else {
      local_2418 = 1.0 - (local_2418 + (float)_DAT_005cd34f) * (float)_DAT_005cd357;
    }
    if (1.0 < local_2418) {
      local_2418 = 1.0;
    }
    if (local_2418 < 0.0) {
      local_2418 = 0.0;
    }
    local_14 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (local_14,_DAT_01ed36ec,&local_330);
    local_2b8[3] = local_330.x;
    local_2a8[(uint)bVar9 * -2] = *(float *)((int)&local_330 + (uint)bVar9 * -8 + 4);
    local_2a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&local_330 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0();
    pCVar11 = local_14;
    local_7a0.w = local_770;
    pfVar7 = (float *)((int)&local_7a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_7a0 + (uint)bVar9 * -8 + 4) = afStack_78c[(uint)bVar9 * -2 + 8];
    *pfVar7 = afStack_78c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_78c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar11,&local_7a0,local_2418,_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_7a0,local_2418,_DAT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    fVar10 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x / (float10)_DAT_005e352c,
                             (float10)1);
    local_28 = (float)fVar10;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    local_570.w = local_730;
    pfVar7 = (float *)((int)&local_570 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_570 + (uint)bVar9 * -8 + 4) = afStack_78c[(uint)bVar9 * -2 + 0x18];
    *pfVar7 = afStack_78c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_78c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_570,local_2418,_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar11 = local_14;
    pCVar12 = &local_570;
    local_570.w = local_640;
    pfVar7 = (float *)((int)&local_570 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_570 + (uint)bVar9 * -8 + 4) = afStack_63c[(uint)bVar9 * -2];
    *pfVar7 = afStack_63c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_63c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    local_2448 = local_2418;
    iVar15 = _DAT_01ed36e8;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
            (pCVar11,pCVar12,local_2448,iVar15,core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
LAB_0051cae3:
  if (g_CGamePtr->goggles_active != 0) {
    local_2b8[1] = 0.0;
    local_2b8[2] = 0.0;
    local_2b8[0] = 0.0;
    if ((param_1->guns_drawn != 0) && (param_1->weapon != (CWeapon *)0x0)) {
      local_2b8[0] = (param_1->right_arm_aim).target_pitch;
    }
    pcVar14 = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
    fVar13 = 1.0;
    iVar15 = _DAT_01ed36dc;
    core_xform_cpp_FUN_005860b0(local_2d0 + 6);
    local_6b0.w = afStack_5ec[3];
    pfVar7 = (float *)((int)&local_6b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_6b0 + (uint)bVar9 * -8 + 4) = afStack_5ec[(uint)bVar9 * -2 + 4];
    *pfVar7 = afStack_5ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_5ec + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
              (&(param_1->base).base.model,&local_6b0,fVar13,iVar15,pcVar14);
  }
  if (0.0 < param_1->interact_blend) {
    iVar15 = 1;
    motion_name = "?draw_holsters2aimPistols" + 1;
    pCVar11 = &(param_1->base).base.model;
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar11);
    iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                       (&this_ptr->motion_list,motion_name,iVar15);
    local_50 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fca20(pCVar11,iVar15);
    local_14 = local_50;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (pCVar11,iVar15,(float)local_50,param_1->interact_blend,_DAT_01ed371c,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
  }
  pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((param_1->base).base.carry_hands[0].carry_actor,DAT_007e1a50);
  if ((pCVar6 != (CDemonActor *)0x0) && (param_1->weapon == (CWeapon *)0x0)) {
    local_58 = core_prye_cpp_CPrye_getFlashlightMinAngle_FUN_0051c0a0(param_1);
    local_14 = (CDeformableModelInstance *)local_58;
    local_14 = (CDeformableModelInstance *)core_prye_cpp_FUN_0051c0f0();
    _DAT_01ed36d8 =
         (1.0 - (param_1->aim_pitch - local_58) / ((float)local_14 - local_58)) *
         (float)_DAT_005cd3bf;
    param_1->frame_cleared = 1.0;
    if (1.0 < _DAT_01ed36d8) {
      _DAT_01ed36d8 = 1.0;
    }
    pcVar14 = core_prye_cpp_FUN_00517c90;
    fVar13 = param_1->frame_cleared;
    iVar15 = _DAT_01ed36e0;
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(param_1->aim_pitch);
    local_860[0] = (float)local_540;
    afStack_87c[(uint)bVar9 * -2 + 8] = afStack_55c[(uint)bVar9 * -2 + 8];
    afStack_87c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9] =
         afStack_55c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
    (afStack_87c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1] =
         (afStack_55c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(0x3fc90fdb,afStack_87c + 7);
    local_850[0] = (float)local_460;
    afStack_87c[(uint)bVar9 * -2 + 0xc] = afStack_45c[(uint)bVar9 * -2];
    afStack_87c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         afStack_45c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (afStack_87c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1] =
         (afStack_45c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_87c + 0xb);
    local_5d0.w = local_4d0;
    pfVar7 = (float *)((int)&local_5d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&local_5d0 + (uint)bVar9 * -8 + 4) = afStack_51c[(uint)bVar9 * -2 + 0x14];
    *pfVar7 = afStack_51c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15];
    pfVar7[(uint)bVar9 * -2 + 1] =
         (afStack_51c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
              (&(param_1->base).base.model,&local_5d0,fVar13,iVar15,pcVar14);
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0();
    pCVar12 = (param_1->base).base.model.bone_transform.pose_data.bone_rotations;
    local_820 = afStack_5ac[3];
    afStack_87c[(uint)bVar9 * -2 + 0x18] = afStack_5ac[(uint)bVar9 * -2 + 4];
    afStack_87c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
         afStack_5ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    (afStack_87c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19)[(uint)bVar9 * -2 + 1] =
         (afStack_5ac + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    local_14 = (CDeformableModelInstance *)pCVar12;
    core_xform_cpp_multiplyQuaternion_FUN_00585990(pCVar12 + _DAT_01ed372c);
    pfVar7 = &(param_1->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed372c].w;
    pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
    *pfVar7 = local_880;
    *pfVar8 = afStack_87c[(uint)bVar9 * -2];
    pfVar8[(uint)bVar9 * -2 + 1] = afStack_87c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_87c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0();
    pCVar3 = &local_14->base;
    local_760 = local_6a0;
    afStack_78c[(uint)bVar9 * -2 + 0xc] = afStack_69c[(uint)bVar9 * -2];
    afStack_78c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         afStack_69c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (afStack_78c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1] =
         (afStack_69c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990
              (pCVar3->current_motion_name + _DAT_01ed3730 * 0x10 + -0x30);
    pfVar7 = &(param_1->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3730].w;
    pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
    *pfVar7 = local_910;
    *pfVar8 = afStack_90c[(uint)bVar9 * -2];
    pfVar8[(uint)bVar9 * -2 + 1] = afStack_90c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_90c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  }
  pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (&param_1->weapon->base,g_CBurncrossClassInfo.name_hash);
  local_2c = (param_1->base).base.model.bone_transform.pose_data.bone_rotations;
  if (pCVar6 != (CDemonActor *)0x0) {
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xbfc90fdb);
    local_8b0[0] = afStack_6fc[3];
    afStack_8dc[(uint)bVar9 * -2 + 0xc] = afStack_6fc[(uint)bVar9 * -2 + 4];
    afStack_8dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         afStack_6fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    (afStack_8dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1] =
         (afStack_6fc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_8dc + 0xb);
    pfVar7 = &(param_1->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3734].w;
    pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
    *pfVar7 = local_800;
    *pfVar8 = afStack_7fc[(uint)bVar9 * -2];
    pfVar8[(uint)bVar9 * -2 + 1] = afStack_7fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_7fc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xc0490fdb);
    local_5b0 = local_520;
    afStack_5ac[(uint)bVar9 * -2] = afStack_51c[(uint)bVar9 * -2];
    afStack_5ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_51c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (afStack_5ac + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_51c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_5b0);
    pfVar7 = &(param_1->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3738].w;
    pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
    *pfVar7 = afStack_48c[3];
    *pfVar8 = afStack_48c[(uint)bVar9 * -2 + 4];
    pfVar8[(uint)bVar9 * -2 + 1] = afStack_48c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_48c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    return;
  }
  pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (&param_1->weapon->base,g_CExorcismClassInfo.name_hash);
  if (pCVar6 != (CDemonActor *)0x0) {
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xbf490fdb);
    afStack_90c[3] = (float)local_8a0;
    afStack_90c[(uint)bVar9 * -2 + 4] = afStack_8dc[(uint)bVar9 * -2 + 0x10];
    afStack_90c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5] =
         afStack_8dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11];
    (afStack_90c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1] =
         (afStack_8dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_90c + 3);
    pfVar7 = &(param_1->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3734].w;
    pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
    *pfVar7 = local_6c0;
    *pfVar8 = afStack_6fc[(uint)bVar9 * -2 + 0x10];
    pfVar8[(uint)bVar9 * -2 + 1] = afStack_6fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11];
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_6fc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xbfc90fdb);
    afStack_87c[3] = afStack_8dc[3];
    afStack_87c[(uint)bVar9 * -2 + 4] = afStack_8dc[(uint)bVar9 * -2 + 4];
    afStack_87c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5] =
         afStack_8dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    (afStack_87c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1] =
         (afStack_8dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_87c + 3);
    pfVar7 = &(param_1->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3738].w;
    pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
    *pfVar7 = local_740;
    *pfVar8 = afStack_78c[(uint)bVar9 * -2 + 0x14];
    pfVar8[(uint)bVar9 * -2 + 1] = afStack_78c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15];
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_78c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15)[(uint)bVar9 * -2 + 1];
    return;
  }
  pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (&param_1->weapon->base,g_CStormClassInfo.name_hash);
  if (pCVar6 != (CDemonActor *)0x0) {
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xbf860a92);
    local_560 = local_490;
    afStack_55c[(uint)bVar9 * -2] = afStack_48c[(uint)bVar9 * -2];
    afStack_55c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_48c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (afStack_55c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_48c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_560);
    pfVar7 = &(param_1->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3734].w;
    pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
    *pfVar7 = local_4f0;
    *pfVar8 = afStack_51c[(uint)bVar9 * -2 + 0xc];
    pfVar8[(uint)bVar9 * -2 + 1] = afStack_51c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_51c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xc0060a92);
    local_6e0[0] = (float)local_500;
    afStack_6fc[(uint)bVar9 * -2 + 8] = afStack_51c[(uint)bVar9 * -2 + 8];
    afStack_6fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9] =
         afStack_51c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
    (afStack_6fc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1] =
         (afStack_51c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_6fc + 7);
    pfVar7 = &(param_1->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3738].w;
    pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
    *pfVar7 = local_590;
    *pfVar8 = afStack_5ac[(uint)bVar9 * -2 + 8];
    pfVar8[(uint)bVar9 * -2 + 1] = afStack_5ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (afStack_5ac + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
    return;
  }
  return;
}
