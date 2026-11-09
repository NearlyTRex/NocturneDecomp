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
  byte *puVar2;
  SMotion *pSVar3;
  CSkeleton *this_ptr;
  float *pfVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  CDeformableModelInstance *pCVar9;
  CQuaternion4f *rotation_quat;
  float fVar10;
  char *motion_name;
  code *pcVar11;
  int iVar12;
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
  uint local_2404 [2];
  uint local_23fc;
  float afStack_20ec [1505];
  CMatrix3x3f local_968 [40];
  float local_940 [6];
  float fStack_928;
  float fStack_924;
  float fStack_920;
  float fStack_91c;
  float fStack_918;
  float fStack_914;
  uint local_910;
  uint auStack_90c [7];
  uint local_8f0;
  uint auStack_8ec [7];
  uint local_8d0;
  uint local_8c0;
  uint local_8b0 [4];
  uint local_8a0;
  uint local_890;
  float afStack_88c [7];
  uint local_870 [4];
  uint local_860 [4];
  uint local_850 [4];
  uint local_840;
  uint local_830;
  uint local_820 [4];
  uint local_810;
  uint auStack_80c [7];
  uint local_7f0;
  uint auStack_7ec [7];
  uint local_7d0;
  float afStack_7cc [7];
  uint local_7b0;
  uint local_7a0;
  float afStack_79c [7];
  uint local_780;
  uint local_770;
  float local_760 [4];
  uint local_750;
  uint local_740;
  uint local_730;
  uint local_720;
  uint auStack_71c [3];
  uint uStack_710;
  uint auStack_70c [7];
  uint local_6f0;
  uint local_6e0 [4];
  uint uStack_6d0;
  uint local_6c0;
  uint local_6b0;
  float afStack_6ac [7];
  uint local_690;
  uint local_680;
  uint auStack_67c [3];
  uint local_670;
  uint auStack_66c [7];
  uint local_650;
  uint auStack_64c [7];
  uint uStack_630;
  uint local_620;
  uint auStack_61c [7];
  uint local_600;
  uint auStack_5fc [7];
  uint local_5e0;
  uint local_5d0;
  uint auStack_5cc [3];
  uint local_5c0;
  uint auStack_5bc [7];
  uint local_5a0;
  uint local_590;
  uint local_580;
  uint auStack_57c [3];
  uint local_570;
  float afStack_56c [7];
  uint local_550;
  uint local_540;
  uint local_530;
  float afStack_52c [7];
  uint local_510;
  uint local_500;
  uint local_4f0;
  uint local_4e0;
  uint local_4d0;
  uint uStack_4c0;
  uint auStack_4bc [7];
  uint local_4a0;
  uint auStack_49c [7];
  uint local_480;
  uint local_470;
  float afStack_46c [7];
  float local_450;
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
  
  bVar7 = 0;
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
    core_prye_cpp_FUN_0051e280(param_1,local_2404);
    local_2404[0] = 0;
    local_23fc = 0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0054d3c0
              ((CDeformableModelInstance *)(param_1 + 0x158),(SPoseData *)local_2404,
               (float)local_2420,-1,core_skeleton_cpp_FUN_0054bef0);
  }
  core_prye_cpp_FUN_0051e6d0(param_1);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  local_1c = *(int *)(pSVar3 + 0x24);
  if (((local_1c == 0x2b) || (local_1c == 0x2a)) || (local_1c == 0x27)) {
    local_24 = (float *)(param_1 + 0x20c8c);
    if (*(int *)(param_1 + 0x20b94) == 0) {
      core_door_cpp_FUN_00464c10(_DAT_01ed36a8);
      local_378[0] = (float)local_354;
      afStack_46c[(uint)bVar7 * -2 + 0x3e] = afStack_46c[(uint)bVar7 * -2 + 0x47];
      afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3f] =
           afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x48];
      core_actor_cpp_FUN_00408bf0(param_1,afStack_46c + 0x3d);
      local_12c = local_360;
      afStack_14c[(uint)bVar7 * -2 + 9] = afStack_46c[(uint)bVar7 * -2 + 0x44];
      afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x45];
      if (afStack_14c + 8 != local_24) {
        *local_24 = local_12c;
        local_24[1] = local_128;
        local_24[2] = local_124;
      }
    }
    else {
      core_door_cpp_FUN_00464c10(*(int *)(param_1 + 0x20b94));
      local_2a8[2] = (float)local_cc;
      local_2a8[(uint)bVar7 * -2 + 3] = afStack_14c[(uint)bVar7 * -2 + 0x21];
      local_2a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22];
      core_actor_cpp_FUN_00408bf0(param_1,local_2a8 + 2);
      pfVar4 = local_24;
      local_168 = local_9c;
      afStack_254[(uint)bVar7 * -2 + 0x3c] = afStack_14c[(uint)bVar7 * -2 + 0x2d];
      afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3d] =
           afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2e];
      if (afStack_254 + 0x3b != pfVar4) {
        *pfVar4 = local_168;
        pfVar4[1] = local_164;
        pfVar4[2] = local_160;
      }
      _DAT_01ed36a8 = *(uint *)(param_1 + 0x20b94);
    }
    pfVar4 = (float *)(param_1 + 0x20c90 + (uint)bVar7 * -8);
    local_fc = *(float *)(param_1 + 0x20c8c);
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    afStack_14c[(uint)bVar7 * -2 + 0x15] = *pfVar4;
    afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] = pfVar4[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054dbd0((CDeformableModelInstance *)(param_1 + 0x158),_DAT_01ed36e8);
    fVar10 = local_fc;
    local_288 = local_150;
    local_2a8[(uint)bVar7 * -2 + 9] = afStack_14c[(uint)bVar7 * -2];
    local_2a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fVar10 = fVar10 - local_288;
    local_33c = fVar10;
    local_338 = local_f8 - local_284;
    local_334 = local_f4 - local_280;
    local_294 = fVar10;
    local_2a8[(uint)bVar7 * -2 + 6] = afStack_46c[(uint)bVar7 * -2 + 0x4d];
    local_2a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x4e];
    local_27c = fVar10;
    local_278 = local_338;
    local_274 = local_334;
    local_2d0[0] = fVar10;
    afStack_46c[(uint)bVar7 * -2 + 0x68] = local_2a8[(uint)bVar7 * -2 + 0xc];
    afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x69] =
         local_2a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    core_vecdir_cpp_FUN_00576250(afStack_46c + 0x67);
    pCVar9 = local_14;
    local_138 = local_3f0;
    afStack_14c[(uint)bVar7 * -2 + 6] = afStack_46c[(uint)bVar7 * -2 + 0x20];
    afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x21];
    local_2450 = *(float *)&pCVar9->field_0x8;
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
      fVar8 = (float10)local_38 / (float10)_DAT_005e352c;
      acos();
      local_40 = (float)fVar8;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_40);
      local_620 = auStack_66c[3];
      auStack_61c[(uint)bVar7 * -2] = auStack_66c[(uint)bVar7 * -2 + 4];
      auStack_61c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           auStack_66c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
      (auStack_61c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           (auStack_66c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
      local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
      core_skeleton_cpp_FUN_0054e170
                ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_620,
                 local_2450,_DAT_01ed36e8,core_skeleton_cpp_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_40);
      local_470 = local_750;
      afStack_46c[(uint)bVar7 * -2] = afStack_79c[(uint)bVar7 * -2 + 0x14];
      afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_79c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
      (afStack_46c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           (afStack_79c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15)[(uint)bVar7 * -2 + 1];
      core_skeleton_cpp_FUN_0054e170
                (local_14,(CQuaternion4f *)&local_470,local_2450,_DAT_01ed36f0,
                 core_skeleton_cpp_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_138);
    local_580 = afStack_7cc[3];
    auStack_57c[(uint)bVar7 * -2] = afStack_7cc[(uint)bVar7 * -2 + 4];
    auStack_57c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_7cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (auStack_57c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_7cc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_580,local_2450,
               _DAT_01ed36e8,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_134);
    local_890 = local_840;
    afStack_88c[(uint)bVar7 * -2] = afStack_88c[(uint)bVar7 * -2 + 0x14];
    afStack_88c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_88c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
    (afStack_88c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_88c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054e170
              (local_14,(CQuaternion4f *)&local_890,local_2450,_DAT_01ed36e8,
               core_skeleton_cpp_FUN_0054bef0);
    iVar12 = *(int *)(param_1 + 0x20b94);
    if (iVar12 != 0) {
      pfVar4 = (float *)(iVar12 + 0x9c0 + (uint)bVar7 * -8);
      local_390 = *(float *)(iVar12 + 0x9bc);
      afStack_46c[(uint)bVar7 * -2 + 0x38] = *pfVar4;
      afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x39] = pfVar4[(uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408bf0(iVar12,param_1 + 0x20);
      local_1e0 = local_3e4;
      afStack_254[(uint)bVar7 * -2 + 0x1e] = afStack_46c[(uint)bVar7 * -2 + 0x23];
      afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f] =
           afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x24];
      *(uint *)(param_1 + 0x20cf0) = 0x3f000000;
      if (local_1d8 < 0.0) {
        iVar12 = *(int *)(*(int *)(param_1 + 0x20b94) + 0x2e4);
        if (iVar12 == 0) {
          local_154 = 0xc0000000;
          local_15c = iVar12;
          local_158 = iVar12;
          core_actor_cpp_FUN_00408b00(*(uint *)(param_1 + 0x20b94),&local_15c);
          local_18c = local_b4;
          afStack_254[(uint)bVar7 * -2 + 0x33] = afStack_14c[(uint)bVar7 * -2 + 0x27];
          afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x34] =
               afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28];
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
          afStack_254[(uint)bVar7 * -2 + 0x2d] = afStack_254[(uint)bVar7 * -2 + 0x18];
          afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2e] =
               afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
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
      afStack_254[(uint)bVar7 * -2 + 0x21] = afStack_46c[(uint)bVar7 * -2 + 0x53];
      afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22] =
           afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x54];
      if ((float *)(param_1 + 0x20ce0) != afStack_254 + 0x20) {
        *(float *)(param_1 + 0x20ce0) = local_1d4;
        *(uint *)(param_1 + 0x20ce4) = local_1d0;
        *(uint *)(param_1 + 0x20ce8) = local_1cc;
      }
      *(uint *)(param_1 + 0x20ce4) = 0;
      core_actor_cpp_FUN_00408bf0(param_1,*(int *)(param_1 + 0x20b94) + 0x9bc);
      local_348[0] = (float)local_210;
      afStack_46c[(uint)bVar7 * -2 + 0x4a] = afStack_254[(uint)bVar7 * -2 + 0x12];
      afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x4b] =
           afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
      core_vecdir_cpp_FUN_00576250(afStack_46c + 0x49);
      local_384 = local_30c;
      afStack_46c[(uint)bVar7 * -2 + 0x3b] = afStack_46c[(uint)bVar7 * -2 + 0x59];
      afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3c] =
           afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x5a];
      *(float *)(param_1 + 0x20cec) = *(float *)(param_1 + 0x34) + local_380;
    }
  }
  iVar12 = param_1 + 0x158;
  local_18 = iVar12;
  if (local_1c == 0x20) {
    pfVar4 = (float *)(param_1 + 0x20c90 + (uint)bVar7 * -8);
    local_414 = *(float *)(param_1 + 0x20c8c);
    afStack_46c[(uint)bVar7 * -2 + 0x17] = *pfVar4;
    afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x18] = pfVar4[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054dbd0(iVar12,_DAT_01ed36ec);
    fVar10 = local_414;
    local_3b4 = local_78;
    afStack_46c[(uint)bVar7 * -2 + 0x2f] = afStack_14c[(uint)bVar7 * -2 + 0x36];
    afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x30] =
         afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x37];
    local_420 = fVar10 - local_3b4;
    local_41c = local_410 - local_3b0;
    local_418 = local_40c - local_3ac;
    local_f0[0] = fVar10 - local_3b4;
    afStack_14c[(uint)bVar7 * -2 + 0x18] = afStack_46c[(uint)bVar7 * -2 + 0x14];
    afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
    core_vecdir_cpp_FUN_00576250(afStack_14c + 0x17);
    iVar12 = local_18;
    local_3fc = local_2c4;
    afStack_46c[(uint)bVar7 * -2 + 0x1d] = afStack_46c[(uint)bVar7 * -2 + 0x6b];
    afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1e] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x6c];
    local_2448 = *(float *)(iVar12 + 8);
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
    local_8f0 = auStack_5fc[3];
    auStack_8ec[(uint)bVar7 * -2] = auStack_5fc[(uint)bVar7 * -2 + 4];
    auStack_8ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         auStack_5fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (auStack_8ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_5fc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_8f0,local_2448,
               _DAT_01ed3720,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_3f8);
    local_720 = auStack_4bc[3];
    auStack_71c[(uint)bVar7 * -2] = auStack_4bc[(uint)bVar7 * -2 + 4];
    auStack_71c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         auStack_4bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (auStack_71c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_4bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    rotation_quat = (CQuaternion4f *)&local_720;
    pCVar9 = local_14;
    iVar12 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x1e) {
    pfVar4 = (float *)(param_1 + 0x20c90 + (uint)bVar7 * -8);
    local_198 = *(float *)(param_1 + 0x20c8c);
    afStack_254[(uint)bVar7 * -2 + 0x30] = *pfVar4;
    afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x31] = pfVar4[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054dbd0(iVar12,_DAT_01ed36ec);
    fVar10 = local_198;
    local_1ec = local_228;
    afStack_254[(uint)bVar7 * -2 + 0x1b] = afStack_254[(uint)bVar7 * -2 + 0xc];
    afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
         afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    local_3c0 = fVar10 - local_1ec;
    local_3bc = local_194 - local_1e8;
    local_3b8 = local_190 - local_1e4;
    local_6c[0] = fVar10 - local_1ec;
    afStack_14c[(uint)bVar7 * -2 + 0x39] = afStack_46c[(uint)bVar7 * -2 + 0x2c];
    afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3a] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2d];
    core_vecdir_cpp_FUN_00576250(afStack_14c + 0x38);
    iVar12 = local_18;
    local_90 = local_318;
    afStack_14c[(uint)bVar7 * -2 + 0x30] = afStack_46c[(uint)bVar7 * -2 + 0x56];
    afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x31] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x57];
    local_2444 = *(float *)(iVar12 + 8);
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
    local_810 = local_830;
    auStack_80c[(uint)bVar7 * -2] = afStack_88c[(uint)bVar7 * -2 + 0x18];
    auStack_80c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_88c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
    (auStack_80c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_88c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19)[(uint)bVar7 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_810,local_2444,
               _DAT_01ed36ec,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_8c);
    rotation_quat = (CQuaternion4f *)&local_4a0;
    local_4a0 = auStack_8ec[3];
    auStack_49c[(uint)bVar7 * -2] = auStack_8ec[(uint)bVar7 * -2 + 4];
    auStack_49c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         auStack_8ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (auStack_49c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_8ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    pCVar9 = local_14;
    local_2448 = local_2444;
    iVar12 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x21) {
    core_dirmat_cpp_FUN_0045b550(local_968,(CVector3f *)(param_1 + 0x20bbc));
    if ((DAT_01ed36bc & 1) == 0) {
      DAT_01ed36bc = DAT_01ed36bc | 1;
    }
    iVar12 = *(int *)(param_1 + 0x20bac);
    if (iVar12 != 0) {
      (**(code **)(*(int *)(iVar12 + 0x154) + 0x1c))(iVar12);
      pfVar4 = local_940;
      pfVar5 = &fStack_928;
      for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
      }
      fStack_408 = fStack_928 + fStack_91c;
      fStack_404 = fStack_924 + fStack_918;
      fStack_400 = fStack_920 + fStack_914;
      fStack_2dc = fStack_928 + fStack_91c;
      afStack_46c[(uint)bVar7 * -2 + 0x65] = afStack_46c[(uint)bVar7 * -2 + 0x1a];
      afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x66] =
           afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1b];
      fStack_e4 = fStack_2dc * _DAT_005cd367;
      fStack_e0 = fStack_2d8 * _DAT_005cd367;
      fStack_dc = fStack_2d4 * _DAT_005cd367;
      fStack_180 = fStack_2dc * _DAT_005cd367;
      afStack_254[(uint)bVar7 * -2 + 0x36] = afStack_14c[(uint)bVar7 * -2 + 0x1b];
      afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x37] =
           afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
      if (&stack0x00000000 != (byte *)0x1ed382c) {
        _DAT_01ed36ac = fStack_180;
        _DAT_01ed36b0 = uStack_17c;
        _DAT_01ed36b4 = uStack_178;
      }
    }
    core_dirmat_cpp_FUN_0045b800(local_968,&DAT_01ed36ac);
    local_1c8 = local_3cc;
    afStack_254[(uint)bVar7 * -2 + 0x24] = afStack_46c[(uint)bVar7 * -2 + 0x29];
    afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2a];
    fStack_d8 = *(float *)(param_1 + 0x20bb0) + local_1c8;
    fStack_d4 = *(float *)(param_1 + 0x20bb4) + fStack_1c4;
    fStack_d0 = *(float *)(param_1 + 0x20bb8) + fStack_1c0;
    afStack_1bc[0] = fStack_d8;
    afStack_254[(uint)bVar7 * -2 + 0x27] = afStack_14c[(uint)bVar7 * -2 + 0x1e];
    afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28] =
         afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
    core_actor_cpp_FUN_00408bf0(param_1,afStack_254 + 0x26);
    fStack_240 = fStack_a8;
    afStack_254[(uint)bVar7 * -2 + 6] = afStack_14c[(uint)bVar7 * -2 + 0x2a];
    afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2b];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054dbd0(local_14,_DAT_01ed36ec);
    fVar10 = fStack_240;
    fStack_174 = fStack_2f4;
    afStack_254[(uint)bVar7 * -2 + 0x39] = afStack_46c[(uint)bVar7 * -2 + 0x5f];
    afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3a] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x60];
    local_264[3] = fVar10 - fStack_174;
    afStack_254[0] = fStack_23c - fStack_170;
    afStack_254[1] = fStack_238 - fStack_16c;
    afStack_c0[0] = fVar10 - fStack_174;
    afStack_14c[(uint)bVar7 * -2 + 0x24] = afStack_254[(uint)bVar7 * -2];
    afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25] =
         afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_vecdir_cpp_FUN_00576250(afStack_14c + 0x23);
    pCVar9 = local_14;
    uStack_234 = uStack_444;
    afStack_254[(uint)bVar7 * -2 + 9] = afStack_46c[(uint)bVar7 * -2 + 0xb];
    afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xc];
    fStack_2414 = *(float *)((int)pCVar9 + 8);
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
    uStack_710 = uStack_630;
    auStack_70c[(uint)bVar7 * -2] = auStack_64c[(uint)bVar7 * -2 + 8];
    auStack_70c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         auStack_64c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (auStack_70c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_64c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054e170
              (local_14,(CQuaternion4f *)&uStack_710,fStack_2414,_DAT_01ed3720,
               core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(uStack_230);
    pCVar9 = local_14;
    rotation_quat = (CQuaternion4f *)&uStack_4c0;
    uStack_4c0 = uStack_6d0;
    auStack_4bc[(uint)bVar7 * -2] = auStack_70c[(uint)bVar7 * -2 + 0x10];
    auStack_4bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         auStack_70c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11];
    (auStack_4bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_70c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11)[(uint)bVar7 * -2 + 1];
    local_2448 = fStack_2414;
    iVar12 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x2c) {
    local_20 = (float *)(param_1 + 0x20c8c);
    if (*(int *)(param_1 + 0x20ba0) == 0) {
      core_lever_cpp_FUN_004e0770(_DAT_01ed36b8);
      local_21c[0] = (float)local_270;
      afStack_254[(uint)bVar7 * -2 + 0xf] = local_2a8[(uint)bVar7 * -2 + 0xf];
      afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
           local_2a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      core_actor_cpp_FUN_00408bf0(param_1,afStack_254 + 0xe);
      local_39c = local_450;
      afStack_46c[(uint)bVar7 * -2 + 0x35] = afStack_46c[(uint)bVar7 * -2 + 8];
      afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x36] =
           afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
      if (afStack_46c + 0x34 != local_20) {
        *local_20 = local_39c;
        local_20[1] = local_398;
        local_20[2] = local_394;
      }
    }
    else {
      core_lever_cpp_FUN_004e0770(*(int *)(param_1 + 0x20ba0));
      afStack_14c[2] = (float)local_120;
      afStack_14c[(uint)bVar7 * -2 + 3] = afStack_14c[(uint)bVar7 * -2 + 0xc];
      afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      core_actor_cpp_FUN_00408bf0(param_1,afStack_14c + 2);
      pfVar4 = local_20;
      local_108 = local_114;
      afStack_14c[(uint)bVar7 * -2 + 0x12] = afStack_14c[(uint)bVar7 * -2 + 0xf];
      afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
           afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      if (afStack_14c + 0x11 != pfVar4) {
        *pfVar4 = local_108;
        pfVar4[1] = local_104;
        pfVar4[2] = local_100;
      }
      _DAT_01ed36b8 = *(uint *)(param_1 + 0x20ba0);
    }
    pfVar4 = (float *)(param_1 + 0x20c90 + (uint)bVar7 * -8);
    local_438 = *(float *)(param_1 + 0x20c8c);
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    afStack_46c[(uint)bVar7 * -2 + 0xe] = *pfVar4;
    afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xf] = pfVar4[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054dbd0((CDeformableModelInstance *)(param_1 + 0x158),_DAT_01ed36ec);
    fVar10 = local_438;
    local_3a8 = local_36c;
    afStack_46c[(uint)bVar7 * -2 + 0x32] = afStack_46c[(uint)bVar7 * -2 + 0x41];
    afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x33] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x42];
    fVar10 = fVar10 - local_3a8;
    local_2e8 = fVar10;
    local_2e4 = local_434 - local_3a4;
    local_2e0 = local_430 - local_3a0;
    local_42c = fVar10;
    afStack_46c[(uint)bVar7 * -2 + 0x11] = afStack_46c[(uint)bVar7 * -2 + 0x62];
    afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x12] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 99];
    afStack_254[2] = fVar10;
    afStack_254[3] = local_2e4;
    local_244 = local_2e0;
    local_3d8[0] = fVar10;
    afStack_46c[(uint)bVar7 * -2 + 0x26] = afStack_254[(uint)bVar7 * -2 + 3];
    afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x27] =
         afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    core_vecdir_cpp_FUN_00576250(afStack_46c + 0x25);
    pCVar9 = local_14;
    local_84 = local_1b0;
    afStack_14c[(uint)bVar7 * -2 + 0x33] = afStack_254[(uint)bVar7 * -2 + 0x2a];
    afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x34] =
         afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2b];
    local_2424 = *(float *)&pCVar9->field_0x8;
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
      fVar8 = (float10)local_3c / (float10)_DAT_005e352c;
      acos();
      local_4c = (float)fVar8;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_4c);
      local_5c0 = local_7b0;
      auStack_5bc[(uint)bVar7 * -2] = afStack_7cc[(uint)bVar7 * -2 + 8];
      auStack_5bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_7cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
      (auStack_5bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           (afStack_7cc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
      local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
      core_skeleton_cpp_FUN_0054e170
                ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_5c0,
                 local_2424,_DAT_01ed36ec,core_skeleton_cpp_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_4c);
      local_650 = auStack_61c[3];
      auStack_64c[(uint)bVar7 * -2] = auStack_61c[(uint)bVar7 * -2 + 4];
      auStack_64c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           auStack_61c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
      (auStack_64c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           (auStack_61c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
      core_skeleton_cpp_FUN_0054e170
                (local_14,(CQuaternion4f *)&local_650,local_2424,_DAT_01ed36f4,
                 core_skeleton_cpp_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_84);
    local_530 = afStack_79c[3];
    afStack_52c[(uint)bVar7 * -2] = afStack_79c[(uint)bVar7 * -2 + 4];
    afStack_52c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_79c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (afStack_52c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_79c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_530,local_2424,
               _DAT_01ed36ec,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_80);
    rotation_quat = (CQuaternion4f *)&local_600;
    local_600 = local_510;
    auStack_5fc[(uint)bVar7 * -2] = afStack_52c[(uint)bVar7 * -2 + 8];
    auStack_5fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_52c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (auStack_5fc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_52c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    pCVar9 = local_14;
    local_2448 = local_2424;
    iVar12 = _DAT_01ed36ec;
  }
  else if (local_1c == 0x22) {
    local_244c = *(float *)(param_1 + 0x160) * (float)_DAT_005cd357;
    if (1.0 < local_244c) {
      local_244c = 1.0;
    }
    fVar8 = (float10)fpatan((float10)*(float *)(param_1 + 0x20ca4) / (float10)_DAT_005e352c,
                            (float10)1);
    local_48 = (float)fVar8;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_48);
    local_670 = local_550;
    auStack_66c[(uint)bVar7 * -2] = afStack_56c[(uint)bVar7 * -2 + 8];
    auStack_66c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_56c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (auStack_66c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_56c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054e170
              (local_14,(CQuaternion4f *)&local_670,local_244c,_DAT_01ed36ec,
               core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_48);
    pCVar9 = local_14;
    rotation_quat = (CQuaternion4f *)&local_670;
    local_670 = local_4e0;
    auStack_66c[(uint)bVar7 * -2] = afStack_52c[(uint)bVar7 * -2 + 0x14];
    auStack_66c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_52c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
    (auStack_66c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_52c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15)[(uint)bVar7 * -2 + 1];
    local_2448 = local_244c;
    iVar12 = _DAT_01ed36e8;
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
    afStack_254[(uint)bVar7 * -2 + 0x15] = afStack_46c[(uint)bVar7 * -2 + 0x5c];
    afStack_254[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x5d];
    local_34 = (*(float *)(param_1 + 0x20c90) + *(float *)(param_1 + 0x20ca8)) -
               *(float *)(param_1 + 0x20c9c);
    if (*(int *)(param_1 + 0x20b98) != 0) {
      _DAT_01ed3784 =
           (CDeformableModelInstance *)
           core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00517e80
                     (*(int *)(param_1 + 0x20b98));
      local_14 = _DAT_01ed3784;
    }
    local_34 = local_34 - (float)_DAT_01ed3784;
    fVar8 = (float10)local_200 - (float10)local_34;
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0((float)fVar8);
    local_7f0 = auStack_70c[3];
    auStack_7ec[(uint)bVar7 * -2] = auStack_70c[(uint)bVar7 * -2 + 4];
    auStack_7ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         auStack_70c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (auStack_7ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_70c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054e170
              (local_14,(CQuaternion4f *)&local_7f0,local_2434,_DAT_01ed36ec,
               core_skeleton_cpp_FUN_0054bef0);
    core_skeleton_cpp_FUN_0054e170
              (local_14,(CQuaternion4f *)&local_7f0,local_2434,_DAT_01ed36e8,
               core_skeleton_cpp_FUN_0054bef0);
    fVar8 = (float10)fpatan((float10)*(float *)(param_1 + 0x20ca4) / (float10)_DAT_005e352c,
                            (float10)1);
    local_44 = (float)fVar8;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_44);
    local_7d0 = local_690;
    afStack_7cc[(uint)bVar7 * -2] = afStack_6ac[(uint)bVar7 * -2 + 8];
    afStack_7cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_6ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (afStack_7cc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_6ac + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054e170
              (local_14,(CQuaternion4f *)&local_7d0,local_2434,_DAT_01ed36ec,
               core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_44);
    pCVar9 = local_14;
    rotation_quat = (CQuaternion4f *)&local_7d0;
    local_7d0 = local_780;
    afStack_7cc[(uint)bVar7 * -2] = afStack_79c[(uint)bVar7 * -2 + 8];
    afStack_7cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_79c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (afStack_7cc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_79c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    local_2448 = local_2434;
    iVar12 = _DAT_01ed36e8;
  }
  else if (local_1c == 0x24) {
    local_240c = 1.0 - (*(float *)(param_1 + 0x160) + (float)_DAT_005cd34f) * (float)_DAT_005cd357;
    if (local_240c < 0.0) {
      local_240c = 0.0;
    }
    if (1.0 < local_240c) {
      local_240c = 1.0;
    }
    fVar8 = (float10)fpatan((float10)*(float *)(param_1 + 0x20ca4) / (float10)_DAT_005e352c,
                            (float10)1);
    local_30 = (float)fVar8;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_30);
    local_680 = local_8c0;
    auStack_67c[(uint)bVar7 * -2] = auStack_8ec[(uint)bVar7 * -2 + 0xc];
    auStack_67c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         auStack_8ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    (auStack_67c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_8ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_0054e170
              ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_680,local_240c,
               _DAT_01ed36ec,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_30);
    rotation_quat = (CQuaternion4f *)&local_680;
    local_680 = auStack_7ec[3];
    auStack_67c[(uint)bVar7 * -2] = auStack_7ec[(uint)bVar7 * -2 + 4];
    auStack_67c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         auStack_7ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (auStack_67c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_7ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    pCVar9 = local_14;
    local_2448 = local_240c;
    iVar12 = _DAT_01ed36e8;
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
    local_2a8[(uint)bVar7 * -2] = afStack_46c[(uint)bVar7 * -2 + 0x50];
    local_2a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x51];
    fVar8 = (float10)local_2a8[0] - (float10)*(float *)(param_1 + 0x20c90);
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0((float)fVar8);
    pCVar9 = local_14;
    local_7a0 = local_770;
    afStack_79c[(uint)bVar7 * -2] = afStack_79c[(uint)bVar7 * -2 + 0xc];
    afStack_79c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_79c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    (afStack_79c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_79c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054e170
              (pCVar9,(CQuaternion4f *)&local_7a0,local_2418,_DAT_01ed36ec,
               core_skeleton_cpp_FUN_0054bef0);
    core_skeleton_cpp_FUN_0054e170
              (local_14,(CQuaternion4f *)&local_7a0,local_2418,_DAT_01ed36e8,
               core_skeleton_cpp_FUN_0054bef0);
    fVar8 = (float10)fpatan((float10)*(float *)(param_1 + 0x20ca4) / (float10)_DAT_005e352c,
                            (float10)1);
    local_28 = (float)fVar8;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_28);
    local_570 = local_730;
    afStack_56c[(uint)bVar7 * -2] = afStack_79c[(uint)bVar7 * -2 + 0x1c];
    afStack_56c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_79c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1d];
    (afStack_56c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_79c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1d)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054e170
              (local_14,(CQuaternion4f *)&local_570,local_2418,_DAT_01ed36ec,
               core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_28);
    pCVar9 = local_14;
    rotation_quat = (CQuaternion4f *)&local_570;
    local_570 = auStack_64c[3];
    afStack_56c[(uint)bVar7 * -2] = (float)auStack_64c[(uint)bVar7 * -2 + 4];
    afStack_56c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         (float)auStack_64c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (afStack_56c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (float)(auStack_64c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_2448 = local_2418;
    iVar12 = _DAT_01ed36e8;
  }
  core_skeleton_cpp_FUN_0054e170
            (pCVar9,rotation_quat,local_2448,iVar12,core_skeleton_cpp_FUN_0054bef0);
LAB_0051cae3:
  if (*(int *)&g_CGamePtr->field_0x264 != 0) {
    local_2b8[1] = 0.0;
    local_2b8[2] = 0.0;
    local_2b8[0] = 0.0;
    if ((*(int *)(param_1 + 0x20bcc) != 0) && (*(int *)(param_1 + 0x20c24) != 0)) {
      local_2b8[0] = *(float *)(param_1 + 0x20be8);
    }
    pcVar11 = core_skeleton_cpp_FUN_0054bef0;
    fVar10 = 1.0;
    iVar12 = _DAT_01ed36dc;
    core_xform_cpp_FUN_005860b0(afStack_46c + 0x6d);
    local_6b0 = local_5e0;
    afStack_6ac[(uint)bVar7 * -2] = (float)auStack_5fc[(uint)bVar7 * -2 + 8];
    afStack_6ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         (float)auStack_5fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (afStack_6ac + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (float)(auStack_5fc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054d8f0
              ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_6b0,fVar10,
               iVar12,pcVar11);
  }
  if (0.0 < *(float *)(param_1 + 0x20c34)) {
    iVar12 = 1;
    motion_name = "?draw_holsters2aimPistols" + 1;
    pCVar9 = (CDeformableModelInstance *)(param_1 + 0x158);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar9);
    iVar12 = core_motion_cpp_FUN_004fb9c0((CMotionList *)this_ptr,motion_name,iVar12);
    local_50 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fca20(pCVar9,iVar12,0x3f800000);
    local_14 = local_50;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (pCVar9,iVar12,(float)local_50,*(float *)(param_1 + 0x20c34),_DAT_01ed371c,
               core_skeleton_cpp_FUN_0054bef0);
  }
  iVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
  if ((iVar12 != 0) && (*(int *)(param_1 + 0x20c24) == 0)) {
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
    pcVar11 = unkafter_prye_cpp_FUN_00517c90;
    fVar10 = *(float *)(param_1 + 0x20bd4);
    iVar12 = _DAT_01ed36e0;
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(*(uint *)(param_1 + 0x20bd8));
    local_860[0] = local_540;
    afStack_88c[(uint)bVar7 * -2 + 0xc] = afStack_56c[(uint)bVar7 * -2 + 0xc];
    afStack_88c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_56c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    (afStack_88c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1] =
         (afStack_56c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(0x3fc90fdb,afStack_88c + 0xb);
    local_850[0] = afStack_46c[3];
    afStack_88c[(uint)bVar7 * -2 + 0x10] = afStack_46c[(uint)bVar7 * -2 + 4];
    afStack_88c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11] =
         afStack_46c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (afStack_88c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11)[(uint)bVar7 * -2 + 1] =
         (afStack_46c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_88c + 0xf);
    local_5d0 = local_4d0;
    auStack_5cc[(uint)bVar7 * -2] = afStack_52c[(uint)bVar7 * -2 + 0x18];
    auStack_5cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_52c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
    (auStack_5cc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_52c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_FUN_0054d8f0
              ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_5d0,fVar10,
               iVar12,pcVar11);
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x3fc90fdb);
    local_820[0] = local_5a0;
    afStack_88c[(uint)bVar7 * -2 + 0x1c] = (float)auStack_5bc[(uint)bVar7 * -2 + 8];
    afStack_88c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1d] =
         (float)auStack_5bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (afStack_88c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1d)[(uint)bVar7 * -2 + 1] =
         (float)(auStack_5bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x808);
    core_xform_cpp_multiplyQuaternion_FUN_00585990
              (&((CDeformableModelInstance *)(param_1 + 0x808))->field_0x0 + _DAT_01ed372c * 0x10,
               afStack_88c + 0x1b);
    puVar1 = (uint *)(_DAT_01ed372c * 0x10 + 0x808 + param_1);
    pfVar4 = (float *)(puVar1 + (uint)bVar7 * -2 + 1);
    *puVar1 = afStack_88c[3];
    *pfVar4 = afStack_88c[(uint)bVar7 * -2 + 4];
    pfVar4[(uint)bVar7 * -2 + 1] = afStack_88c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (pfVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_88c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x40490fdb);
    puVar2 = &local_14->field_0x0;
    local_760[0] = afStack_6ac[3];
    afStack_79c[(uint)bVar7 * -2 + 0x10] = afStack_6ac[(uint)bVar7 * -2 + 4];
    afStack_79c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11] =
         afStack_6ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (afStack_79c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11)[(uint)bVar7 * -2 + 1] =
         (afStack_6ac + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(puVar2 + _DAT_01ed3730 * 0x10,afStack_79c + 0xf);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3730 * 0x10);
    puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
    *puVar1 = local_910;
    *puVar6 = auStack_90c[(uint)bVar7 * -2];
    puVar6[(uint)bVar7 * -2 + 1] = auStack_90c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_90c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  }
  iVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (*(uint *)(param_1 + 0x20c24),g_CBurncrossClassInfo.name_hash);
  local_2c = param_1 + 0x808;
  if (iVar12 != 0) {
    core_xform_cpp_FUN_00585d50(0xbfc90fdb,_DAT_01ed3734 * 0x10 + local_2c);
    local_8b0[0] = local_6f0;
    auStack_8ec[(uint)bVar7 * -2 + 0x10] = auStack_70c[(uint)bVar7 * -2 + 8];
    auStack_8ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11] =
         auStack_70c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (auStack_8ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11)[(uint)bVar7 * -2 + 1] =
         (auStack_70c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(auStack_8ec + 0xf);
    iVar12 = _DAT_01ed3738 * 0x10;
    puVar1 = (uint *)(_DAT_01ed3734 * 0x10 + 0x808 + param_1);
    puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
    *puVar1 = auStack_80c[3];
    *puVar6 = auStack_80c[(uint)bVar7 * -2 + 4];
    puVar6[(uint)bVar7 * -2 + 1] = auStack_80c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_80c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_FUN_00585d50(0xc0490fdb,iVar12 + local_2c);
    auStack_5bc[3] = afStack_52c[3];
    auStack_5bc[(uint)bVar7 * -2 + 4] = afStack_52c[(uint)bVar7 * -2 + 4];
    auStack_5bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5] =
         afStack_52c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (auStack_5bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1] =
         (afStack_52c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(auStack_5bc + 3);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3738 * 0x10);
    puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
    *puVar1 = local_480;
    *puVar6 = auStack_49c[(uint)bVar7 * -2 + 8];
    puVar6[(uint)bVar7 * -2 + 1] = auStack_49c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_49c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    return;
  }
  iVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (*(uint *)(param_1 + 0x20c24),g_CExorcismClassInfo.name_hash);
  if (iVar12 != 0) {
    core_xform_cpp_FUN_00585d50(0xbf490fdb,_DAT_01ed3734 * 0x10 + local_2c);
    auStack_90c[3] = local_8a0;
    auStack_90c[(uint)bVar7 * -2 + 4] = auStack_8ec[(uint)bVar7 * -2 + 0x14];
    auStack_90c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5] =
         auStack_8ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
    (auStack_90c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1] =
         (auStack_8ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(auStack_90c + 3);
    iVar12 = _DAT_01ed3738;
    puVar1 = (uint *)(_DAT_01ed3734 * 0x10 + 0x808 + param_1);
    puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
    *puVar1 = local_6c0;
    *puVar6 = auStack_70c[(uint)bVar7 * -2 + 0x14];
    puVar6[(uint)bVar7 * -2 + 1] = auStack_70c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_70c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_FUN_00585d50(0xbfc90fdb,iVar12 * 0x10 + local_2c);
    local_870[0] = local_8d0;
    afStack_88c[(uint)bVar7 * -2 + 8] = (float)auStack_8ec[(uint)bVar7 * -2 + 8];
    afStack_88c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9] =
         (float)auStack_8ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    (afStack_88c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1] =
         (float)(auStack_8ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_88c + 7);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3738 * 0x10);
    pfVar4 = (float *)(puVar1 + (uint)bVar7 * -2 + 1);
    *puVar1 = local_740;
    *pfVar4 = afStack_79c[(uint)bVar7 * -2 + 0x18];
    pfVar4[(uint)bVar7 * -2 + 1] = afStack_79c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
    (pfVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_79c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19)[(uint)bVar7 * -2 + 1];
    return;
  }
  iVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (*(uint *)(param_1 + 0x20c24),g_CStormClassInfo.name_hash);
  if (iVar12 != 0) {
    core_xform_cpp_FUN_00585d50(0xbf860a92,_DAT_01ed3734 * 0x10 + local_2c);
    afStack_56c[3] = (float)auStack_49c[3];
    afStack_56c[(uint)bVar7 * -2 + 4] = (float)auStack_49c[(uint)bVar7 * -2 + 4];
    afStack_56c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5] =
         (float)auStack_49c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (afStack_56c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1] =
         (float)(auStack_49c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_56c + 3);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3734 * 0x10);
    iVar12 = _DAT_01ed3738 * 0x10;
    pfVar4 = (float *)(puVar1 + (uint)bVar7 * -2 + 1);
    *puVar1 = local_4f0;
    *pfVar4 = afStack_52c[(uint)bVar7 * -2 + 0x10];
    pfVar4[(uint)bVar7 * -2 + 1] = afStack_52c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11];
    (pfVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_52c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_FUN_00585d50(0xc0060a92,iVar12 + local_2c);
    local_6e0[0] = local_500;
    auStack_70c[(uint)bVar7 * -2 + 0xc] = afStack_52c[(uint)bVar7 * -2 + 0xc];
    auStack_70c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_52c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    (auStack_70c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1] =
         (afStack_52c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(auStack_70c + 0xb);
    puVar1 = (uint *)(param_1 + 0x808 + _DAT_01ed3738 * 0x10);
    puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
    *puVar1 = local_590;
    *puVar6 = auStack_5bc[(uint)bVar7 * -2 + 0xc];
    puVar6[(uint)bVar7 * -2 + 1] = auStack_5bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (auStack_5bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1];
    return;
  }
  return;
}
