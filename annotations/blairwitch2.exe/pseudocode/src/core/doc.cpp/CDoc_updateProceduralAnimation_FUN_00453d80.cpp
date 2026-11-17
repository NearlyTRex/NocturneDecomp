// Name: core_doc.cpp_CDoc_updateProceduralAnimation_FUN_00453d80
// Address: 00453d80
// Address Range: [[00453d80, 00455168]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_updateProceduralAnimation_FUN_00453d80(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_updateProceduralAnimation_FUN_00453d80(CDoc *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CLever *this_ptr_01;
  CDemonActor *pCVar1;
  CVector3f *pCVar2;
  SMotion *pSVar3;
  CQuaternion4f *rotation_quat;
  CSkeleton *this_ptr_02;
  float *pfVar4;
  CQuaternion4f *pCVar5;
  uint *puVar7;
  CQuaternion4f *pCVar8;
  uint *puVar10;
  float *pfVar11;
  byte bVar12;
  float10 fVar13;
  double dVar14;
  CDeformableModelInstance *pCVar15;
  float fVar16;
  char *motion_name;
  code *pcVar17;
  int iVar18;
  CBoundingBox3D *in_stack_ffffdf80;
  float local_2034;
  CQuaternion4f *local_2030;
  float local_202c;
  CQuaternion4f *local_2028;
  CQuaternion4f *local_2020;
  CQuaternion4f *local_2018;
  CQuaternion4f *pCStack_2014;
  byte local_200c [6812];
  CMatrix3x3f local_570;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float local_530;
  float fStack_52c;
  float afStack_528 [4];
  byte local_518 [16];
  uint local_508 [4];
  CQuaternion4f local_4f8;
  byte local_4e8 [16];
  SMotionTransition *local_4d8 [3];
  CQuaternion4f CStack_4cc;
  CQuaternion4f CStack_4bc;
  CQuaternion4f CStack_4ac;
  CQuaternion4f CStack_49c;
  CQuaternion4f CStack_48c;
  byte local_478 [16];
  CMotionList *local_468 [3];
  CQuaternion4f CStack_45c;
  CQuaternion4f CStack_44c;
  CQuaternion4f CStack_43c;
  CQuaternion4f CStack_42c;
  CQuaternion4f CStack_41c;
  CQuaternion4f CStack_40c;
  byte local_3f8 [16];
  CMotionList *local_3e8 [4];
  CQuaternion4f local_3d8;
  byte local_3c8 [16];
  CMotionController_vtable *local_3b8 [4];
  CQuaternion4f local_3a8;
  CQuaternion4f local_398;
  byte local_388 [16];
  float local_378 [4];
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
  float local_2b4 [4];
  float fStack_2a4;
  float fStack_2a0;
  float afStack_29c [2];
  CVector3f local_294;
  float local_288;
  float local_284 [2];
  CVector3f local_27c;
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
  CVector3f local_1a4;
  float local_198;
  float local_194 [2];
  byte local_18c [12];
  float afStack_180 [3];
  CVector3f local_174;
  CVector3f local_168;
  float local_15c;
  float local_158 [2];
  byte local_150 [12];
  uint local_144;
  uint local_140;
  CVector3f local_138;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  CVector3f CStack_118;
  float local_108;
  float local_104 [5];
  byte local_f0 [12];
  float afStack_e4 [6];
  CVector3f local_cc;
  float local_c0 [5];
  float fStack_ac;
  CVector3f local_a8;
  float fStack_94;
  float afStack_90 [4];
  float local_80;
  CVector3f local_7c [2];
  float fStack_64;
  CVector3f local_60;
  CVector3f local_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  CVector3f *local_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CQuaternion4f *local_14;
  uint *puVar6;
  uint *puVar9;
  
  bVar12 = 0;
  local_14 = (CQuaternion4f *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                       (&(this_ptr->base).base.model.base,0);
  local_2030 = local_14;
  if ((int)this_ptr->turn_blend_weight < 0x3e19999a) {
    local_2030 = (CQuaternion4f *)
                 ((this_ptr->turn_blend_weight / 0.15f) * (float)local_14);
  }
  if (0.85 < this_ptr->turn_blend_weight) {
    local_2030 = (CQuaternion4f *)(((1.0 - this_ptr->turn_blend_weight) / 0.15) * (float)local_2030)
    ;
  }
  pCVar15 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar15);
  if ((0.0 < (float)local_2030) && (-1 < this_ptr->turn_motion_index)) {
    core_doc_cpp_CDoc_extractTurnPose_FUN_00455170(this_ptr,(SPose *)local_200c);
    local_200c._0_4_ = 0.0;
    local_200c._8_4_ = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190
              (pCVar15,(SPoseData *)local_200c,(float)local_2030,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
  }
  core_doc_cpp_CDoc_makeDrawDecision_FUN_004555c0(this_ptr);
  core_doc_cpp_CDoc_updateLantern_FUN_00455d10(this_ptr,g_CGamePtr->delta_time_float);
  local_1c = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&local_1c->base);
  iVar18 = pSVar3->state_index;
  if (iVar18 == 0x15) {
    pfVar4 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x25704);
    local_264 = (this_ptr->carry_object_world_center).x;
    (&local_260)[(uint)bVar12 * -2] = *pfVar4;
    *(float *)((int)&local_25c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
         pfVar4[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (local_1c,g_INT_01b4d268,&local_210);
    fVar16 = local_264;
    local_21c = local_210.x;
    local_248[(uint)bVar12 * -2 + 0xc] = *(float *)((int)&local_210 + (uint)bVar12 * -8 + 4);
    local_248[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
         *(float *)((int)&local_210 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    local_198 = fVar16 - local_21c;
    local_194[0] = local_260 - local_218;
    local_194[1] = local_25c.x - local_214;
    local_12c.x = fVar16 - local_21c;
    *(float *)((int)&local_12c + (uint)bVar12 * -8 + 4) = local_194[(uint)bVar12 * -2];
    *(float *)((int)&local_12c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         local_194[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_12c,&local_294);
    pCVar15 = local_1c;
    local_204 = local_294.x;
    local_200[(uint)bVar12 * -2] = *(float *)((int)&local_294 + (uint)bVar12 * -8 + 4);
    local_200[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         *(float *)((int)&local_294 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    local_2034 = (pCVar15->base).current_frame_number;
    if ((float)13 <= local_2034) {
      local_2034 = 1.0 - (local_2034 + (float)-13) * (float)0.0769230769230769;
      if (local_2034 < 0.0) {
        local_2034 = 0.0;
      }
    }
    else {
      local_2034 = local_2034 * (float)0.0769230769230769;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_204,(CQuaternion4f *)local_358);
    local_2028 = (CQuaternion4f *)local_328;
    pCVar15 = &(this_ptr->base).base.model;
    local_328._0_4_ = local_358._0_4_;
    *(uint *)(local_328 + (uint)bVar12 * -8 + 4) =
         *(uint *)(local_358 + (uint)bVar12 * -8 + 4);
    *(uint *)(local_328 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         *(uint *)(local_358 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)
     ((int)(local_328 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) + ((uint)bVar12 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_358 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) +
          ((uint)bVar12 * -2 + 1) * 4);
    local_14 = (CQuaternion4f *)pCVar15;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (pCVar15,local_2028,local_2034,g_INT_01b4d29c,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_200[0],(CQuaternion4f *)local_4e8);
    pCVar8 = (CQuaternion4f *)(local_508 + 4);
    pCVar5 = (CQuaternion4f *)local_4e8;
    rotation_quat = (CQuaternion4f *)(local_508 + 4);
    pcVar17 = (code *)g_INT_01b4d268;
LAB_00454025:
    puVar9 = (uint *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
    puVar6 = (uint *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
    pCVar8->w = pCVar5->w;
    puVar10 = puVar9 + (uint)bVar12 * -2 + 1;
    puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
    *puVar9 = *puVar6;
    *puVar10 = *puVar7;
    puVar10[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
    pCVar15 = local_18;
    pCStack_2014 = local_2028;
    local_2020 = (CQuaternion4f *)local_2034;
  }
  else {
    if (iVar18 != 0x13) {
      if (iVar18 == 0x16) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
                  (&local_570,&(this_ptr->base).target_orientation.vec);
        if ((g_BYTE_01b4d230 & 1) == 0) {
          g_BYTE_01b4d230 = g_BYTE_01b4d230 | 1;
        }
        pCVar1 = (this_ptr->base).target_actor;
        if (pCVar1 != (CDemonActor *)0x0) {
          (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,in_stack_ffffdf80);
          pfVar4 = afStack_528;
          pfVar11 = &fStack_540;
          for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
            *pfVar11 = *pfVar4;
            pfVar4 = pfVar4 + (uint)bVar12 * -2 + 1;
            pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
          }
          fStack_2a4 = fStack_540 + fStack_534;
          fStack_2a0 = fStack_53c + local_530;
          afStack_29c[0] = fStack_538 + fStack_52c;
          fStack_64 = fStack_540 + fStack_534;
          *(float *)((int)&local_60 + (uint)bVar12 * -8) = afStack_29c[(uint)bVar12 * -2 + -1];
          *(float *)((int)&local_60 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 4) =
               afStack_29c[(uint)bVar12 * -2 + (uint)bVar12 * -2];
          fStack_94 = fStack_64 * 0.5f;
          afStack_90[0] = local_60.x * 0.5f;
          afStack_90[1] = local_60.y * 0.5f;
          fStack_ac = fStack_64 * 0.5f;
          *(float *)((int)&local_a8 + (uint)bVar12 * -8) = afStack_90[(uint)bVar12 * -2];
          *(float *)((int)&local_a8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 4) =
               afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          if (&stack0x00000000 != g_CDocClassInfo.class_name + 0x18) {
            g_CVector3f_01b4d220.x = fStack_ac;
            g_CVector3f_01b4d220.y = local_a8.x;
            g_CVector3f_01b4d220.z = local_a8.y;
          }
        }
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
                  ((CMatrix3x3f *)(local_200c + 0x1a98),&g_CVector3f_01b4d220,&CStack_1b4);
        local_cc.z = CStack_1b4.x;
        local_c0[(uint)bVar12 * -2] = *(float *)((int)&CStack_1b4 + (uint)bVar12 * -8 + 4);
        local_c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             *(float *)((int)&CStack_1b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        fStack_94 = (this_ptr->base).target_position.x + local_cc.z;
        afStack_90[0] = (this_ptr->base).target_position.y + local_c0[0];
        afStack_90[1] = (this_ptr->base).target_position.z + local_c0[1];
        local_7c[0].x = fStack_94;
        *(float *)((int)local_7c + (uint)bVar12 * -8 + 4) = afStack_90[(uint)bVar12 * -2];
        *(float *)((int)local_7c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,local_7c,&local_25c);
        pCVar15 = &(this_ptr->base).base.model;
        local_18 = pCVar15;
        fStack_1e4 = local_25c.x;
        local_200[(uint)bVar12 * -2 + 8] = *(float *)((int)&local_25c + (uint)bVar12 * -8 + 4);
        local_200[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 9] =
             *(float *)((int)&local_25c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (pCVar15,g_INT_01b4d268,(CVector3f *)(local_18c + 8));
        fVar16 = fStack_1e4;
        local_104[1] = (float)local_18c._8_4_;
        local_104[(uint)bVar12 * -2 + 2] = afStack_180[(uint)bVar12 * -2];
        local_104[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 3] =
             afStack_180[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        fStack_2a4 = fVar16 - local_104[1];
        fStack_2a0 = fStack_1e0 - local_104[2];
        afStack_29c[0] = fStack_1dc - local_104[3];
        CStack_118.x = fVar16 - local_104[1];
        *(float *)((int)&CStack_118 + (uint)bVar12 * -8 + 4) = afStack_29c[(uint)bVar12 * -2 + -1];
        *(float *)((int)&CStack_118 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             afStack_29c[(uint)bVar12 * -2 + (uint)bVar12 * -2];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                  (&CStack_118,(CVector3f *)(local_f0 + 8));
        pCVar15 = local_18;
        afStack_e4[2] = (float)local_f0._8_4_;
        afStack_e4[(uint)bVar12 * -2 + 3] = afStack_e4[(uint)bVar12 * -2];
        afStack_e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
             afStack_e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        fVar16 = (pCVar15->base).current_frame_number;
        if ((float)21 <= fVar16) {
          local_2018 = (CQuaternion4f *)
                       (1.0 - (fVar16 + (float)-21) * (float)0.071428571428571397);
          if ((float)local_2018 < 0.0) {
            local_2018 = (CQuaternion4f *)0x0;
          }
        }
        else {
          local_2018 = (CQuaternion4f *)(fVar16 * (float)0.047619047619047603);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(afStack_e4[2],&CStack_41c);
        pCVar15 = &(this_ptr->base).base.model;
        CStack_2dc.w = CStack_41c.w;
        puVar7 = (uint *)((int)&CStack_2dc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        puVar6 = (uint *)((int)&CStack_41c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(uint *)((int)&CStack_2dc + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&CStack_41c + (uint)bVar12 * -8 + 4);
        *puVar7 = *puVar6;
        puVar7[(uint)bVar12 * -2 + 1] = puVar6[(uint)bVar12 * -2 + 1];
        local_18 = pCVar15;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar15,&CStack_2dc,(float)local_2018,g_INT_01b4d29c,
                   core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
        core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                  (afStack_e4[3],(CQuaternion4f *)(local_358 + 0xc));
        pcVar17 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
        pCVar8 = &CStack_2cc;
        pCVar5 = (CQuaternion4f *)(local_358 + 0xc);
        rotation_quat = &CStack_2cc;
        local_2028 = local_2018;
        local_2034 = (float)g_INT_01b4d268;
      }
      else {
        if (iVar18 == 0x21) {
          local_20 = &this_ptr->carry_object_world_center;
          this_ptr_01 = (this_ptr->base).lever_to_pull;
          if (this_ptr_01 == (CLever *)0x0) {
            core_lever_cpp_CLever_getHandlePosition_FUN_004e2220(g_CLever_PTR_01b4d22c,&local_1d4);
            local_60.x = local_1d4.x;
            *(uint *)((int)&local_60 + (uint)bVar12 * -8 + 4) =
                 *(uint *)((int)&local_1d4 + (uint)bVar12 * -8 + 4);
            *(uint *)((int)&local_60 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                 *(uint *)((int)&local_1d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      ((CDemonActor *)this_ptr,&local_60,&local_cc);
            pCVar2 = local_20;
            local_228 = local_cc.x;
            local_248[(uint)bVar12 * -2 + 9] = local_c0[(uint)bVar12 * -2 + -2];
            local_248[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
                 local_c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -1];
            if ((CVector3f *)(local_248 + 8) != pCVar2) {
              pCVar2->x = local_228;
              pCVar2->y = local_224;
              pCVar2->z = local_220;
            }
          }
          else {
            core_lever_cpp_CLever_getHandlePosition_FUN_004e2220(this_ptr_01,&local_a8);
            local_150._0_4_ = local_a8.x;
            *(uint *)(local_150 + (uint)bVar12 * -8 + 4) =
                 *(uint *)((int)&local_a8 + (uint)bVar12 * -8 + 4);
            *(uint *)(local_150 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                 *(uint *)((int)&local_a8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      ((CDemonActor *)this_ptr,(CVector3f *)local_150,&local_174);
            afStack_90[3] = local_174.x;
            afStack_90[(uint)bVar12 * -2 + 4] = *(float *)((int)&local_174 + (uint)bVar12 * -8 + 4);
            *(uint *)((int)local_7c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 *(uint *)((int)&local_174 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            if ((CVector3f *)(afStack_90 + 3) != local_20) {
              local_20->x = afStack_90[3];
              local_20->y = local_80;
              local_20->z = local_7c[0].x;
            }
            g_CLever_PTR_01b4d22c = (this_ptr->base).lever_to_pull;
          }
          pfVar4 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x25704);
          local_24c = (this_ptr->carry_object_world_center).x;
          local_248[(uint)bVar12 * -2] = *pfVar4;
          local_248[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = pfVar4[(uint)bVar12 * -2 + 1];
          local_14 = (CQuaternion4f *)&(this_ptr->base).base.model;
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    ((CDeformableModelInstance *)local_14,g_INT_01b4d268,&local_54);
          fVar16 = local_24c;
          local_248[2] = local_54.x;
          local_248[(uint)bVar12 * -2 + 3] = *(float *)((int)&local_54 + (uint)bVar12 * -8 + 4);
          local_248[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
               *(float *)((int)&local_54 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          fVar16 = fVar16 - local_248[2];
          local_1c8 = fVar16;
          local_1c4[0] = local_248[0] - local_248[3];
          local_1c4[1] = local_248[1] - local_238;
          local_200[2] = fVar16;
          local_200[(uint)bVar12 * -2 + 3] = local_1c4[(uint)bVar12 * -2];
          local_200[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
               local_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          local_2b8 = fVar16;
          local_2b4[0] = local_1c4[0];
          local_2b4[1] = local_1c4[1];
          local_f0._0_4_ = fVar16;
          *(float *)(local_f0 + (uint)bVar12 * -8 + 4) = local_2b4[(uint)bVar12 * -2];
          afStack_e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -1] =
               local_2b4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                    ((CVector3f *)local_f0,&local_1a4);
          local_1ec = local_1a4.x;
          local_200[(uint)bVar12 * -2 + 6] = *(float *)((int)&local_1a4 + (uint)bVar12 * -8 + 4);
          local_200[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
               *(float *)((int)&local_1a4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          local_30 = SQRT(local_1f0 * local_1f0 +
                          local_200[2] * local_200[2] + local_200[3] * local_200[3]);
          if (local_30 < 2.7f) {
            dVar14 = acos((double)(local_30 / 2.7f));
            local_40 = (float)dVar14;
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_40,&CStack_42c);
            local_388._12_4_ = CStack_42c.w;
            pfVar4 = (float *)((int)&CStack_42c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            local_378[(uint)bVar12 * -2] = *(float *)((int)&CStack_42c + (uint)bVar12 * -8 + 4);
            local_378[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = *pfVar4;
            (local_378 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
                 pfVar4[(uint)bVar12 * -2 + 1];
            local_18 = &(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (local_18,(CQuaternion4f *)(local_388 + 0xc),(float)local_2020,g_INT_01b4d268,
                       core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                      (-local_40,(CQuaternion4f *)(local_3c8 + 0xc));
            pCVar15 = local_18;
            local_328._12_4_ = local_3c8._12_4_;
            local_318[(uint)bVar12 * -2] = (float)local_3b8[(uint)bVar12 * -2];
            local_318[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 (float)local_3b8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            (local_318 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
                 (float)(local_3b8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)
                        [(uint)bVar12 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (pCVar15,(CQuaternion4f *)(local_328 + 0xc),(float)local_2020,g_INT_01b4d270,
                       core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          }
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_1f0,&CStack_4cc);
          pCVar15 = &(this_ptr->base).base.model;
          local_2f8._12_4_ = CStack_4cc.w;
          pfVar4 = (float *)((int)&CStack_4cc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          local_2e8[(uint)bVar12 * -2] = *(float *)((int)&CStack_4cc + (uint)bVar12 * -8 + 4);
          local_2e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = *pfVar4;
          (local_2e8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
               pfVar4[(uint)bVar12 * -2 + 1];
          local_18 = pCVar15;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar15,(CQuaternion4f *)(local_2f8 + 0xc),(float)local_2020,g_INT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_1ec,&CStack_48c);
          CStack_45c.w = CStack_48c.w;
          puVar6 = (uint *)((int)&CStack_48c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          local_468[(uint)bVar12 * -2 + 4] =
               *(CMotionList **)((int)&CStack_48c + (uint)bVar12 * -8 + 4);
          local_468[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 5] = (CMotionList *)*puVar6;
          (local_468 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 5)[(uint)bVar12 * -2 + 1] =
               (CMotionList *)puVar6[(uint)bVar12 * -2 + 1];
          pcVar17 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
          pCVar15 = local_18;
          rotation_quat = (CQuaternion4f *)(local_468 + 3);
          pCStack_2014 = local_2020;
          local_2020 = (CQuaternion4f *)g_INT_01b4d268;
          goto LAB_00454032;
        }
        if (iVar18 == 0x17) {
          local_202c = (local_1c->base).current_frame_number * (float)0.066666666666666693;
          if (1.0 < local_202c) {
            local_202c = 1.0;
          }
          fVar13 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                   (float10)2.7f,(float10)1);
          local_40 = (float)fVar13;
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_40,&local_398);
          local_2028 = &local_3d8;
          pCVar15 = &(this_ptr->base).base.model;
          local_3d8.w = local_398.w;
          *(uint *)(local_3c8 + (uint)bVar12 * -8 + -0xc) =
               *(uint *)(local_388 + (uint)bVar12 * -8 + -0xc);
          *(uint *)(local_3c8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8) =
               *(uint *)(local_388 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8);
          *(uint *)
           ((int)(local_3c8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8) +
           ((uint)bVar12 * -2 + 1) * 4) =
               *(uint *)
                ((int)(local_388 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8) +
                ((uint)bVar12 * -2 + 1) * 4);
          local_14 = (CQuaternion4f *)pCVar15;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar15,local_2028,local_202c,g_INT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_40,(CQuaternion4f *)local_2f8);
          pCVar8 = &local_3d8;
          pCVar5 = (CQuaternion4f *)local_2f8;
          rotation_quat = &local_3d8;
          local_2034 = local_202c;
          pcVar17 = (code *)g_INT_01b4d264;
        }
        else {
          if (iVar18 != 0x18) {
            if (iVar18 == 0x19) {
              local_2020 = (CQuaternion4f *)
                           (1.0 - ((local_1c->base).current_frame_number + (float)-15)
                                  * (float)0.066666666666666693);
              if ((float)local_2020 < 0.0) {
                local_2020 = (CQuaternion4f *)0x0;
              }
              if (1.0 < (float)local_2020) {
                local_2020 = (CQuaternion4f *)0x3f800000;
              }
              fVar13 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                       (float10)2.7f,(float10)1);
              local_24 = (float)fVar13;
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_24,(CQuaternion4f *)local_388);
              this_ptr_00 = &(this_ptr->base).base.model;
              local_3a8.w = (float)local_388._0_4_;
              puVar6 = (uint *)((int)&local_3a8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              *(uint *)((int)&local_3a8 + (uint)bVar12 * -8 + 4) =
                   *(uint *)(local_388 + (uint)bVar12 * -8 + 4);
              *puVar6 = *(uint *)(local_388 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              puVar6[(uint)bVar12 * -2 + 1] =
                   *(uint *)
                    ((int)(local_388 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) +
                    ((uint)bVar12 * -2 + 1) * 4);
              pCVar15 = (CDeformableModelInstance *)0x454eb5;
              local_14 = (CQuaternion4f *)this_ptr_00;
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (this_ptr_00,&local_3a8,(float)local_2020,g_INT_01b4d268,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_24,(CQuaternion4f *)local_3c8)
              ;
              local_3a8.w = (float)local_3c8._0_4_;
              puVar6 = (uint *)((int)&local_3a8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              *(uint *)((int)&local_3a8 + (uint)bVar12 * -8 + 4) =
                   *(uint *)(local_3c8 + (uint)bVar12 * -8 + 4);
              *puVar6 = *(uint *)(local_3c8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              puVar6[(uint)bVar12 * -2 + 1] =
                   *(uint *)
                    ((int)(local_3c8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) +
                    ((uint)bVar12 * -2 + 1) * 4);
              pCStack_2014 = &local_3a8;
              rotation_quat = local_14;
              pcVar17 = (code *)g_INT_01b4d264;
            }
            else {
              if (iVar18 != 0x1a) goto LAB_0045403a;
              local_14 = (CQuaternion4f *)&(this_ptr->base).base.model;
              core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                        ((CDeformableModelInstance *)local_14,g_INT_01b4d268,&local_270);
              local_1c4[2] = local_270.x;
              local_1c4[(uint)bVar12 * -2 + 3] = *(float *)((int)&local_270 + (uint)bVar12 * -8 + 4)
              ;
              *(uint *)((int)&CStack_1b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                   *(uint *)((int)&local_270 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              fVar13 = atan2
                                 ((float10)local_1c4[3] -
                                  (float10)(this_ptr->carry_object_world_center).y,
                                  (float10)2.7f);
              core_xform_cpp_quaternionFromAngleX_FUN_00593fa0((float)fVar13,&CStack_4ac);
              CStack_30c.w = CStack_4ac.w;
              puVar7 = (uint *)((int)&CStack_30c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              puVar6 = (uint *)((int)&CStack_4ac + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              *(uint *)((int)&CStack_30c + (uint)bVar12 * -8 + 4) =
                   *(uint *)((int)&CStack_4ac + (uint)bVar12 * -8 + 4);
              pCVar15 = local_18;
              *puVar7 = *puVar6;
              puVar7[(uint)bVar12 * -2 + 1] = puVar6[(uint)bVar12 * -2 + 1];
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (local_18,&CStack_30c,(float)pCStack_2014,g_INT_01b4d268,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (pCVar15,&CStack_30c,(float)pCStack_2014,g_INT_01b4d264,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              fVar13 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                       (float10)2.7f,(float10)1);
              local_1c = (CDeformableModelInstance *)(float)fVar13;
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0((float)local_1c,&CStack_49c);
              pCVar15 = local_18;
              CStack_4bc.w = CStack_49c.w;
              puVar7 = (uint *)((int)&CStack_4bc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              puVar6 = (uint *)((int)&CStack_49c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              *(uint *)((int)&CStack_4bc + (uint)bVar12 * -8 + 4) =
                   *(uint *)((int)&CStack_49c + (uint)bVar12 * -8 + 4);
              *puVar7 = *puVar6;
              puVar7[(uint)bVar12 * -2 + 1] = puVar6[(uint)bVar12 * -2 + 1];
              core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                        (pCVar15,&CStack_4bc,(float)pCStack_2014,g_INT_01b4d268,
                         core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
              core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                        (-(float)local_1c,(CQuaternion4f *)(local_3f8 + 0xc));
              CStack_4bc.w = (float)local_3f8._12_4_;
              puVar6 = (uint *)((int)&CStack_4bc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              *(CMotionList **)((int)&CStack_4bc + (uint)bVar12 * -8 + 4) =
                   local_3e8[(uint)bVar12 * -2];
              *puVar6 = local_3e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              puVar6[(uint)bVar12 * -2 + 1] =
                   (local_3e8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
              pcVar17 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
              rotation_quat = &CStack_4bc;
              pCVar15 = local_18;
              local_2020 = (CQuaternion4f *)g_INT_01b4d264;
            }
            goto LAB_00454032;
          }
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    (&(this_ptr->base).base.model,g_INT_01b4d268,&local_138);
          local_120 = local_138.x;
          (&local_11c)[(uint)bVar12 * -2] = *(float *)((int)&local_138 + (uint)bVar12 * -8 + 4);
          *(uint *)((int)&CStack_118 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
               *(uint *)((int)&local_138 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          local_2c = ((this_ptr->carry_object_world_center).y + (this_ptr->carry_object_bbox).max.y)
                     - (this_ptr->carry_object_bbox).min.y;
          pCVar1 = (this_ptr->base).object_to_pick_up;
          if (pCVar1 != (CDemonActor *)0x0) {
            g_FLOAT_01b4d2f0 = core_doc_cpp_getCarriedObjectVerticalOffset_FUN_0044ffd0(pCVar1);
            local_14 = (CQuaternion4f *)g_FLOAT_01b4d2f0;
          }
          local_2c = local_2c - g_FLOAT_01b4d2f0;
          fVar13 = atan2
                             ((float10)local_11c - (float10)local_2c,(float10)2.7f);
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0
                    ((float)fVar13,(CQuaternion4f *)(local_518 + 0xc));
          pCVar15 = &(this_ptr->base).base.model;
          local_478._12_4_ = local_518._12_4_;
          local_468[(uint)bVar12 * -2] = (CMotionList *)local_508[(uint)bVar12 * -2];
          local_468[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               (CMotionList *)local_508[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          (local_468 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
               (CMotionList *)
               (local_508 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
          local_18 = pCVar15;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar15,(CQuaternion4f *)(local_478 + 0xc),(float)local_2028,g_INT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (local_18,(CQuaternion4f *)(local_478 + 0xc),(float)local_2028,g_INT_01b4d264,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          fVar13 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                   (float10)2.7f,(float10)1);
          local_3c = (float)fVar13;
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                    (local_3c,(CQuaternion4f *)(local_4e8 + 0xc));
          pCVar15 = local_18;
          CStack_44c.w = (float)local_4e8._12_4_;
          puVar6 = (uint *)((int)&CStack_44c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          *(SMotionTransition **)((int)&CStack_44c + (uint)bVar12 * -8 + 4) =
               local_4d8[(uint)bVar12 * -2];
          *puVar6 = local_4d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          puVar6[(uint)bVar12 * -2 + 1] =
               (local_4d8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                    (pCVar15,&CStack_44c,(float)local_2028,g_INT_01b4d268,
                     core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_3c,&CStack_43c);
          pcVar17 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
          pCVar8 = &CStack_44c;
          pCVar5 = &CStack_43c;
          rotation_quat = &CStack_44c;
          local_2034 = (float)g_INT_01b4d264;
        }
      }
      goto LAB_00454025;
    }
    pfVar4 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x25704);
    local_15c = (this_ptr->carry_object_world_center).x;
    local_158[(uint)bVar12 * -2] = *pfVar4;
    local_158[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = pfVar4[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (local_1c,g_INT_01b4d268,&local_168);
    fVar16 = local_15c;
    local_234 = local_168.x;
    local_248[(uint)bVar12 * -2 + 6] = *(float *)((int)&local_168 + (uint)bVar12 * -8 + 4);
    local_248[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         *(float *)((int)&local_168 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    local_108 = fVar16 - local_234;
    local_104[0] = local_158[0] - local_230;
    local_104[1] = local_158[1] - local_22c;
    local_18c._0_4_ = fVar16 - local_234;
    *(float *)(local_18c + (uint)bVar12 * -8 + 4) = local_104[(uint)bVar12 * -2];
    afStack_180[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -1] =
         local_104[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
              ((CVector3f *)local_18c,&local_27c);
    local_288 = local_27c.x;
    local_284[(uint)bVar12 * -2] = *(float *)((int)&local_27c + (uint)bVar12 * -8 + 4);
    local_284[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         *(float *)((int)&local_27c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    local_28 = 0.0;
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-local_288,(CQuaternion4f *)local_518);
    local_478._0_4_ = local_518._0_4_;
    *(uint *)(local_478 + (uint)bVar12 * -8 + 4) =
         *(uint *)(local_518 + (uint)bVar12 * -8 + 4);
    *(uint *)(local_478 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         *(uint *)(local_518 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)
     ((int)(local_478 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) + ((uint)bVar12 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_518 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) +
          ((uint)bVar12 * -2 + 1) * 4);
    local_14 = (CQuaternion4f *)&(this_ptr->base).base.model;
    pCVar15 = (CDeformableModelInstance *)0x45460d;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              ((CDeformableModelInstance *)local_14,(CQuaternion4f *)local_478,local_28,
               g_INT_01b4d268,core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_284[0],(CQuaternion4f *)local_3f8);
    rotation_quat = local_14;
    local_2020 = (CQuaternion4f *)local_28;
    pCStack_2014 = &local_368;
    local_368.w = (float)local_3f8._0_4_;
    *(uint *)(local_358 + (uint)bVar12 * -8 + -0xc) =
         *(uint *)(local_3f8 + (uint)bVar12 * -8 + 4);
    *(uint *)(local_358 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8) =
         *(uint *)(local_3f8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)
     ((int)(local_358 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8) + ((uint)bVar12 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_3f8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) +
          ((uint)bVar12 * -2 + 1) * 4);
    pcVar17 = (code *)g_INT_01b4d268;
  }
LAB_00454032:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (pCVar15,rotation_quat,(float)pCStack_2014,(int)local_2020,pcVar17);
LAB_0045403a:
  if (g_CGamePtr->goggles_active != 0) {
    local_144 = 0;
    local_140 = 0;
    local_150._8_4_ = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      local_150._8_4_ = (this_ptr->left_arm_aim).target_pitch;
    }
    pcVar17 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
    fVar16 = 1.0;
    iVar18 = g_INT_01b4d258;
    core_xform_cpp_eulerToQuaternion_FUN_00594380((CVector3f *)(local_150 + 8),&CStack_33c);
    CStack_40c.w = CStack_33c.w;
    puVar7 = (uint *)((int)&CStack_40c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    puVar6 = (uint *)((int)&CStack_33c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)((int)&CStack_40c + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_33c + (uint)bVar12 * -8 + 4);
    *puVar7 = *puVar6;
    puVar7[(uint)bVar12 * -2 + 1] = puVar6[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (&(this_ptr->base).base.model,&CStack_40c,fVar16,iVar18,pcVar17);
  }
  if (this_ptr->interact_blend <= 0.0) {
    return;
  }
  iVar18 = 1;
  motion_name = "draw_holsters2aimPistols";
  pCVar15 = &(this_ptr->base).base.model;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar15);
  iVar18 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                     (&this_ptr_02->motion_list,motion_name,iVar18);
  local_38 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                       (&pCVar15->base,iVar18,1.0);
  local_18 = (CDeformableModelInstance *)local_38;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
            (pCVar15,iVar18,local_38,this_ptr->interact_blend,g_INT_01b4d298,
             core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
  return;
}
