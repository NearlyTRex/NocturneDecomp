// Name: core_doc.cpp_FUN_0046caa0
// Address: 0046caa0
// Address Range: [[0046caa0, 0046e62f]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046caa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046caa0(int param_1)

{
  SMotion *pSVar1;
  CSkeleton *this_ptr;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float10 fVar5;
  CDeformableModelInstance *pCVar6;
  CQuaternion4f *rotation_quat;
  float fVar7;
  char *motion_name;
  code *blend_callback;
  int iVar8;
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
  uint local_221c [2];
  uint local_2214;
  float afStack_1f04 [1505];
  CMatrix3x3f local_780;
  float local_758 [6];
  float fStack_740;
  float fStack_73c;
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
  uint local_444;
  uint local_440;
  uint local_43c;
  uint local_430;
  uint local_42c;
  float local_424 [3];
  uint local_418;
  float local_40c;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  uint local_3e8;
  uint uStack_3dc;
  uint uStack_3d8;
  uint local_3d0;
  uint local_3cc;
  float local_3c4 [3];
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
  float local_334 [3];
  float local_328;
  float afStack_31c [3];
  uint uStack_310;
  float local_304;
  float local_300;
  float local_2fc;
  float fStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2c8 [3];
  int local_2bc;
  int local_2b8;
  uint local_2b4;
  float local_2b0;
  float afStack_2ac [4];
  float local_29c;
  float afStack_298 [3];
  float local_28c;
  float local_288;
  float local_284;
  uint local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  uint local_268;
  float local_25c;
  float local_250;
  float local_24c;
  float local_248;
  float local_244 [4];
  float afStack_234 [4];
  float fStack_224;
  float local_220 [3];
  float local_214;
  float local_210;
  float local_20c;
  float local_208 [3];
  float local_1fc;
  float local_1f8;
  float local_1f4;
  uint local_1f0;
  float fStack_1e4;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c0 [3];
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  uint local_184;
  float local_178;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  uint local_15c;
  float local_154 [3];
  float local_148;
  float local_144;
  float local_140;
  float local_13c [3];
  float local_130;
  float local_12c;
  float local_128;
  uint local_124;
  float local_120;
  uint local_118;
  float local_114;
  uint local_10c;
  uint local_100;
  uint local_fc;
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
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  uint local_ac;
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
  float *local_2c;
  int local_28;
  float *local_24;
  int local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar4 = 0;
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_00524a40(param_1 + 0x158,0);
  local_2258 = local_18;
  if (*(int *)(param_1 + 0x20028) < 0x3e19999a) {
    local_2258 = (CDeformableModelInstance *)
                 ((*(float *)(param_1 + 0x20028) / _DAT_005d9f6c) * (float)local_18);
  }
  if (0.85 < *(float *)(param_1 + 0x20028)) {
    local_2258 = (CDeformableModelInstance *)
                 (((1.0 - *(float *)(param_1 + 0x20028)) / 0.15) * (float)local_2258);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)(param_1 + 0x158));
  if ((0.0 < (float)local_2258) && (-1 < *(int *)(param_1 + 0x20058))) {
    core_doc_cpp_FUN_0046e630(param_1,local_221c);
    local_221c[0] = 0;
    local_2214 = 0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830
              ((CDeformableModelInstance *)(param_1 + 0x158),(SPoseData *)local_221c,
               (float)local_2258,-1,core_skeleton_cpp_FUN_00567360);
  }
  core_doc_cpp_FUN_0046ea80(param_1);
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)(param_1 + 0x158));
  local_20 = *(int *)(pSVar1 + 0x24);
  if (((local_20 == 0x23) || (local_20 == 0x22)) || (local_20 == 0x1f)) {
    local_2c = (float *)(param_1 + 0x2006c);
    if (*(int *)(param_1 + 0x1ff74) == 0) {
      core_door_cpp_FUN_004783d0(_DAT_01b687e0);
      local_2c8[0] = (float)local_3ac;
      afStack_464[(uint)bVar4 * -2 + 0x68] = afStack_464[(uint)bVar4 * -2 + 0x2f];
      afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x69] =
           afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x30];
      core_actor_cpp_FUN_00408bb0(param_1,afStack_464 + 0x67);
      local_3b8 = local_2b0;
      afStack_464[(uint)bVar4 * -2 + 0x2c] = afStack_2ac[(uint)bVar4 * -2];
      afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2d] =
           afStack_2ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (afStack_464 + 0x2b != local_2c) {
        *local_2c = local_3b8;
        local_2c[1] = local_3b4;
        local_2c[2] = local_3b0;
      }
    }
    else {
      core_door_cpp_FUN_004783d0(*(int *)(param_1 + 0x1ff74));
      local_13c[0] = (float)local_3e8;
      afStack_234[(uint)bVar4 * -2 + 0x3f] = afStack_464[(uint)bVar4 * -2 + 0x20];
      afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x40] =
           afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x21];
      core_actor_cpp_FUN_00408bb0(param_1,afStack_234 + 0x3e);
      pfVar2 = local_2c;
      local_304 = local_2d4;
      afStack_464[(uint)bVar4 * -2 + 0x59] = afStack_464[(uint)bVar4 * -2 + 0x65];
      afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5a] =
           afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x66];
      if (afStack_464 + 0x58 != pfVar2) {
        *pfVar2 = local_304;
        pfVar2[1] = local_300;
        pfVar2[2] = local_2fc;
      }
      _DAT_01b687e0 = *(uint *)(param_1 + 0x1ff74);
    }
    pfVar2 = (float *)(param_1 + 0x20070 + (uint)bVar4 * -8);
    local_130 = *(float *)(param_1 + 0x2006c);
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    afStack_234[(uint)bVar4 * -2 + 0x42] = *pfVar2;
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x43] = pfVar2[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_FUN_00569040((CDeformableModelInstance *)(param_1 + 0x158),_DAT_01b68820);
    fVar7 = local_130;
    afStack_90[2] = local_178;
    afStack_90[(uint)bVar4 * -2 + 3] = afStack_234[(uint)bVar4 * -2 + 0x30];
    afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x31];
    fVar7 = fVar7 - afStack_90[2];
    local_148 = fVar7;
    local_144 = local_12c - afStack_90[3];
    local_140 = local_128 - local_80;
    local_250 = fVar7;
    afStack_2ac[(uint)bVar4 * -2 + 0x18] = afStack_234[(uint)bVar4 * -2 + 0x3c];
    afStack_2ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3d];
    local_214 = fVar7;
    local_210 = local_144;
    local_20c = local_140;
    local_1c0[0] = fVar7;
    afStack_234[(uint)bVar4 * -2 + 0x1e] = afStack_234[(uint)bVar4 * -2 + 9];
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_234 + 0x1d);
    pCVar6 = local_18;
    local_430 = local_64;
    afStack_464[(uint)bVar4 * -2 + 0xe] = afStack_90[(uint)bVar4 * -2 + 0xc];
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xf] =
         afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    local_2260 = (pCVar6->base).current_frame_number;
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
      fVar5 = (float10)local_3c / (float10)_DAT_005fecd8;
      acos();
      local_48 = (float)fVar5;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_48);
      local_668.w = local_558;
      pfVar2 = (float *)((int)&local_668 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      *(float *)((int)&local_668 + (uint)bVar4 * -8 + 4) = afStack_584[(uint)bVar4 * -2 + 0xc];
      *pfVar2 = afStack_584[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      pfVar2[(uint)bVar4 * -2 + 1] =
           (afStack_584 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd)[(uint)bVar4 * -2 + 1];
      local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                ((CDeformableModelInstance *)(param_1 + 0x158),&local_668,local_2260,_DAT_01b68820,
                 core_skeleton_cpp_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_48);
      local_658.w = afStack_4a4[3];
      pfVar2 = (float *)((int)&local_658 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      *(float *)((int)&local_658 + (uint)bVar4 * -8 + 4) = afStack_4a4[(uint)bVar4 * -2 + 4];
      *pfVar2 = afStack_4a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
      pfVar2[(uint)bVar4 * -2 + 1] =
           (afStack_4a4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_18,&local_658,local_2260,_DAT_01b68828,core_skeleton_cpp_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_430);
    local_518.w = afStack_584[3];
    pfVar2 = (float *)((int)&local_518 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_518 + (uint)bVar4 * -8 + 4) = afStack_584[(uint)bVar4 * -2 + 4];
    *pfVar2 = afStack_584[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_584 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_518,local_2260,_DAT_01b68820,
               core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_42c);
    local_488.w = local_5b8;
    pfVar2 = (float *)((int)&local_488 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_488 + (uint)bVar4 * -8 + 4) = afStack_5b4[(uint)bVar4 * -2];
    *pfVar2 = afStack_5b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_5b4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_488,local_2260,_DAT_01b68820,core_skeleton_cpp_FUN_00567360);
    iVar8 = *(int *)(param_1 + 0x1ff74);
    if (iVar8 != 0) {
      pfVar2 = (float *)(iVar8 + 0x9c0 + (uint)bVar4 * -8);
      local_3f4 = *(float *)(iVar8 + 0x9bc);
      afStack_464[(uint)bVar4 * -2 + 0x1d] = *pfVar2;
      afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1e] = pfVar2[(uint)bVar4 * -2 + 1];
      core_actor_cpp_FUN_00408bb0(iVar8,param_1 + 0x20);
      local_280 = local_184;
      afStack_2ac[(uint)bVar4 * -2 + 0xc] = afStack_234[(uint)bVar4 * -2 + 0x2d];
      afStack_2ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2e];
      *(uint *)(param_1 + 0x200d0) = 0x3f000000;
      if (local_278 < 0.0) {
        iVar8 = *(int *)(*(int *)(param_1 + 0x1ff74) + 0x2e4);
        if (iVar8 == 0) {
          local_2b4 = 0xc0000000;
          local_2bc = iVar8;
          local_2b8 = iVar8;
          core_actor_cpp_FUN_00408ac0(*(uint *)(param_1 + 0x1ff74),&local_2bc);
          local_364 = local_394;
          afStack_464[(uint)bVar4 * -2 + 0x41] = afStack_464[(uint)bVar4 * -2 + 0x35];
          afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x42] =
               afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x36];
          local_3f4 = local_3f4 + local_364;
          local_3f0 = local_3f0 + local_360;
          local_3ec = local_3ec + local_35c;
        }
        if (*(int *)(*(int *)(param_1 + 0x1ff74) + 0x2e4) == 1) {
          *(uint *)(param_1 + 0x200d0) = 0;
        }
      }
      if (0.0 < local_278) {
        if (*(int *)(*(int *)(param_1 + 0x1ff74) + 0x2e4) == 1) {
          local_244[0] = 0.0;
          local_244[2] = 2.0;
          local_244[1] = 0.0;
          core_actor_cpp_FUN_00408ac0(*(uint *)(param_1 + 0x1ff74),afStack_2ac + 0x1a);
          local_7c = local_b8;
          afStack_90[(uint)bVar4 * -2 + 6] = afStack_234[(uint)bVar4 * -2 + 0x60];
          afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x61];
          local_3f4 = local_3f4 + local_7c;
          local_3f0 = local_3f0 + local_78;
          local_3ec = local_3ec + local_74;
        }
        if (*(int *)(*(int *)(param_1 + 0x1ff74) + 0x2e4) == 0) {
          *(uint *)(param_1 + 0x200d0) = 0;
        }
      }
      local_19c = local_3f4 - *(float *)(param_1 + 0x20);
      local_198 = local_3f0 - *(float *)(param_1 + 0x24);
      local_194 = local_3ec - *(float *)(param_1 + 0x28);
      local_448 = local_19c;
      afStack_464[(uint)bVar4 * -2 + 8] = afStack_234[(uint)bVar4 * -2 + 0x27];
      afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9] =
           afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x28];
      if ((float *)(param_1 + 0x200c0) != afStack_464 + 7) {
        *(float *)(param_1 + 0x200c0) = local_448;
        *(uint *)(param_1 + 0x200c4) = local_444;
        *(uint *)(param_1 + 0x200c8) = local_440;
      }
      *(uint *)(param_1 + 0x200c4) = 0;
      core_actor_cpp_FUN_00408bb0(param_1,*(int *)(param_1 + 0x1ff74) + 0x9bc);
      local_220[0] = (float)local_37c;
      afStack_234[(uint)bVar4 * -2 + 6] = afStack_464[(uint)bVar4 * -2 + 0x3b];
      afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3c];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_234 + 5);
      local_358 = local_388;
      afStack_464[(uint)bVar4 * -2 + 0x44] = afStack_464[(uint)bVar4 * -2 + 0x38];
      afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x45] =
           afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x39];
      *(float *)(param_1 + 0x200cc) = *(float *)(param_1 + 0x34) + local_354;
    }
  }
  iVar8 = param_1 + 0x158;
  local_28 = iVar8;
  if (local_20 == 0x18) {
    pfVar2 = (float *)(param_1 + 0x20070 + (uint)bVar4 * -8);
    local_340 = *(float *)(param_1 + 0x2006c);
    afStack_464[(uint)bVar4 * -2 + 0x4a] = *pfVar2;
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x4b] = pfVar2[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(iVar8,_DAT_01b68824);
    fVar7 = local_340;
    local_1fc = local_3a0;
    afStack_234[(uint)bVar4 * -2 + 0xf] = afStack_464[(uint)bVar4 * -2 + 0x32];
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x33];
    local_70 = fVar7 - local_1fc;
    local_6c = local_33c - local_1f8;
    local_68 = local_338 - local_1f4;
    local_3c4[0] = fVar7 - local_1fc;
    afStack_464[(uint)bVar4 * -2 + 0x29] = afStack_90[(uint)bVar4 * -2 + 9];
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2a] =
         afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_464 + 0x28);
    iVar8 = local_28;
    local_100 = local_ac;
    afStack_234[(uint)bVar4 * -2 + 0x4e] = afStack_234[(uint)bVar4 * -2 + 99];
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x4f] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 100];
    local_2238 = *(float *)(iVar8 + 8);
    if ((float)_DAT_005d9fdc <= local_2238) {
      local_2238 = 1.0 - (local_2238 + (float)_DAT_005d9fe4) * (float)_DAT_005d9fec;
      if (local_2238 < 0.0) {
        local_2238 = 0.0;
      }
    }
    else {
      local_2238 = local_2238 * (float)_DAT_005d9fec;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_100);
    local_6f8.w = local_548;
    pfVar2 = (float *)((int)&local_6f8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_6f8 + (uint)bVar4 * -8 + 4) = afStack_584[(uint)bVar4 * -2 + 0x10];
    *pfVar2 = afStack_584[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_584 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11)[(uint)bVar4 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_6f8,local_2238,_DAT_01b68858,
               core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_fc);
    local_6b8.w = local_528;
    pfVar2 = (float *)((int)&local_6b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_6b8 + (uint)bVar4 * -8 + 4) = afStack_584[(uint)bVar4 * -2 + 0x18];
    *pfVar2 = afStack_584[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_584 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19)[(uint)bVar4 * -2 + 1];
    rotation_quat = &local_6b8;
    pCVar6 = local_18;
    iVar8 = _DAT_01b68824;
  }
  else if (local_20 == 0x16) {
    pfVar2 = (float *)(param_1 + 0x20070 + (uint)bVar4 * -8);
    local_28c = *(float *)(param_1 + 0x2006c);
    afStack_2ac[(uint)bVar4 * -2 + 9] = *pfVar2;
    afStack_2ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] = pfVar2[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(iVar8,_DAT_01b68824);
    fVar7 = local_28c;
    local_2ec = local_328;
    afStack_464[(uint)bVar4 * -2 + 0x5f] = afStack_464[(uint)bVar4 * -2 + 0x50];
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x60] =
         afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x51];
    local_d0 = fVar7 - local_2ec;
    local_cc = local_288 - local_2e8;
    local_c8 = local_284 - local_2e4;
    local_154[0] = fVar7 - local_2ec;
    afStack_234[(uint)bVar4 * -2 + 0x39] = afStack_234[(uint)bVar4 * -2 + 0x5a];
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3a] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5b];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_234 + 0x38);
    iVar8 = local_28;
    local_160 = local_40c;
    afStack_234[(uint)bVar4 * -2 + 0x36] = afStack_464[(uint)bVar4 * -2 + 0x17];
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x37] =
         afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x18];
    local_224c = *(float *)(iVar8 + 8);
    if ((float)_DAT_005d9fc4 <= local_224c) {
      local_224c = 1.0 - (local_224c + (float)_DAT_005d9fcc) * (float)_DAT_005d9f94;
      if (local_224c < 0.0) {
        local_224c = 0.0;
      }
    }
    else {
      local_224c = local_224c * (float)_DAT_005d9fd4;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(-local_160);
    local_478.w = afStack_684[3];
    pfVar2 = (float *)((int)&local_478 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_478 + (uint)bVar4 * -8 + 4) = afStack_684[(uint)bVar4 * -2 + 4];
    *pfVar2 = afStack_684[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_684 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_478,local_224c,_DAT_01b68824,
               core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_15c);
    rotation_quat = &local_598;
    local_598.w = local_648;
    pfVar2 = (float *)((int)&local_598 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_598 + (uint)bVar4 * -8 + 4) = afStack_644[(uint)bVar4 * -2];
    *pfVar2 = afStack_644[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_644 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    pCVar6 = local_18;
    local_2238 = local_224c;
    iVar8 = _DAT_01b68824;
  }
  else if (local_20 == 0x19) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              (&local_780,(CVector3f *)(param_1 + 0x1ff9c));
    if ((DAT_01b687f4 & 1) == 0) {
      DAT_01b687f4 = DAT_01b687f4 | 1;
    }
    iVar8 = *(int *)(param_1 + 0x1ff8c);
    if (iVar8 != 0) {
      (**(code **)(*(int *)(iVar8 + 0x154) + 0x1c))(iVar8);
      pfVar2 = local_758;
      pfVar3 = &fStack_740;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar3 = *pfVar2;
        pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
        pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
      }
      fStack_c4 = fStack_740 + fStack_734;
      fStack_c0 = fStack_73c + fStack_730;
      fStack_bc = fStack_738 + fStack_72c;
      fStack_1a8 = fStack_740 + fStack_734;
      afStack_234[(uint)bVar4 * -2 + 0x24] = afStack_234[(uint)bVar4 * -2 + 0x5d];
      afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25] =
           afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5e];
      fStack_190 = fStack_1a8 * _DAT_005d9f9c;
      fStack_18c = fStack_1a4 * _DAT_005d9f9c;
      fStack_188 = fStack_1a0 * _DAT_005d9f9c;
      fStack_2f8 = fStack_1a8 * _DAT_005d9f9c;
      afStack_464[(uint)bVar4 * -2 + 0x5c] = afStack_234[(uint)bVar4 * -2 + 0x2a];
      afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5d] =
           afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2b];
      if (&stack0x00000000 != (byte *)0x1b68adc) {
        _DAT_01b687e4 = fStack_2f8;
        _DAT_01b687e8 = uStack_2f4;
        _DAT_01b687ec = uStack_2f0;
      }
    }
    core_dirmat_cpp_FUN_0045f690(&local_780,&DAT_01b687e4);
    local_34c = local_1cc;
    afStack_464[(uint)bVar4 * -2 + 0x47] = afStack_234[(uint)bVar4 * -2 + 0x1b];
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x48] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c];
    fStack_1b4 = *(float *)(param_1 + 0x1ff90) + local_34c;
    fStack_1b0 = *(float *)(param_1 + 0x1ff94) + fStack_348;
    fStack_1ac = *(float *)(param_1 + 0x1ff98) + fStack_344;
    afStack_298[0] = fStack_1b4;
    afStack_2ac[(uint)bVar4 * -2 + 6] = afStack_234[(uint)bVar4 * -2 + 0x21];
    afStack_2ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22];
    core_actor_cpp_FUN_00408bb0(param_1,afStack_2ac + 5);
    fStack_274 = local_a0[3];
    afStack_2ac[(uint)bVar4 * -2 + 0xf] = afStack_90[(uint)bVar4 * -2];
    afStack_2ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_00569040(local_18,_DAT_01b68824);
    fVar7 = fStack_274;
    afStack_234[2] = fStack_1e4;
    afStack_234[(uint)bVar4 * -2 + 3] = afStack_234[(uint)bVar4 * -2 + 0x15];
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
    fStack_e8 = fVar7 - afStack_234[2];
    fStack_e4 = fStack_270 - afStack_234[3];
    fStack_e0 = fStack_26c - fStack_224;
    afStack_31c[0] = fVar7 - afStack_234[2];
    afStack_464[(uint)bVar4 * -2 + 0x53] = afStack_234[(uint)bVar4 * -2 + 0x54];
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x54] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x55];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_464 + 0x52);
    pCVar6 = local_18;
    uStack_3dc = uStack_310;
    afStack_464[(uint)bVar4 * -2 + 0x23] = afStack_464[(uint)bVar4 * -2 + 0x56];
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x24] =
         afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x57];
    fStack_2244 = *(float *)((int)pCVar6 + 8);
    if ((float)_DAT_005d9fa4 <= fStack_2244) {
      fStack_2244 = 1.0 - (fStack_2244 + (float)_DAT_005d9fac) * (float)_DAT_005d9fb4;
      if (fStack_2244 < 0.0) {
        fStack_2244 = 0.0;
      }
    }
    else {
      fStack_2244 = fStack_2244 * (float)_DAT_005d9fbc;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(uStack_3dc);
    CStack_5e8.w = afStack_5b4[3];
    pfVar2 = (float *)((int)&CStack_5e8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&CStack_5e8 + (uint)bVar4 * -8 + 4) = afStack_5b4[(uint)bVar4 * -2 + 4];
    *pfVar2 = afStack_5b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_5b4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&CStack_5e8,fStack_2244,_DAT_01b68858,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(uStack_3d8);
    pCVar6 = local_18;
    rotation_quat = &CStack_618;
    CStack_618.w = afStack_464[3];
    pfVar2 = (float *)((int)&CStack_618 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&CStack_618 + (uint)bVar4 * -8 + 4) = afStack_464[(uint)bVar4 * -2 + 4];
    *pfVar2 = afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_464 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
    local_2238 = fStack_2244;
    iVar8 = _DAT_01b68824;
  }
  else if (local_20 == 0x24) {
    local_24 = (float *)(param_1 + 0x2006c);
    if (*(int *)(param_1 + 0x1ff80) == 0) {
      core_lever_cpp_FUN_004ff6b0(_DAT_01b687f0);
      local_424[0] = (float)local_1f0;
      afStack_464[(uint)bVar4 * -2 + 0x11] = afStack_234[(uint)bVar4 * -2 + 0x12];
      afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x12] =
           afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
      core_actor_cpp_FUN_00408bb0(param_1,afStack_464 + 0x10);
      afStack_2ac[2] = local_25c;
      afStack_2ac[(uint)bVar4 * -2 + 3] = afStack_2ac[(uint)bVar4 * -2 + 0x15];
      afStack_2ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_2ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
      if (afStack_2ac + 2 != local_24) {
        *local_24 = afStack_2ac[2];
        local_24[1] = afStack_2ac[3];
        local_24[2] = local_29c;
      }
    }
    else {
      core_lever_cpp_FUN_004ff6b0(*(int *)(param_1 + 0x1ff80));
      local_208[0] = (float)local_10c;
      afStack_234[(uint)bVar4 * -2 + 0xc] = afStack_234[(uint)bVar4 * -2 + 0x4b];
      afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x4c];
      core_actor_cpp_FUN_00408bb0(param_1,afStack_234 + 0xb);
      pfVar2 = local_24;
      local_400 = local_244[3];
      afStack_464[(uint)bVar4 * -2 + 0x1a] = afStack_234[(uint)bVar4 * -2];
      afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1b] =
           afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (afStack_464 + 0x19 != pfVar2) {
        *pfVar2 = local_400;
        pfVar2[1] = local_3fc;
        pfVar2[2] = local_3f8;
      }
      _DAT_01b687f0 = *(uint *)(param_1 + 0x1ff80);
    }
    pfVar2 = (float *)(param_1 + 0x20070 + (uint)bVar4 * -8);
    local_16c = *(float *)(param_1 + 0x2006c);
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    afStack_234[(uint)bVar4 * -2 + 0x33] = *pfVar2;
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x34] = pfVar2[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_FUN_00569040((CDeformableModelInstance *)(param_1 + 0x158),_DAT_01b68824);
    fVar7 = local_16c;
    local_370 = local_dc;
    afStack_464[(uint)bVar4 * -2 + 0x3e] = afStack_234[(uint)bVar4 * -2 + 0x57];
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3f] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x58];
    fVar7 = fVar7 - local_370;
    local_2e0 = fVar7;
    local_2dc = local_168 - local_36c;
    local_2d8 = local_164 - local_368;
    local_1d8 = fVar7;
    afStack_234[(uint)bVar4 * -2 + 0x18] = afStack_464[(uint)bVar4 * -2 + 0x62];
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
         afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 99];
    local_f4 = fVar7;
    local_f0 = local_2dc;
    local_ec = local_2d8;
    local_334[0] = fVar7;
    afStack_464[(uint)bVar4 * -2 + 0x4d] = afStack_234[(uint)bVar4 * -2 + 0x51];
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x4e] =
         afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x52];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_464 + 0x4c);
    pCVar6 = local_18;
    local_3d0 = local_268;
    afStack_464[(uint)bVar4 * -2 + 0x26] = afStack_2ac[(uint)bVar4 * -2 + 0x12];
    afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x27] =
         afStack_2ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
    local_2250 = (pCVar6->base).current_frame_number;
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
      fVar5 = (float10)local_38 / (float10)_DAT_005fecd8;
      acos();
      local_4c = (float)fVar5;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_4c);
      local_6d8.w = local_688;
      pfVar2 = (float *)((int)&local_6d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      *(float *)((int)&local_6d8 + (uint)bVar4 * -8 + 4) = afStack_684[(uint)bVar4 * -2];
      *pfVar2 = afStack_684[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      pfVar2[(uint)bVar4 * -2 + 1] =
           (afStack_684 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
      local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                ((CDeformableModelInstance *)(param_1 + 0x158),&local_6d8,local_2250,_DAT_01b68824,
                 core_skeleton_cpp_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_4c);
      local_4c8.w = local_4e8;
      pfVar2 = (float *)((int)&local_4c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      *(float *)((int)&local_4c8 + (uint)bVar4 * -8 + 4) = afStack_4e4[(uint)bVar4 * -2];
      *pfVar2 = afStack_4e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      pfVar2[(uint)bVar4 * -2 + 1] =
           (afStack_4e4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_18,&local_4c8,local_2250,_DAT_01b6882c,core_skeleton_cpp_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_3d0);
    local_608.w = local_468;
    pfVar2 = (float *)((int)&local_608 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_608 + (uint)bVar4 * -8 + 4) = afStack_464[(uint)bVar4 * -2];
    *pfVar2 = afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_464 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_608,local_2250,_DAT_01b68824,
               core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_3cc);
    rotation_quat = &local_5f8;
    local_5f8.w = local_728;
    pfVar2 = (float *)((int)&local_5f8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_5f8 + (uint)bVar4 * -8 + 4) = afStack_724[(uint)bVar4 * -2];
    *pfVar2 = afStack_724[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_724 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    pCVar6 = local_18;
    local_2238 = local_2250;
    iVar8 = _DAT_01b68824;
  }
  else if (local_20 == 0x1a) {
    local_2264 = *(float *)(param_1 + 0x160) * (float)_DAT_005d9f8c;
    if (1.0 < local_2264) {
      local_2264 = 1.0;
    }
    fVar5 = (float10)fpatan((float10)*(float *)(param_1 + 0x20084) / (float10)_DAT_005fecd8,
                            (float10)1);
    local_44 = (float)fVar5;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_44);
    local_6a8.w = local_6c8;
    pfVar2 = (float *)((int)&local_6a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_6a8 + (uint)bVar4 * -8 + 4) = afStack_6c4[(uint)bVar4 * -2];
    *pfVar2 = afStack_6c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_6c4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_6a8,local_2264,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_44);
    pCVar6 = local_18;
    rotation_quat = &local_6a8;
    local_6a8.w = local_508;
    pfVar2 = (float *)((int)&local_6a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_6a8 + (uint)bVar4 * -8 + 4) = afStack_504[(uint)bVar4 * -2];
    *pfVar2 = afStack_504[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_504 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    local_2238 = local_2264;
    iVar8 = _DAT_01b68820;
  }
  else if (local_20 == 0x1b) {
    local_2234 = *(float *)(param_1 + 0x160);
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
    core_skeleton_cpp_FUN_00569040(param_1 + 0x158,_DAT_01b68824);
    local_124 = local_43c;
    afStack_234[(uint)bVar4 * -2 + 0x45] = afStack_464[(uint)bVar4 * -2 + 0xb];
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x46] =
         afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xc];
    local_30 = (*(float *)(param_1 + 0x20070) + *(float *)(param_1 + 0x20088)) -
               *(float *)(param_1 + 0x2007c);
    if (*(int *)(param_1 + 0x1ff78) != 0) {
      _DAT_01b688ac =
           (CDeformableModelInstance *)core_doc_cpp_FUN_00468b80(*(int *)(param_1 + 0x1ff78));
      local_18 = _DAT_01b688ac;
    }
    local_30 = local_30 - (float)_DAT_01b688ac;
    fVar5 = (float10)local_120 - (float10)local_30;
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0((float)fVar5);
    local_4f8.w = afStack_724[3];
    pfVar2 = (float *)((int)&local_4f8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_4f8 + (uint)bVar4 * -8 + 4) = afStack_724[(uint)bVar4 * -2 + 4];
    *pfVar2 = afStack_724[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_724 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_4f8,local_2234,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_4f8,local_2234,_DAT_01b68820,core_skeleton_cpp_FUN_00567360);
    fVar5 = (float10)fpatan((float10)*(float *)(param_1 + 0x20084) / (float10)_DAT_005fecd8,
                            (float10)1);
    local_40 = (float)fVar5;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_40);
    local_4d8.w = local_538;
    pfVar2 = (float *)((int)&local_4d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_4d8 + (uint)bVar4 * -8 + 4) = afStack_584[(uint)bVar4 * -2 + 0x14];
    *pfVar2 = afStack_584[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_584 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15)[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_4d8,local_2234,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_40);
    pCVar6 = local_18;
    rotation_quat = &local_4d8;
    local_4d8.w = local_4a8;
    pfVar2 = (float *)((int)&local_4d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_4d8 + (uint)bVar4 * -8 + 4) = afStack_4a4[(uint)bVar4 * -2];
    *pfVar2 = afStack_4a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_4a4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    local_2238 = local_2234;
    iVar8 = _DAT_01b68820;
  }
  else if (local_20 == 0x1c) {
    local_225c = 1.0 - (*(float *)(param_1 + 0x160) + (float)_DAT_005d9f84) * (float)_DAT_005d9f8c;
    if (local_225c < 0.0) {
      local_225c = 0.0;
    }
    if (1.0 < local_225c) {
      local_225c = 1.0;
    }
    fVar5 = (float10)fpatan((float10)*(float *)(param_1 + 0x20084) / (float10)_DAT_005fecd8,
                            (float10)1);
    local_1c = (float)fVar5;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_1c);
    local_4b8.w = local_6e8;
    pfVar2 = (float *)((int)&local_4b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_4b8 + (uint)bVar4 * -8 + 4) = afStack_6e4[(uint)bVar4 * -2];
    *pfVar2 = afStack_6e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_6e4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_4b8,local_225c,_DAT_01b68824,
               core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_1c);
    rotation_quat = &local_4b8;
    local_4b8.w = local_588;
    pfVar2 = (float *)((int)&local_4b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_4b8 + (uint)bVar4 * -8 + 4) = afStack_584[(uint)bVar4 * -2];
    *pfVar2 = afStack_584[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_584 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    pCVar6 = local_18;
    local_2238 = local_225c;
    iVar8 = _DAT_01b68820;
  }
  else {
    if (local_20 != 0x1d) goto LAB_0046d3c6;
    local_2240 = *(float *)(param_1 + 0x160);
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
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    core_skeleton_cpp_FUN_00569040(local_18,_DAT_01b68824);
    local_118 = local_418;
    afStack_234[(uint)bVar4 * -2 + 0x48] = afStack_464[(uint)bVar4 * -2 + 0x14];
    afStack_234[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x49] =
         afStack_464[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15];
    fVar5 = (float10)local_114 - (float10)*(float *)(param_1 + 0x20070);
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0((float)fVar5);
    pCVar6 = local_18;
    local_708.w = afStack_644[3];
    pfVar2 = (float *)((int)&local_708 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_708 + (uint)bVar4 * -8 + 4) = afStack_644[(uint)bVar4 * -2 + 4];
    *pfVar2 = afStack_644[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_644 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar6,&local_708,local_2240,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_708,local_2240,_DAT_01b68820,core_skeleton_cpp_FUN_00567360);
    fVar5 = (float10)fpatan((float10)*(float *)(param_1 + 0x20084) / (float10)_DAT_005fecd8,
                            (float10)1);
    local_50 = (float)fVar5;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_50);
    local_5c8.w = local_5d8;
    pfVar2 = (float *)((int)&local_5c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_5c8 + (uint)bVar4 * -8 + 4) = afStack_5d4[(uint)bVar4 * -2];
    *pfVar2 = afStack_5d4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_5d4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_5c8,local_2240,_DAT_01b68824,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_50);
    pCVar6 = local_18;
    rotation_quat = &local_5c8;
    local_5c8.w = local_628;
    pfVar2 = (float *)((int)&local_5c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_5c8 + (uint)bVar4 * -8 + 4) = afStack_644[(uint)bVar4 * -2 + 8];
    *pfVar2 = afStack_644[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_644 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1];
    local_2238 = local_2240;
    iVar8 = _DAT_01b68820;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (pCVar6,rotation_quat,local_2238,iVar8,core_skeleton_cpp_FUN_00567360);
LAB_0046d3c6:
  if (*(int *)&g_CGamePtr->field_0x25c != 0) {
    local_a0[1] = 0.0;
    local_a0[2] = 0.0;
    local_a0[0] = 0.0;
    if ((*(int *)(param_1 + 0x1ffac) != 0) && (*(int *)(param_1 + 0x20004) != 0)) {
      local_a0[0] = *(float *)(param_1 + 0x1ffc8);
    }
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar7 = 1.0;
    iVar8 = _DAT_01b68814;
    core_xform_cpp_FUN_005b7ed0(afStack_234 + 0x65);
    local_698.w = local_568;
    pfVar2 = (float *)((int)&local_698 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_698 + (uint)bVar4 * -8 + 4) = afStack_584[(uint)bVar4 * -2 + 8];
    *pfVar2 = afStack_584[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_584 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              ((CDeformableModelInstance *)(param_1 + 0x158),&local_698,fVar7,iVar8,blend_callback);
  }
  if (0.0 < *(float *)(param_1 + 0x20014)) {
    iVar8 = 1;
    motion_name = "?draw_holsters2aimPistols" + 1;
    pCVar6 = (CDeformableModelInstance *)(param_1 + 0x158);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar6);
    iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                      ((CMotionList *)this_ptr,motion_name,iVar8);
    local_34 = core_motion_cpp_FUN_00525110(pCVar6,iVar8,0x3f800000);
    local_18 = (CDeformableModelInstance *)local_34;
    core_skeleton_cpp_FUN_00568100
              (pCVar6,iVar8,local_34,*(uint *)(param_1 + 0x20014),_DAT_01b68854,
               core_skeleton_cpp_FUN_00567360);
    return;
  }
  return;
}
