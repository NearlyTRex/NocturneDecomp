// Name: core_doc.cpp_FUN_00453d80
// Address: 00453d80
// Address Range: [[00453d80, 00455168]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00453d80(CDoc *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00453d80(CDoc *param_1)

{
  CDemonActor *this_ptr;
  CVector3f *pCVar1;
  int iVar2;
  CQuaternion4f *rotation_quat;
  CSkeleton *this_ptr_00;
  float *pfVar3;
  CQuaternion4f *pCVar4;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  CDeformableModelInstance *pCVar9;
  float fVar10;
  char *motion_name;
  code *blend_callback;
  CBoundingBox3D *in_stack_ffffdf80;
  float local_2034;
  CDeformableModelInstance *local_2030;
  float local_202c;
  float local_2024;
  float local_2020;
  float local_201c;
  float fStack_2014;
  float local_2010;
  SPoseData local_200c;
  float afStack_1500 [996];
  CMatrix3x3f local_570;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float local_530;
  float fStack_52c;
  float afStack_528 [4];
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
  float afStack_2a0 [6];
  uint local_288;
  uint local_27c;
  CVector3f local_270;
  float local_264;
  float local_260 [5];
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
  CVector3f local_210;
  uint local_204;
  float local_200 [4];
  float local_1f0;
  uint local_1ec;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float local_1d4;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b0;
  uint local_1a4;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  CVector3f CStack_180;
  float local_174;
  float afStack_170 [2];
  CVector3f local_168;
  float local_15c;
  float local_158 [5];
  float local_144 [3];
  CVector3f local_138;
  float local_12c;
  float afStack_128 [5];
  float fStack_114;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  uint uStack_e4;
  uint uStack_d8;
  float local_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_ac;
  float local_a8 [5];
  float fStack_94;
  float afStack_90 [4];
  float local_80;
  float local_7c;
  float fStack_78;
  float fStack_64;
  float local_60 [3];
  CVector3f local_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  CVector3f *local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  CDeformableModelInstance *local_14;
  float *pfVar5;
  
  bVar7 = 0;
  local_14 = (CDeformableModelInstance *)core_motion_cpp_FUN_005038a0(&(param_1->base).base.model);
  local_2030 = local_14;
  if ((int)param_1->turn_blend_weight < 0x3e19999a) {
    local_2030 = (CDeformableModelInstance *)
                 ((param_1->turn_blend_weight / _DAT_005d015f) * (float)local_14);
  }
  if (0.85 < param_1->turn_blend_weight) {
    local_2030 = (CDeformableModelInstance *)
                 (((1.0 - param_1->turn_blend_weight) / 0.15) * (float)local_2030);
  }
  pCVar9 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar9);
  if ((0.0 < (float)local_2030) && (-1 < param_1->turn_motion_index)) {
    core_doc_cpp_FUN_00455170(param_1);
    local_200c.root_position.x = 0.0;
    local_200c.root_position.z = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190
              (pCVar9,&local_200c,(float)local_2030,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
  }
  core_doc_cpp_CDoc_makeDrawDecision_FUN_004555c0(param_1);
  core_doc_cpp_FUN_00455d10(param_1);
  local_1c = &(param_1->base).base.model;
  iVar2 = core_motion_cpp_FUN_005035c0();
  iVar2 = *(int *)(iVar2 + 0x24);
  if (iVar2 == 0x15) {
    pfVar3 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x25704);
    local_264 = (param_1->carry_object_world_center).x;
    local_260[(uint)bVar7 * -2] = *pfVar3;
    local_260[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar3[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (local_1c,_DAT_01b4d268,&local_210);
    fVar10 = local_264;
    local_21c = local_210.x;
    local_260[(uint)bVar7 * -2 + 0x12] = *(float *)((int)&local_210 + (uint)bVar7 * -8 + 4);
    local_260[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
         *(float *)((int)&local_210 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    local_198 = fVar10 - local_21c;
    local_194 = local_260[0] - local_218;
    local_190 = local_260[1] - local_214;
    local_12c = fVar10 - local_21c;
    afStack_128[(uint)bVar7 * -2] = local_200[(uint)bVar7 * -2 + 0x1b];
    afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
    pCVar9 = local_1c;
    local_204 = afStack_2a0[3];
    local_200[(uint)bVar7 * -2] = afStack_2a0[(uint)bVar7 * -2 + 4];
    local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_2a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    local_2034 = (pCVar9->base).current_frame_number;
    if ((float)_DAT_005d01bf <= local_2034) {
      local_2034 = 1.0 - (local_2034 + (float)_DAT_005d01c7) * (float)_DAT_005d01cf;
      if (local_2034 < 0.0) {
        local_2034 = 0.0;
      }
    }
    else {
      local_2034 = local_2034 * (float)_DAT_005d01cf;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0();
    pCVar9 = &(param_1->base).base.model;
    local_328.w = local_358;
    pfVar3 = (float *)((int)&local_328 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_328 + (uint)bVar7 * -8 + 4) = afStack_354[(uint)bVar7 * -2];
    *pfVar3 = afStack_354[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar3[(uint)bVar7 * -2 + 1] =
         (afStack_354 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    local_14 = pCVar9;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (pCVar9,&local_328,local_2034,_DAT_01b4d29c,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
    pCVar4 = &local_4f8;
    pfVar3 = local_4e8;
    rotation_quat = &local_4f8;
    local_201c = local_2034;
    iVar2 = _DAT_01b4d268;
LAB_00454025:
    pfVar5 = (float *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pfVar6 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar4->w = *pfVar3;
    pfVar3 = pfVar5 + (uint)bVar7 * -2 + 1;
    *pfVar5 = *pfVar6;
    *pfVar3 = pfVar6[(uint)bVar7 * -2 + 1];
    pfVar3[(uint)bVar7 * -2 + 1] = (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    pCVar9 = local_14;
  }
  else {
    if (iVar2 != 0x13) {
      if (iVar2 == 0x16) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
                  (&local_570,&(param_1->base).target_orientation.vec);
        if ((DAT_01b4d230 & 1) == 0) {
          DAT_01b4d230 = DAT_01b4d230 | 1;
        }
        this_ptr = (param_1->base).target_actor;
        if (this_ptr != (CDemonActor *)0x0) {
          (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_ffffdf80);
          pfVar3 = afStack_528;
          pfVar6 = &fStack_540;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar6 = *pfVar3;
            pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          fStack_2a4 = fStack_540 + fStack_534;
          afStack_2a0[0] = fStack_53c + local_530;
          afStack_2a0[1] = fStack_538 + fStack_52c;
          fStack_64 = fStack_540 + fStack_534;
          local_60[(uint)bVar7 * -2] = afStack_2a0[(uint)bVar7 * -2];
          local_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_2a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fStack_94 = fStack_64 * _DAT_005d018f;
          afStack_90[0] = local_60[0] * _DAT_005d018f;
          afStack_90[1] = local_60[1] * _DAT_005d018f;
          fStack_ac = fStack_64 * _DAT_005d018f;
          local_a8[(uint)bVar7 * -2] = afStack_90[(uint)bVar7 * -2];
          local_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (&stack0x00000000 != g_CDocClassInfo.class_name + 0x18) {
            _DAT_01b4d220 = fStack_ac;
            _DAT_01b4d224 = local_a8[0];
            _DAT_01b4d228 = local_a8[1];
          }
        }
        core_dirmat_cpp_FUN_00449530(&local_570);
        local_c0 = local_1b0;
        afStack_128[(uint)bVar7 * -2 + 0x1b] = local_200[(uint)bVar7 * -2 + 0x15];
        afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
             local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
        afStack_90[0] = (param_1->base).target_position.x + local_c0;
        afStack_90[1] = (param_1->base).target_position.y + fStack_bc;
        afStack_90[2] = (param_1->base).target_position.z + fStack_b8;
        fStack_78 = afStack_90[0];
        afStack_90[(uint)bVar7 * -2 + 7] = afStack_90[(uint)bVar7 * -2 + 1];
        afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8] =
             afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
        core_actor_cpp_FUN_00408de0(param_1);
        pCVar9 = &(param_1->base).base.model;
        local_14 = pCVar9;
        fStack_1e0 = local_260[2];
        local_200[(uint)bVar7 * -2 + 9] = local_260[(uint)bVar7 * -2 + 3];
        local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             local_260[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (pCVar9,_DAT_01b4d268,&CStack_180);
        fVar10 = fStack_1e0;
        fStack_fc = CStack_180.x;
        afStack_128[(uint)bVar7 * -2 + 0xc] = *(float *)((int)&CStack_180 + (uint)bVar7 * -8 + 4);
        afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
             *(float *)((int)&CStack_180 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        afStack_2a0[0] = fVar10 - fStack_fc;
        afStack_2a0[1] = fStack_1dc - fStack_f8;
        afStack_2a0[2] = fStack_1d8 - fStack_f4;
        fStack_114 = fVar10 - fStack_fc;
        afStack_128[(uint)bVar7 * -2 + 6] = afStack_2a0[(uint)bVar7 * -2 + 1];
        afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_2a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
        pCVar9 = local_14;
        uStack_d8 = uStack_e4;
        afStack_128[(uint)bVar7 * -2 + 0x15] = afStack_128[(uint)bVar7 * -2 + 0x12];
        afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
             afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        fStack_2014 = (pCVar9->base).current_frame_number;
        if ((float)_DAT_005d0197 <= fStack_2014) {
          fStack_2014 = 1.0 - (fStack_2014 + (float)_DAT_005d019f) * (float)_DAT_005d01a7;
          if (fStack_2014 < 0.0) {
            fStack_2014 = 0.0;
          }
        }
        else {
          fStack_2014 = fStack_2014 * (float)_DAT_005d01af;
        }
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0();
        pCVar9 = &(param_1->base).base.model;
        CStack_2d8.w = afStack_424[3];
        pfVar3 = (float *)((int)&CStack_2d8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        *(float *)((int)&CStack_2d8 + (uint)bVar7 * -8 + 4) = afStack_424[(uint)bVar7 * -2 + 4];
        *pfVar3 = afStack_424[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
        pfVar3[(uint)bVar7 * -2 + 1] =
             (afStack_424 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
        local_14 = pCVar9;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar9,&CStack_2d8,fStack_2014,_DAT_01b4d29c,
                   core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
        core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
        pCVar4 = &CStack_2c8;
        pfVar3 = afStack_354 + 3;
        rotation_quat = &CStack_2c8;
        local_201c = fStack_2014;
        iVar2 = _DAT_01b4d268;
      }
      else {
        if (iVar2 == 0x21) {
          local_20 = &param_1->carry_object_world_center;
          if ((param_1->base).lever_to_pull == (CLever *)0x0) {
            core_lever_cpp_FUN_004e2220();
            local_60[0] = local_1d4;
            local_60[(uint)bVar7 * -2 + 1] = local_200[(uint)bVar7 * -2 + 0xc];
            local_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
                 local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
            core_actor_cpp_FUN_00408de0(param_1);
            pCVar1 = local_20;
            local_228 = local_cc;
            local_260[(uint)bVar7 * -2 + 0xf] = afStack_128[(uint)bVar7 * -2 + 0x18];
            local_260[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                 afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
            if ((CVector3f *)(local_260 + 0xe) != pCVar1) {
              pCVar1->x = local_228;
              pCVar1->y = local_224;
              pCVar1->z = local_220;
            }
          }
          else {
            core_lever_cpp_FUN_004e2220();
            local_158[2] = local_a8[0];
            local_158[(uint)bVar7 * -2 + 3] = local_a8[(uint)bVar7 * -2 + 1];
            local_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 local_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
            core_actor_cpp_FUN_00408de0(param_1);
            afStack_90[3] = local_174;
            afStack_90[(uint)bVar7 * -2 + 4] = afStack_170[(uint)bVar7 * -2];
            afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5] =
                 afStack_170[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if ((CVector3f *)(afStack_90 + 3) != local_20) {
              local_20->x = afStack_90[3];
              local_20->y = local_80;
              local_20->z = local_7c;
            }
            _DAT_01b4d22c = (param_1->base).lever_to_pull;
          }
          pfVar3 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x25704);
          local_24c = (param_1->carry_object_world_center).x;
          local_260[(uint)bVar7 * -2 + 6] = *pfVar3;
          local_260[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] = pfVar3[(uint)bVar7 * -2 + 1];
          local_14 = &(param_1->base).base.model;
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    (local_14,_DAT_01b4d268,&local_54);
          fVar10 = local_24c;
          local_240 = local_54.x;
          local_260[(uint)bVar7 * -2 + 9] = *(float *)((int)&local_54 + (uint)bVar7 * -8 + 4);
          local_260[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               *(float *)((int)&local_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          fVar10 = fVar10 - local_240;
          local_1c8 = fVar10;
          local_1c4 = local_248 - local_23c;
          local_1c0 = local_244 - local_238;
          local_200[2] = fVar10;
          local_200[(uint)bVar7 * -2 + 3] = local_200[(uint)bVar7 * -2 + 0xf];
          local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          local_2b8 = fVar10;
          local_2b4[0] = local_1c4;
          local_2b4[1] = local_1c0;
          local_f0 = fVar10;
          afStack_128[(uint)bVar7 * -2 + 0xf] = local_2b4[(uint)bVar7 * -2];
          afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
               local_2b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
          pCVar9 = local_14;
          local_1ec = local_1a4;
          local_200[(uint)bVar7 * -2 + 6] = local_200[(uint)bVar7 * -2 + 0x18];
          local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
          local_201c = (pCVar9->base).current_frame_number;
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
          local_30 = SQRT(local_1f0 * local_1f0 +
                          local_200[2] * local_200[2] + local_200[3] * local_200[3]);
          if (local_30 < _DAT_005f5164) {
            fVar8 = (float10)local_30 / (float10)_DAT_005f5164;
            acos();
            local_3c = (float)fVar8;
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
            local_378.w = local_428;
            pfVar3 = (float *)((int)&local_378 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(float *)((int)&local_378 + (uint)bVar7 * -8 + 4) = afStack_424[(uint)bVar7 * -2];
            *pfVar3 = afStack_424[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            pfVar3[(uint)bVar7 * -2 + 1] =
                 (afStack_424 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            local_14 = &(param_1->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (local_14,&local_378,local_201c,_DAT_01b4d268,
                       core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
            pCVar9 = local_14;
            local_318.w = afStack_3c4[3];
            pfVar3 = (float *)((int)&local_318 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(float *)((int)&local_318 + (uint)bVar7 * -8 + 4) = afStack_3c4[(uint)bVar7 * -2 + 4];
            *pfVar3 = afStack_3c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
            pfVar3[(uint)bVar7 * -2 + 1] =
                 (afStack_3c4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (pCVar9,&local_318,local_201c,_DAT_01b4d270,
                       core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          }
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0();
          pCVar9 = &(param_1->base).base.model;
          local_2e8.w = afStack_4d4[3];
          pfVar3 = (float *)((int)&local_2e8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(float *)((int)&local_2e8 + (uint)bVar7 * -8 + 4) = afStack_4d4[(uint)bVar7 * -2 + 4];
          *pfVar3 = afStack_4d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
          pfVar3[(uint)bVar7 * -2 + 1] =
               (afStack_4d4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
          local_14 = pCVar9;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar9,&local_2e8,local_201c,_DAT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
          local_458.w = local_488;
          pfVar3 = (float *)((int)&local_458 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(float *)((int)&local_458 + (uint)bVar7 * -8 + 4) = afStack_4a4[(uint)bVar7 * -2 + 8];
          *pfVar3 = afStack_4a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
          pfVar3[(uint)bVar7 * -2 + 1] =
               (afStack_4a4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
          rotation_quat = &local_458;
          pCVar9 = local_14;
          iVar2 = _DAT_01b4d268;
          goto LAB_00454032;
        }
        if (iVar2 == 0x17) {
          local_202c = (local_1c->base).current_frame_number * (float)_DAT_005d0177;
          if (1.0 < local_202c) {
            local_202c = 1.0;
          }
          fVar8 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x /
                                  (float10)_DAT_005f5164,(float10)1);
          local_40 = (float)fVar8;
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
          pCVar9 = &(param_1->base).base.model;
          local_3d8.w = local_398;
          pfVar3 = (float *)((int)&local_3d8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(float *)((int)&local_3d8 + (uint)bVar7 * -8 + 4) = afStack_394[(uint)bVar7 * -2];
          *pfVar3 = afStack_394[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          pfVar3[(uint)bVar7 * -2 + 1] =
               (afStack_394 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          local_14 = pCVar9;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar9,&local_3d8,local_202c,_DAT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
          pCVar4 = &local_3d8;
          pfVar3 = local_2f8;
          rotation_quat = &local_3d8;
          local_201c = local_202c;
          iVar2 = _DAT_01b4d264;
        }
        else {
          if (iVar2 != 0x18) {
            if (iVar2 == 0x19) {
              local_2020 = 1.0 - ((local_1c->base).current_frame_number + (float)_DAT_005d016f) *
                                 (float)_DAT_005d0177;
              if (local_2020 < 0.0) {
                local_2020 = 0.0;
              }
              if (1.0 < local_2020) {
                local_2020 = 1.0;
              }
              fVar8 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x /
                                      (float10)_DAT_005f5164,(float10)1);
              local_24 = (float)fVar8;
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
              pCVar9 = &(param_1->base).base.model;
              local_3a8.w = afStack_394[3];
              pfVar3 = (float *)((int)&local_3a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              *(float *)((int)&local_3a8 + (uint)bVar7 * -8 + 4) = afStack_394[(uint)bVar7 * -2 + 4]
              ;
              *pfVar3 = afStack_394[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
              pfVar3[(uint)bVar7 * -2 + 1] =
                   (afStack_394 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
              local_14 = pCVar9;
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (pCVar9,&local_3a8,local_2020,_DAT_01b4d268,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
              local_3a8.w = local_3c8;
              pfVar3 = (float *)((int)&local_3a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              *(float *)((int)&local_3a8 + (uint)bVar7 * -8 + 4) = afStack_3c4[(uint)bVar7 * -2];
              *pfVar3 = afStack_3c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
              pfVar3[(uint)bVar7 * -2 + 1] =
                   (afStack_3c4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
              rotation_quat = &local_3a8;
              pCVar9 = local_14;
              local_201c = local_2020;
              iVar2 = _DAT_01b4d264;
            }
            else {
              if (iVar2 != 0x1a) goto LAB_0045403a;
              local_2010 = (local_1c->base).current_frame_number;
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
              local_14 = &(param_1->base).base.model;
              core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                        (local_14,_DAT_01b4d268,&local_270);
              local_1bc = local_270.x;
              local_200[(uint)bVar7 * -2 + 0x12] =
                   *(float *)((int)&local_270 + (uint)bVar7 * -8 + 4);
              local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                   *(float *)((int)&local_270 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              atan2();
              core_xform_cpp_quaternionFromAngleX_FUN_00593fa0();
              local_308.w = local_4a8;
              local_2f8[(uint)bVar7 * -2 + -3] = afStack_4a4[(uint)bVar7 * -2];
              pCVar9 = local_14;
              local_2f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -2] =
                   afStack_4a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
              (local_2f8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -2)[(uint)bVar7 * -2 + 1] =
                   (afStack_4a4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (local_14,&local_308,local_2010,_DAT_01b4d268,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (pCVar9,&local_308,local_2010,_DAT_01b4d264,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              fVar8 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x /
                                      (float10)_DAT_005f5164,(float10)1);
              local_18 = (float)fVar8;
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
              pCVar9 = local_14;
              local_4b8.w = afStack_4a4[3];
              pfVar3 = (float *)((int)&local_4b8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              *(float *)((int)&local_4b8 + (uint)bVar7 * -8 + 4) = afStack_4a4[(uint)bVar7 * -2 + 4]
              ;
              *pfVar3 = afStack_4a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
              pfVar3[(uint)bVar7 * -2 + 1] =
                   (afStack_4a4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (pCVar9,&local_4b8,local_2010,_DAT_01b4d268,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
              local_4b8.w = afStack_3f4[3];
              pfVar3 = (float *)((int)&local_4b8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              *(float *)((int)&local_4b8 + (uint)bVar7 * -8 + 4) = afStack_3f4[(uint)bVar7 * -2 + 4]
              ;
              *pfVar3 = afStack_3f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
              pfVar3[(uint)bVar7 * -2 + 1] =
                   (afStack_3f4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
              rotation_quat = &local_4b8;
              pCVar9 = local_14;
              local_201c = local_2010;
              iVar2 = _DAT_01b4d264;
            }
            goto LAB_00454032;
          }
          local_2024 = (local_1c->base).current_frame_number;
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
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    (&(param_1->base).base.model,_DAT_01b4d268,&local_138);
          afStack_128[2] = local_138.x;
          afStack_128[(uint)bVar7 * -2 + 3] = *(float *)((int)&local_138 + (uint)bVar7 * -8 + 4);
          afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               *(float *)((int)&local_138 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          local_2c = ((param_1->carry_object_world_center).y + (param_1->carry_object_bbox).max.y) -
                     (param_1->carry_object_bbox).min.y;
          if ((param_1->base).object_to_pick_up != (CDemonActor *)0x0) {
            _DAT_01b4d2f0 = (CDeformableModelInstance *)core_doc_cpp_FUN_0044ffd0();
            local_14 = _DAT_01b4d2f0;
          }
          local_2c = local_2c - (float)_DAT_01b4d2f0;
          atan2();
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0();
          pCVar9 = &(param_1->base).base.model;
          local_468.w = afStack_514[3];
          pfVar3 = (float *)((int)&local_468 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(float *)((int)&local_468 + (uint)bVar7 * -8 + 4) = afStack_514[(uint)bVar7 * -2 + 4];
          *pfVar3 = afStack_514[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
          pfVar3[(uint)bVar7 * -2 + 1] =
               (afStack_514 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
          local_14 = pCVar9;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar9,&local_468,local_2024,_DAT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (local_14,&local_468,local_2024,_DAT_01b4d264,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          fVar8 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x /
                                  (float10)_DAT_005f5164,(float10)1);
          local_38 = (float)fVar8;
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
          pCVar9 = local_14;
          local_448.w = local_4d8;
          local_438[(uint)bVar7 * -2 + -3] = afStack_4d4[(uint)bVar7 * -2];
          local_438[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -2] =
               afStack_4d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          (local_438 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -2)[(uint)bVar7 * -2 + 1] =
               (afStack_4d4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar9,&local_448,local_2024,_DAT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
          pCVar4 = &local_448;
          pfVar3 = local_438;
          rotation_quat = &local_448;
          local_201c = local_2024;
          iVar2 = _DAT_01b4d264;
        }
      }
      goto LAB_00454025;
    }
    pfVar3 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x25704);
    local_15c = (param_1->carry_object_world_center).x;
    local_158[(uint)bVar7 * -2] = *pfVar3;
    local_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar3[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (local_1c,_DAT_01b4d268,&local_168);
    fVar10 = local_15c;
    local_234 = local_168.x;
    local_260[(uint)bVar7 * -2 + 0xc] = *(float *)((int)&local_168 + (uint)bVar7 * -8 + 4);
    local_260[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         *(float *)((int)&local_168 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    local_108 = fVar10 - local_234;
    local_104 = local_158[0] - local_230;
    local_100 = local_158[1] - local_22c;
    local_18c = fVar10 - local_234;
    local_200[(uint)bVar7 * -2 + 0x1e] = afStack_128[(uint)bVar7 * -2 + 9];
    local_200[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f] =
         afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
    local_288 = local_27c;
    afStack_2a0[(uint)bVar7 * -2 + 7] = afStack_2a0[(uint)bVar7 * -2 + 10];
    afStack_2a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8] =
         afStack_2a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xb];
    local_28 = 0.0;
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0();
    local_478.w = local_518;
    pfVar3 = (float *)((int)&local_478 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_478 + (uint)bVar7 * -8 + 4) = afStack_514[(uint)bVar7 * -2];
    *pfVar3 = afStack_514[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar3[(uint)bVar7 * -2 + 1] =
         (afStack_514 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    local_14 = &(param_1->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (local_14,&local_478,local_28,_DAT_01b4d268,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
    pCVar9 = local_14;
    local_201c = local_28;
    rotation_quat = &local_368;
    local_368.w = local_3f8;
    pfVar3 = (float *)((int)&local_368 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_368 + (uint)bVar7 * -8 + 4) = afStack_3f4[(uint)bVar7 * -2];
    *pfVar3 = afStack_3f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar3[(uint)bVar7 * -2 + 1] =
         (afStack_3f4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    iVar2 = _DAT_01b4d268;
  }
LAB_00454032:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (pCVar9,rotation_quat,local_201c,iVar2,
             core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
LAB_0045403a:
  if (g_CGamePtr->goggles_active != 0) {
    local_144[1] = 0.0;
    local_144[2] = 0.0;
    local_144[0] = 0.0;
    if ((param_1->guns_drawn != 0) && (param_1->weapon != (CWeapon *)0x0)) {
      local_144[0] = (param_1->left_arm_aim).target_pitch;
    }
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
    fVar10 = 1.0;
    iVar2 = _DAT_01b4d258;
    core_xform_cpp_FUN_00594380(local_158 + 5);
    local_408.w = local_338;
    pfVar3 = (float *)((int)&local_408 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_408 + (uint)bVar7 * -8 + 4) = afStack_334[(uint)bVar7 * -2];
    *pfVar3 = afStack_334[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar3[(uint)bVar7 * -2 + 1] =
         (afStack_334 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (&(param_1->base).base.model,&local_408,fVar10,iVar2,blend_callback);
  }
  if (param_1->interact_blend <= 0.0) {
    return;
  }
  iVar2 = 1;
  motion_name = "?draw_holsters2aimPistols" + 1;
  pCVar9 = &(param_1->base).base.model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar9);
  iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                    (&this_ptr_00->motion_list,motion_name,iVar2);
  local_34 = (float)core_motion_cpp_FUN_00503f50(pCVar9,iVar2);
  local_14 = (CDeformableModelInstance *)local_34;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
            (pCVar9,iVar2,local_34,param_1->interact_blend,_DAT_01b4d298,
             core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
  return;
}
