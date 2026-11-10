// Name: core_doc.cpp_FUN_00453d80
// Address: 00453d80
// Address Range: [[00453d80, 00455168]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00453d80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00453d80(int param_1)

{
  int iVar1;
  CQuaternion4f *rotation_quat;
  CSkeleton *this_ptr;
  float *pfVar2;
  CQuaternion4f *pCVar3;
  float *pfVar5;
  byte bVar6;
  float10 fVar7;
  CDeformableModelInstance *pCVar8;
  float fVar9;
  char *motion_name;
  code *blend_callback;
  float local_2034;
  CDeformableModelInstance *local_2030;
  float local_202c;
  float local_2024;
  float local_2020;
  float local_201c;
  float fStack_2014;
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
  float local_4e8 [4];
  float local_4d8;
  float afStack_4d4 [7];
  CQuaternion4f local_4b8;
  float local_4a8;
  float afStack_4a4 [7];
  float local_488;
  CQuaternion4f local_478;
  CQuaternion4f local_468;
  CQuaternion4f local_458;
  CQuaternion4f local_448;
  float local_438 [4];
  float local_428;
  float afStack_424 [7];
  CQuaternion4f local_408;
  float local_3f8;
  float afStack_3f4 [7];
  CQuaternion4f local_3d8;
  float local_3c8;
  float afStack_3c4 [7];
  CQuaternion4f local_3a8;
  float local_398;
  float afStack_394 [7];
  CQuaternion4f local_378;
  CQuaternion4f local_368;
  float local_358;
  float afStack_354 [7];
  float local_338;
  float afStack_334 [3];
  CQuaternion4f local_328;
  CQuaternion4f local_318;
  CQuaternion4f local_308;
  float local_2f8 [4];
  CQuaternion4f local_2e8;
  CQuaternion4f CStack_2d8;
  CQuaternion4f CStack_2c8;
  float local_2b8;
  float local_2b4 [4];
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  uint local_294;
  float local_288;
  uint local_284;
  float local_27c;
  uint local_270;
  float local_264;
  float local_260;
  float local_25c;
  float fStack_258;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  uint local_204;
  uint local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  uint local_1ec;
  uint local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  uint local_1d4;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  uint local_1bc;
  float local_1b8;
  float local_1b0;
  uint local_1a4;
  float local_198;
  float local_194;
  float local_190;
  float local_18c [3];
  float fStack_180;
  float local_174;
  float local_168;
  float local_15c;
  float local_158;
  float local_154;
  float local_150 [3];
  float local_144 [4];
  float afStack_134 [5];
  uint local_120;
  float local_11c;
  float afStack_114 [3];
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0 [3];
  uint uStack_e4;
  uint uStack_d8;
  uint uStack_d4;
  float local_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float local_7c;
  float afStack_78 [3];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [3];
  float local_54;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float *local_20;
  int local_1c;
  float local_18;
  CDeformableModelInstance *local_14;
  float *pfVar4;
  
  bVar6 = 0;
  local_14 = (CDeformableModelInstance *)core_motion_cpp_FUN_005038a0(param_1 + 0x2b4,0);
  local_2030 = local_14;
  if (*(int *)(param_1 + 0x256bc) < 0x3e19999a) {
    local_2030 = (CDeformableModelInstance *)
                 ((*(float *)(param_1 + 0x256bc) / _DAT_005d015f) * (float)local_14);
  }
  if (0.85 < *(float *)(param_1 + 0x256bc)) {
    local_2030 = (CDeformableModelInstance *)
                 (((1.0 - *(float *)(param_1 + 0x256bc)) / 0.15) * (float)local_2030);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)(param_1 + 0x2b4));
  if ((0.0 < (float)local_2030) && (-1 < *(int *)(param_1 + 0x256ec))) {
    core_doc_cpp_FUN_00455170(param_1,local_200c);
    local_200c[0] = 0;
    local_2004 = 0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190
              ((CDeformableModelInstance *)(param_1 + 0x2b4),(SPoseData *)local_200c,
               (float)local_2030,-1,core_skeleton_cpp_FUN_00544cc0);
  }
  core_doc_cpp_FUN_004555c0(param_1);
  core_doc_cpp_FUN_00455d10(param_1,g_CGamePtr->delta_time_float);
  local_1c = param_1 + 0x2b4;
  iVar1 = core_motion_cpp_FUN_005035c0(local_1c);
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0x15) {
    pfVar2 = (float *)(param_1 + 0x25704 + (uint)bVar6 * -8);
    local_264 = *(float *)(param_1 + 0x25700);
    local_2b4[(uint)bVar6 * -2 + 0x15] = *pfVar2;
    local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] = pfVar2[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_FUN_005469a0(local_1c,_DAT_01b4d268);
    fVar9 = local_264;
    local_21c = local_210;
    local_2b4[(uint)bVar6 * -2 + 0x27] = local_2b4[(uint)bVar6 * -2 + 0x2a];
    local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
         local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
    local_198 = fVar9 - local_21c;
    local_194 = local_260 - local_218;
    local_190 = local_25c - local_214;
    afStack_134[2] = fVar9 - local_21c;
    afStack_134[(uint)bVar6 * -2 + 3] = local_2b4[(uint)bVar6 * -2 + 0x48];
    afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x49];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_134 + 2);
    iVar1 = local_1c;
    local_204 = local_294;
    local_2b4[(uint)bVar6 * -2 + 0x2d] = local_2b4[(uint)bVar6 * -2 + 9];
    local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e] =
         local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    local_2034 = *(float *)(iVar1 + 8);
    if ((float)_DAT_005d01bf <= local_2034) {
      local_2034 = 1.0 - (local_2034 + (float)_DAT_005d01c7) * (float)_DAT_005d01cf;
      if (local_2034 < 0.0) {
        local_2034 = 0.0;
      }
    }
    else {
      local_2034 = local_2034 * (float)_DAT_005d01cf;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_204);
    local_328.w = local_358;
    pfVar2 = (float *)((int)&local_328 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_328 + (uint)bVar6 * -8 + 4) = afStack_354[(uint)bVar6 * -2];
    *pfVar2 = afStack_354[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar2[(uint)bVar6 * -2 + 1] =
         (afStack_354 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              ((CDeformableModelInstance *)(param_1 + 0x2b4),&local_328,local_2034,_DAT_01b4d29c,
               core_skeleton_cpp_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_200);
    pCVar3 = &local_4f8;
    pfVar2 = local_4e8;
    rotation_quat = &local_4f8;
    local_201c = local_2034;
    iVar1 = _DAT_01b4d268;
LAB_00454025:
    pfVar4 = (float *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pfVar5 = pfVar2 + (uint)bVar6 * -2 + 1;
    pCVar3->w = *pfVar2;
    pfVar2 = pfVar4 + (uint)bVar6 * -2 + 1;
    *pfVar4 = *pfVar5;
    *pfVar2 = pfVar5[(uint)bVar6 * -2 + 1];
    pfVar2[(uint)bVar6 * -2 + 1] = (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pCVar8 = local_14;
  }
  else {
    if (iVar1 != 0x13) {
      if (iVar1 == 0x16) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
                  (&local_570,(CVector3f *)(param_1 + 0x2562c));
        if ((DAT_01b4d230 & 1) == 0) {
          DAT_01b4d230 = DAT_01b4d230 | 1;
        }
        iVar1 = *(int *)(param_1 + 0x2561c);
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
          pfVar2 = local_530;
          pfVar5 = &fStack_548;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar5 = *pfVar2;
            pfVar2 = pfVar2 + (uint)bVar6 * -2 + 1;
            pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
          }
          local_2b4[2] = fStack_548 + fStack_53c;
          local_2b4[3] = fStack_544 + fStack_538;
          fStack_2a4 = fStack_540 + fStack_534;
          fStack_6c = fStack_548 + fStack_53c;
          afStack_134[(uint)bVar6 * -2 + 0x33] = local_2b4[(uint)bVar6 * -2 + 3];
          afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34] =
               local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_9c = fStack_6c * _DAT_005d018f;
          fStack_98 = fStack_68 * _DAT_005d018f;
          fStack_94 = fStack_64 * _DAT_005d018f;
          fStack_b4 = fStack_6c * _DAT_005d018f;
          afStack_134[(uint)bVar6 * -2 + 0x21] = afStack_134[(uint)bVar6 * -2 + 0x27];
          afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
               afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
          if (&stack0x00000000 != g_CDocClassInfo.class_name + 0x20) {
            _DAT_01b4d220 = fStack_b4;
            _DAT_01b4d224 = uStack_b0;
            _DAT_01b4d228 = uStack_ac;
          }
        }
        core_dirmat_cpp_FUN_00449530(&local_570,&DAT_01b4d220);
        local_c0 = local_1b0;
        afStack_134[(uint)bVar6 * -2 + 0x1e] = local_2b4[(uint)bVar6 * -2 + 0x42];
        afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
             local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x43];
        fStack_90 = *(float *)(param_1 + 0x25620) + local_c0;
        fStack_8c = *(float *)(param_1 + 0x25624) + fStack_bc;
        fStack_88 = *(float *)(param_1 + 0x25628) + fStack_b8;
        afStack_78[0] = fStack_90;
        afStack_134[(uint)bVar6 * -2 + 0x30] = afStack_134[(uint)bVar6 * -2 + 0x2a];
        afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31] =
             afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
        core_actor_cpp_FUN_00408de0(param_1,afStack_134 + 0x2f);
        local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
        fStack_1e0 = fStack_258;
        local_2b4[(uint)bVar6 * -2 + 0x36] = local_2b4[(uint)bVar6 * -2 + 0x18];
        local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37] =
             local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
        core_skeleton_cpp_FUN_005469a0(param_1 + 0x2b4,_DAT_01b4d268);
        fVar9 = fStack_1e0;
        fStack_fc = fStack_180;
        afStack_134[(uint)bVar6 * -2 + 0xf] = local_2b4[(uint)bVar6 * -2 + 0x4e];
        afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
             local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x4f];
        fStack_2a0 = fVar9 - fStack_fc;
        fStack_29c = fStack_1dc - fStack_f8;
        fStack_298 = fStack_1d8 - fStack_f4;
        afStack_114[0] = fVar9 - fStack_fc;
        afStack_134[(uint)bVar6 * -2 + 9] = local_2b4[(uint)bVar6 * -2 + 6];
        afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_134 + 8);
        pCVar8 = local_14;
        uStack_d8 = uStack_e4;
        afStack_134[(uint)bVar6 * -2 + 0x18] = afStack_134[(uint)bVar6 * -2 + 0x15];
        afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
             afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
        fStack_2014 = *(float *)((int)pCVar8 + 8);
        if ((float)_DAT_005d0197 <= fStack_2014) {
          fStack_2014 = 1.0 - (fStack_2014 + (float)_DAT_005d019f) * (float)_DAT_005d01a7;
          if (fStack_2014 < 0.0) {
            fStack_2014 = 0.0;
          }
        }
        else {
          fStack_2014 = fStack_2014 * (float)_DAT_005d01af;
        }
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(uStack_d8);
        CStack_2d8.w = afStack_424[3];
        pfVar2 = (float *)((int)&CStack_2d8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        *(float *)((int)&CStack_2d8 + (uint)bVar6 * -8 + 4) = afStack_424[(uint)bVar6 * -2 + 4];
        *pfVar2 = afStack_424[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
        pfVar2[(uint)bVar6 * -2 + 1] =
             (afStack_424 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
        local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  ((CDeformableModelInstance *)(param_1 + 0x2b4),&CStack_2d8,fStack_2014,
                   _DAT_01b4d29c,core_skeleton_cpp_FUN_00544cc0);
        core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(uStack_d4);
        pCVar3 = &CStack_2c8;
        pfVar2 = afStack_354 + 3;
        rotation_quat = &CStack_2c8;
        local_201c = fStack_2014;
        iVar1 = _DAT_01b4d268;
      }
      else {
        if (iVar1 == 0x21) {
          local_20 = (float *)(param_1 + 0x25700);
          if (*(int *)(param_1 + 0x25610) == 0) {
            core_lever_cpp_FUN_004e2220(_DAT_01b4d22c);
            local_60[0] = (float)local_1d4;
            afStack_134[(uint)bVar6 * -2 + 0x36] = local_2b4[(uint)bVar6 * -2 + 0x39];
            afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37] =
                 local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a];
            core_actor_cpp_FUN_00408de0(param_1,afStack_134 + 0x35);
            pfVar2 = local_20;
            local_228 = local_cc;
            local_2b4[(uint)bVar6 * -2 + 0x24] = afStack_134[(uint)bVar6 * -2 + 0x1b];
            local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
                 afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
            if (local_2b4 + 0x23 != pfVar2) {
              *pfVar2 = local_228;
              pfVar2[1] = local_224;
              pfVar2[2] = local_220;
            }
          }
          else {
            core_lever_cpp_FUN_004e2220(*(int *)(param_1 + 0x25610));
            local_150[0] = (float)local_a8;
            local_2b4[(uint)bVar6 * -2 + 0x5a] = afStack_134[(uint)bVar6 * -2 + 0x24];
            local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x5b] =
                 afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
            core_actor_cpp_FUN_00408de0(param_1,local_2b4 + 0x59);
            local_84 = local_174;
            afStack_134[(uint)bVar6 * -2 + 0x2d] = local_2b4[(uint)bVar6 * -2 + 0x51];
            afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e] =
                 local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x52];
            if (afStack_134 + 0x2c != local_20) {
              *local_20 = local_84;
              local_20[1] = local_80;
              local_20[2] = local_7c;
            }
            _DAT_01b4d22c = *(uint *)(param_1 + 0x25610);
          }
          pfVar2 = (float *)(param_1 + 0x25704 + (uint)bVar6 * -8);
          local_24c = *(float *)(param_1 + 0x25700);
          local_2b4[(uint)bVar6 * -2 + 0x1b] = *pfVar2;
          local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] = pfVar2[(uint)bVar6 * -2 + 1];
          local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
          core_skeleton_cpp_FUN_005469a0(local_14,_DAT_01b4d268);
          fVar9 = local_24c;
          local_240 = local_54;
          local_2b4[(uint)bVar6 * -2 + 0x1e] = afStack_134[(uint)bVar6 * -2 + 0x39];
          local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
               afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a];
          fVar9 = fVar9 - local_240;
          local_1c8 = fVar9;
          local_1c4 = local_248 - local_23c;
          local_1c0 = local_244 - local_238;
          local_1f8 = fVar9;
          local_2b4[(uint)bVar6 * -2 + 0x30] = local_2b4[(uint)bVar6 * -2 + 0x3c];
          local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31] =
               local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d];
          local_2b8 = fVar9;
          local_2b4[0] = local_1c4;
          local_2b4[1] = local_1c0;
          local_f0[0] = fVar9;
          afStack_134[(uint)bVar6 * -2 + 0x12] = local_2b4[(uint)bVar6 * -2];
          afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
               local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_134 + 0x11);
          pCVar8 = local_14;
          local_1ec = local_1a4;
          local_2b4[(uint)bVar6 * -2 + 0x33] = local_2b4[(uint)bVar6 * -2 + 0x45];
          local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34] =
               local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x46];
          local_201c = *(float *)&pCVar8->field_0x8;
          if ((float)_DAT_005d017f <= local_201c) {
            if (_DAT_005d0167 <= (double)local_201c) {
              local_201c = 1.0 - (local_201c + (float)_DAT_005d016f) * (float)_DAT_005d0177;
              if (local_201c < 0.0) {
                local_201c = 0.0;
              }
            }
            else {
              local_201c = 1.0;
            }
          }
          else {
            local_201c = local_201c * (float)_DAT_005d0187;
          }
          local_30 = SQRT(local_1f0 * local_1f0 + local_1f8 * local_1f8 + local_1f4 * local_1f4);
          if (local_30 < _DAT_005f5164) {
            fVar7 = (float10)local_30 / (float10)_DAT_005f5164;
            acos();
            local_3c = (float)fVar7;
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_3c);
            local_378.w = local_428;
            pfVar2 = (float *)((int)&local_378 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(float *)((int)&local_378 + (uint)bVar6 * -8 + 4) = afStack_424[(uint)bVar6 * -2];
            *pfVar2 = afStack_424[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            pfVar2[(uint)bVar6 * -2 + 1] =
                 (afStack_424 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (local_14,&local_378,local_201c,_DAT_01b4d268,core_skeleton_cpp_FUN_00544cc0);
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_3c);
            pCVar8 = local_14;
            local_318.w = afStack_3c4[3];
            pfVar2 = (float *)((int)&local_318 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(float *)((int)&local_318 + (uint)bVar6 * -8 + 4) = afStack_3c4[(uint)bVar6 * -2 + 4];
            *pfVar2 = afStack_3c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
            pfVar2[(uint)bVar6 * -2 + 1] =
                 (afStack_3c4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (pCVar8,&local_318,local_201c,_DAT_01b4d270,core_skeleton_cpp_FUN_00544cc0);
          }
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_1ec);
          local_2e8.w = afStack_4d4[3];
          pfVar2 = (float *)((int)&local_2e8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          *(float *)((int)&local_2e8 + (uint)bVar6 * -8 + 4) = afStack_4d4[(uint)bVar6 * -2 + 4];
          *pfVar2 = afStack_4d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
          pfVar2[(uint)bVar6 * -2 + 1] =
               (afStack_4d4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
          local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    ((CDeformableModelInstance *)(param_1 + 0x2b4),&local_2e8,local_201c,
                     _DAT_01b4d268,core_skeleton_cpp_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_1e8);
          local_458.w = local_488;
          pfVar2 = (float *)((int)&local_458 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          *(float *)((int)&local_458 + (uint)bVar6 * -8 + 4) = afStack_4a4[(uint)bVar6 * -2 + 8];
          *pfVar2 = afStack_4a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
          pfVar2[(uint)bVar6 * -2 + 1] =
               (afStack_4a4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
          rotation_quat = &local_458;
          pCVar8 = local_14;
          iVar1 = _DAT_01b4d268;
          goto LAB_00454032;
        }
        if (iVar1 == 0x17) {
          local_202c = *(float *)(local_1c + 8) * (float)_DAT_005d0177;
          if (1.0 < local_202c) {
            local_202c = 1.0;
          }
          fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) / (float10)_DAT_005f5164,
                                  (float10)1);
          local_40 = (float)fVar7;
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_40);
          local_3d8.w = local_398;
          pfVar2 = (float *)((int)&local_3d8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          *(float *)((int)&local_3d8 + (uint)bVar6 * -8 + 4) = afStack_394[(uint)bVar6 * -2];
          *pfVar2 = afStack_394[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          pfVar2[(uint)bVar6 * -2 + 1] =
               (afStack_394 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    ((CDeformableModelInstance *)(param_1 + 0x2b4),&local_3d8,local_202c,
                     _DAT_01b4d268,core_skeleton_cpp_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_40);
          pCVar3 = &local_3d8;
          pfVar2 = local_2f8;
          rotation_quat = &local_3d8;
          local_201c = local_202c;
          iVar1 = _DAT_01b4d264;
        }
        else {
          if (iVar1 != 0x18) {
            if (iVar1 == 0x19) {
              local_2020 = 1.0 - (*(float *)(local_1c + 8) + (float)_DAT_005d016f) *
                                 (float)_DAT_005d0177;
              if (local_2020 < 0.0) {
                local_2020 = 0.0;
              }
              if (1.0 < local_2020) {
                local_2020 = 1.0;
              }
              fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) /
                                      (float10)_DAT_005f5164,(float10)1);
              local_24 = (float)fVar7;
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_24);
              local_3a8.w = afStack_394[3];
              pfVar2 = (float *)((int)&local_3a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
              *(float *)((int)&local_3a8 + (uint)bVar6 * -8 + 4) = afStack_394[(uint)bVar6 * -2 + 4]
              ;
              *pfVar2 = afStack_394[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
              pfVar2[(uint)bVar6 * -2 + 1] =
                   (afStack_394 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
              local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        ((CDeformableModelInstance *)(param_1 + 0x2b4),&local_3a8,local_2020,
                         _DAT_01b4d268,core_skeleton_cpp_FUN_00544cc0);
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_24);
              local_3a8.w = local_3c8;
              pfVar2 = (float *)((int)&local_3a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
              *(float *)((int)&local_3a8 + (uint)bVar6 * -8 + 4) = afStack_3c4[(uint)bVar6 * -2];
              *pfVar2 = afStack_3c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              pfVar2[(uint)bVar6 * -2 + 1] =
                   (afStack_3c4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
              rotation_quat = &local_3a8;
              pCVar8 = local_14;
              local_201c = local_2020;
              iVar1 = _DAT_01b4d264;
            }
            else {
              if (iVar1 != 0x1a) goto LAB_0045403a;
              local_2010 = *(float *)(local_1c + 8);
              if (local_2010 < (float)_DAT_005d0167) {
                local_2010 = local_2010 * (float)_DAT_005d0177;
              }
              else {
                local_2010 = 1.0 - (local_2010 + (float)_DAT_005d016f) * (float)_DAT_005d0177;
              }
              if (1.0 < local_2010) {
                local_2010 = 1.0;
              }
              if (local_2010 < 0.0) {
                local_2010 = 0.0;
              }
              local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
              core_skeleton_cpp_FUN_005469a0(local_14,_DAT_01b4d268);
              local_1bc = local_270;
              local_2b4[(uint)bVar6 * -2 + 0x3f] = local_2b4[(uint)bVar6 * -2 + 0x12];
              local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x40] =
                   local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
              fVar7 = (float10)local_1b8 - (float10)*(float *)(param_1 + 0x25704);
              atan2();
              core_xform_cpp_quaternionFromAngleX_FUN_00593fa0((float)fVar7);
              local_308.w = local_4a8;
              local_2f8[(uint)bVar6 * -2 + -3] = afStack_4a4[(uint)bVar6 * -2];
              pCVar8 = local_14;
              local_2f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2] =
                   afStack_4a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              (local_2f8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1] =
                   (afStack_4a4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (local_14,&local_308,local_2010,_DAT_01b4d268,core_skeleton_cpp_FUN_00544cc0
                        );
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (pCVar8,&local_308,local_2010,_DAT_01b4d264,core_skeleton_cpp_FUN_00544cc0);
              fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) /
                                      (float10)_DAT_005f5164,(float10)1);
              local_18 = (float)fVar7;
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_18);
              pCVar8 = local_14;
              local_4b8.w = afStack_4a4[3];
              pfVar2 = (float *)((int)&local_4b8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
              *(float *)((int)&local_4b8 + (uint)bVar6 * -8 + 4) = afStack_4a4[(uint)bVar6 * -2 + 4]
              ;
              *pfVar2 = afStack_4a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
              pfVar2[(uint)bVar6 * -2 + 1] =
                   (afStack_4a4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (pCVar8,&local_4b8,local_2010,_DAT_01b4d268,core_skeleton_cpp_FUN_00544cc0);
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_18);
              local_4b8.w = afStack_3f4[3];
              pfVar2 = (float *)((int)&local_4b8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
              *(float *)((int)&local_4b8 + (uint)bVar6 * -8 + 4) = afStack_3f4[(uint)bVar6 * -2 + 4]
              ;
              *pfVar2 = afStack_3f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
              pfVar2[(uint)bVar6 * -2 + 1] =
                   (afStack_3f4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
              rotation_quat = &local_4b8;
              pCVar8 = local_14;
              local_201c = local_2010;
              iVar1 = _DAT_01b4d264;
            }
            goto LAB_00454032;
          }
          local_2024 = *(float *)(local_1c + 8);
          if ((float)_DAT_005d0167 <= local_2024) {
            local_2024 = 1.0 - (local_2024 + (float)_DAT_005d016f) * (float)_DAT_005d0177;
          }
          else {
            local_2024 = local_2024 * (float)_DAT_005d0177;
          }
          if (1.0 < local_2024) {
            local_2024 = 1.0;
          }
          if (local_2024 < 0.0) {
            local_2024 = 0.0;
          }
          core_skeleton_cpp_FUN_005469a0(param_1 + 0x2b4,_DAT_01b4d268);
          local_120 = local_144[3];
          afStack_134[(uint)bVar6 * -2 + 6] = afStack_134[(uint)bVar6 * -2];
          afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
               afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          local_2c = (*(float *)(param_1 + 0x25704) + *(float *)(param_1 + 0x2571c)) -
                     *(float *)(param_1 + 0x25710);
          if (*(int *)(param_1 + 0x25608) != 0) {
            _DAT_01b4d2f0 =
                 (CDeformableModelInstance *)core_doc_cpp_FUN_0044ffd0(*(int *)(param_1 + 0x25608));
            local_14 = _DAT_01b4d2f0;
          }
          local_2c = local_2c - (float)_DAT_01b4d2f0;
          fVar7 = (float10)local_11c - (float10)local_2c;
          atan2();
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0((float)fVar7);
          local_468.w = afStack_514[3];
          pfVar2 = (float *)((int)&local_468 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          *(float *)((int)&local_468 + (uint)bVar6 * -8 + 4) = afStack_514[(uint)bVar6 * -2 + 4];
          *pfVar2 = afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
          pfVar2[(uint)bVar6 * -2 + 1] =
               (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
          local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    ((CDeformableModelInstance *)(param_1 + 0x2b4),&local_468,local_2024,
                     _DAT_01b4d268,core_skeleton_cpp_FUN_00544cc0);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (local_14,&local_468,local_2024,_DAT_01b4d264,core_skeleton_cpp_FUN_00544cc0);
          fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) / (float10)_DAT_005f5164,
                                  (float10)1);
          local_38 = (float)fVar7;
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_38);
          pCVar8 = local_14;
          local_448.w = local_4d8;
          local_438[(uint)bVar6 * -2 + -3] = afStack_4d4[(uint)bVar6 * -2];
          local_438[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2] =
               afStack_4d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          (local_438 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1] =
               (afStack_4d4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar8,&local_448,local_2024,_DAT_01b4d268,core_skeleton_cpp_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_38);
          pCVar3 = &local_448;
          pfVar2 = local_438;
          rotation_quat = &local_448;
          local_201c = local_2024;
          iVar1 = _DAT_01b4d264;
        }
      }
      goto LAB_00454025;
    }
    pfVar2 = (float *)(param_1 + 0x25704 + (uint)bVar6 * -8);
    local_15c = *(float *)(param_1 + 0x25700);
    local_2b4[(uint)bVar6 * -2 + 0x57] = *pfVar2;
    local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x58] = pfVar2[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_FUN_005469a0(local_1c,_DAT_01b4d268);
    fVar9 = local_15c;
    local_234 = local_168;
    local_2b4[(uint)bVar6 * -2 + 0x21] = local_2b4[(uint)bVar6 * -2 + 0x54];
    local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
         local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x55];
    local_108 = fVar9 - local_234;
    local_104 = local_158 - local_230;
    local_100 = local_154 - local_22c;
    local_18c[0] = fVar9 - local_234;
    local_2b4[(uint)bVar6 * -2 + 0x4b] = afStack_134[(uint)bVar6 * -2 + 0xc];
    local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x4c] =
         afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(local_2b4 + 0x4a);
    local_288 = local_27c;
    local_2b4[(uint)bVar6 * -2 + 0xc] = local_2b4[(uint)bVar6 * -2 + 0xf];
    local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         local_2b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    local_28 = 0.0;
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-local_288);
    local_478.w = local_518;
    pfVar2 = (float *)((int)&local_478 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_478 + (uint)bVar6 * -8 + 4) = afStack_514[(uint)bVar6 * -2];
    *pfVar2 = afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar2[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (local_14,&local_478,local_28,_DAT_01b4d268,core_skeleton_cpp_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_284);
    pCVar8 = local_14;
    local_201c = local_28;
    rotation_quat = &local_368;
    local_368.w = local_3f8;
    pfVar2 = (float *)((int)&local_368 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_368 + (uint)bVar6 * -8 + 4) = afStack_3f4[(uint)bVar6 * -2];
    *pfVar2 = afStack_3f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar2[(uint)bVar6 * -2 + 1] =
         (afStack_3f4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    iVar1 = _DAT_01b4d268;
  }
LAB_00454032:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (pCVar8,rotation_quat,local_201c,iVar1,core_skeleton_cpp_FUN_00544cc0);
LAB_0045403a:
  if (*(int *)&g_CGamePtr->field_0x25c != 0) {
    local_144[1] = 0.0;
    local_144[2] = 0.0;
    local_144[0] = 0.0;
    if ((*(int *)(param_1 + 0x25640) != 0) && (*(int *)(param_1 + 0x25698) != 0)) {
      local_144[0] = *(float *)(param_1 + 0x2567c);
    }
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar9 = 1.0;
    iVar1 = _DAT_01b4d258;
    core_xform_cpp_FUN_00594380(local_2b4 + 0x5c);
    local_408.w = local_338;
    pfVar2 = (float *)((int)&local_408 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_408 + (uint)bVar6 * -8 + 4) = afStack_334[(uint)bVar6 * -2];
    *pfVar2 = afStack_334[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar2[(uint)bVar6 * -2 + 1] =
         (afStack_334 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              ((CDeformableModelInstance *)(param_1 + 0x2b4),&local_408,fVar9,iVar1,blend_callback);
  }
  if (*(float *)(param_1 + 0x256ac) <= 0.0) {
    return;
  }
  iVar1 = 1;
  motion_name = "?draw_holsters2aimPistols" + 1;
  pCVar8 = (CDeformableModelInstance *)(param_1 + 0x2b4);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar8);
  iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                    ((CMotionList *)this_ptr,motion_name,iVar1);
  local_34 = core_motion_cpp_FUN_00503f50(pCVar8,iVar1,0x3f800000);
  local_14 = (CDeformableModelInstance *)local_34;
  core_skeleton_cpp_FUN_00545a60
            (pCVar8,iVar1,local_34,*(uint *)(param_1 + 0x256ac),_DAT_01b4d298,
             core_skeleton_cpp_FUN_00544cc0);
  return;
}
