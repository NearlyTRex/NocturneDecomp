// Name: core_stranger.cpp_FUN_00588ad0
// Address: 00588ad0
// Address Range: [[00588ad0, 00589f0b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_00588ad0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_00588ad0(CStranger *this_ptr)

{
  byte *puVar1;
  SMotion *pSVar2;
  CSkeleton *this_ptr_00;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float10 fVar6;
  CDeformableModelInstance *pCVar7;
  CQuaternion4f *rotation_quat;
  float fVar8;
  char *motion_name;
  code *blend_callback;
  int iVar9;
  float local_204c;
  float local_203c;
  float local_2038;
  float local_2034;
  float fStack_2030;
  float local_202c;
  float local_2024;
  CDeformableModelInstance *local_2020;
  float local_2010;
  uint local_200c [2];
  uint local_2004;
  float afStack_1cf4 [1505];
  CMatrix3x3f local_570 [40];
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float local_530 [6];
  uint local_518;
  uint auStack_514 [7];
  uint local_4f8;
  uint auStack_4f4 [3];
  uint local_4e8;
  uint auStack_4e4 [7];
  uint local_4c8;
  uint auStack_4c4 [7];
  uint local_4a8;
  uint local_498;
  uint auStack_494 [3];
  uint local_488;
  uint auStack_484 [7];
  uint local_468;
  uint uStack_458;
  uint local_448;
  uint auStack_444 [7];
  uint local_428;
  uint local_418;
  uint auStack_414 [3];
  uint local_408;
  float afStack_404 [3];
  uint local_3f8;
  uint auStack_3f4 [7];
  uint local_3d8;
  uint local_3c8;
  uint auStack_3c4 [7];
  uint local_3a8;
  uint local_398;
  uint local_388;
  float afStack_384 [7];
  uint uStack_368;
  uint local_358;
  uint auStack_354 [3];
  uint local_348;
  float afStack_344 [7];
  uint local_328;
  uint local_318;
  uint local_308;
  uint auStack_304 [3];
  uint local_2f8;
  uint auStack_2f4 [3];
  uint uStack_2e8;
  uint auStack_2e4 [7];
  uint uStack_2c8;
  float afStack_2c4 [4];
  float fStack_2b4;
  float fStack_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float fStack_2a0;
  float local_294;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  uint uStack_27c;
  float local_270;
  float local_264 [3];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  uint local_24c;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  uint local_228;
  float local_224;
  float local_21c;
  float local_218;
  float local_214;
  float fStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint local_204;
  float fStack_1f8;
  float local_1ec;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint local_1bc;
  uint local_1b0;
  uint local_1ac;
  float local_1a4;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float local_18c;
  float local_188;
  float local_184;
  float afStack_180 [3];
  float afStack_174 [3];
  uint local_168;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144 [3];
  uint local_138;
  float local_134;
  float local_12c;
  float local_120;
  float fStack_11c;
  float fStack_118;
  uint local_114;
  uint local_110;
  float local_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float local_e4;
  float local_d8;
  uint local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [3];
  float local_9c [4];
  float afStack_8c [4];
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c [3];
  uint local_60;
  float local_54 [5];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float *local_20;
  byte *local_1c;
  CDeformableModelInstance *local_18;
  
  bVar5 = 0;
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0);
  local_2020 = local_18;
  if (*(int *)&this_ptr->field_0x20028 < 0x3e19999a) {
    local_2020 = (CDeformableModelInstance *)
                 ((*(float *)&this_ptr->field_0x20028 / _DAT_005f6a51) * (float)local_18);
  }
  if (0.85 < *(float *)&this_ptr->field_0x20028) {
    local_2020 = (CDeformableModelInstance *)
                 (((1.0 - *(float *)&this_ptr->field_0x20028) / 0.15) * (float)local_2020);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  if ((0.0 < (float)local_2020) && (-1 < *(int *)&this_ptr->field_0x20058)) {
    core_stranger_cpp_FUN_00589f10(this_ptr,(SPose *)local_200c);
    local_200c[0] = 0;
    local_2004 = 0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(SPoseData *)local_200c,
               (float)local_2020,-1,core_skeleton_cpp_FUN_00567360);
  }
  core_stranger_cpp_CStranger_makeDrawDecision_FUN_0058a360(this_ptr);
  local_1c = &this_ptr->field_0x158;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)local_1c);
  puVar1 = local_1c;
  iVar9 = *(int *)(pSVar2 + 0x24);
  if (iVar9 == 0x20) {
    pfVar3 = (float *)((int)this_ptr + (uint)bVar5 * -8 + 0x20070);
    afStack_8c[2] = *(float *)&this_ptr->field_0x2006c;
    afStack_8c[(uint)bVar5 * -2 + 3] = *pfVar3;
    afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] = pfVar3[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(puVar1,_DAT_02c83610);
    fVar8 = afStack_8c[2];
    local_2ac = local_270;
    afStack_2c4[(uint)bVar5 * -2 + 7] = afStack_2c4[(uint)bVar5 * -2 + 0x16];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 8] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x17];
    local_234 = fVar8 - local_2ac;
    local_230 = afStack_8c[3] - local_2a8;
    local_22c = local_7c - local_2a4;
    local_6c[0] = fVar8 - local_2ac;
    afStack_8c[(uint)bVar5 * -2 + 9] = afStack_2c4[(uint)bVar5 * -2 + 0x25];
    afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x26];
    core_vecdir_cpp_FUN_005a7520(afStack_8c + 8);
    puVar1 = local_1c;
    local_1b0 = local_1bc;
    afStack_2c4[(uint)bVar5 * -2 + 0x46] = afStack_2c4[(uint)bVar5 * -2 + 0x43];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x47] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x44];
    local_2034 = *(float *)(puVar1 + 8);
    if ((float)_DAT_005f6ac1 <= local_2034) {
      local_2034 = 1.0 - (local_2034 + (float)_DAT_005f6ac9) * (float)_DAT_005f6ad1;
      if (local_2034 < 0.0) {
        local_2034 = 0.0;
      }
    }
    else {
      local_2034 = local_2034 * (float)_DAT_005f6ad1;
    }
    core_xform_cpp_FUN_005b7af0(local_1b0);
    local_308 = auStack_484[3];
    auStack_304[(uint)bVar5 * -2] = auStack_484[(uint)bVar5 * -2 + 4];
    auStack_304[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_484[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (auStack_304 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_484 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_005695e0
              (local_18,(CQuaternion4f *)&local_308,local_2034,_DAT_02c83644,
               core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_FUN_005b7b30(local_1ac);
    pCVar7 = local_18;
    rotation_quat = (CQuaternion4f *)&local_348;
    local_348 = local_318;
    afStack_344[(uint)bVar5 * -2] = afStack_344[(uint)bVar5 * -2 + 0xc];
    afStack_344[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_344[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    (afStack_344 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_344 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
    iVar9 = _DAT_02c83610;
  }
  else if (iVar9 == 0x1e) {
    pfVar3 = (float *)((int)this_ptr + (uint)bVar5 * -8 + 0x20070);
    local_cc = *(float *)&this_ptr->field_0x2006c;
    afStack_2c4[(uint)bVar5 * -2 + 0x7f] = *pfVar3;
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x80] = pfVar3[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(local_1c,_DAT_02c83610);
    fVar8 = local_cc;
    local_1e0 = local_1ec;
    afStack_2c4[(uint)bVar5 * -2 + 0x3a] = afStack_2c4[(uint)bVar5 * -2 + 0x37];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3b] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x38];
    local_15c = fVar8 - local_1e0;
    local_158 = local_c8 - local_1dc;
    local_154 = local_c4 - local_1d8;
    local_a8[0] = fVar8 - local_1e0;
    afStack_2c4[(uint)bVar5 * -2 + 0x88] = afStack_2c4[(uint)bVar5 * -2 + 0x5b];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x89] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x5c];
    core_vecdir_cpp_FUN_005a7520(afStack_2c4 + 0x87);
    puVar1 = local_1c;
    local_d8 = local_12c;
    afStack_2c4[(uint)bVar5 * -2 + 0x7c] = afStack_2c4[(uint)bVar5 * -2 + 0x67];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x7d] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x68];
    local_202c = *(float *)(puVar1 + 8);
    if ((float)_DAT_005f6aa9 <= local_202c) {
      local_202c = 1.0 - (local_202c + (float)_DAT_005f6ab1) * (float)_DAT_005f6a79;
      if (local_202c < 0.0) {
        local_202c = 0.0;
      }
    }
    else {
      local_202c = local_202c * (float)_DAT_005f6ab9;
    }
    core_xform_cpp_FUN_005b7af0(-local_d8);
    local_4f8 = local_4a8;
    auStack_4f4[(uint)bVar5 * -2] = auStack_4c4[(uint)bVar5 * -2 + 8];
    auStack_4f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_4c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    (auStack_4f4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_4c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&local_4f8,
               local_202c,_DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_FUN_005b7b30(local_d4);
    local_3c8 = auStack_3c4[3];
    auStack_3c4[(uint)bVar5 * -2] = auStack_3c4[(uint)bVar5 * -2 + 4];
    auStack_3c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_3c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (auStack_3c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_3c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    rotation_quat = (CQuaternion4f *)&local_3c8;
    pCVar7 = local_18;
    local_2034 = local_202c;
    iVar9 = _DAT_02c83610;
  }
  else if (iVar9 == 0x21) {
    core_dirmat_cpp_FUN_0045f3e0(local_570,(CVector3f *)&this_ptr->field_0x1ff9c);
    if ((DAT_02c835e0 & 1) == 0) {
      DAT_02c835e0 = DAT_02c835e0 | 1;
    }
    iVar9 = *(int *)&this_ptr->field_0x1ff8c;
    if (iVar9 != 0) {
      (**(code **)(*(int *)(iVar9 + 0x154) + 0x1c))(iVar9);
      pfVar3 = local_530;
      pfVar4 = &fStack_548;
      for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
        pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
      }
      fStack_258 = fStack_548 + fStack_53c;
      fStack_254 = fStack_544 + fStack_538;
      fStack_250 = fStack_540 + fStack_534;
      fStack_1d4 = fStack_548 + fStack_53c;
      afStack_2c4[(uint)bVar5 * -2 + 0x3d] = afStack_2c4[(uint)bVar5 * -2 + 0x1c];
      afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3e] =
           afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d];
      fStack_1c8 = fStack_1d4 * _DAT_005f6a81;
      fStack_1c4 = fStack_1d0 * _DAT_005f6a81;
      fStack_1c0 = fStack_1cc * _DAT_005f6a81;
      fStack_210 = fStack_1d4 * _DAT_005f6a81;
      afStack_2c4[(uint)bVar5 * -2 + 0x2e] = afStack_2c4[(uint)bVar5 * -2 + 0x40];
      afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2f] =
           afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x41];
      if (&stack0x00000000 != (byte *)0x2c837e0) {
        _DAT_02c835d0 = fStack_210;
        _DAT_02c835d4 = uStack_20c;
        _DAT_02c835d8 = uStack_208;
      }
    }
    core_dirmat_cpp_FUN_0045f690(local_570,&DAT_02c835d0);
    local_120 = local_1a4;
    afStack_2c4[(uint)bVar5 * -2 + 0x6a] = afStack_2c4[(uint)bVar5 * -2 + 0x49];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x6b] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x4a];
    fStack_fc = *(float *)&this_ptr->field_0x1ff90 + local_120;
    fStack_f8 = *(float *)&this_ptr->field_0x1ff94 + fStack_11c;
    fStack_f4 = *(float *)&this_ptr->field_0x1ff98 + fStack_118;
    afStack_174[0] = fStack_fc;
    afStack_2c4[(uint)bVar5 * -2 + 0x55] = afStack_2c4[(uint)bVar5 * -2 + 0x73];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x56] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x74];
    core_actor_cpp_FUN_00408bb0(this_ptr,afStack_2c4 + 0x54);
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    fStack_288 = fStack_1f8;
    afStack_2c4[(uint)bVar5 * -2 + 0x10] = afStack_2c4[(uint)bVar5 * -2 + 0x34];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x35];
    core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,_DAT_02c83610);
    fVar8 = fStack_288;
    afStack_2c4[3] = fStack_2a0;
    afStack_2c4[(uint)bVar5 * -2 + 4] = afStack_2c4[(uint)bVar5 * -2 + 10];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xb];
    fStack_198 = fVar8 - afStack_2c4[3];
    fStack_194 = fStack_284 - fStack_2b4;
    fStack_190 = fStack_280 - fStack_2b0;
    afStack_180[0] = fVar8 - afStack_2c4[3];
    afStack_2c4[(uint)bVar5 * -2 + 0x52] = afStack_2c4[(uint)bVar5 * -2 + 0x4c];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x53] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x4d];
    core_vecdir_cpp_FUN_005a7520(afStack_2c4 + 0x51);
    pCVar7 = local_18;
    uStack_f0 = uStack_27c;
    afStack_2c4[(uint)bVar5 * -2 + 0x76] = afStack_2c4[(uint)bVar5 * -2 + 0x13];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x77] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x14];
    fStack_2030 = *(float *)((int)pCVar7 + 8);
    if ((float)_DAT_005f6a89 <= fStack_2030) {
      fStack_2030 = 1.0 - (fStack_2030 + (float)_DAT_005f6a91) * (float)_DAT_005f6a99;
      if (fStack_2030 < 0.0) {
        fStack_2030 = 0.0;
      }
    }
    else {
      fStack_2030 = fStack_2030 * (float)_DAT_005f6aa1;
    }
    core_xform_cpp_FUN_005b7af0(uStack_f0);
    uStack_2e8 = uStack_458;
    auStack_2e4[(uint)bVar5 * -2] = auStack_484[(uint)bVar5 * -2 + 0xc];
    auStack_2e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_484[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    (auStack_2e4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_484 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&uStack_2e8,
               fStack_2030,_DAT_02c83644,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_FUN_005b7b30(uStack_ec);
    rotation_quat = (CQuaternion4f *)&uStack_2c8;
    uStack_2c8 = uStack_368;
    afStack_2c4[(uint)bVar5 * -2] = afStack_384[(uint)bVar5 * -2 + 8];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_384[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    (afStack_2c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_384 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    pCVar7 = local_18;
    local_2034 = fStack_2030;
    iVar9 = _DAT_02c83610;
  }
  else if (iVar9 == 0x2c) {
    local_20 = (float *)&this_ptr->field_0x2006c;
    if (*(int *)&this_ptr->field_0x1ff80 == 0) {
      core_lever_cpp_FUN_004ff6b0(_DAT_02c835dc);
      local_264[0] = (float)local_168;
      afStack_2c4[(uint)bVar5 * -2 + 0x19] = afStack_2c4[(uint)bVar5 * -2 + 0x58];
      afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1a] =
           afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x59];
      core_actor_cpp_FUN_00408bb0(this_ptr,afStack_2c4 + 0x18);
      pfVar3 = local_20;
      local_18c = local_e4;
      afStack_2c4[(uint)bVar5 * -2 + 0x4f] = afStack_2c4[(uint)bVar5 * -2 + 0x79];
      afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x50] =
           afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x7a];
      if (afStack_2c4 + 0x4e != pfVar3) {
        *pfVar3 = local_18c;
        pfVar3[1] = local_188;
        pfVar3[2] = local_184;
      }
    }
    else {
      core_lever_cpp_FUN_004ff6b0(*(int *)&this_ptr->field_0x1ff80);
      local_144[0] = (float)local_24c;
      afStack_2c4[(uint)bVar5 * -2 + 0x61] = afStack_2c4[(uint)bVar5 * -2 + 0x1f];
      afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x62] =
           afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x20];
      core_actor_cpp_FUN_00408bb0(this_ptr,afStack_2c4 + 0x60);
      local_78 = local_294;
      afStack_8c[(uint)bVar5 * -2 + 6] = afStack_2c4[(uint)bVar5 * -2 + 0xd];
      afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xe];
      if (afStack_8c + 5 != local_20) {
        *local_20 = local_78;
        local_20[1] = local_74;
        local_20[2] = local_70;
      }
      _DAT_02c835dc = *(uint *)&this_ptr->field_0x1ff80;
    }
    pfVar3 = (float *)((int)this_ptr + (uint)bVar5 * -8 + 0x20070);
    local_150 = *(float *)&this_ptr->field_0x2006c;
    afStack_2c4[(uint)bVar5 * -2 + 0x5e] = *pfVar3;
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x5f] = pfVar3[(uint)bVar5 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_00569040(local_18,_DAT_02c83610);
    fVar8 = local_150;
    local_21c = local_108;
    afStack_2c4[(uint)bVar5 * -2 + 0x2b] = afStack_2c4[(uint)bVar5 * -2 + 0x70];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2c] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x71];
    fVar8 = fVar8 - local_21c;
    local_240 = fVar8;
    local_23c = local_14c - local_218;
    local_238 = local_148 - local_214;
    local_c0 = fVar8;
    afStack_2c4[(uint)bVar5 * -2 + 0x82] = afStack_2c4[(uint)bVar5 * -2 + 0x22];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x83] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x23];
    local_b4 = fVar8;
    local_b0 = local_23c;
    local_ac = local_238;
    local_54[0] = fVar8;
    afStack_8c[(uint)bVar5 * -2 + 0xf] = afStack_2c4[(uint)bVar5 * -2 + 0x85];
    afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x86];
    core_vecdir_cpp_FUN_005a7520(afStack_8c + 0xe);
    pCVar7 = local_18;
    local_114 = local_9c[3];
    afStack_2c4[(uint)bVar5 * -2 + 0x6d] = afStack_8c[(uint)bVar5 * -2];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x6e] =
         afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_2024 = *(float *)&pCVar7->field_0x8;
    if ((float)_DAT_005f6a71 <= local_2024) {
      if (_DAT_005f6a59 <= (double)local_2024) {
        local_2024 = 1.0 - (local_2024 + (float)_DAT_005f6a61) * (float)_DAT_005f6a69;
        if (local_2024 < 0.0) {
          local_2024 = 0.0;
        }
      }
      else {
        local_2024 = 1.0;
      }
    }
    else {
      local_2024 = local_2024 * (float)_DAT_005f6a79;
    }
    local_28 = SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc);
    if (local_28 < _DAT_006060b8) {
      fVar6 = (float10)local_28 / (float10)_DAT_006060b8;
      acos();
      local_30 = (float)fVar6;
      core_xform_cpp_FUN_005b7b30(local_30);
      local_388 = afStack_344[3];
      afStack_384[(uint)bVar5 * -2] = afStack_344[(uint)bVar5 * -2 + 4];
      afStack_384[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_344[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
      (afStack_384 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (afStack_344 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
      local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
      core_skeleton_cpp_FUN_005695e0
                (local_18,(CQuaternion4f *)&local_388,local_2024,_DAT_02c83610,
                 core_skeleton_cpp_FUN_00567360);
      core_xform_cpp_FUN_005b7b30(-local_30);
      pCVar7 = local_18;
      local_358 = local_328;
      auStack_354[(uint)bVar5 * -2] = afStack_344[(uint)bVar5 * -2 + 8];
      auStack_354[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_344[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
      (auStack_354 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (afStack_344 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
      core_skeleton_cpp_FUN_005695e0
                (pCVar7,(CQuaternion4f *)&local_358,local_2024,_DAT_02c83618,
                 core_skeleton_cpp_FUN_00567360);
    }
    core_xform_cpp_FUN_005b7af0(local_114);
    local_498 = auStack_4e4[3];
    auStack_494[(uint)bVar5 * -2] = auStack_4e4[(uint)bVar5 * -2 + 4];
    auStack_494[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_4e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (auStack_494 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_4e4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&local_498,
               local_2024,_DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_FUN_005b7b30(local_110);
    local_4c8 = local_428;
    auStack_4c4[(uint)bVar5 * -2] = auStack_444[(uint)bVar5 * -2 + 8];
    auStack_4c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_444[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    (auStack_4c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_444 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    rotation_quat = (CQuaternion4f *)&local_4c8;
    pCVar7 = local_18;
    local_2034 = local_2024;
    iVar9 = _DAT_02c83610;
  }
  else if (iVar9 == 0x22) {
    local_2038 = *(float *)(local_1c + 8) * (float)_DAT_005f6a69;
    if (1.0 < local_2038) {
      local_2038 = 1.0;
    }
    fVar6 = (float10)fpatan((float10)*(float *)&this_ptr->field_0x20084 / (float10)_DAT_006060b8,
                            (float10)1);
    local_3c = (float)fVar6;
    core_xform_cpp_FUN_005b7b30(local_3c);
    local_2f8 = local_468;
    auStack_2f4[(uint)bVar5 * -2] = auStack_484[(uint)bVar5 * -2 + 8];
    auStack_2f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_484[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    (auStack_2f4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_484 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&local_2f8,
               local_2038,_DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_FUN_005b7b30(-local_3c);
    rotation_quat = (CQuaternion4f *)&local_2f8;
    local_2f8 = local_518;
    auStack_2f4[(uint)bVar5 * -2] = auStack_514[(uint)bVar5 * -2];
    auStack_2f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_514[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (auStack_2f4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_514 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    pCVar7 = local_18;
    local_2034 = local_2038;
    iVar9 = _DAT_02c8360c;
  }
  else if (iVar9 == 0x23) {
    local_204c = *(float *)(local_1c + 8);
    if ((float)_DAT_005f6a59 <= local_204c) {
      local_204c = 1.0 - (local_204c + (float)_DAT_005f6a61) * (float)_DAT_005f6a69;
    }
    else {
      local_204c = local_204c * (float)_DAT_005f6a69;
    }
    if (1.0 < local_204c) {
      local_204c = 1.0;
    }
    if (local_204c < 0.0) {
      local_204c = 0.0;
    }
    core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,_DAT_02c83610);
    local_228 = local_60;
    afStack_2c4[(uint)bVar5 * -2 + 0x28] = afStack_8c[(uint)bVar5 * -2 + 0xc];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x29] =
         afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    local_24 = (*(float *)&this_ptr->field_0x20070 + *(float *)&this_ptr->field_0x20088) -
               *(float *)&this_ptr->field_0x2007c;
    if (*(int *)&this_ptr->field_0x1ff78 != 0) {
      _DAT_02c83698 =
           (CDeformableModelInstance *)
           core_stranger_cpp_FUN_00585170(*(int *)&this_ptr->field_0x1ff78);
      local_18 = _DAT_02c83698;
    }
    local_24 = local_24 - (float)_DAT_02c83698;
    fVar6 = (float10)local_224 - (float10)local_24;
    atan2();
    core_xform_cpp_FUN_005b7af0((float)fVar6);
    local_488 = local_398;
    auStack_484[(uint)bVar5 * -2] = auStack_3c4[(uint)bVar5 * -2 + 0xc];
    auStack_484[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_3c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    (auStack_484 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_3c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&local_488,
               local_204c,_DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_skeleton_cpp_FUN_005695e0
              (local_18,(CQuaternion4f *)&local_488,local_204c,_DAT_02c8360c,
               core_skeleton_cpp_FUN_00567360);
    fVar6 = (float10)fpatan((float10)*(float *)&this_ptr->field_0x20084 / (float10)_DAT_006060b8,
                            (float10)1);
    local_34 = (float)fVar6;
    core_xform_cpp_FUN_005b7b30(local_34);
    pCVar7 = local_18;
    local_418 = auStack_4c4[3];
    auStack_414[(uint)bVar5 * -2] = auStack_4c4[(uint)bVar5 * -2 + 4];
    auStack_414[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_4c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (auStack_414 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_4c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_FUN_005695e0
              (pCVar7,(CQuaternion4f *)&local_418,local_204c,_DAT_02c83610,
               core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_FUN_005b7b30(-local_34);
    rotation_quat = (CQuaternion4f *)&local_418;
    local_418 = local_3d8;
    auStack_414[(uint)bVar5 * -2] = auStack_3f4[(uint)bVar5 * -2 + 8];
    auStack_414[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_3f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    (auStack_414 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_3f4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    pCVar7 = local_18;
    local_2034 = local_204c;
    iVar9 = _DAT_02c8360c;
  }
  else if (iVar9 == 0x24) {
    local_2010 = 1.0 - (*(float *)(local_1c + 8) + (float)_DAT_005f6a61) * (float)_DAT_005f6a69;
    if (local_2010 < 0.0) {
      local_2010 = 0.0;
    }
    if (1.0 < local_2010) {
      local_2010 = 1.0;
    }
    fVar6 = (float10)fpatan((float10)*(float *)&this_ptr->field_0x20084 / (float10)_DAT_006060b8,
                            (float10)1);
    local_38 = (float)fVar6;
    core_xform_cpp_FUN_005b7b30(local_38);
    local_408 = afStack_384[3];
    afStack_404[(uint)bVar5 * -2] = afStack_384[(uint)bVar5 * -2 + 4];
    afStack_404[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_384[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (afStack_404 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_384 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&local_408,
               local_2010,_DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_FUN_005b7b30(-local_38);
    local_408 = auStack_2e4[3];
    afStack_404[(uint)bVar5 * -2] = (float)auStack_2e4[(uint)bVar5 * -2 + 4];
    afStack_404[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         (float)auStack_2e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (afStack_404 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (float)(auStack_2e4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    rotation_quat = (CQuaternion4f *)&local_408;
    pCVar7 = local_18;
    local_2034 = local_2010;
    iVar9 = _DAT_02c8360c;
  }
  else {
    if (iVar9 != 0x25) goto LAB_00588d7e;
    local_203c = *(float *)(local_1c + 8);
    if (local_203c < (float)_DAT_005f6a59) {
      local_203c = local_203c * (float)_DAT_005f6a69;
    }
    else {
      local_203c = 1.0 - (local_203c + (float)_DAT_005f6a61) * (float)_DAT_005f6a69;
    }
    if (1.0 < local_203c) {
      local_203c = 1.0;
    }
    if (local_203c < 0.0) {
      local_203c = 0.0;
    }
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_00569040(local_18,_DAT_02c83610);
    local_138 = local_204;
    afStack_2c4[(uint)bVar5 * -2 + 100] = afStack_2c4[(uint)bVar5 * -2 + 0x31];
    afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x65] =
         afStack_2c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x32];
    fVar6 = (float10)local_134 - (float10)*(float *)&this_ptr->field_0x20070;
    atan2();
    core_xform_cpp_FUN_005b7af0((float)fVar6);
    local_3f8 = auStack_3f4[3];
    auStack_3f4[(uint)bVar5 * -2] = auStack_3f4[(uint)bVar5 * -2 + 4];
    pCVar7 = local_18;
    auStack_3f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_3f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (auStack_3f4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_3f4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_FUN_005695e0
              (local_18,(CQuaternion4f *)&local_3f8,local_203c,_DAT_02c83610,
               core_skeleton_cpp_FUN_00567360);
    core_skeleton_cpp_FUN_005695e0
              (pCVar7,(CQuaternion4f *)&local_3f8,local_203c,_DAT_02c8360c,
               core_skeleton_cpp_FUN_00567360);
    fVar6 = (float10)fpatan((float10)*(float *)&this_ptr->field_0x20084 / (float10)_DAT_006060b8,
                            (float10)1);
    local_40 = (float)fVar6;
    core_xform_cpp_FUN_005b7b30(local_40);
    pCVar7 = local_18;
    local_4e8 = auStack_514[3];
    auStack_4e4[(uint)bVar5 * -2] = auStack_514[(uint)bVar5 * -2 + 4];
    auStack_4e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_514[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (auStack_4e4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_514 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_FUN_005695e0
              (pCVar7,(CQuaternion4f *)&local_4e8,local_203c,_DAT_02c83610,
               core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_FUN_005b7b30(-local_40);
    local_4e8 = auStack_444[3];
    auStack_4e4[(uint)bVar5 * -2] = auStack_444[(uint)bVar5 * -2 + 4];
    auStack_4e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_444[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (auStack_4e4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_444 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    rotation_quat = (CQuaternion4f *)&local_4e8;
    pCVar7 = local_18;
    local_2034 = local_203c;
    iVar9 = _DAT_02c8360c;
  }
  core_skeleton_cpp_FUN_005695e0
            (pCVar7,rotation_quat,local_2034,iVar9,core_skeleton_cpp_FUN_00567360);
LAB_00588d7e:
  if (*(int *)&g_CGamePtr->field_0x25c != 0) {
    local_9c[1] = 0.0;
    local_9c[2] = 0.0;
    local_9c[0] = 0.0;
    if ((*(int *)&this_ptr->field_0x1ffac != 0) && (*(int *)&this_ptr->field_0x20004 != 0)) {
      local_9c[0] = *(float *)&this_ptr->field_0x1ffc8;
    }
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar8 = 1.0;
    iVar9 = _DAT_02c83600;
    core_xform_cpp_FUN_005b7ed0(afStack_2c4 + 0x8a);
    local_448 = local_3a8;
    auStack_444[(uint)bVar5 * -2] = auStack_3c4[(uint)bVar5 * -2 + 8];
    auStack_444[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_3c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    (auStack_444 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_3c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&local_448,fVar8,
               iVar9,blend_callback);
  }
  if (*(float *)&this_ptr->field_0x20018 <= 0.0) {
    return;
  }
  iVar9 = 1;
  motion_name = "?draw_holsters2aimPistols" + 1;
  puVar1 = &this_ptr->field_0x158;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)puVar1);
  iVar9 = core_motion_cpp_FUN_005240c0((CMotionList *)this_ptr_00,motion_name,iVar9);
  local_2c = core_motion_cpp_FUN_00525110(puVar1,iVar9,0x3f800000);
  local_18 = (CDeformableModelInstance *)local_2c;
  core_skeleton_cpp_FUN_00568100
            (puVar1,iVar9,local_2c,*(uint *)&this_ptr->field_0x20018,_DAT_02c83640,
             core_skeleton_cpp_FUN_00567360);
  return;
}
