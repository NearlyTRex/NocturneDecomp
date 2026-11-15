// Name: core_doc.cpp_FUN_00453d80
// Address: 00453d80
// Address Range: [[00453d80, 00455168]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00453d80(CDoc *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00453d80(CDoc *param_1)

{
  CDeformableModelInstance *this_ptr;
  CLever *this_ptr_00;
  CDemonActor *this_ptr_01;
  CVector3f *pCVar1;
  SMotion *pSVar2;
  CQuaternion4f *rotation_quat;
  CSkeleton *this_ptr_02;
  float *pfVar3;
  CQuaternion4f *pCVar4;
  uint *puVar6;
  CQuaternion4f *pCVar7;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float10 fVar12;
  double dVar13;
  CDeformableModelInstance *pCVar14;
  float fVar15;
  char *motion_name;
  code *pcVar16;
  int iVar17;
  CBoundingBox3D *in_stack_ffffdf80;
  CDeformableModel_MotionBlendWeightFunc *local_2034;
  CQuaternion4f *local_2030;
  CDeformableModel_MotionBlendWeightFunc *local_202c;
  CQuaternion4f *local_2028;
  CQuaternion4f *local_2020;
  CQuaternion4f *local_2018;
  CQuaternion4f *pCStack_2014;
  SPoseData local_200c;
  float afStack_1500 [995];
  byte auStack_574 [52];
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float local_530;
  float fStack_52c;
  float afStack_528 [4];
  byte local_518 [16];
  float local_508 [4];
  CQuaternion4f local_4f8;
  byte local_4e8 [16];
  float local_4d8 [3];
  CQuaternion4f CStack_4cc;
  CQuaternion4f CStack_4bc;
  CQuaternion4f CStack_4ac;
  CQuaternion4f CStack_49c;
  CQuaternion4f CStack_48c;
  byte local_478 [16];
  float local_468 [3];
  CQuaternion4f CStack_45c;
  CQuaternion4f CStack_44c;
  CQuaternion4f CStack_43c;
  CQuaternion4f CStack_42c;
  CQuaternion4f CStack_41c;
  CQuaternion4f CStack_40c;
  byte local_3f8 [16];
  uint local_3e8 [4];
  CQuaternion4f local_3d8;
  byte local_3c8 [16];
  float local_3b8 [4];
  CQuaternion4f local_3a8;
  CQuaternion4f local_398;
  byte local_388 [16];
  uint local_378 [4];
  CQuaternion4f local_368;
  byte local_358 [28];
  CQuaternion4f CStack_33c;
  byte local_328 [16];
  float local_318 [3];
  CQuaternion4f CStack_30c;
  byte local_2f8 [16];
  float local_2e8 [3];
  CQuaternion4f CStack_2dc;
  CQuaternion4f CStack_2cc;
  float local_2b8;
  float local_2b4;
  float local_2b0 [4];
  float fStack_2a0;
  float afStack_29c [5];
  float local_288;
  float local_284 [5];
  CVector3f local_270;
  float local_264;
  float local_260;
  CVector3f local_25c;
  float local_24c;
  float local_248 [4];
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
  float local_204;
  float local_200 [4];
  float local_1f0;
  float local_1ec;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  CVector3f local_1d4;
  float local_1c8;
  float local_1c4 [4];
  CVector3f CStack_1b4;
  float local_1a4;
  float afStack_1a0 [4];
  float local_190;
  float local_18c;
  CVector3f CStack_184;
  CVector3f local_174;
  CVector3f local_168;
  float local_15c;
  float local_158 [2];
  byte local_150 [12];
  uint local_144;
  uint local_140;
  CVector3f local_138;
  float local_12c;
  float afStack_128 [4];
  float afStack_118 [4];
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float local_f0;
  float fStack_e8;
  float fStack_dc;
  float fStack_d8;
  CVector3f local_cc;
  float local_c0;
  float afStack_bc [4];
  float fStack_ac;
  CVector3f local_a8;
  float fStack_94;
  float fStack_90;
  float afStack_8c [4];
  CVector3f local_7c [2];
  float fStack_64;
  CVector3f local_60;
  CVector3f local_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  CDeformableModel_MotionBlendWeightFunc *local_28;
  float local_24;
  CVector3f *local_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CQuaternion4f *local_14;
  uint *puVar5;
  uint *puVar8;
  
  bVar11 = 0;
  local_14 = (CQuaternion4f *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                       (&(param_1->base).base.model.base,0);
  local_2030 = local_14;
  if ((int)param_1->turn_blend_weight < 0x3e19999a) {
    local_2030 = (CQuaternion4f *)((param_1->turn_blend_weight / _DAT_005d015f) * (float)local_14);
  }
  if (0.85 < param_1->turn_blend_weight) {
    local_2030 = (CQuaternion4f *)(((1.0 - param_1->turn_blend_weight) / 0.15) * (float)local_2030);
  }
  pCVar14 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar14);
  if ((0.0 < (float)local_2030) && (-1 < param_1->turn_motion_index)) {
    core_doc_cpp_FUN_00455170(param_1);
    local_200c.root_position.x = 0.0;
    local_200c.root_position.z = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190
              (pCVar14,&local_200c,(float)local_2030,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
  }
  core_doc_cpp_CDoc_makeDrawDecision_FUN_004555c0(param_1);
  core_doc_cpp_FUN_00455d10(param_1);
  local_1c = &(param_1->base).base.model;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&local_1c->base);
  iVar17 = pSVar2->state_index;
  if (iVar17 == 0x15) {
    pfVar3 = (float *)((int)param_1 + (uint)bVar11 * -8 + 0x25704);
    local_264 = (param_1->carry_object_world_center).x;
    (&local_260)[(uint)bVar11 * -2] = *pfVar3;
    *(float *)((int)&local_25c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
         pfVar3[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (local_1c,(int)_DAT_01b4d268,&local_210);
    fVar15 = local_264;
    local_21c = local_210.x;
    local_248[(uint)bVar11 * -2 + 0xc] = *(float *)((int)&local_210 + (uint)bVar11 * -8 + 4);
    local_248[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         *(float *)((int)&local_210 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    afStack_1a0[2] = fVar15 - local_21c;
    afStack_1a0[3] = local_260 - local_218;
    local_190 = local_25c.x - local_214;
    local_12c = fVar15 - local_21c;
    afStack_128[(uint)bVar11 * -2] = afStack_1a0[(uint)bVar11 * -2 + 3];
    afStack_128[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_1a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
    pCVar14 = local_1c;
    local_204 = afStack_29c[2];
    local_200[(uint)bVar11 * -2] = afStack_29c[(uint)bVar11 * -2 + 3];
    local_200[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    fVar15 = (pCVar14->base).current_frame_number;
    if ((float)_DAT_005d01bf <= fVar15) {
      local_2034 = (CDeformableModel_MotionBlendWeightFunc *)
                   (1.0 - (fVar15 + (float)_DAT_005d01c7) * (float)_DAT_005d01cf);
      if ((float)local_2034 < 0.0) {
        local_2034 = (CDeformableModel_MotionBlendWeightFunc *)0x0;
      }
    }
    else {
      local_2034 = (CDeformableModel_MotionBlendWeightFunc *)(fVar15 * (float)_DAT_005d01cf);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_204,(CQuaternion4f *)local_358);
    local_2028 = (CQuaternion4f *)local_328;
    pCVar14 = &(param_1->base).base.model;
    local_328._0_4_ = local_358._0_4_;
    *(uint *)(local_328 + (uint)bVar11 * -8 + 4) =
         *(uint *)(local_358 + (uint)bVar11 * -8 + 4);
    *(uint *)(local_328 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)(local_358 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)
     ((int)(local_328 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) + ((uint)bVar11 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_358 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) +
          ((uint)bVar11 * -2 + 1) * 4);
    local_14 = (CQuaternion4f *)pCVar14;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (pCVar14,local_2028,(float)local_2034,_DAT_01b4d29c,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_200[0],(CQuaternion4f *)local_4e8);
    pCVar7 = (CQuaternion4f *)(local_508 + 4);
    pCVar4 = (CQuaternion4f *)local_4e8;
    rotation_quat = (CQuaternion4f *)(local_508 + 4);
    pcVar16 = _DAT_01b4d268;
LAB_00454025:
    puVar8 = (uint *)((int)pCVar7 + ((uint)bVar11 * -2 + 1) * 4);
    puVar5 = (uint *)((int)pCVar4 + ((uint)bVar11 * -2 + 1) * 4);
    pCVar7->w = pCVar4->w;
    puVar9 = puVar8 + (uint)bVar11 * -2 + 1;
    puVar6 = puVar5 + (uint)bVar11 * -2 + 1;
    *puVar8 = *puVar5;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar11 * -2 + 1] = puVar6[(uint)bVar11 * -2 + 1];
    pCVar14 = local_18;
    pCStack_2014 = local_2028;
    local_2020 = (CQuaternion4f *)local_2034;
  }
  else {
    if (iVar17 != 0x13) {
      if (iVar17 == 0x16) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
                  ((CMatrix3x3f *)(auStack_574 + 4),&(param_1->base).target_orientation.vec);
        if ((DAT_01b4d230 & 1) == 0) {
          DAT_01b4d230 = DAT_01b4d230 | 1;
        }
        this_ptr_01 = (param_1->base).target_actor;
        if (this_ptr_01 != (CDemonActor *)0x0) {
          (*((this_ptr_01->vtable)._ub)->getBoundingBox)(this_ptr_01,in_stack_ffffdf80);
          pfVar3 = afStack_528;
          pfVar10 = &fStack_540;
          for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
            *pfVar10 = *pfVar3;
            pfVar3 = pfVar3 + (uint)bVar11 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
          }
          local_2b0[3] = fStack_540 + fStack_534;
          fStack_2a0 = fStack_53c + local_530;
          afStack_29c[0] = fStack_538 + fStack_52c;
          fStack_64 = fStack_540 + fStack_534;
          *(float *)((int)&local_60 + (uint)bVar11 * -8) = afStack_29c[(uint)bVar11 * -2 + -1];
          *(float *)((int)&local_60 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
               afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2];
          fStack_94 = fStack_64 * _DAT_005d018f;
          fStack_90 = local_60.x * _DAT_005d018f;
          afStack_8c[0] = local_60.y * _DAT_005d018f;
          fStack_ac = fStack_64 * _DAT_005d018f;
          *(float *)((int)&local_a8 + (uint)bVar11 * -8) = afStack_8c[(uint)bVar11 * -2 + -1];
          *(float *)((int)&local_a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
               afStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2];
          if (&stack0x00000000 != g_CDocClassInfo.class_name + 0x18) {
            _DAT_01b4d220 = fStack_ac;
            _DAT_01b4d224 = local_a8.x;
            _DAT_01b4d228 = local_a8.y;
          }
        }
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
                  ((CMatrix3x3f *)auStack_574,(CVector3f *)&DAT_01b4d220,&CStack_1b4);
        local_cc.z = CStack_1b4.x;
        afStack_bc[(uint)bVar11 * -2 + -1] = *(float *)((int)&CStack_1b4 + (uint)bVar11 * -8 + 4);
        afStack_bc[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             *(float *)((int)&CStack_1b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        fStack_94 = (param_1->base).target_position.x + local_cc.z;
        fStack_90 = (param_1->base).target_position.y + local_c0;
        afStack_8c[0] = (param_1->base).target_position.z + afStack_bc[0];
        local_7c[0].x = fStack_94;
        *(float *)((int)local_7c + (uint)bVar11 * -8 + 4) = afStack_8c[(uint)bVar11 * -2 + -1];
        *(float *)((int)local_7c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)param_1,local_7c,&local_25c);
        pCVar14 = &(param_1->base).base.model;
        local_18 = pCVar14;
        fStack_1e4 = local_25c.x;
        local_200[(uint)bVar11 * -2 + 8] = *(float *)((int)&local_25c + (uint)bVar11 * -8 + 4);
        local_200[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9] =
             *(float *)((int)&local_25c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (pCVar14,(int)_DAT_01b4d268,&CStack_184);
        fVar15 = fStack_1e4;
        local_100 = CStack_184.x;
        afStack_128[(uint)bVar11 * -2 + 0xb] = *(float *)((int)&CStack_184 + (uint)bVar11 * -8 + 4);
        afStack_128[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xc] =
             *(float *)((int)&CStack_184 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        local_2b0[3] = fVar15 - local_100;
        fStack_2a0 = fStack_1e0 - fStack_fc;
        afStack_29c[0] = fStack_1dc - fStack_f8;
        afStack_118[0] = fVar15 - local_100;
        afStack_128[(uint)bVar11 * -2 + 5] = afStack_29c[(uint)bVar11 * -2 + -1];
        afStack_128[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6] =
             afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_128 + 4);
        pCVar14 = local_18;
        fStack_dc = fStack_e8;
        afStack_128[(uint)bVar11 * -2 + 0x14] = afStack_128[(uint)bVar11 * -2 + 0x11];
        afStack_128[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15] =
             afStack_128[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x12];
        fVar15 = (pCVar14->base).current_frame_number;
        if ((float)_DAT_005d0197 <= fVar15) {
          local_2018 = (CQuaternion4f *)
                       (1.0 - (fVar15 + (float)_DAT_005d019f) * (float)_DAT_005d01a7);
          if ((float)local_2018 < 0.0) {
            local_2018 = (CQuaternion4f *)0x0;
          }
        }
        else {
          local_2018 = (CQuaternion4f *)(fVar15 * (float)_DAT_005d01af);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_dc,&CStack_41c);
        pCVar14 = &(param_1->base).base.model;
        CStack_2dc.w = CStack_41c.w;
        puVar6 = (uint *)((int)&CStack_2cc + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + -2) * 4)
        ;
        puVar5 = (uint *)((int)&CStack_41c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        *(uint *)((int)&CStack_2cc + ((uint)bVar11 * -2 + -3) * 4) =
             *(uint *)((int)&CStack_41c + (uint)bVar11 * -8 + 4);
        *puVar6 = *puVar5;
        puVar6[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
        local_18 = pCVar14;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar14,&CStack_2dc,(float)local_2018,_DAT_01b4d29c,
                   core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
        core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                  (fStack_d8,(CQuaternion4f *)(local_358 + 0xc));
        pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
        pCVar7 = &CStack_2cc;
        pCVar4 = (CQuaternion4f *)(local_358 + 0xc);
        rotation_quat = &CStack_2cc;
        local_2028 = local_2018;
        local_2034 = _DAT_01b4d268;
      }
      else {
        if (iVar17 == 0x21) {
          local_20 = &param_1->carry_object_world_center;
          this_ptr_00 = (param_1->base).lever_to_pull;
          if (this_ptr_00 == (CLever *)0x0) {
            core_lever_cpp_CLever_getHandlePosition_FUN_004e2220(_DAT_01b4d22c,&local_1d4);
            local_60.x = local_1d4.x;
            *(uint *)((int)&local_60 + (uint)bVar11 * -8 + 4) =
                 *(uint *)((int)&local_1d4 + (uint)bVar11 * -8 + 4);
            *(uint *)((int)&local_60 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 *(uint *)((int)&local_1d4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      ((CDemonActor *)param_1,&local_60,&local_cc);
            pCVar1 = local_20;
            local_228 = local_cc.x;
            local_248[(uint)bVar11 * -2 + 9] = *(float *)((int)&local_cc + (uint)bVar11 * -8 + 4);
            local_248[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                 *(float *)((int)&local_cc + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8);
            if ((CVector3f *)(local_248 + 8) != pCVar1) {
              pCVar1->x = local_228;
              pCVar1->y = local_224;
              pCVar1->z = local_220;
            }
          }
          else {
            core_lever_cpp_CLever_getHandlePosition_FUN_004e2220(this_ptr_00,&local_a8);
            local_150._0_4_ = local_a8.x;
            *(uint *)(local_150 + (uint)bVar11 * -8 + 4) =
                 *(uint *)((int)&local_a8 + (uint)bVar11 * -8 + 4);
            *(uint *)(local_150 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
                 *(uint *)((int)&local_a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      ((CDemonActor *)param_1,(CVector3f *)local_150,&local_174);
            afStack_8c[2] = local_174.x;
            afStack_8c[(uint)bVar11 * -2 + 3] = *(float *)((int)&local_174 + (uint)bVar11 * -8 + 4);
            *(uint *)((int)local_7c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)((int)&local_174 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            if ((CVector3f *)(afStack_8c + 2) != local_20) {
              local_20->x = afStack_8c[2];
              local_20->y = afStack_8c[3];
              local_20->z = local_7c[0].x;
            }
            _DAT_01b4d22c = (param_1->base).lever_to_pull;
          }
          pfVar3 = (float *)((int)param_1 + (uint)bVar11 * -8 + 0x25704);
          local_24c = (param_1->carry_object_world_center).x;
          local_248[(uint)bVar11 * -2] = *pfVar3;
          local_248[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = pfVar3[(uint)bVar11 * -2 + 1];
          local_14 = (CQuaternion4f *)&(param_1->base).base.model;
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    ((CDeformableModelInstance *)local_14,(int)_DAT_01b4d268,&local_54);
          fVar15 = local_24c;
          local_248[2] = local_54.x;
          local_248[(uint)bVar11 * -2 + 3] = *(float *)((int)&local_54 + (uint)bVar11 * -8 + 4);
          local_248[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               *(float *)((int)&local_54 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          fVar15 = fVar15 - local_248[2];
          local_1c8 = fVar15;
          local_1c4[0] = local_248[0] - local_248[3];
          local_1c4[1] = local_248[1] - local_238;
          local_200[2] = fVar15;
          local_200[(uint)bVar11 * -2 + 3] = local_1c4[(uint)bVar11 * -2];
          local_200[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               local_1c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          local_2b8 = fVar15;
          local_2b4 = local_1c4[0];
          local_2b0[0] = local_1c4[1];
          local_f0 = fVar15;
          afStack_128[(uint)bVar11 * -2 + 0xf] = local_2b0[(uint)bVar11 * -2 + -1];
          afStack_128[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
               local_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
          local_1ec = local_1a4;
          local_200[(uint)bVar11 * -2 + 6] = afStack_1a0[(uint)bVar11 * -2];
          local_200[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_1a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          local_30 = SQRT(local_1f0 * local_1f0 +
                          local_200[2] * local_200[2] + local_200[3] * local_200[3]);
          if (local_30 < _DAT_005f5164) {
            dVar13 = acos((double)(local_30 / _DAT_005f5164));
            local_40 = (float)dVar13;
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_40,&CStack_42c);
            local_388._12_4_ = CStack_42c.w;
            puVar5 = (uint *)((int)&CStack_42c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            local_378[(uint)bVar11 * -2] = *(uint *)((int)&CStack_42c + (uint)bVar11 * -8 + 4)
            ;
            local_378[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = *puVar5;
            (local_378 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
                 puVar5[(uint)bVar11 * -2 + 1];
            local_18 = &(param_1->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (local_18,(CQuaternion4f *)(local_388 + 0xc),(float)local_2020,
                       (int)_DAT_01b4d268,core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                      (-local_40,(CQuaternion4f *)(local_3c8 + 0xc));
            pCVar14 = local_18;
            local_328._12_4_ = local_3c8._12_4_;
            local_318[(uint)bVar11 * -2] = local_3b8[(uint)bVar11 * -2];
            local_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 local_3b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            (local_318 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
                 (local_3b8 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (pCVar14,(CQuaternion4f *)(local_328 + 0xc),(float)local_2020,_DAT_01b4d270,
                       core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          }
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_1f0,&CStack_4cc);
          pCVar14 = &(param_1->base).base.model;
          local_2f8._12_4_ = CStack_4cc.w;
          pfVar3 = (float *)((int)&CStack_4cc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          local_2e8[(uint)bVar11 * -2] = *(float *)((int)&CStack_4cc + (uint)bVar11 * -8 + 4);
          local_2e8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = *pfVar3;
          (local_2e8 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
               pfVar3[(uint)bVar11 * -2 + 1];
          local_18 = pCVar14;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar14,(CQuaternion4f *)(local_2f8 + 0xc),(float)local_2020,(int)_DAT_01b4d268
                     ,core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_1ec,&CStack_48c);
          CStack_45c.w = CStack_48c.w;
          pfVar3 = (float *)((int)&CStack_48c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          local_468[(uint)bVar11 * -2 + 4] = *(float *)((int)&CStack_48c + (uint)bVar11 * -8 + 4);
          local_468[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] = *pfVar3;
          (local_468 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1] =
               pfVar3[(uint)bVar11 * -2 + 1];
          pCVar14 = local_18;
          rotation_quat = (CQuaternion4f *)(local_468 + 3);
          pCStack_2014 = local_2020;
          local_2020 = (CQuaternion4f *)_DAT_01b4d268;
          pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
          goto LAB_00454032;
        }
        if (iVar17 == 0x17) {
          local_202c = (CDeformableModel_MotionBlendWeightFunc *)
                       ((local_1c->base).current_frame_number * (float)_DAT_005d0177);
          if (1.0 < (float)local_202c) {
            local_202c = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
          }
          fVar12 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x /
                                   (float10)_DAT_005f5164,(float10)1);
          local_40 = (float)fVar12;
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_40,&local_398);
          local_2028 = &local_3d8;
          pCVar14 = &(param_1->base).base.model;
          local_3d8.w = local_398.w;
          *(uint *)(local_3c8 + (uint)bVar11 * -8 + -0xc) =
               *(uint *)(local_388 + (uint)bVar11 * -8 + -0xc);
          *(uint *)(local_3c8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8) =
               *(uint *)(local_388 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8);
          *(uint *)
           ((int)(local_3c8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8) +
           ((uint)bVar11 * -2 + 1) * 4) =
               *(uint *)
                ((int)(local_388 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8) +
                ((uint)bVar11 * -2 + 1) * 4);
          local_14 = (CQuaternion4f *)pCVar14;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar14,local_2028,(float)local_202c,(int)_DAT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_40,(CQuaternion4f *)local_2f8);
          pCVar7 = &local_3d8;
          pCVar4 = (CQuaternion4f *)local_2f8;
          rotation_quat = &local_3d8;
          local_2034 = local_202c;
          pcVar16 = _DAT_01b4d264;
        }
        else {
          if (iVar17 != 0x18) {
            if (iVar17 == 0x19) {
              local_2020 = (CQuaternion4f *)
                           (1.0 - ((local_1c->base).current_frame_number + (float)_DAT_005d016f) *
                                  (float)_DAT_005d0177);
              if ((float)local_2020 < 0.0) {
                local_2020 = (CQuaternion4f *)0x0;
              }
              if (1.0 < (float)local_2020) {
                local_2020 = (CQuaternion4f *)0x3f800000;
              }
              fVar12 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x /
                                       (float10)_DAT_005f5164,(float10)1);
              local_24 = (float)fVar12;
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_24,(CQuaternion4f *)local_388);
              this_ptr = &(param_1->base).base.model;
              local_3a8.w = (float)local_388._0_4_;
              puVar5 = (uint *)((int)&local_3a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              *(uint *)((int)&local_3a8 + (uint)bVar11 * -8 + 4) =
                   *(uint *)(local_388 + (uint)bVar11 * -8 + 4);
              *puVar5 = *(uint *)(local_388 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              puVar5[(uint)bVar11 * -2 + 1] =
                   *(uint *)
                    ((int)(local_388 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) +
                    ((uint)bVar11 * -2 + 1) * 4);
              pCVar14 = (CDeformableModelInstance *)0x454eb5;
              local_14 = (CQuaternion4f *)this_ptr;
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (this_ptr,&local_3a8,(float)local_2020,(int)_DAT_01b4d268,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_24,(CQuaternion4f *)local_3c8)
              ;
              local_3a8.w = (float)local_3c8._0_4_;
              puVar5 = (uint *)((int)&local_3a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              *(uint *)((int)&local_3a8 + (uint)bVar11 * -8 + 4) =
                   *(uint *)(local_3c8 + (uint)bVar11 * -8 + 4);
              *puVar5 = *(uint *)(local_3c8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              puVar5[(uint)bVar11 * -2 + 1] =
                   *(uint *)
                    ((int)(local_3c8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) +
                    ((uint)bVar11 * -2 + 1) * 4);
              pCStack_2014 = &local_3a8;
              rotation_quat = local_14;
              pcVar16 = _DAT_01b4d264;
            }
            else {
              if (iVar17 != 0x1a) goto LAB_0045403a;
              local_14 = (CQuaternion4f *)&(param_1->base).base.model;
              core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                        ((CDeformableModelInstance *)local_14,(int)_DAT_01b4d268,&local_270);
              local_1c4[2] = local_270.x;
              local_1c4[(uint)bVar11 * -2 + 3] = *(float *)((int)&local_270 + (uint)bVar11 * -8 + 4)
              ;
              *(uint *)((int)&CStack_1b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                   *(uint *)((int)&local_270 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              fVar12 = atan2
                                 ((float10)local_1c4[3] -
                                  (float10)(param_1->carry_object_world_center).y,
                                  (float10)_DAT_005f5164);
              core_xform_cpp_quaternionFromAngleX_FUN_00593fa0((float)fVar12,&CStack_4ac);
              CStack_30c.w = CStack_4ac.w;
              puVar6 = (uint *)((int)&CStack_30c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              puVar5 = (uint *)((int)&CStack_4ac + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              *(uint *)((int)&CStack_30c + (uint)bVar11 * -8 + 4) =
                   *(uint *)((int)&CStack_4ac + (uint)bVar11 * -8 + 4);
              pCVar14 = local_18;
              *puVar6 = *puVar5;
              puVar6[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (local_18,&CStack_30c,(float)pCStack_2014,(int)_DAT_01b4d268,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (pCVar14,&CStack_30c,(float)pCStack_2014,(int)_DAT_01b4d264,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              fVar12 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x /
                                       (float10)_DAT_005f5164,(float10)1);
              local_1c = (CDeformableModelInstance *)(float)fVar12;
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0((float)local_1c,&CStack_49c);
              pCVar14 = local_18;
              CStack_4bc.w = CStack_49c.w;
              puVar6 = (uint *)((int)&CStack_4bc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              puVar5 = (uint *)((int)&CStack_49c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              *(uint *)((int)&CStack_4bc + (uint)bVar11 * -8 + 4) =
                   *(uint *)((int)&CStack_49c + (uint)bVar11 * -8 + 4);
              *puVar6 = *puVar5;
              puVar6[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (pCVar14,&CStack_4bc,(float)pCStack_2014,(int)_DAT_01b4d268,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                        (-(float)local_1c,(CQuaternion4f *)(local_3f8 + 0xc));
              CStack_4bc.w = (float)local_3f8._12_4_;
              puVar5 = (uint *)((int)&CStack_4bc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              *(uint *)((int)&CStack_4bc + (uint)bVar11 * -8 + 4) =
                   local_3e8[(uint)bVar11 * -2];
              *puVar5 = local_3e8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
              puVar5[(uint)bVar11 * -2 + 1] =
                   (local_3e8 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
              pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
              rotation_quat = &CStack_4bc;
              pCVar14 = local_18;
              local_2020 = (CQuaternion4f *)_DAT_01b4d264;
            }
            goto LAB_00454032;
          }
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    (&(param_1->base).base.model,(int)_DAT_01b4d268,&local_138);
          afStack_128[2] = local_138.x;
          afStack_128[(uint)bVar11 * -2 + 3] = *(float *)((int)&local_138 + (uint)bVar11 * -8 + 4);
          afStack_128[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               *(float *)((int)&local_138 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          local_2c = ((param_1->carry_object_world_center).y + (param_1->carry_object_bbox).max.y) -
                     (param_1->carry_object_bbox).min.y;
          if ((param_1->base).object_to_pick_up != (CDemonActor *)0x0) {
            _DAT_01b4d2f0 = (CQuaternion4f *)core_doc_cpp_FUN_0044ffd0();
            local_14 = _DAT_01b4d2f0;
          }
          local_2c = local_2c - (float)_DAT_01b4d2f0;
          fVar12 = atan2
                             ((float10)afStack_128[3] - (float10)local_2c,(float10)_DAT_005f5164);
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0
                    ((float)fVar12,(CQuaternion4f *)(local_518 + 0xc));
          pCVar14 = &(param_1->base).base.model;
          local_478._12_4_ = local_518._12_4_;
          local_468[(uint)bVar11 * -2] = local_508[(uint)bVar11 * -2];
          local_468[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               local_508[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          (local_468 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
               (local_508 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          local_18 = pCVar14;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar14,(CQuaternion4f *)(local_478 + 0xc),(float)local_2028,(int)_DAT_01b4d268
                     ,core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (local_18,(CQuaternion4f *)(local_478 + 0xc),(float)local_2028,
                     (int)_DAT_01b4d264,core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          fVar12 = (float10)fpatan((float10)(param_1->carry_object_bbox).max.x /
                                   (float10)_DAT_005f5164,(float10)1);
          local_3c = (float)fVar12;
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                    (local_3c,(CQuaternion4f *)(local_4e8 + 0xc));
          pCVar14 = local_18;
          CStack_44c.w = (float)local_4e8._12_4_;
          pfVar3 = (float *)((int)&CStack_44c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          *(float *)((int)&CStack_44c + (uint)bVar11 * -8 + 4) = local_4d8[(uint)bVar11 * -2];
          *pfVar3 = local_4d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          pfVar3[(uint)bVar11 * -2 + 1] =
               (local_4d8 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar14,&CStack_44c,(float)local_2028,(int)_DAT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_3c,&CStack_43c);
          pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
          pCVar7 = &CStack_44c;
          pCVar4 = &CStack_43c;
          rotation_quat = &CStack_44c;
          local_2034 = _DAT_01b4d264;
        }
      }
      goto LAB_00454025;
    }
    pfVar3 = (float *)((int)param_1 + (uint)bVar11 * -8 + 0x25704);
    local_15c = (param_1->carry_object_world_center).x;
    local_158[(uint)bVar11 * -2] = *pfVar3;
    local_158[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = pfVar3[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (local_1c,(int)_DAT_01b4d268,&local_168);
    fVar15 = local_15c;
    local_234 = local_168.x;
    local_248[(uint)bVar11 * -2 + 6] = *(float *)((int)&local_168 + (uint)bVar11 * -8 + 4);
    local_248[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         *(float *)((int)&local_168 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    local_108 = fVar15 - local_234;
    local_104 = local_158[0] - local_230;
    local_100 = local_158[1] - local_22c;
    local_18c = fVar15 - local_234;
    afStack_1a0[(uint)bVar11 * -2 + 6] = afStack_128[(uint)bVar11 * -2 + 9];
    *(float *)((int)&CStack_184 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
         afStack_128[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
    local_288 = local_284[2];
    local_284[(uint)bVar11 * -2] = local_284[(uint)bVar11 * -2 + 3];
    local_284[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         local_284[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    local_28 = (CDeformableModel_MotionBlendWeightFunc *)0x0;
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-local_288,(CQuaternion4f *)local_518);
    local_478._0_4_ = local_518._0_4_;
    *(uint *)(local_478 + (uint)bVar11 * -8 + 4) =
         *(uint *)(local_518 + (uint)bVar11 * -8 + 4);
    *(uint *)(local_478 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)(local_518 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)
     ((int)(local_478 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) + ((uint)bVar11 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_518 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) +
          ((uint)bVar11 * -2 + 1) * 4);
    local_14 = (CQuaternion4f *)&(param_1->base).base.model;
    pCVar14 = (CDeformableModelInstance *)0x45460d;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              ((CDeformableModelInstance *)local_14,(CQuaternion4f *)local_478,(float)local_28,
               (int)_DAT_01b4d268,core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_284[0],(CQuaternion4f *)local_3f8);
    rotation_quat = local_14;
    local_2020 = (CQuaternion4f *)local_28;
    pCStack_2014 = &local_368;
    local_368.w = (float)local_3f8._0_4_;
    *(uint *)(local_358 + (uint)bVar11 * -8 + -0xc) =
         *(uint *)(local_3f8 + (uint)bVar11 * -8 + 4);
    *(uint *)(local_358 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8) =
         *(uint *)(local_3f8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)
     ((int)(local_358 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8) + ((uint)bVar11 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_3f8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) +
          ((uint)bVar11 * -2 + 1) * 4);
    pcVar16 = _DAT_01b4d268;
  }
LAB_00454032:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (pCVar14,rotation_quat,(float)pCStack_2014,(int)local_2020,pcVar16);
LAB_0045403a:
  if (g_CGamePtr->goggles_active != 0) {
    local_144 = 0;
    local_140 = 0;
    local_150._8_4_ = 0.0;
    if ((param_1->guns_drawn != 0) && (param_1->weapon != (CWeapon *)0x0)) {
      local_150._8_4_ = (param_1->left_arm_aim).target_pitch;
    }
    pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
    fVar15 = 1.0;
    iVar17 = _DAT_01b4d258;
    core_xform_cpp_eulerToQuaternion_FUN_00594380((CVector3f *)(local_150 + 8),&CStack_33c);
    CStack_40c.w = CStack_33c.w;
    puVar6 = (uint *)((int)&CStack_40c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    puVar5 = (uint *)((int)&CStack_33c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)((int)&CStack_40c + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_33c + (uint)bVar11 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (&(param_1->base).base.model,&CStack_40c,fVar15,iVar17,pcVar16);
  }
  if (param_1->interact_blend <= 0.0) {
    return;
  }
  iVar17 = 1;
  motion_name = "?draw_holsters2aimPistols" + 1;
  pCVar14 = &(param_1->base).base.model;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar14);
  iVar17 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                     (&this_ptr_02->motion_list,motion_name,iVar17);
  local_38 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                       (&pCVar14->base,iVar17,1.0);
  local_18 = (CDeformableModelInstance *)local_38;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
            (pCVar14,iVar17,local_38,param_1->interact_blend,_DAT_01b4d298,
             core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
  return;
}
