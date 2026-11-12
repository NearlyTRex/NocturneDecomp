// Name: core_prye.cpp_FUN_0051c1c0
// Address: 0051c1c0
// Address Range: [[0051c1c0, 0051e277]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051c1c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051c1c0(int param_1)

{
  uint *puVar1;
  CMotionController *pCVar2;
  SMotion *pSVar3;
  CSkeleton *this_ptr;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float10 fVar7;
  CDeformableModelInstance *pCVar8;
  CQuaternion4f *rotation_quat;
  float fVar9;
  char *motion_name;
  code *pcVar10;
  int iVar11;
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
  float local_940 [6];
  float fStack_928;
  float fStack_924;
  float fStack_920;
  float fStack_91c;
  float fStack_918;
  float fStack_914;
  uint local_910;
  float afStack_90c [7];
  CQuaternion4f local_8f0;
  float local_8e0;
  float afStack_8dc [7];
  float local_8c0;
  float local_8b0 [4];
  uint local_8a0;
  CQuaternion4f local_890;
  uint local_880;
  float afStack_87c [7];
  float local_860 [4];
  float local_850 [4];
  float local_840;
  float local_830;
  float local_820 [4];
  CQuaternion4f local_810;
  uint local_800;
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
  float local_760 [4];
  float local_750;
  uint local_740;
  float local_730;
  CQuaternion4f local_720;
  CQuaternion4f CStack_710;
  float local_700;
  float afStack_6fc [7];
  uint local_6e0 [4];
  float fStack_6d0;
  uint local_6c0;
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
  uint local_590;
  CQuaternion4f local_580;
  CQuaternion4f local_570;
  uint local_560;
  float afStack_55c [7];
  uint local_540;
  CQuaternion4f local_530;
  uint local_520;
  float afStack_51c [7];
  uint local_500;
  uint local_4f0;
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
  float fStack_408;
  float fStack_404;
  float fStack_400;
  uint local_3fc;
  uint local_3f8;
  uint local_3f0;
  uint local_3e4;
  float local_3d8 [3];
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
  float local_378 [3];
  float local_36c;
  float local_360;
  uint local_354;
  float local_348 [3];
  float local_33c;
  float local_338;
  float local_334;
  uint local_330;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  uint local_30c;
  uint local_300;
  float fStack_2f4;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float local_2d0 [3];
  uint local_2c4;
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
  float local_264 [4];
  float afStack_254 [4];
  float local_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  uint uStack_234;
  uint uStack_230;
  float local_228;
  float local_21c [3];
  uint local_210;
  uint local_204;
  float local_200;
  float local_1f8;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  uint local_1e0;
  float local_1d8;
  float local_1d4;
  uint local_1d0;
  uint local_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float afStack_1bc [3];
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
  float fStack_180;
  uint uStack_17c;
  uint uStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float local_160;
  int local_15c;
  int local_158;
  uint local_154;
  float local_150;
  float afStack_14c [5];
  uint local_138;
  uint local_134;
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
  float local_f0 [3];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint local_cc;
  float afStack_c0 [3];
  float local_b4;
  float fStack_a8;
  float local_9c;
  float local_90;
  uint local_8c;
  uint local_84;
  uint local_80;
  float local_78;
  float local_6c [5];
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
  int local_2c;
  float local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  int local_18;
  CDeformableModelInstance *local_14;
  
  bVar6 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
            ((CDeformableModelInstance *)(param_1 + 0x158));
  local_14 = (CDeformableModelInstance *)
             core_motion_cpp_FUN_004fc350((CDeformableModelInstance *)(param_1 + 0x158),0);
  local_2420 = local_14;
  if (*(int *)(param_1 + 0x20c48) < 0x3e19999a) {
    local_2420 = (CDeformableModelInstance *)
                 ((*(float *)(param_1 + 0x20c48) / _DAT_005cd337) * (float)local_14);
  }
  if (0.85 < *(float *)(param_1 + 0x20c48)) {
    local_2420 = (CDeformableModelInstance *)
                 (((1.0 - *(float *)(param_1 + 0x20c48)) / 0.15) * (float)local_2420);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)(param_1 + 0x158));
  if ((0.0 < (float)local_2420) && (-1 < *(int *)(param_1 + 0x20c78))) {
    core_prye_cpp_FUN_0051e280(param_1,&local_2404);
    local_2404.root_position.x = 0.0;
    local_2404.root_position.z = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0054d3c0
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_2404,(float)local_2420,-1,
               core_skeleton_cpp_FUN_0054bef0);
  }
  core_prye_cpp_FUN_0051e6d0(param_1);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  local_1c = pSVar3->state_index;
  if (((local_1c == 0x2b) || (local_1c == 0x2a)) || (local_1c == 0x27)) {
    local_24 = (float *)(param_1 + 0x20c8c);
    if (*(int *)(param_1 + 0x20b94) == 0) {
      core_door_cpp_FUN_00464c10(_DAT_01ed36a8);
      local_378[0] = (float)local_354;
      afStack_45c[(uint)bVar6 * -2 + 0x3a] = afStack_45c[(uint)bVar6 * -2 + 0x43];
      afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3b] =
           afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x44];
      core_actor_cpp_FUN_00408bf0(param_1,afStack_45c + 0x39);
      local_12c = local_360;
      afStack_14c[(uint)bVar6 * -2 + 9] = afStack_45c[(uint)bVar6 * -2 + 0x40];
      afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41];
      if (afStack_14c + 8 != local_24) {
        *local_24 = local_12c;
        local_24[1] = local_128;
        local_24[2] = local_124;
      }
    }
    else {
      core_door_cpp_FUN_00464c10(*(int *)(param_1 + 0x20b94));
      local_2a8[2] = (float)local_cc;
      local_2a8[(uint)bVar6 * -2 + 3] = afStack_14c[(uint)bVar6 * -2 + 0x21];
      local_2a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
      core_actor_cpp_FUN_00408bf0(param_1,local_2a8 + 2);
      pfVar4 = local_24;
      local_168 = local_9c;
      afStack_254[(uint)bVar6 * -2 + 0x3c] = afStack_14c[(uint)bVar6 * -2 + 0x2d];
      afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d] =
           afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
      if (afStack_254 + 0x3b != pfVar4) {
        *pfVar4 = local_168;
        pfVar4[1] = local_164;
        pfVar4[2] = local_160;
      }
      _DAT_01ed36a8 = *(uint *)(param_1 + 0x20b94);
    }
    pfVar4 = (float *)(param_1 + 0x20c90 + (uint)bVar6 * -8);
    local_fc = *(float *)(param_1 + 0x20c8c);
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    afStack_14c[(uint)bVar6 * -2 + 0x15] = *pfVar4;
    afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] = pfVar4[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_FUN_0054dbd0((CDeformableModelInstance *)(param_1 + 0x158),_DAT_01ed36e8);
    fVar9 = local_fc;
    local_288 = local_150;
    local_2a8[(uint)bVar6 * -2 + 9] = afStack_14c[(uint)bVar6 * -2];
    local_2a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fVar9 = fVar9 - local_288;
    local_33c = fVar9;
    local_338 = local_f8 - local_284;
    local_334 = local_f4 - local_280;
    local_294 = fVar9;
    local_2a8[(uint)bVar6 * -2 + 6] = afStack_45c[(uint)bVar6 * -2 + 0x49];
    local_2a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x4a];
    local_27c = fVar9;
    local_278 = local_338;
    local_274 = local_334;
    local_2d0[0] = fVar9;
    afStack_45c[(uint)bVar6 * -2 + 100] = local_2a8[(uint)bVar6 * -2 + 0xc];
    afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x65] =
         local_2a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_45c + 99);
    pCVar8 = local_14;
    local_138 = local_3f0;
    afStack_14c[(uint)bVar6 * -2 + 6] = afStack_45c[(uint)bVar6 * -2 + 0x1c];
    afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d];
    local_2450 = (pCVar8->base).current_frame_number;
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
      fVar7 = (float10)local_38 / (float10)_DAT_005e352c;
      acos();
      local_40 = (float)fVar7;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_40);
      local_620.w = local_660;
      pfVar4 = (float *)((int)&local_620 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(float *)((int)&local_620 + (uint)bVar6 * -8 + 4) = afStack_65c[(uint)bVar6 * -2];
      *pfVar4 = afStack_65c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      pfVar4[(uint)bVar6 * -2 + 1] =
           (afStack_65c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                ((CDeformableModelInstance *)(param_1 + 0x158),&local_620,local_2450,_DAT_01ed36e8,
                 core_skeleton_cpp_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_40);
      local_470.w = local_750;
      pfVar4 = (float *)((int)&local_470 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(float *)((int)&local_470 + (uint)bVar6 * -8 + 4) = afStack_78c[(uint)bVar6 * -2 + 0x10];
      *pfVar4 = afStack_78c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
      pfVar4[(uint)bVar6 * -2 + 1] =
           (afStack_78c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_14,&local_470,local_2450,_DAT_01ed36f0,core_skeleton_cpp_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_138);
    local_580.w = local_7c0;
    pfVar4 = (float *)((int)&local_580 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_580 + (uint)bVar6 * -8 + 4) = afStack_7bc[(uint)bVar6 * -2];
    *pfVar4 = afStack_7bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_7bc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_580,local_2450,_DAT_01ed36e8,
               core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_134);
    local_890.w = local_840;
    pfVar4 = (float *)((int)&local_890 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_890 + (uint)bVar6 * -8 + 4) = afStack_87c[(uint)bVar6 * -2 + 0x10];
    *pfVar4 = afStack_87c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_87c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_890,local_2450,_DAT_01ed36e8,core_skeleton_cpp_FUN_0054bef0);
    iVar11 = *(int *)(param_1 + 0x20b94);
    if (iVar11 != 0) {
      pfVar4 = (float *)(iVar11 + 0x9c0 + (uint)bVar6 * -8);
      local_390 = *(float *)(iVar11 + 0x9bc);
      afStack_45c[(uint)bVar6 * -2 + 0x34] = *pfVar4;
      afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x35] = pfVar4[(uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408bf0(iVar11,param_1 + 0x20);
      local_1e0 = local_3e4;
      afStack_254[(uint)bVar6 * -2 + 0x1e] = afStack_45c[(uint)bVar6 * -2 + 0x1f];
      afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
           afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x20];
      *(uint *)(param_1 + 0x20cf0) = 0x3f000000;
      if (local_1d8 < 0.0) {
        iVar11 = *(int *)(*(int *)(param_1 + 0x20b94) + 0x2e4);
        if (iVar11 == 0) {
          local_154 = 0xc0000000;
          local_15c = iVar11;
          local_158 = iVar11;
          core_actor_cpp_FUN_00408b00(*(uint *)(param_1 + 0x20b94),&local_15c);
          local_18c = local_b4;
          afStack_254[(uint)bVar6 * -2 + 0x33] = afStack_14c[(uint)bVar6 * -2 + 0x27];
          afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34] =
               afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
          local_390 = local_390 + local_18c;
          local_38c = local_38c + local_188;
          local_388 = local_388 + local_184;
        }
        if (*(int *)(*(int *)(param_1 + 0x20b94) + 0x2e4) == 1) {
          *(uint *)(param_1 + 0x20cf0) = 0;
        }
      }
      if (0.0 < local_1d8) {
        if (*(int *)(*(int *)(param_1 + 0x20b94) + 0x2e4) == 1) {
          local_264[0] = 0.0;
          local_264[2] = 2.0;
          local_264[1] = 0.0;
          core_actor_cpp_FUN_00408b00(*(uint *)(param_1 + 0x20b94),local_2a8 + 0x11);
          local_1a4 = local_1f8;
          afStack_254[(uint)bVar6 * -2 + 0x2d] = afStack_254[(uint)bVar6 * -2 + 0x18];
          afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e] =
               afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
          local_390 = local_390 + local_1a4;
          local_38c = local_38c + local_1a0;
          local_388 = local_388 + local_19c;
        }
        if (*(int *)(*(int *)(param_1 + 0x20b94) + 0x2e4) == 0) {
          *(uint *)(param_1 + 0x20cf0) = 0;
        }
      }
      local_324 = local_390 - *(float *)(param_1 + 0x20);
      local_320 = local_38c - *(float *)(param_1 + 0x24);
      local_31c = local_388 - *(float *)(param_1 + 0x28);
      local_1d4 = local_324;
      afStack_254[(uint)bVar6 * -2 + 0x21] = afStack_45c[(uint)bVar6 * -2 + 0x4f];
      afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
           afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x50];
      if ((float *)(param_1 + 0x20ce0) != afStack_254 + 0x20) {
        *(float *)(param_1 + 0x20ce0) = local_1d4;
        *(uint *)(param_1 + 0x20ce4) = local_1d0;
        *(uint *)(param_1 + 0x20ce8) = local_1cc;
      }
      *(uint *)(param_1 + 0x20ce4) = 0;
      core_actor_cpp_FUN_00408bf0(param_1,*(int *)(param_1 + 0x20b94) + 0x9bc);
      local_348[0] = (float)local_210;
      afStack_45c[(uint)bVar6 * -2 + 0x46] = afStack_254[(uint)bVar6 * -2 + 0x12];
      afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x47] =
           afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_45c + 0x45);
      local_384 = local_30c;
      afStack_45c[(uint)bVar6 * -2 + 0x37] = afStack_45c[(uint)bVar6 * -2 + 0x55];
      afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x38] =
           afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x56];
      *(float *)(param_1 + 0x20cec) = *(float *)(param_1 + 0x34) + local_380;
    }
  }
  iVar11 = param_1 + 0x158;
  local_18 = iVar11;
  if (local_1c == 0x20) {
    pfVar4 = (float *)(param_1 + 0x20c90 + (uint)bVar6 * -8);
    local_414 = *(float *)(param_1 + 0x20c8c);
    afStack_45c[(uint)bVar6 * -2 + 0x13] = *pfVar4;
    afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x14] = pfVar4[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_FUN_0054dbd0(iVar11,_DAT_01ed36ec);
    fVar9 = local_414;
    local_3b4 = local_78;
    afStack_45c[(uint)bVar6 * -2 + 0x2b] = afStack_14c[(uint)bVar6 * -2 + 0x36];
    afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2c] =
         afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37];
    local_420 = fVar9 - local_3b4;
    local_41c = local_410 - local_3b0;
    local_418 = local_40c - local_3ac;
    local_f0[0] = fVar9 - local_3b4;
    afStack_14c[(uint)bVar6 * -2 + 0x18] = afStack_45c[(uint)bVar6 * -2 + 0x10];
    afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_14c + 0x17);
    iVar11 = local_18;
    local_3fc = local_2c4;
    afStack_45c[(uint)bVar6 * -2 + 0x19] = afStack_45c[(uint)bVar6 * -2 + 0x67];
    afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1a] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x68];
    local_2448 = *(float *)(iVar11 + 8);
    if ((float)_DAT_005cd3a7 <= local_2448) {
      local_2448 = 1.0 - (local_2448 + (float)_DAT_005cd3af) * (float)_DAT_005cd3b7;
      if (local_2448 < 0.0) {
        local_2448 = 0.0;
      }
    }
    else {
      local_2448 = local_2448 * (float)_DAT_005cd3b7;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_3fc);
    local_8f0.w = local_5f0;
    pfVar4 = (float *)((int)&local_8f0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_8f0 + (uint)bVar6 * -8 + 4) = afStack_5ec[(uint)bVar6 * -2];
    *pfVar4 = afStack_5ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_5ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_8f0,local_2448,_DAT_01ed3720,
               core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_3f8);
    local_720.w = local_4b0;
    pfVar4 = (float *)((int)&local_720 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_720 + (uint)bVar6 * -8 + 4) = afStack_4ac[(uint)bVar6 * -2];
    *pfVar4 = afStack_4ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_4ac + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    rotation_quat = &local_720;
    pCVar8 = local_14;
    iVar11 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x1e) {
    pfVar4 = (float *)(param_1 + 0x20c90 + (uint)bVar6 * -8);
    local_198 = *(float *)(param_1 + 0x20c8c);
    afStack_254[(uint)bVar6 * -2 + 0x30] = *pfVar4;
    afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31] = pfVar4[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_FUN_0054dbd0(iVar11,_DAT_01ed36ec);
    fVar9 = local_198;
    local_1ec = local_228;
    afStack_254[(uint)bVar6 * -2 + 0x1b] = afStack_254[(uint)bVar6 * -2 + 0xc];
    afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
         afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    local_3c0 = fVar9 - local_1ec;
    local_3bc = local_194 - local_1e8;
    local_3b8 = local_190 - local_1e4;
    local_6c[0] = fVar9 - local_1ec;
    afStack_14c[(uint)bVar6 * -2 + 0x39] = afStack_45c[(uint)bVar6 * -2 + 0x28];
    afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x29];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_14c + 0x38);
    iVar11 = local_18;
    local_90 = local_318;
    afStack_14c[(uint)bVar6 * -2 + 0x30] = afStack_45c[(uint)bVar6 * -2 + 0x52];
    afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x53];
    local_2444 = *(float *)(iVar11 + 8);
    if ((float)_DAT_005cd38f <= local_2444) {
      local_2444 = 1.0 - (local_2444 + (float)_DAT_005cd397) * (float)_DAT_005cd35f;
      if (local_2444 < 0.0) {
        local_2444 = 0.0;
      }
    }
    else {
      local_2444 = local_2444 * (float)_DAT_005cd39f;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(-local_90);
    local_810.w = local_830;
    pfVar4 = (float *)((int)&local_810 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_810 + (uint)bVar6 * -8 + 4) = afStack_87c[(uint)bVar6 * -2 + 0x14];
    *pfVar4 = afStack_87c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_87c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_810,local_2444,_DAT_01ed36ec,
               core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_8c);
    rotation_quat = &local_4a0;
    local_4a0.w = local_8e0;
    pfVar4 = (float *)((int)&local_4a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_4a0 + (uint)bVar6 * -8 + 4) = afStack_8dc[(uint)bVar6 * -2];
    *pfVar4 = afStack_8dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_8dc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pCVar8 = local_14;
    local_2448 = local_2444;
    iVar11 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x21) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
              (&local_968,(CVector3f *)(param_1 + 0x20bbc));
    if ((DAT_01ed36bc & 1) == 0) {
      DAT_01ed36bc = DAT_01ed36bc | 1;
    }
    iVar11 = *(int *)(param_1 + 0x20bac);
    if (iVar11 != 0) {
      (**(code **)(*(int *)(iVar11 + 0x154) + 0x1c))(iVar11);
      pfVar4 = local_940;
      pfVar5 = &fStack_928;
      for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_408 = fStack_928 + fStack_91c;
      fStack_404 = fStack_924 + fStack_918;
      fStack_400 = fStack_920 + fStack_914;
      fStack_2dc = fStack_928 + fStack_91c;
      afStack_45c[(uint)bVar6 * -2 + 0x61] = afStack_45c[(uint)bVar6 * -2 + 0x16];
      afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x62] =
           afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x17];
      fStack_e4 = fStack_2dc * _DAT_005cd367;
      fStack_e0 = fStack_2d8 * _DAT_005cd367;
      fStack_dc = fStack_2d4 * _DAT_005cd367;
      fStack_180 = fStack_2dc * _DAT_005cd367;
      afStack_254[(uint)bVar6 * -2 + 0x36] = afStack_14c[(uint)bVar6 * -2 + 0x1b];
      afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37] =
           afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
      if (&stack0x00000000 != (byte *)0x1ed382c) {
        _DAT_01ed36ac = fStack_180;
        _DAT_01ed36b0 = uStack_17c;
        _DAT_01ed36b4 = uStack_178;
      }
    }
    core_dirmat_cpp_FUN_0045b800(&local_968,&DAT_01ed36ac);
    local_1c8 = local_3cc;
    afStack_254[(uint)bVar6 * -2 + 0x24] = afStack_45c[(uint)bVar6 * -2 + 0x25];
    afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x26];
    fStack_d8 = *(float *)(param_1 + 0x20bb0) + local_1c8;
    fStack_d4 = *(float *)(param_1 + 0x20bb4) + fStack_1c4;
    fStack_d0 = *(float *)(param_1 + 0x20bb8) + fStack_1c0;
    afStack_1bc[0] = fStack_d8;
    afStack_254[(uint)bVar6 * -2 + 0x27] = afStack_14c[(uint)bVar6 * -2 + 0x1e];
    afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
         afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
    core_actor_cpp_FUN_00408bf0(param_1,afStack_254 + 0x26);
    fStack_240 = fStack_a8;
    afStack_254[(uint)bVar6 * -2 + 6] = afStack_14c[(uint)bVar6 * -2 + 0x2a];
    afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054dbd0(local_14,_DAT_01ed36ec);
    fVar9 = fStack_240;
    fStack_174 = fStack_2f4;
    afStack_254[(uint)bVar6 * -2 + 0x39] = afStack_45c[(uint)bVar6 * -2 + 0x5b];
    afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x5c];
    local_264[3] = fVar9 - fStack_174;
    afStack_254[0] = fStack_23c - fStack_170;
    afStack_254[1] = fStack_238 - fStack_16c;
    afStack_c0[0] = fVar9 - fStack_174;
    afStack_14c[(uint)bVar6 * -2 + 0x24] = afStack_254[(uint)bVar6 * -2];
    afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
         afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_14c + 0x23);
    pCVar8 = local_14;
    uStack_234 = uStack_444;
    afStack_254[(uint)bVar6 * -2 + 9] = afStack_45c[(uint)bVar6 * -2 + 7];
    afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 8];
    fStack_2414 = *(float *)((int)pCVar8 + 8);
    if ((float)_DAT_005cd36f <= fStack_2414) {
      fStack_2414 = 1.0 - (fStack_2414 + (float)_DAT_005cd377) * (float)_DAT_005cd37f;
      if (fStack_2414 < 0.0) {
        fStack_2414 = 0.0;
      }
    }
    else {
      fStack_2414 = fStack_2414 * (float)_DAT_005cd387;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(uStack_234);
    CStack_710.w = afStack_63c[3];
    pfVar4 = (float *)((int)&CStack_710 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&CStack_710 + (uint)bVar6 * -8 + 4) = afStack_63c[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_63c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_63c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&CStack_710,fStack_2414,_DAT_01ed3720,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(uStack_230);
    pCVar8 = local_14;
    rotation_quat = &CStack_4c0;
    CStack_4c0.w = fStack_6d0;
    pfVar4 = (float *)((int)&CStack_4c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&CStack_4c0 + (uint)bVar6 * -8 + 4) = afStack_6fc[(uint)bVar6 * -2 + 0xc];
    *pfVar4 = afStack_6fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_6fc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
    local_2448 = fStack_2414;
    iVar11 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x2c) {
    local_20 = (float *)(param_1 + 0x20c8c);
    if (*(int *)(param_1 + 0x20ba0) == 0) {
      core_lever_cpp_FUN_004e0770(_DAT_01ed36b8);
      local_21c[0] = (float)local_270;
      afStack_254[(uint)bVar6 * -2 + 0xf] = local_2a8[(uint)bVar6 * -2 + 0xf];
      afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
           local_2a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      core_actor_cpp_FUN_00408bf0(param_1,afStack_254 + 0xe);
      local_39c = afStack_45c[3];
      afStack_45c[(uint)bVar6 * -2 + 0x31] = afStack_45c[(uint)bVar6 * -2 + 4];
      afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x32] =
           afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
      if (afStack_45c + 0x30 != local_20) {
        *local_20 = local_39c;
        local_20[1] = local_398;
        local_20[2] = local_394;
      }
    }
    else {
      core_lever_cpp_FUN_004e0770(*(int *)(param_1 + 0x20ba0));
      afStack_14c[2] = (float)local_120;
      afStack_14c[(uint)bVar6 * -2 + 3] = afStack_14c[(uint)bVar6 * -2 + 0xc];
      afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      core_actor_cpp_FUN_00408bf0(param_1,afStack_14c + 2);
      pfVar4 = local_20;
      local_108 = local_114;
      afStack_14c[(uint)bVar6 * -2 + 0x12] = afStack_14c[(uint)bVar6 * -2 + 0xf];
      afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      if (afStack_14c + 0x11 != pfVar4) {
        *pfVar4 = local_108;
        pfVar4[1] = local_104;
        pfVar4[2] = local_100;
      }
      _DAT_01ed36b8 = *(uint *)(param_1 + 0x20ba0);
    }
    pfVar4 = (float *)(param_1 + 0x20c90 + (uint)bVar6 * -8);
    local_438 = *(float *)(param_1 + 0x20c8c);
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    afStack_45c[(uint)bVar6 * -2 + 10] = *pfVar4;
    afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb] = pfVar4[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_FUN_0054dbd0((CDeformableModelInstance *)(param_1 + 0x158),_DAT_01ed36ec);
    fVar9 = local_438;
    local_3a8 = local_36c;
    afStack_45c[(uint)bVar6 * -2 + 0x2e] = afStack_45c[(uint)bVar6 * -2 + 0x3d];
    afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2f] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3e];
    fVar9 = fVar9 - local_3a8;
    local_2e8 = fVar9;
    local_2e4 = local_434 - local_3a4;
    local_2e0 = local_430 - local_3a0;
    local_42c = fVar9;
    afStack_45c[(uint)bVar6 * -2 + 0xd] = afStack_45c[(uint)bVar6 * -2 + 0x5e];
    afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x5f];
    afStack_254[2] = fVar9;
    afStack_254[3] = local_2e4;
    local_244 = local_2e0;
    local_3d8[0] = fVar9;
    afStack_45c[(uint)bVar6 * -2 + 0x22] = afStack_254[(uint)bVar6 * -2 + 3];
    afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x23] =
         afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_45c + 0x21);
    pCVar8 = local_14;
    local_84 = local_1b0;
    afStack_14c[(uint)bVar6 * -2 + 0x33] = afStack_254[(uint)bVar6 * -2 + 0x2a];
    afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34] =
         afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
    local_2424 = (pCVar8->base).current_frame_number;
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
      fVar7 = (float10)local_3c / (float10)_DAT_005e352c;
      acos();
      local_4c = (float)fVar7;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_4c);
      local_5c0.w = afStack_7bc[3];
      pfVar4 = (float *)((int)&local_5c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(float *)((int)&local_5c0 + (uint)bVar6 * -8 + 4) = afStack_7bc[(uint)bVar6 * -2 + 4];
      *pfVar4 = afStack_7bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
      pfVar4[(uint)bVar6 * -2 + 1] =
           (afStack_7bc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
      local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                ((CDeformableModelInstance *)(param_1 + 0x158),&local_5c0,local_2424,_DAT_01ed36ec,
                 core_skeleton_cpp_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_4c);
      local_650.w = local_610;
      pfVar4 = (float *)((int)&local_650 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(float *)((int)&local_650 + (uint)bVar6 * -8 + 4) = afStack_60c[(uint)bVar6 * -2];
      *pfVar4 = afStack_60c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      pfVar4[(uint)bVar6 * -2 + 1] =
           (afStack_60c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_14,&local_650,local_2424,_DAT_01ed36f4,core_skeleton_cpp_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_84);
    local_530.w = local_790;
    pfVar4 = (float *)((int)&local_530 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_530 + (uint)bVar6 * -8 + 4) = afStack_78c[(uint)bVar6 * -2];
    *pfVar4 = afStack_78c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_78c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_530,local_2424,_DAT_01ed36ec,
               core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_80);
    rotation_quat = &local_600;
    local_600.w = afStack_51c[3];
    pfVar4 = (float *)((int)&local_600 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_600 + (uint)bVar6 * -8 + 4) = afStack_51c[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_51c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_51c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    pCVar8 = local_14;
    local_2448 = local_2424;
    iVar11 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x22) {
    local_244c = *(float *)(param_1 + 0x160) * (float)_DAT_005cd357;
    if (1.0 < local_244c) {
      local_244c = 1.0;
    }
    fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x20ca4) / (float10)_DAT_005e352c,
                            (float10)1);
    local_48 = (float)fVar7;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_48);
    local_670.w = afStack_55c[3];
    pfVar4 = (float *)((int)&local_670 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_670 + (uint)bVar6 * -8 + 4) = afStack_55c[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_55c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_55c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_670,local_244c,_DAT_01ed36ec,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_48);
    pCVar8 = local_14;
    rotation_quat = &local_670;
    local_670.w = local_4e0;
    pfVar4 = (float *)((int)&local_670 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_670 + (uint)bVar6 * -8 + 4) = afStack_51c[(uint)bVar6 * -2 + 0x10];
    *pfVar4 = afStack_51c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_51c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
    local_2448 = local_244c;
    iVar11 = _DAT_01ed36e8;
  }
  else if (local_1c == 0x23) {
    local_2434 = *(float *)(param_1 + 0x160);
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
    core_skeleton_cpp_FUN_0054dbd0(param_1 + 0x158,_DAT_01ed36ec);
    local_204 = local_300;
    afStack_254[(uint)bVar6 * -2 + 0x15] = afStack_45c[(uint)bVar6 * -2 + 0x58];
    afStack_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x59];
    local_34 = (*(float *)(param_1 + 0x20c90) + *(float *)(param_1 + 0x20ca8)) -
               *(float *)(param_1 + 0x20c9c);
    if (*(int *)(param_1 + 0x20b98) != 0) {
      _DAT_01ed3784 =
           (CDeformableModelInstance *)
           core_prye_cpp_getCarriedObjectVerticalOffset_FUN_00517e80(*(int *)(param_1 + 0x20b98));
      local_14 = _DAT_01ed3784;
    }
    local_34 = local_34 - (float)_DAT_01ed3784;
    fVar7 = (float10)local_200 - (float10)local_34;
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0((float)fVar7);
    local_7f0.w = local_700;
    pfVar4 = (float *)((int)&local_7f0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_7f0 + (uint)bVar6 * -8 + 4) = afStack_6fc[(uint)bVar6 * -2];
    *pfVar4 = afStack_6fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_6fc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_7f0,local_2434,_DAT_01ed36ec,core_skeleton_cpp_FUN_0054bef0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_7f0,local_2434,_DAT_01ed36e8,core_skeleton_cpp_FUN_0054bef0);
    fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x20ca4) / (float10)_DAT_005e352c,
                            (float10)1);
    local_44 = (float)fVar7;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_44);
    local_7d0.w = afStack_69c[3];
    pfVar4 = (float *)((int)&local_7d0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_7d0 + (uint)bVar6 * -8 + 4) = afStack_69c[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_69c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_69c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_7d0,local_2434,_DAT_01ed36ec,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_44);
    pCVar8 = local_14;
    rotation_quat = &local_7d0;
    local_7d0.w = afStack_78c[3];
    pfVar4 = (float *)((int)&local_7d0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_7d0 + (uint)bVar6 * -8 + 4) = afStack_78c[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_78c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_78c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    local_2448 = local_2434;
    iVar11 = _DAT_01ed36e8;
  }
  else if (local_1c == 0x24) {
    local_240c = 1.0 - (*(float *)(param_1 + 0x160) + (float)_DAT_005cd34f) * (float)_DAT_005cd357;
    if (local_240c < 0.0) {
      local_240c = 0.0;
    }
    if (1.0 < local_240c) {
      local_240c = 1.0;
    }
    fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x20ca4) / (float10)_DAT_005e352c,
                            (float10)1);
    local_30 = (float)fVar7;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_30);
    local_680.w = local_8c0;
    pfVar4 = (float *)((int)&local_680 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_680 + (uint)bVar6 * -8 + 4) = afStack_8dc[(uint)bVar6 * -2 + 8];
    *pfVar4 = afStack_8dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_8dc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_680,local_240c,_DAT_01ed36ec,
               core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_30);
    rotation_quat = &local_680;
    local_680.w = local_7e0;
    pfVar4 = (float *)((int)&local_680 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_680 + (uint)bVar6 * -8 + 4) = afStack_7dc[(uint)bVar6 * -2];
    *pfVar4 = afStack_7dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_7dc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pCVar8 = local_14;
    local_2448 = local_240c;
    iVar11 = _DAT_01ed36e8;
  }
  else {
    if (local_1c != 0x25) goto LAB_0051cae3;
    local_2418 = *(float *)(param_1 + 0x160);
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
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054dbd0(local_14,_DAT_01ed36ec);
    local_2b8[3] = (float)local_330;
    local_2a8[(uint)bVar6 * -2] = afStack_45c[(uint)bVar6 * -2 + 0x4c];
    local_2a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x4d];
    fVar7 = (float10)local_2a8[0] - (float10)*(float *)(param_1 + 0x20c90);
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0((float)fVar7);
    pCVar8 = local_14;
    local_7a0.w = local_770;
    pfVar4 = (float *)((int)&local_7a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_7a0 + (uint)bVar6 * -8 + 4) = afStack_78c[(uint)bVar6 * -2 + 8];
    *pfVar4 = afStack_78c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_78c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar8,&local_7a0,local_2418,_DAT_01ed36ec,core_skeleton_cpp_FUN_0054bef0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_7a0,local_2418,_DAT_01ed36e8,core_skeleton_cpp_FUN_0054bef0);
    fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x20ca4) / (float10)_DAT_005e352c,
                            (float10)1);
    local_28 = (float)fVar7;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_28);
    local_570.w = local_730;
    pfVar4 = (float *)((int)&local_570 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_570 + (uint)bVar6 * -8 + 4) = afStack_78c[(uint)bVar6 * -2 + 0x18];
    *pfVar4 = afStack_78c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_78c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_14,&local_570,local_2418,_DAT_01ed36ec,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_28);
    pCVar8 = local_14;
    rotation_quat = &local_570;
    local_570.w = local_640;
    pfVar4 = (float *)((int)&local_570 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_570 + (uint)bVar6 * -8 + 4) = afStack_63c[(uint)bVar6 * -2];
    *pfVar4 = afStack_63c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_63c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_2448 = local_2418;
    iVar11 = _DAT_01ed36e8;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
            (pCVar8,rotation_quat,local_2448,iVar11,core_skeleton_cpp_FUN_0054bef0);
LAB_0051cae3:
  if (g_CGamePtr->goggles_active != 0) {
    local_2b8[1] = 0.0;
    local_2b8[2] = 0.0;
    local_2b8[0] = 0.0;
    if ((*(int *)(param_1 + 0x20bcc) != 0) && (*(int *)(param_1 + 0x20c24) != 0)) {
      local_2b8[0] = *(float *)(param_1 + 0x20be8);
    }
    pcVar10 = core_skeleton_cpp_FUN_0054bef0;
    fVar9 = 1.0;
    iVar11 = _DAT_01ed36dc;
    core_xform_cpp_FUN_005860b0(afStack_45c + 0x69);
    local_6b0.w = afStack_5ec[3];
    pfVar4 = (float *)((int)&local_6b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_6b0 + (uint)bVar6 * -8 + 4) = afStack_5ec[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_5ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_5ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_6b0,fVar9,iVar11,pcVar10);
  }
  if (0.0 < *(float *)(param_1 + 0x20c34)) {
    iVar11 = 1;
    motion_name = "?draw_holsters2aimPistols" + 1;
    pCVar8 = (CDeformableModelInstance *)(param_1 + 0x158);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar8);
    iVar11 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                       (&this_ptr->motion_list,motion_name,iVar11);
    local_50 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fca20(pCVar8,iVar11,0x3f800000);
    local_14 = local_50;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (pCVar8,iVar11,(float)local_50,*(float *)(param_1 + 0x20c34),_DAT_01ed371c,
               core_skeleton_cpp_FUN_0054bef0);
  }
  iVar11 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
  if ((iVar11 != 0) && (*(int *)(param_1 + 0x20c24) == 0)) {
    local_58 = (float)core_prye_cpp_FUN_0051c0a0(param_1);
    local_14 = (CDeformableModelInstance *)local_58;
    local_14 = (CDeformableModelInstance *)core_prye_cpp_FUN_0051c0f0(param_1);
    _DAT_01ed36d8 =
         (1.0 - (*(float *)(param_1 + 0x20bd8) - local_58) / ((float)local_14 - local_58)) *
         (float)_DAT_005cd3bf;
    *(uint *)(param_1 + 0x20bd4) = 0x3f800000;
    if (1.0 < _DAT_01ed36d8) {
      _DAT_01ed36d8 = 1.0;
    }
    pcVar10 = core_prye_cpp_FUN_00517c90;
    fVar9 = *(float *)(param_1 + 0x20bd4);
    iVar11 = _DAT_01ed36e0;
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(*(uint *)(param_1 + 0x20bd8));
    local_860[0] = (float)local_540;
    afStack_87c[(uint)bVar6 * -2 + 8] = afStack_55c[(uint)bVar6 * -2 + 8];
    afStack_87c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
         afStack_55c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    (afStack_87c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
         (afStack_55c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(0x3fc90fdb,afStack_87c + 7);
    local_850[0] = (float)local_460;
    afStack_87c[(uint)bVar6 * -2 + 0xc] = afStack_45c[(uint)bVar6 * -2];
    afStack_87c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_45c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_87c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
         (afStack_45c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_87c + 0xb);
    local_5d0.w = local_4d0;
    pfVar4 = (float *)((int)&local_5d0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_5d0 + (uint)bVar6 * -8 + 4) = afStack_51c[(uint)bVar6 * -2 + 0x14];
    *pfVar4 = afStack_51c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_51c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_5d0,fVar9,iVar11,pcVar10);
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x3fc90fdb);
    local_820[0] = afStack_5ac[3];
    afStack_87c[(uint)bVar6 * -2 + 0x18] = afStack_5ac[(uint)bVar6 * -2 + 4];
    afStack_87c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
         afStack_5ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    (afStack_87c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19)[(uint)bVar6 * -2 + 1] =
         (afStack_5ac + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x808);
    core_xform_cpp_multiplyQuaternion_FUN_00585990
              ((((CDeformableModelInstance *)(param_1 + 0x808))->base).current_motion_name +
               _DAT_01ed372c * 0x10 + -0x30,afStack_87c + 0x17);
    puVar1 = (uint *)(_DAT_01ed372c * 0x10 + 0x808 + param_1);
    pfVar4 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
    *puVar1 = local_880;
    *pfVar4 = afStack_87c[(uint)bVar6 * -2];
    pfVar4[(uint)bVar6 * -2 + 1] = afStack_87c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_87c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x40490fdb);
    pCVar2 = &local_14->base;
    local_760[0] = (float)local_6a0;
    afStack_78c[(uint)bVar6 * -2 + 0xc] = afStack_69c[(uint)bVar6 * -2];
    afStack_78c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_69c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_78c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
         (afStack_69c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990
              (pCVar2->current_motion_name + _DAT_01ed3730 * 0x10 + -0x30,afStack_78c + 0xb);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3730 * 0x10);
    pfVar4 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
    *puVar1 = local_910;
    *pfVar4 = afStack_90c[(uint)bVar6 * -2];
    pfVar4[(uint)bVar6 * -2 + 1] = afStack_90c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_90c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  }
  iVar11 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (*(uint *)(param_1 + 0x20c24),g_CBurncrossClassInfo.name_hash);
  local_2c = param_1 + 0x808;
  if (iVar11 != 0) {
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xbfc90fdb,_DAT_01ed3734 * 0x10 + local_2c);
    local_8b0[0] = afStack_6fc[3];
    afStack_8dc[(uint)bVar6 * -2 + 0xc] = afStack_6fc[(uint)bVar6 * -2 + 4];
    afStack_8dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_6fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    (afStack_8dc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
         (afStack_6fc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_8dc + 0xb);
    iVar11 = _DAT_01ed3738 * 0x10;
    puVar1 = (uint *)(_DAT_01ed3734 * 0x10 + 0x808 + param_1);
    pfVar4 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
    *puVar1 = local_800;
    *pfVar4 = afStack_7fc[(uint)bVar6 * -2];
    pfVar4[(uint)bVar6 * -2 + 1] = afStack_7fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_7fc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xc0490fdb,iVar11 + local_2c);
    local_5b0 = local_520;
    afStack_5ac[(uint)bVar6 * -2] = afStack_51c[(uint)bVar6 * -2];
    afStack_5ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_51c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_5ac + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_51c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_5b0);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3738 * 0x10);
    pfVar4 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
    *puVar1 = afStack_48c[3];
    *pfVar4 = afStack_48c[(uint)bVar6 * -2 + 4];
    pfVar4[(uint)bVar6 * -2 + 1] = afStack_48c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_48c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    return;
  }
  iVar11 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (*(uint *)(param_1 + 0x20c24),g_CExorcismClassInfo.name_hash);
  if (iVar11 != 0) {
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xbf490fdb,_DAT_01ed3734 * 0x10 + local_2c);
    afStack_90c[3] = (float)local_8a0;
    afStack_90c[(uint)bVar6 * -2 + 4] = afStack_8dc[(uint)bVar6 * -2 + 0x10];
    afStack_90c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
         afStack_8dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
    (afStack_90c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
         (afStack_8dc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_90c + 3);
    iVar11 = _DAT_01ed3738;
    puVar1 = (uint *)(_DAT_01ed3734 * 0x10 + 0x808 + param_1);
    pfVar4 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
    *puVar1 = local_6c0;
    *pfVar4 = afStack_6fc[(uint)bVar6 * -2 + 0x10];
    pfVar4[(uint)bVar6 * -2 + 1] = afStack_6fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
    (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_6fc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xbfc90fdb,iVar11 * 0x10 + local_2c);
    afStack_87c[3] = afStack_8dc[3];
    afStack_87c[(uint)bVar6 * -2 + 4] = afStack_8dc[(uint)bVar6 * -2 + 4];
    afStack_87c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
         afStack_8dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    (afStack_87c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
         (afStack_8dc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_87c + 3);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3738 * 0x10);
    pfVar4 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
    *puVar1 = local_740;
    *pfVar4 = afStack_78c[(uint)bVar6 * -2 + 0x14];
    pfVar4[(uint)bVar6 * -2 + 1] = afStack_78c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15];
    (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_78c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1];
    return;
  }
  iVar11 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (*(uint *)(param_1 + 0x20c24),g_CStormClassInfo.name_hash);
  if (iVar11 != 0) {
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xbf860a92,_DAT_01ed3734 * 0x10 + local_2c);
    local_560 = local_490;
    afStack_55c[(uint)bVar6 * -2] = afStack_48c[(uint)bVar6 * -2];
    afStack_55c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_48c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_55c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_48c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_560);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3734 * 0x10);
    iVar11 = _DAT_01ed3738 * 0x10;
    pfVar4 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
    *puVar1 = local_4f0;
    *pfVar4 = afStack_51c[(uint)bVar6 * -2 + 0xc];
    pfVar4[(uint)bVar6 * -2 + 1] = afStack_51c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_51c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xc0060a92,iVar11 + local_2c);
    local_6e0[0] = local_500;
    afStack_6fc[(uint)bVar6 * -2 + 8] = afStack_51c[(uint)bVar6 * -2 + 8];
    afStack_6fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
         afStack_51c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    (afStack_6fc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
         (afStack_51c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_6fc + 7);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3738 * 0x10);
    pfVar4 = (float *)(puVar1 + (uint)bVar6 * -2 + 1);
    *puVar1 = local_590;
    *pfVar4 = afStack_5ac[(uint)bVar6 * -2 + 8];
    pfVar4[(uint)bVar6 * -2 + 1] = afStack_5ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_5ac + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    return;
  }
  return;
}
