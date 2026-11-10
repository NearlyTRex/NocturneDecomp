// Name: core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0
// Address: 00588ad0
// Address Range: [[00588ad0, 00589f0b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(CStranger *this_ptr)

{
  byte *puVar1;
  CVector3f *pCVar2;
  SMotion *pSVar3;
  CSkeleton *this_ptr_00;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float10 fVar7;
  CDeformableModelInstance *pCVar8;
  CQuaternion4f *rotation_quat;
  float fVar9;
  char *motion_name;
  code *blend_callback;
  int iVar10;
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
  CMatrix3x3f local_570;
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float local_530 [6];
  float local_518;
  float afStack_514 [7];
  CQuaternion4f local_4f8;
  CQuaternion4f local_4e8;
  float local_4d8;
  float afStack_4d4 [3];
  CQuaternion4f local_4c8;
  float local_4b8;
  float afStack_4b4 [7];
  CQuaternion4f local_498;
  CQuaternion4f local_488;
  float local_478;
  float afStack_474 [7];
  float fStack_458;
  CQuaternion4f local_448;
  float local_438;
  float afStack_434 [7];
  CQuaternion4f local_418;
  CQuaternion4f local_408;
  CQuaternion4f local_3f8;
  float local_3e8;
  float afStack_3e4 [7];
  CQuaternion4f local_3c8;
  float local_3b8;
  float afStack_3b4 [7];
  float local_398;
  CQuaternion4f local_388;
  float local_378;
  float afStack_374 [7];
  CQuaternion4f local_358;
  CQuaternion4f local_348;
  float local_338;
  float afStack_334 [7];
  float local_318;
  CQuaternion4f local_308;
  CQuaternion4f local_2f8;
  CQuaternion4f CStack_2e8;
  float local_2d8;
  float afStack_2d4 [3];
  CQuaternion4f CStack_2c8;
  float fStack_2b8;
  float afStack_2b4 [4];
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
  CVector3f *local_20;
  byte *local_1c;
  CDeformableModelInstance *local_18;
  
  bVar6 = 0;
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0);
  local_2020 = local_18;
  if ((int)this_ptr->turn_blend_weight < 0x3e19999a) {
    local_2020 = (CDeformableModelInstance *)
                 ((this_ptr->turn_blend_weight / _DAT_005f6a51) * (float)local_18);
  }
  if (0.85 < this_ptr->turn_blend_weight) {
    local_2020 = (CDeformableModelInstance *)
                 (((1.0 - this_ptr->turn_blend_weight) / 0.15) * (float)local_2020);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  if ((0.0 < (float)local_2020) && (-1 < this_ptr->turn_motion_index)) {
    core_stranger_cpp_FUN_00589f10(this_ptr,(SPose *)local_200c);
    local_200c[0] = 0;
    local_2004 = 0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(SPoseData *)local_200c,
               (float)local_2020,-1,core_skeleton_cpp_FUN_00567360);
  }
  core_stranger_cpp_CStranger_makeDrawDecision_FUN_0058a360(this_ptr);
  local_1c = &this_ptr->field_0x158;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)local_1c);
  puVar1 = local_1c;
  iVar10 = *(int *)(pSVar3 + 0x24);
  if (iVar10 == 0x20) {
    pfVar4 = (float *)((int)this_ptr + (uint)bVar6 * -8 + 0x20070);
    afStack_8c[2] = (this_ptr->carry_object_world_center).x;
    afStack_8c[(uint)bVar6 * -2 + 3] = *pfVar4;
    afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] = pfVar4[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(puVar1,_DAT_02c83610);
    fVar9 = afStack_8c[2];
    afStack_2b4[2] = local_270;
    afStack_2b4[(uint)bVar6 * -2 + 3] = afStack_2b4[(uint)bVar6 * -2 + 0x12];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
    local_234 = fVar9 - afStack_2b4[2];
    local_230 = afStack_8c[3] - afStack_2b4[3];
    local_22c = local_7c - local_2a4;
    local_6c[0] = fVar9 - afStack_2b4[2];
    afStack_8c[(uint)bVar6 * -2 + 9] = afStack_2b4[(uint)bVar6 * -2 + 0x21];
    afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_8c + 8);
    puVar1 = local_1c;
    local_1b0 = local_1bc;
    afStack_2b4[(uint)bVar6 * -2 + 0x42] = afStack_2b4[(uint)bVar6 * -2 + 0x3f];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x43] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x40];
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
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_1b0);
    local_308.w = local_478;
    pfVar4 = (float *)((int)&local_308 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_308 + (uint)bVar6 * -8 + 4) = afStack_474[(uint)bVar6 * -2];
    *pfVar4 = afStack_474[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_474 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_308,local_2034,_DAT_02c83644,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_1ac);
    pCVar8 = local_18;
    rotation_quat = &local_348;
    local_348.w = local_318;
    pfVar4 = (float *)((int)&local_348 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_348 + (uint)bVar6 * -8 + 4) = afStack_334[(uint)bVar6 * -2 + 8];
    *pfVar4 = afStack_334[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_334 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    iVar10 = _DAT_02c83610;
  }
  else if (iVar10 == 0x1e) {
    pfVar4 = (float *)((int)this_ptr + (uint)bVar6 * -8 + 0x20070);
    local_cc = (this_ptr->carry_object_world_center).x;
    afStack_2b4[(uint)bVar6 * -2 + 0x7b] = *pfVar4;
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x7c] = pfVar4[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_FUN_00569040(local_1c,_DAT_02c83610);
    fVar9 = local_cc;
    local_1e0 = local_1ec;
    afStack_2b4[(uint)bVar6 * -2 + 0x36] = afStack_2b4[(uint)bVar6 * -2 + 0x33];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34];
    local_15c = fVar9 - local_1e0;
    local_158 = local_c8 - local_1dc;
    local_154 = local_c4 - local_1d8;
    local_a8[0] = fVar9 - local_1e0;
    afStack_2b4[(uint)bVar6 * -2 + 0x84] = afStack_2b4[(uint)bVar6 * -2 + 0x57];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x85] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x58];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_2b4 + 0x83);
    puVar1 = local_1c;
    local_d8 = local_12c;
    afStack_2b4[(uint)bVar6 * -2 + 0x78] = afStack_2b4[(uint)bVar6 * -2 + 99];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x79] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 100];
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
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(-local_d8);
    local_4f8.w = afStack_4b4[3];
    pfVar4 = (float *)((int)&local_4f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_4f8 + (uint)bVar6 * -8 + 4) = afStack_4b4[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_4b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_4b4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,&local_4f8,local_202c,
               _DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_d4);
    local_3c8.w = local_3b8;
    pfVar4 = (float *)((int)&local_3c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_3c8 + (uint)bVar6 * -8 + 4) = afStack_3b4[(uint)bVar6 * -2];
    *pfVar4 = afStack_3b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_3b4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    rotation_quat = &local_3c8;
    pCVar8 = local_18;
    local_2034 = local_202c;
    iVar10 = _DAT_02c83610;
  }
  else if (iVar10 == 0x21) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              (&local_570,(CVector3f *)&this_ptr->field_0x1ff9c);
    if ((DAT_02c835e0 & 1) == 0) {
      DAT_02c835e0 = DAT_02c835e0 | 1;
    }
    iVar10 = *(int *)&this_ptr->field_0x1ff8c;
    if (iVar10 != 0) {
      (**(code **)(*(int *)(iVar10 + 0x154) + 0x1c))(iVar10);
      pfVar4 = local_530;
      pfVar5 = &fStack_548;
      for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_258 = fStack_548 + fStack_53c;
      fStack_254 = fStack_544 + fStack_538;
      fStack_250 = fStack_540 + fStack_534;
      fStack_1d4 = fStack_548 + fStack_53c;
      afStack_2b4[(uint)bVar6 * -2 + 0x39] = afStack_2b4[(uint)bVar6 * -2 + 0x18];
      afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a] =
           afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      fStack_1c8 = fStack_1d4 * _DAT_005f6a81;
      fStack_1c4 = fStack_1d0 * _DAT_005f6a81;
      fStack_1c0 = fStack_1cc * _DAT_005f6a81;
      fStack_210 = fStack_1d4 * _DAT_005f6a81;
      afStack_2b4[(uint)bVar6 * -2 + 0x2a] = afStack_2b4[(uint)bVar6 * -2 + 0x3c];
      afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b] =
           afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d];
      if (&stack0x00000000 != (byte *)0x2c837e0) {
        _DAT_02c835d0 = fStack_210;
        _DAT_02c835d4 = uStack_20c;
        _DAT_02c835d8 = uStack_208;
      }
    }
    core_dirmat_cpp_FUN_0045f690(&local_570,&DAT_02c835d0);
    local_120 = local_1a4;
    afStack_2b4[(uint)bVar6 * -2 + 0x66] = afStack_2b4[(uint)bVar6 * -2 + 0x45];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x67] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x46];
    fStack_fc = *(float *)&this_ptr->field_0x1ff90 + local_120;
    fStack_f8 = *(float *)&this_ptr->field_0x1ff94 + fStack_11c;
    fStack_f4 = *(float *)&this_ptr->field_0x1ff98 + fStack_118;
    afStack_174[0] = fStack_fc;
    afStack_2b4[(uint)bVar6 * -2 + 0x51] = afStack_2b4[(uint)bVar6 * -2 + 0x6f];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x52] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x70];
    core_actor_cpp_FUN_00408bb0(this_ptr,afStack_2b4 + 0x50);
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    fStack_288 = fStack_1f8;
    afStack_2b4[(uint)bVar6 * -2 + 0xc] = afStack_2b4[(uint)bVar6 * -2 + 0x30];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31];
    core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,_DAT_02c83610);
    fVar9 = fStack_288;
    fStack_2b8 = fStack_2a0;
    afStack_2b4[(uint)bVar6 * -2] = afStack_2b4[(uint)bVar6 * -2 + 6];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_198 = fVar9 - fStack_2b8;
    fStack_194 = fStack_284 - afStack_2b4[0];
    fStack_190 = fStack_280 - afStack_2b4[1];
    afStack_180[0] = fVar9 - fStack_2b8;
    afStack_2b4[(uint)bVar6 * -2 + 0x4e] = afStack_2b4[(uint)bVar6 * -2 + 0x48];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x4f] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x49];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_2b4 + 0x4d);
    pCVar8 = local_18;
    uStack_f0 = uStack_27c;
    afStack_2b4[(uint)bVar6 * -2 + 0x72] = afStack_2b4[(uint)bVar6 * -2 + 0xf];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x73] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    fStack_2030 = *(float *)((int)pCVar8 + 8);
    if ((float)_DAT_005f6a89 <= fStack_2030) {
      fStack_2030 = 1.0 - (fStack_2030 + (float)_DAT_005f6a91) * (float)_DAT_005f6a99;
      if (fStack_2030 < 0.0) {
        fStack_2030 = 0.0;
      }
    }
    else {
      fStack_2030 = fStack_2030 * (float)_DAT_005f6aa1;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(uStack_f0);
    CStack_2e8.w = fStack_458;
    pfVar4 = (float *)((int)&CStack_2e8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&CStack_2e8 + (uint)bVar6 * -8 + 4) = afStack_474[(uint)bVar6 * -2 + 8];
    *pfVar4 = afStack_474[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_474 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,&CStack_2e8,fStack_2030,
               _DAT_02c83644,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(uStack_ec);
    rotation_quat = &CStack_2c8;
    CStack_2c8.w = afStack_374[3];
    pfVar4 = (float *)((int)&CStack_2c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&CStack_2c8 + (uint)bVar6 * -8 + 4) = afStack_374[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_374[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_374 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    pCVar8 = local_18;
    local_2034 = fStack_2030;
    iVar10 = _DAT_02c83610;
  }
  else if (iVar10 == 0x2c) {
    local_20 = &this_ptr->carry_object_world_center;
    if (*(int *)&this_ptr->field_0x1ff80 == 0) {
      core_lever_cpp_FUN_004ff6b0(_DAT_02c835dc);
      local_264[0] = (float)local_168;
      afStack_2b4[(uint)bVar6 * -2 + 0x15] = afStack_2b4[(uint)bVar6 * -2 + 0x54];
      afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x55];
      core_actor_cpp_FUN_00408bb0(this_ptr,afStack_2b4 + 0x14);
      pCVar2 = local_20;
      local_18c = local_e4;
      afStack_2b4[(uint)bVar6 * -2 + 0x4b] = afStack_2b4[(uint)bVar6 * -2 + 0x75];
      afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x4c] =
           afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x76];
      if ((CVector3f *)(afStack_2b4 + 0x4a) != pCVar2) {
        pCVar2->x = local_18c;
        pCVar2->y = local_188;
        pCVar2->z = local_184;
      }
    }
    else {
      core_lever_cpp_FUN_004ff6b0(*(int *)&this_ptr->field_0x1ff80);
      local_144[0] = (float)local_24c;
      afStack_2b4[(uint)bVar6 * -2 + 0x5d] = afStack_2b4[(uint)bVar6 * -2 + 0x1b];
      afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x5e] =
           afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
      core_actor_cpp_FUN_00408bb0(this_ptr,afStack_2b4 + 0x5c);
      local_78 = local_294;
      afStack_8c[(uint)bVar6 * -2 + 6] = afStack_2b4[(uint)bVar6 * -2 + 9];
      afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      if ((CVector3f *)(afStack_8c + 5) != local_20) {
        local_20->x = local_78;
        local_20->y = local_74;
        local_20->z = local_70;
      }
      _DAT_02c835dc = *(uint *)&this_ptr->field_0x1ff80;
    }
    pfVar4 = (float *)((int)this_ptr + (uint)bVar6 * -8 + 0x20070);
    local_150 = (this_ptr->carry_object_world_center).x;
    afStack_2b4[(uint)bVar6 * -2 + 0x5a] = *pfVar4;
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x5b] = pfVar4[(uint)bVar6 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_00569040(local_18,_DAT_02c83610);
    fVar9 = local_150;
    local_21c = local_108;
    afStack_2b4[(uint)bVar6 * -2 + 0x27] = afStack_2b4[(uint)bVar6 * -2 + 0x6c];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x6d];
    fVar9 = fVar9 - local_21c;
    local_240 = fVar9;
    local_23c = local_14c - local_218;
    local_238 = local_148 - local_214;
    local_c0 = fVar9;
    afStack_2b4[(uint)bVar6 * -2 + 0x7e] = afStack_2b4[(uint)bVar6 * -2 + 0x1e];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x7f] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
    local_b4 = fVar9;
    local_b0 = local_23c;
    local_ac = local_238;
    local_54[0] = fVar9;
    afStack_8c[(uint)bVar6 * -2 + 0xf] = afStack_2b4[(uint)bVar6 * -2 + 0x81];
    afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x82];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_8c + 0xe);
    pCVar8 = local_18;
    local_114 = local_9c[3];
    afStack_2b4[(uint)bVar6 * -2 + 0x69] = afStack_8c[(uint)bVar6 * -2];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x6a] =
         afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    local_2024 = (pCVar8->base).current_frame_number;
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
      fVar7 = (float10)local_28 / (float10)_DAT_006060b8;
      acos();
      local_30 = (float)fVar7;
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_30);
      local_388.w = local_338;
      pfVar4 = (float *)((int)&local_388 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(float *)((int)&local_388 + (uint)bVar6 * -8 + 4) = afStack_334[(uint)bVar6 * -2];
      *pfVar4 = afStack_334[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      pfVar4[(uint)bVar6 * -2 + 1] =
           (afStack_334 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (local_18,&local_388,local_2024,_DAT_02c83610,core_skeleton_cpp_FUN_00567360);
      core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_30);
      pCVar8 = local_18;
      local_358.w = afStack_334[3];
      pfVar4 = (float *)((int)&local_358 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(float *)((int)&local_358 + (uint)bVar6 * -8 + 4) = afStack_334[(uint)bVar6 * -2 + 4];
      *pfVar4 = afStack_334[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
      pfVar4[(uint)bVar6 * -2 + 1] =
           (afStack_334 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar8,&local_358,local_2024,_DAT_02c83618,core_skeleton_cpp_FUN_00567360);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_114);
    local_498.w = local_4d8;
    pfVar4 = (float *)((int)&local_498 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_498 + (uint)bVar6 * -8 + 4) = afStack_4d4[(uint)bVar6 * -2];
    *pfVar4 = afStack_4d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_4d4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,&local_498,local_2024,
               _DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_110);
    local_4c8.w = afStack_434[3];
    pfVar4 = (float *)((int)&local_4c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_4c8 + (uint)bVar6 * -8 + 4) = afStack_434[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_434[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_434 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    rotation_quat = &local_4c8;
    pCVar8 = local_18;
    local_2034 = local_2024;
    iVar10 = _DAT_02c83610;
  }
  else if (iVar10 == 0x22) {
    local_2038 = *(float *)(local_1c + 8) * (float)_DAT_005f6a69;
    if (1.0 < local_2038) {
      local_2038 = 1.0;
    }
    fVar7 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_006060b8,
                            (float10)1);
    local_3c = (float)fVar7;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_3c);
    local_2f8.w = afStack_474[3];
    pfVar4 = (float *)((int)&local_2f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_2f8 + (uint)bVar6 * -8 + 4) = afStack_474[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_474[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_474 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,&local_2f8,local_2038,
               _DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_3c);
    rotation_quat = &local_2f8;
    local_2f8.w = local_518;
    pfVar4 = (float *)((int)&local_2f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_2f8 + (uint)bVar6 * -8 + 4) = afStack_514[(uint)bVar6 * -2];
    *pfVar4 = afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pCVar8 = local_18;
    local_2034 = local_2038;
    iVar10 = _DAT_02c8360c;
  }
  else if (iVar10 == 0x23) {
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
    afStack_2b4[(uint)bVar6 * -2 + 0x24] = afStack_8c[(uint)bVar6 * -2 + 0xc];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
         afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    local_24 = ((this_ptr->carry_object_world_center).y + (this_ptr->carry_object_bbox).max.y) -
               (this_ptr->carry_object_bbox).min.y;
    if (*(CDemonActor **)&this_ptr->field_0x1ff78 != (CDemonActor *)0x0) {
      _DAT_02c83698 =
           (CDeformableModelInstance *)
           core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00585170
                     (*(CDemonActor **)&this_ptr->field_0x1ff78);
      local_18 = _DAT_02c83698;
    }
    local_24 = local_24 - (float)_DAT_02c83698;
    fVar7 = (float10)local_224 - (float10)local_24;
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0((float)fVar7);
    local_488.w = local_398;
    pfVar4 = (float *)((int)&local_488 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_488 + (uint)bVar6 * -8 + 4) = afStack_3b4[(uint)bVar6 * -2 + 8];
    *pfVar4 = afStack_3b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_3b4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,&local_488,local_204c,
               _DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_488,local_204c,_DAT_02c8360c,core_skeleton_cpp_FUN_00567360);
    fVar7 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_006060b8,
                            (float10)1);
    local_34 = (float)fVar7;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_34);
    pCVar8 = local_18;
    local_418.w = local_4b8;
    pfVar4 = (float *)((int)&local_418 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_418 + (uint)bVar6 * -8 + 4) = afStack_4b4[(uint)bVar6 * -2];
    *pfVar4 = afStack_4b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_4b4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar8,&local_418,local_204c,_DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_34);
    rotation_quat = &local_418;
    local_418.w = afStack_3e4[3];
    pfVar4 = (float *)((int)&local_418 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_418 + (uint)bVar6 * -8 + 4) = afStack_3e4[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_3e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_3e4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    pCVar8 = local_18;
    local_2034 = local_204c;
    iVar10 = _DAT_02c8360c;
  }
  else if (iVar10 == 0x24) {
    local_2010 = 1.0 - (*(float *)(local_1c + 8) + (float)_DAT_005f6a61) * (float)_DAT_005f6a69;
    if (local_2010 < 0.0) {
      local_2010 = 0.0;
    }
    if (1.0 < local_2010) {
      local_2010 = 1.0;
    }
    fVar7 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_006060b8,
                            (float10)1);
    local_38 = (float)fVar7;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_38);
    local_408.w = local_378;
    pfVar4 = (float *)((int)&local_408 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_408 + (uint)bVar6 * -8 + 4) = afStack_374[(uint)bVar6 * -2];
    *pfVar4 = afStack_374[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_374 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,&local_408,local_2010,
               _DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_38);
    local_408.w = local_2d8;
    pfVar4 = (float *)((int)&local_408 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_408 + (uint)bVar6 * -8 + 4) = afStack_2d4[(uint)bVar6 * -2];
    *pfVar4 = afStack_2d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_2d4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    rotation_quat = &local_408;
    pCVar8 = local_18;
    local_2034 = local_2010;
    iVar10 = _DAT_02c8360c;
  }
  else {
    if (iVar10 != 0x25) goto LAB_00588d7e;
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
    afStack_2b4[(uint)bVar6 * -2 + 0x60] = afStack_2b4[(uint)bVar6 * -2 + 0x2d];
    afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x61] =
         afStack_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
    fVar7 = (float10)local_134 - (float10)(this_ptr->carry_object_world_center).y;
    atan2();
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0((float)fVar7);
    local_3f8.w = local_3e8;
    pfVar4 = (float *)((int)&local_3f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_3f8 + (uint)bVar6 * -8 + 4) = afStack_3e4[(uint)bVar6 * -2];
    pCVar8 = local_18;
    *pfVar4 = afStack_3e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_3e4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_3f8,local_203c,_DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar8,&local_3f8,local_203c,_DAT_02c8360c,core_skeleton_cpp_FUN_00567360);
    fVar7 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_006060b8,
                            (float10)1);
    local_40 = (float)fVar7;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_40);
    pCVar8 = local_18;
    local_4e8.w = afStack_514[3];
    pfVar4 = (float *)((int)&local_4e8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_4e8 + (uint)bVar6 * -8 + 4) = afStack_514[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar8,&local_4e8,local_203c,_DAT_02c83610,core_skeleton_cpp_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_40);
    local_4e8.w = local_438;
    pfVar4 = (float *)((int)&local_4e8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_4e8 + (uint)bVar6 * -8 + 4) = afStack_434[(uint)bVar6 * -2];
    *pfVar4 = afStack_434[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_434 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    rotation_quat = &local_4e8;
    pCVar8 = local_18;
    local_2034 = local_203c;
    iVar10 = _DAT_02c8360c;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (pCVar8,rotation_quat,local_2034,iVar10,core_skeleton_cpp_FUN_00567360);
LAB_00588d7e:
  if (*(int *)&g_CGamePtr->field_0x25c != 0) {
    local_9c[1] = 0.0;
    local_9c[2] = 0.0;
    local_9c[0] = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      local_9c[0] = *(float *)&this_ptr->field_0x1ffc8;
    }
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar9 = 1.0;
    iVar10 = _DAT_02c83600;
    core_xform_cpp_FUN_005b7ed0(afStack_2b4 + 0x86);
    local_448.w = afStack_3b4[3];
    pfVar4 = (float *)((int)&local_448 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_448 + (uint)bVar6 * -8 + 4) = afStack_3b4[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_3b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_3b4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              ((CDeformableModelInstance *)&this_ptr->field_0x158,&local_448,fVar9,iVar10,
               blend_callback);
  }
  if (this_ptr->interact_blend <= 0.0) {
    return;
  }
  iVar10 = 1;
  motion_name = "?draw_holsters2aimPistols" + 1;
  puVar1 = &this_ptr->field_0x158;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)puVar1);
  iVar10 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                     ((CMotionList *)this_ptr_00,motion_name,iVar10);
  local_2c = core_motion_cpp_FUN_00525110(puVar1,iVar10,0x3f800000);
  local_18 = (CDeformableModelInstance *)local_2c;
  core_skeleton_cpp_FUN_00568100
            (puVar1,iVar10,local_2c,this_ptr->interact_blend,_DAT_02c83640,
             core_skeleton_cpp_FUN_00567360);
  return;
}
