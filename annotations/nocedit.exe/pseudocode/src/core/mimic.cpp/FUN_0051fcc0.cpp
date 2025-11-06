// Name: core_mimic.cpp_FUN_0051fcc0
// Address: 0051fcc0
// Address Range: [[0051fcc0, 00520203] [0052029d, 005204f8]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_0051fcc0()
// Cross-references:
//   core_mimic.cpp_CMimic_setup2_FUN_0051f780 (0051f780) at 0051f802 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00002424
//   TerminatedCString s_gh_alrt_1_4_wav_0063873c
//   double DOUBLE_00638763 = 2
//   float FLOAT_0063876b = 4.242857
//   float FLOAT_0063876f = 12.22222
//   double DOUBLE_00638773 = 1.57079632675000
//   double DOUBLE_0063877b = 0.785398163375000
//   double DOUBLE_00638783 = 15
//   double DOUBLE_0063878b = 0.636619772385777
//   double DOUBLE_00638793 = 25
//   double DOUBLE_0063879b = 30
//   double DOUBLE_006387a3 = 3.14159265350000
//   double DOUBLE_006387ab = 32
//   undefined4 DAT_00661408
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d81c70
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 DAT_02f33378
//   undefined4 DAT_02f33394
//   undefined4 DAT_02f33398
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_cloth.cpp_FUN_0043ab80
//   core_gore.cpp_FUN_004ede30
//   core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_0051fcc0(undefined4 param_1, undefined4 param_2)
    */

void core_mimic_cpp_FUN_0051fcc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CCharacter *pCVar4;
  CVector3f *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  uint uVar8;
  CBoundingBox3D *pCVar9;
  BADSPACEBASE *in_ESP;
  float *pfVar10;
  CMatrix3x4f *pCVar11;
  bool bVar12;
  byte bVar13;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  SCollisionInfo *in_stack_fffffe2c;
  CMatrix3x4f *in_stack_fffffe30;
  CDeformableModelInstance *pCVar14;
  int in_stack_fffffe4c;
  CDemonActor *in_stack_fffffe50;
  CMatrix3x4f local_178;
  CBoundingBox3D local_148;
  CVector3f local_130;
  float local_124;
  float local_120;
  float local_11c;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  double local_38;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  bVar13 = 0;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(g_HeroActors[g_LocalHeroIndex]->base_character).model,&local_10c,0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_94,pCVar5);
  local_94.y = (g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position.y;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&in_stack_00000004->base_actor,&local_88,&local_94);
  local_1c = -1.0;
  local_70.x = local_88.x;
  local_70.z = local_88.z;
  local_18 = &in_stack_00000004->model;
  local_70.y = 0.0;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&local_18->motion_controller);
  uVar8 = pSVar6->state_index;
  if (uVar8 < 2) {
    if (uVar8 == 0) {
      iVar7 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffe2c);
      if (((iVar7 == 0) && (g_CGamePtr->field54_0x1d4 == 0)) &&
         (ABS((in_stack_00000004->base_actor).location.position.y -
              (g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position.y) <=
          (float)DOUBLE_00638783)) {
        pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_58,&local_70);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
        if (SQRT(local_70.z * local_70.z + local_70.x * local_70.x + local_70.y * local_70.y) <
            (1.0 - ABS(local_14) * (float)DOUBLE_0063878b) * (float)DOUBLE_00638793 +
            (float)DOUBLE_0063879b) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
                    (local_18,DAT_02f33378,in_stack_fffffe30);
          local_4c.y = 0.7;
          pfVar10 = (float *)&stack0xfffffe58;
          pCVar11 = &local_178;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            pCVar11->m[0].w = *pfVar10;
            pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
            pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
          }
          local_4c.z = 0.3;
          local_4c.x = 0.0;
          pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_b8,&local_4c,&local_178);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&in_stack_00000004->base_actor,&local_f4,pCVar5);
          iVar7 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                            (g_CDemonSetPtr,&local_f4,&local_94);
          if (iVar7 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&local_18->motion_controller,2,1);
            (*((in_stack_00000004->base_actor).vtable)->playSound)
                      (&in_stack_00000004->base_actor,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_0051fdb4;
    }
LAB_0051fd7d:
    iVar7 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                      ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffe2c);
    if ((iVar7 != 0) || (g_CGamePtr->field54_0x1d4 != 0)) goto LAB_0051fda5;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (*(CDemonActor **)(in_stack_00000004[6].cloth_data + 0x1e88),&local_118,
               &(in_stack_00000004->base_actor).location.position);
    pCVar9 = (*((in_stack_00000004->base_actor).vtable)->getBoundingBox)
                       (&in_stack_00000004->base_actor,&local_148);
    local_dc = (pCVar9->max).x - (pCVar9->min).x;
    local_d4 = (pCVar9->max).z - (pCVar9->min).z;
    local_d8 = 0;
    if (-local_118.z <= SQRT(local_d4 * local_d4 + local_dc * local_dc)) {
      pCVar14 = &in_stack_00000004->model;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar14->motion_controller,1);
      *(float *)(in_stack_00000004->field2_0x240c + 0x28) = local_14 * FLOAT_0063876b;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar14->motion_controller,2);
      fVar2 = *(float *)in_stack_00000004[1].base_actor.actor_name;
      fVar1 = *(float *)in_stack_00000004[1].base_actor.actor_name;
      fVar3 = (float)DOUBLE_00638773;
      *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
           local_14 * FLOAT_0063876f + *(float *)(in_stack_00000004->field2_0x240c + 0x28);
      local_e0 = DAT_00661408;
      *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar3 * fVar1;
      *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
           fVar2 * in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x28);
      local_e8 = 0;
      local_e4 = 0;
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
      if (iVar7 < 0) {
        in_stack_fffffe50 = (CDemonActor *)&DAT_00000001;
        in_stack_fffffe4c = 0;
      }
      else {
        if (0 < iVar7) {
          core_mimic_cpp_CMimic_beginMorph_FUN_00520a80();
          goto LAB_0051fdb4;
        }
        if (ABS(*(float *)(in_stack_00000004->field2_0x240c + 0xc)) /
            (in_stack_00000008 * *(float *)in_stack_00000004[1].base_actor.actor_name) <=
            (float)DOUBLE_0063877b) {
          in_stack_fffffe50 = (CDemonActor *)&DAT_00000001;
          in_stack_fffffe4c = 2;
        }
        else {
          in_stack_fffffe50 = (CDemonActor *)&DAT_00000001;
          in_stack_fffffe4c = 1;
        }
      }
      goto LAB_0051fdac;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_00520a80();
  }
  else {
    if (uVar8 < 3) goto LAB_0051fd7d;
    if (0xb < uVar8) {
      if (0xc < uVar8) {
        if (uVar8 != 0x13) goto LAB_0051fda5;
        pCVar14 = local_18;
        if ((g_HeroActors[g_LocalHeroIndex]->base_character).grabbed_by == (CDemonActor *)0x0) {
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&local_18->motion_controller);
          local_38 = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)DOUBLE_00638763) {
            local_1c = DAT_00661408;
            if (1.0 <= local_38) {
              local_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_14 = local_24;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (local_18,&local_ac,DAT_02f33398);
              local_ac.x._3_1_ = local_ac.x._3_1_ ^ 0x80;
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe1c);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (&in_stack_00000004->base_actor,&local_130,&local_ac);
              iVar7 = core_enemy_cpp_FUN_004a9880();
              if (iVar7 != 0) {
                (*((in_stack_00000004->base_actor).vtable)->playSound)
                          (&in_stack_00000004->base_actor,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_0051fdb4;
        }
        goto LAB_0051fdac;
      }
      if ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 0) &&
         ((in_stack_00000004->base_actor).field11_0xdc == 0)) {
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (local_18,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&in_stack_00000004->base_actor,&local_7c,pCVar5);
        core_gore_cpp_FUN_004ede30();
        pCVar4 = in_stack_00000004 + 1;
        (pCVar4->base_actor).actor_name[4] = '\x01';
        (pCVar4->base_actor).actor_name[5] = '\0';
        (pCVar4->base_actor).actor_name[6] = '\0';
        (pCVar4->base_actor).actor_name[7] = '\0';
      }
      goto LAB_0051fdb4;
    }
LAB_0051fda5:
    pCVar14 = &in_stack_00000004->model;
LAB_0051fdac:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&pCVar14->motion_controller,in_stack_fffffe4c,(int)in_stack_fffffe50);
  }
LAB_0051fdb4:
  if (0.0 <= local_1c) {
    fVar2 = *(float *)in_stack_00000004[1].base_actor.actor_name;
    fVar1 = (float)DOUBLE_006387a3;
    *(float *)(in_stack_00000004->field2_0x240c + 0x28) = fVar2 * in_stack_00000008;
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar1 * fVar2;
    local_5c = local_1c;
    local_64 = 0;
    local_60 = 0;
    iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
    if (iVar7 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,2,1);
    }
  }
  local_2c = in_stack_00000008 * *(float *)in_stack_00000004[1].base_actor.actor_name;
  pCVar14 = &in_stack_00000004->model;
  while (0.0 < local_2c) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar14->motion_controller);
    if (uVar8 != 0) {
      if (uVar8 < 2) {
        if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                    (pCVar14,&local_c4,DAT_02f33394);
          local_c4.x._3_1_ = local_c4.x._3_1_ ^ 0x80;
          (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                    (&in_stack_00000004->base_actor,&local_c4,1.0);
        }
      }
      else if ((uVar8 == 7) && (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar14,&local_100,DAT_02f33398);
        local_100.x._3_1_ = local_100.x._3_1_ ^ 0x80;
        (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                  (&in_stack_00000004->base_actor,&local_100,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar14->motion_controller);
  uVar8 = pSVar6->state_index;
  if (((uVar8 == 0xc) || (uVar8 == 0)) && ((in_stack_00000004->base_actor).field11_0xdc == 0))
  goto LAB_00520482;
  *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
       *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
       in_stack_00000008 * (float)DOUBLE_006387ab;
  local_d0 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
  local_cc = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
  local_c8 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
  local_124 = local_d0 + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
  local_120 = local_cc + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
  local_11c = local_c8 + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
  if (uVar8 < 3) {
    if (uVar8 == 0) {
      bVar12 = true;
LAB_0052043a:
      if (!bVar12) {
LAB_0052043c:
        local_124 = local_124 + (in_stack_00000004->model).accumulated_root_motion.x;
        local_120 = local_120 + (in_stack_00000004->model).accumulated_root_motion.y;
        local_11c = local_11c + (in_stack_00000004->model).accumulated_root_motion.z;
      }
    }
  }
  else if (3 < uVar8) {
    if (uVar8 < 0x11) {
      bVar12 = uVar8 == 0x10;
      goto LAB_0052043a;
    }
    if (0x11 < uVar8) {
      if (uVar8 < 0x14) goto LAB_0052043c;
      if (0x14 < uVar8) {
        bVar12 = uVar8 == 0x15;
        goto LAB_0052043a;
      }
    }
  }
  core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
LAB_00520482:
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            (&in_stack_00000004->model);
  core_cloth_cpp_FUN_0043ab80();
  return;
}


// Assembly code:
// 0051fcc0: PUSH EBX
//   Label: core_mimic.cpp_FUN_0051fcc0
// 0051fcc1: PUSH ESI
// 0051fcc2: PUSH EDI
// 0051fcc3: PUSH EBP
// 0051fcc4: MOV EBP,ESP
// 0051fcc6: SUB ESP,0x1d4
// 0051fccc: SUB EBP,0x7a
// 0051fccf: MOV EBX,dword ptr [EBP + 0x8e]
// 0051fcd5: PUSH 0x0
// 0051fcd7: LEA EAX,[EBP + 0xffffff7e]
// 0051fcdd: PUSH EAX
// 0051fcde: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0051fce3: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051fcea: ADD EAX,0x158
// 0051fcef: PUSH EAX
// 0051fcf0: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0051fcf5: ADD ESP,0xc
// 0051fcf8: PUSH EAX
// 0051fcf9: LEA EAX,[EBP + -0xa]
// 0051fcfc: PUSH EAX
// 0051fcfd: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0051fd02: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051fd09: PUSH EDX
// 0051fd0a: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0051fd0f: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0051fd14: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051fd1b: MOV EAX,dword ptr [EAX + 0x24]
// 0051fd1e: ADD ESP,0xc
// 0051fd21: MOV dword ptr [EBP + -0x6],EAX
// 0051fd24: LEA EAX,[EBP + -0xa]
// 0051fd27: PUSH EAX
// 0051fd28: LEA EAX,[EBP + 0x2]
// 0051fd2b: PUSH EAX
// 0051fd2c: PUSH EBX
// 0051fd2d: MOV ESI,0xbf800000
// 0051fd32: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0051fd37: MOV EAX,dword ptr [EBP + 0x2]
// 0051fd3a: MOV dword ptr [EBP + 0x6e],ESI
// 0051fd3d: MOV dword ptr [EBP + 0x1a],EAX
// 0051fd40: MOV EAX,dword ptr [EBP + 0xa]
// 0051fd43: ADD ESP,0xc
// 0051fd46: MOV dword ptr [EBP + 0x22],EAX
// 0051fd49: LEA EAX,[EBX + 0x158]
// 0051fd4f: XOR ECX,ECX
// 0051fd51: PUSH EAX
// 0051fd52: MOV dword ptr [EBP + 0x1e],ECX
// 0051fd55: MOV dword ptr [EBP + 0x72],EAX
// 0051fd58: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0051fd5d: MOV ESI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0051fd63: ADD ESP,0x4
// 0051fd66: MOV EAX,dword ptr [EAX + 0x24]
// 0051fd69: SHL ESI,0x2
// 0051fd6c: CMP EAX,0x2
// 0051fd6f: JNC 0x0052029d
//   XREF to: 0052029d (CONDITIONAL_JUMP)
// 0051fd75: TEST EAX,EAX
// 0051fd77: JBE 0x0051fe9d
//   XREF to: 0051fe9d (CONDITIONAL_JUMP)
// 0051fd7d: MOV EAX,[0x02db87d0]
//   Label: LAB_0051fd7d
//   XREF to: 02db87d0 (READ)
// 0051fd82: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051fd89: PUSH EAX
// 0051fd8a: MOV EDX,dword ptr [EAX + 0x154]
// 0051fd90: CALL dword ptr [EDX + 0x120]
// 0051fd96: ADD ESP,0x4
// 0051fd99: TEST EAX,EAX
// 0051fd9b: JZ 0x0051fff9
//   XREF to: 0051fff9 (CONDITIONAL_JUMP)
// 0051fda1: PUSH 0x1
//   Label: LAB_0051fda1
// 0051fda3: PUSH 0x0
// 0051fda5: LEA EAX,[EBX + 0x158]
//   Label: LAB_0051fda5
// 0051fdab: PUSH EAX
//   Label: LAB_0051fdab
// 0051fdac: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_0051fdac
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0051fdb1: ADD ESP,0xc
// 0051fdb4: FLD float ptr [EBP + 0x6e]
//   Label: LAB_0051fdb4
// 0051fdb7: FLDZ
// 0051fdb9: FCOMPP
// 0051fdbb: FNSTSW AX
// 0051fdbd: SAHF
// 0051fdbe: JBE 0x005202c0
//   XREF to: 005202c0 (CONDITIONAL_JUMP)
// 0051fdc4: FLD float ptr [EBP + 0x92]
//   Label: LAB_0051fdc4
// 0051fdca: FMUL float ptr [EBX + 0xbe24]
// 0051fdd0: LEA ESI,[EBX + 0x158]
// 0051fdd6: FSTP float ptr [EBP + 0x5e]
// 0051fdd9: FLD float ptr [EBP + 0x5e]
//   Label: LAB_0051fdd9
// 0051fddc: FLDZ
// 0051fdde: FCOMPP
// 0051fde0: FNSTSW AX
// 0051fde2: SAHF
// 0051fde3: JNC 0x00520398
//   XREF to: 00520398 (CONDITIONAL_JUMP)
// 0051fde9: LEA EAX,[EBP + 0x5e]
// 0051fdec: PUSH EAX
// 0051fded: PUSH ESI
// 0051fdee: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 0051fdf3: ADD ESP,0x8
// 0051fdf6: CMP EAX,0x1
// 0051fdf9: JC 0x0051fdd9
//   XREF to: 0051fdd9 (CONDITIONAL_JUMP)
// 0051fdfb: JA 0x0052038e
//   XREF to: 0052038e (CONDITIONAL_JUMP)
// 0051fe01: CMP dword ptr [EBX + 0x2410],0x0
// 0051fe08: JZ 0x0051fdd9
//   XREF to: 0051fdd9 (CONDITIONAL_JUMP)
// 0051fe0a: MOV EDX,dword ptr [0x02f33394]
//   XREF to: 02f33394 (READ)
// 0051fe10: PUSH EDX
// 0051fe11: LEA EAX,[EBP + -0x3a]
// 0051fe14: PUSH EAX
// 0051fe15: PUSH ESI
// 0051fe16: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0051fe1b: ADD ESP,0xc
// 0051fe1e: MOV DH,byte ptr [EBP + -0x37]
// 0051fe21: LEA EAX,[EBP + -0x3a]
// 0051fe24: PUSH 0x3f800000
// 0051fe29: XOR DH,0x80
// 0051fe2c: PUSH EAX
// 0051fe2d: MOV byte ptr [EBP + -0x37],DH
// 0051fe30: PUSH EBX
// 0051fe31: MOV EDX,dword ptr [EBX + 0x154]
// 0051fe37: CALL dword ptr [EDX + 0x1c]
// 0051fe3a: ADD ESP,0xc
// 0051fe3d: JMP 0x0051fdd9
//   XREF to: 0051fdd9 (UNCONDITIONAL_JUMP)
// 0051fe3f: MOV EDX,dword ptr [EBX + 0xbe28]
//   Label: LAB_0051fe3f
// 0051fe45: TEST EDX,EDX
// 0051fe47: JNZ 0x0051fdb4
//   XREF to: 0051fdb4 (CONDITIONAL_JUMP)
// 0051fe4d: CMP dword ptr [EBX + 0xdc],0x0
// 0051fe54: JNZ 0x0051fdb4
//   XREF to: 0051fdb4 (CONDITIONAL_JUMP)
// 0051fe5a: PUSH EDX
// 0051fe5b: LEA EAX,[EBP + -0x16]
// 0051fe5e: PUSH EAX
// 0051fe5f: MOV ESI,dword ptr [EBP + 0x72]
// 0051fe62: PUSH ESI
// 0051fe63: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0051fe68: ADD ESP,0xc
// 0051fe6b: PUSH EAX
// 0051fe6c: LEA EAX,[EBP + 0xe]
// 0051fe6f: PUSH EAX
// 0051fe70: PUSH EBX
// 0051fe71: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0051fe76: ADD ESP,0xc
// 0051fe79: PUSH 0x0
// 0051fe7b: LEA EAX,[EBP + 0xe]
// 0051fe7e: PUSH EAX
// 0051fe7f: MOV EDI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 0051fe85: PUSH EDI
//   XREF to: 02d83364 (DATA)
// 0051fe86: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 0051fe8b: ADD ESP,0xc
// 0051fe8e: MOV dword ptr [EBX + 0xbe28],0x1
// 0051fe98: JMP 0x0051fdb4
//   XREF to: 0051fdb4 (UNCONDITIONAL_JUMP)
// 0051fe9d: MOV EAX,dword ptr [ESI + 0x2db87c0]
//   Label: LAB_0051fe9d
//   XREF to: 02db87c0 (DATA)
// 0051fea3: PUSH EAX
// 0051fea4: MOV EDX,dword ptr [EAX + 0x154]
// 0051feaa: CALL dword ptr [EDX + 0x120]
// 0051feb0: ADD ESP,0x4
// 0051feb3: TEST EAX,EAX
// 0051feb5: JNZ 0x0051fdb4
//   XREF to: 0051fdb4 (CONDITIONAL_JUMP)
// 0051febb: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0051fec0: CMP dword ptr [EAX + 0x1d4],0x0
//   XREF to: 02d81c70 (READ)
// 0051fec7: JNZ 0x0051fdb4
//   XREF to: 0051fdb4 (CONDITIONAL_JUMP)
// 0051fecd: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0051fed2: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051fed9: FLD float ptr [EBX + 0x24]
// 0051fedc: FSUB float ptr [EAX + 0x24]
// 0051fedf: FABS
// 0051fee1: FCOMP double ptr [0x00638783]
//   XREF to: 00638783 (READ)
// 0051fee7: FNSTSW AX
// 0051fee9: SAHF
// 0051feea: JA 0x0051fdb4
//   XREF to: 0051fdb4 (CONDITIONAL_JUMP)
// 0051fef0: LEA EAX,[EBP + 0x1a]
// 0051fef3: PUSH EAX
// 0051fef4: LEA EAX,[EBP + 0x32]
// 0051fef7: PUSH EAX
// 0051fef8: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0051fefd: ADD ESP,0x8
// 0051ff00: PUSH dword ptr [EAX + 0x4]
// 0051ff03: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0051ff08: MOV dword ptr [EBP + 0x76],EAX
// 0051ff0b: FLD float ptr [EBP + 0x76]
// 0051ff0e: FABS
// 0051ff10: FLD float ptr [EBP + 0x1e]
// 0051ff13: FMUL ST0
// 0051ff15: FLD float ptr [EBP + 0x1a]
// 0051ff18: FMUL ST0
// 0051ff1a: FADDP
// 0051ff1c: FLD float ptr [EBP + 0x22]
// 0051ff1f: FMUL ST0
// 0051ff21: FADDP
// 0051ff23: FSQRT
// 0051ff25: FXCH
// 0051ff27: FMUL double ptr [0x0063878b]
//   XREF to: 0063878b (READ)
// 0051ff2d: FLD1
// 0051ff2f: FSUBRP
// 0051ff31: FMUL double ptr [0x00638793]
//   XREF to: 00638793 (READ)
// 0051ff37: FADD double ptr [0x0063879b]
//   XREF to: 0063879b (READ)
// 0051ff3d: ADD ESP,0x4
// 0051ff40: FXCH
// 0051ff42: FCOMPP
// 0051ff44: FNSTSW AX
// 0051ff46: SAHF
// 0051ff47: JNC 0x0051fdb4
//   XREF to: 0051fdb4 (CONDITIONAL_JUMP)
// 0051ff4d: MOV ECX,dword ptr [0x02f33378]
//   XREF to: 02f33378 (READ)
// 0051ff53: PUSH ECX
// 0051ff54: MOV ESI,dword ptr [EBP + 0x72]
// 0051ff57: PUSH ESI
// 0051ff58: LEA ESI,[EBP + 0xfffffee2]
// 0051ff5e: LEA EDI,[EBP + 0xffffff12]
// 0051ff64: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
//   XREF to: 0059f820 (UNCONDITIONAL_CALL)
// 0051ff69: MOV ECX,0xc
// 0051ff6e: ADD ESP,0x8
// 0051ff71: LEA EAX,[EBP + 0xffffff12]
// 0051ff77: LEA ESI,[EBP + 0xfffffee2]
// 0051ff7d: PUSH EAX
// 0051ff7e: MOV EAX,0x3f333333
// 0051ff83: MOV EDX,0x3e99999a
// 0051ff88: MOV dword ptr [EBP + 0x42],EAX
// 0051ff8b: LEA EAX,[EBP + 0x3e]
// 0051ff8e: MOVSD.REP ES:EDI,ESI
// 0051ff90: PUSH EAX
// 0051ff91: LEA EAX,[EBP + -0x2e]
// 0051ff94: XOR EDI,EDI
// 0051ff96: PUSH EAX
// 0051ff97: MOV dword ptr [EBP + 0x46],EDX
// 0051ff9a: MOV dword ptr [EBP + 0x3e],EDI
// 0051ff9d: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0051ffa2: ADD ESP,0xc
// 0051ffa5: PUSH EAX
// 0051ffa6: LEA EAX,[EBP + -0x6a]
// 0051ffa9: PUSH EAX
// 0051ffaa: PUSH EBX
// 0051ffab: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0051ffb0: ADD ESP,0xc
// 0051ffb3: LEA EAX,[EBP + -0xa]
// 0051ffb6: PUSH EAX
// 0051ffb7: LEA EAX,[EBP + -0x6a]
// 0051ffba: PUSH EAX
// 0051ffbb: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0051ffc1: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0051ffc2: CALL core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510
//   XREF to: 00572510 (UNCONDITIONAL_CALL)
// 0051ffc7: ADD ESP,0xc
// 0051ffca: TEST EAX,EAX
// 0051ffcc: JNZ 0x0051fdb4
//   XREF to: 0051fdb4 (CONDITIONAL_JUMP)
// 0051ffd2: PUSH 0x1
// 0051ffd4: PUSH 0x2
// 0051ffd6: MOV ESI,dword ptr [EBP + 0x72]
// 0051ffd9: PUSH ESI
// 0051ffda: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0051ffdf: ADD ESP,0xc
// 0051ffe2: PUSH 0x63873c
//   XREF to: 0063873c (DATA)
// 0051ffe7: MOV EAX,dword ptr [EBX + 0x154]
// 0051ffed: PUSH EBX
// 0051ffee: CALL dword ptr [EAX + 0x24]
// 0051fff1: ADD ESP,0x8
// 0051fff4: JMP 0x0051fdb4
//   XREF to: 0051fdb4 (UNCONDITIONAL_JUMP)
// 0051fff9: MOV EAX,[0x0067b654]
//   Label: LAB_0051fff9
//   XREF to: 0067b654 (READ)
// 0051fffe: CMP dword ptr [EAX + 0x1d4],0x0
//   XREF to: 02d81c70 (READ)
// 00520005: JNZ 0x0051fda1
//   XREF to: 0051fda1 (CONDITIONAL_JUMP)
// 0052000b: LEA EAX,[EBX + 0x20]
// 0052000e: PUSH EAX
// 0052000f: LEA EAX,[EBP + 0xffffff72]
// 00520015: PUSH EAX
// 00520016: MOV ECX,dword ptr [EBX + 0x4bdf8]
// 0052001c: PUSH ECX
// 0052001d: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00520022: ADD ESP,0xc
// 00520025: LEA EAX,[EBP + 0xffffff42]
// 0052002b: PUSH EAX
// 0052002c: MOV EDX,dword ptr [EBX + 0x154]
// 00520032: PUSH EBX
// 00520033: CALL dword ptr [EDX + 0x14]
// 00520036: LEA EDX,[EAX + 0xc]
// 00520039: FLD float ptr [EDX]
// 0052003b: FSUB float ptr [EAX]
// 0052003d: FSTP float ptr [EBP + -0x52]
// 00520040: FLD float ptr [EDX + 0x4]
// 00520043: FSUB float ptr [EAX + 0x4]
// 00520046: FLD float ptr [EBP + -0x52]
// 00520049: FXCH
// 0052004b: FSTP float ptr [EBP + -0x4e]
// 0052004e: FLD float ptr [EDX + 0x8]
// 00520051: FSUB float ptr [EAX + 0x8]
// 00520054: FXCH
// 00520056: FMUL float ptr [EBP + -0x52]
// 00520059: FXCH
// 0052005b: FST float ptr [EBP + -0x4a]
// 0052005e: FMUL float ptr [EBP + -0x4a]
// 00520061: FADDP
// 00520063: FSQRT
// 00520065: XOR ESI,ESI
// 00520067: FLD float ptr [EBP + 0xffffff7a]
// 0052006d: ADD ESP,0x8
// 00520070: FCHS
// 00520072: MOV dword ptr [EBP + -0x4e],ESI
// 00520075: FXCH
// 00520077: FCOMPP
// 00520079: FNSTSW AX
// 0052007b: SAHF
// 0052007c: JNC 0x0052008c
//   XREF to: 0052008c (CONDITIONAL_JUMP)
// 0052007e: PUSH EBX
// 0052007f: CALL core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
//   XREF to: 00520a80 (UNCONDITIONAL_CALL)
// 00520084: ADD ESP,0x4
// 00520087: JMP 0x0051fdb4
//   XREF to: 0051fdb4 (UNCONDITIONAL_JUMP)
// 0052008c: PUSH 0x1
//   Label: LAB_0052008c
// 0052008e: LEA ESI,[EBX + 0x158]
// 00520094: PUSH ESI
// 00520095: CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 0052009a: MOV dword ptr [EBP + 0x76],EAX
// 0052009d: ADD ESP,0x8
// 005200a0: FLD float ptr [EBP + 0x76]
// 005200a3: PUSH 0x2
// 005200a5: FMUL float ptr [0x0063876b]
//   XREF to: 0063876b (READ)
// 005200ab: PUSH ESI
// 005200ac: FSTP float ptr [EBX + 0x2434]
// 005200b2: CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005200b7: FLD float ptr [EBX + 0xbe24]
// 005200bd: MOV dword ptr [EBP + 0x76],EAX
// 005200c0: FLD float ptr [EBP + 0x92]
// 005200c6: FXCH
// 005200c8: FMUL ST1
// 005200ca: FLD float ptr [EBP + 0x76]
// 005200cd: FMUL float ptr [0x0063876f]
//   XREF to: 0063876f (READ)
// 005200d3: FLD float ptr [EBX + 0xbe24]
// 005200d9: FXCH ST3
// 005200db: FMUL double ptr [0x00638773]
//   XREF to: 00638773 (READ)
// 005200e1: FXCH
// 005200e3: FADD float ptr [EBX + 0x2434]
// 005200e9: FXCH
// 005200eb: FMULP ST3
// 005200ed: FSTP float ptr [EBX + 0x2434]
// 005200f3: FMUL float ptr [EBX + 0x2434]
// 005200f9: ADD ESP,0x8
// 005200fc: MOV EAX,[0x00661408]
//   XREF to: 00661408 (READ)
// 00520101: PUSH 0x3e32b8c2
// 00520106: FXCH
// 00520108: FSTP float ptr [EBX + 0x2438]
// 0052010e: FSTP float ptr [EBX + 0x2434]
// 00520114: MOV dword ptr [EBP + -0x56],EAX
// 00520117: LEA EAX,[EBP + -0x5e]
// 0052011a: PUSH 0x3f800000
// 0052011f: PUSH EAX
// 00520120: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00520125: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0052012c: LEA EDX,[EAX + 0xbe58]
// 00520132: PUSH EDX
// 00520133: ADD EAX,0x20
// 00520136: PUSH EAX
// 00520137: XOR EDI,EDI
// 00520139: PUSH EBX
// 0052013a: MOV dword ptr [EBP + -0x5e],EDI
// 0052013d: MOV dword ptr [EBP + -0x5a],EDI
// 00520140: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00520145: ADD ESP,0x18
// 00520148: TEST EAX,EAX
// 0052014a: JL 0x0052015c
//   XREF to: 0052015c (CONDITIONAL_JUMP)
// 0052014c: JLE 0x00520165
//   XREF to: 00520165 (CONDITIONAL_JUMP)
// 0052014e: PUSH EBX
// 0052014f: CALL core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
//   XREF to: 00520a80 (UNCONDITIONAL_CALL)
// 00520154: ADD ESP,0x4
// 00520157: JMP 0x0051fdb4
//   XREF to: 0051fdb4 (UNCONDITIONAL_JUMP)
// 0052015c: PUSH 0x1
//   Label: LAB_0052015c
// 0052015e: PUSH EDI
// 0052015f: PUSH ESI
// 00520160: JMP 0x0051fdac
//   XREF to: 0051fdac (UNCONDITIONAL_JUMP)
// 00520165: FLD float ptr [EBP + 0x92]
//   Label: LAB_00520165
// 0052016b: FMUL float ptr [EBX + 0xbe24]
// 00520171: FLD float ptr [EBX + 0x2418]
// 00520177: FABS
// 00520179: FDIVRP
// 0052017b: FCOMP double ptr [0x0063877b]
//   XREF to: 0063877b (READ)
// 00520181: FNSTSW AX
// 00520183: SAHF
// 00520184: JBE 0x00520190
//   XREF to: 00520190 (CONDITIONAL_JUMP)
// 00520186: PUSH 0x1
// 00520188: PUSH 0x1
// 0052018a: PUSH ESI
// 0052018b: JMP 0x0051fdac
//   XREF to: 0051fdac (UNCONDITIONAL_JUMP)
// 00520190: PUSH 0x1
//   Label: LAB_00520190
// 00520192: PUSH 0x2
// 00520194: PUSH ESI
// 00520195: JMP 0x0051fdac
//   XREF to: 0051fdac (UNCONDITIONAL_JUMP)
// 0052019a: MOV EAX,dword ptr [ESI + 0x2db87c0]
//   Label: LAB_0052019a
//   XREF to: 02db87c0 (DATA)
// 005201a0: CMP dword ptr [EAX + 0x2598],0x0
// 005201a7: JZ 0x005201b5
//   XREF to: 005201b5 (CONDITIONAL_JUMP)
// 005201a9: PUSH 0x1
// 005201ab: PUSH 0x0
// 005201ad: MOV EAX,dword ptr [EBP + 0x72]
// 005201b0: JMP 0x0051fdab
//   XREF to: 0051fdab (UNCONDITIONAL_JUMP)
// 005201b5: MOV ECX,dword ptr [EBP + 0x72]
//   Label: LAB_005201b5
// 005201b8: PUSH ECX
// 005201b9: CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 005201be: MOV dword ptr [EBP + 0x76],EAX
// 005201c1: ADD ESP,0x4
// 005201c4: MOV EAX,dword ptr [EBP + 0x76]
// 005201c7: MOV dword ptr [EBP + 0x6a],EAX
// 005201ca: FLD float ptr [EBP + 0x6a]
// 005201cd: FST double ptr [EBP + 0x52]
// 005201d0: FCOMP double ptr [0x00638763]
//   XREF to: 00638763 (READ)
// 005201d6: FNSTSW AX
// 005201d8: SAHF
// 005201d9: JA 0x0051fdb4
//   XREF to: 0051fdb4 (CONDITIONAL_JUMP)
// 005201df: MOV EAX,[0x00661408]
//   XREF to: 00661408 (READ)
// 005201e4: FLD1
// 005201e6: MOV dword ptr [EBP + 0x6e],EAX
// 005201e9: FCOMP double ptr [EBP + 0x52]
// 005201ec: FNSTSW AX
// 005201ee: SAHF
// 005201ef: JA 0x0051fdb4
//   XREF to: 0051fdb4 (CONDITIONAL_JUMP)
// 005201f5: PUSH 0x41700000
// 005201fa: PUSH 0x40e00000
// 005201ff: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0052029d: JBE 0x0051fd7d
//   Label: LAB_0052029d
//   XREF to: 0051fd7d (CONDITIONAL_JUMP)
// 005202a3: CMP EAX,0xc
// 005202a6: JC 0x005202b7
//   XREF to: 005202b7 (CONDITIONAL_JUMP)
// 005202a8: JBE 0x0051fe3f
//   XREF to: 0051fe3f (CONDITIONAL_JUMP)
// 005202ae: CMP EAX,0x13
// 005202b1: JZ 0x0052019a
//   XREF to: 0052019a (CONDITIONAL_JUMP)
// 005202b7: PUSH 0x1
//   Label: LAB_005202b7
// 005202b9: PUSH 0x2
// 005202bb: JMP 0x0051fda5
//   XREF to: 0051fda5 (UNCONDITIONAL_JUMP)
// 005202c0: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_005202c0
// 005202c6: FLD ST0
// 005202c8: FLD float ptr [EBP + 0x92]
// 005202ce: FLD ST0
// 005202d0: FMUL double ptr [0x006387a3]
//   XREF to: 006387a3 (READ)
// 005202d6: FXCH ST3
// 005202d8: FMULP
// 005202da: FXCH ST2
// 005202dc: FMULP
// 005202de: PUSH 0x3f060a92
// 005202e3: MOV EAX,dword ptr [EBP + 0x6e]
// 005202e6: FXCH
// 005202e8: FSTP float ptr [EBX + 0x2434]
// 005202ee: FSTP float ptr [EBX + 0x2438]
// 005202f4: MOV dword ptr [EBP + 0x2e],EAX
// 005202f7: LEA EAX,[EBP + 0x26]
// 005202fa: PUSH 0x40400000
// 005202ff: PUSH EAX
// 00520300: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00520305: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0052030c: LEA EDX,[EAX + 0xbe58]
// 00520312: PUSH EDX
// 00520313: ADD EAX,0x20
// 00520316: PUSH EAX
// 00520317: XOR EDI,EDI
// 00520319: PUSH EBX
// 0052031a: MOV dword ptr [EBP + 0x26],EDI
// 0052031d: MOV dword ptr [EBP + 0x2a],EDI
// 00520320: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00520325: ADD ESP,0x18
// 00520328: CMP EAX,0x1
// 0052032b: JZ 0x0051fdc4
//   XREF to: 0051fdc4 (CONDITIONAL_JUMP)
// 00520331: PUSH 0x1
// 00520333: PUSH 0x2
// 00520335: LEA EAX,[EBX + 0x158]
// 0052033b: PUSH EAX
// 0052033c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00520341: ADD ESP,0xc
// 00520344: JMP 0x0051fdc4
//   XREF to: 0051fdc4 (UNCONDITIONAL_JUMP)
// 00520349: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_00520349
// 00520350: JZ 0x0051fdd9
//   XREF to: 0051fdd9 (CONDITIONAL_JUMP)
// 00520356: MOV EDI,dword ptr [0x02f33398]
//   XREF to: 02f33398 (READ)
// 0052035c: PUSH EDI
// 0052035d: LEA EAX,[EBP + -0x76]
// 00520360: PUSH EAX
// 00520361: PUSH ESI
// 00520362: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 00520367: MOV DL,byte ptr [EBP + -0x73]
// 0052036a: XOR DL,0x80
// 0052036d: ADD ESP,0xc
// 00520370: MOV byte ptr [EBP + -0x73],DL
// 00520373: LEA EDX,[EBP + -0x76]
// 00520376: PUSH 0x3f800000
// 0052037b: PUSH EDX
// 0052037c: MOV EAX,dword ptr [EBX + 0x154]
// 00520382: PUSH EBX
// 00520383: CALL dword ptr [EAX + 0x1c]
// 00520386: ADD ESP,0xc
// 00520389: JMP 0x0051fdd9
//   XREF to: 0051fdd9 (UNCONDITIONAL_JUMP)
// 0052038e: CMP EAX,0x7
//   Label: LAB_0052038e
// 00520391: JZ 0x00520349
//   XREF to: 00520349 (CONDITIONAL_JUMP)
// 00520393: JMP 0x0051fdd9
//   XREF to: 0051fdd9 (UNCONDITIONAL_JUMP)
// 00520398: PUSH EBX
//   Label: LAB_00520398
// 00520399: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 0052039e: ADD ESP,0x4
// 005203a1: PUSH ESI
// 005203a2: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005203a7: MOV EDX,dword ptr [EAX + 0x24]
// 005203aa: ADD ESP,0x4
// 005203ad: MOV EAX,EDX
// 005203af: CMP EDX,0xc
// 005203b2: JZ 0x005204c6
//   XREF to: 005204c6 (CONDITIONAL_JUMP)
// 005203b8: TEST EDX,EDX
// 005203ba: JZ 0x005204c6
//   XREF to: 005204c6 (CONDITIONAL_JUMP)
// 005203c0: FLD float ptr [EBP + 0x92]
//   Label: LAB_005203c0
// 005203c6: FLD ST0
// 005203c8: FMUL double ptr [0x006387ab]
//   XREF to: 006387ab (READ)
// 005203ce: FLD float ptr [EBX + 0x242c]
// 005203d4: FXCH
// 005203d6: FSUBR ST0,ST1
// 005203d8: LEA EDX,[EBX + 0x2428]
// 005203de: FSTP ST1
// 005203e0: FSTP float ptr [EBX + 0x242c]
// 005203e6: FLD float ptr [EDX]
// 005203e8: FMUL ST1
// 005203ea: FSTP float ptr [EBP + -0x46]
// 005203ed: FLD float ptr [EDX + 0x4]
// 005203f0: FMUL ST1
// 005203f2: FSTP float ptr [EBP + -0x42]
// 005203f5: FMUL float ptr [EDX + 0x8]
// 005203f8: LEA ESI,[EBX + 0x241c]
// 005203fe: FLD float ptr [EBP + -0x46]
// 00520401: FXCH
// 00520403: FSTP float ptr [EBP + -0x3e]
// 00520406: FADD float ptr [ESI]
// 00520408: FLD float ptr [EBP + -0x42]
// 0052040b: FXCH
// 0052040d: FSTP float ptr [EBP + 0xffffff66]
// 00520413: FADD float ptr [ESI + 0x4]
// 00520416: FLD float ptr [EBP + -0x3e]
// 00520419: FXCH
// 0052041b: FSTP float ptr [EBP + 0xffffff6a]
// 00520421: FADD float ptr [ESI + 0x8]
//   XREF to: 00002424 (DATA)
// 00520424: FSTP float ptr [EBP + 0xffffff6e]
// 0052042a: CMP EAX,0x3
// 0052042d: JNC 0x005204d5
//   XREF to: 005204d5 (CONDITIONAL_JUMP)
// 00520433: CMP EAX,0x1
// 00520436: JNC 0x00520472
//   XREF to: 00520472 (CONDITIONAL_JUMP)
// 00520438: TEST EAX,EAX
// 0052043a: JZ 0x00520472
//   Label: LAB_0052043a
//   XREF to: 00520472 (CONDITIONAL_JUMP)
// 0052043c: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_0052043c
// 00520442: FLD float ptr [EBP + 0xffffff66]
// 00520448: FADD float ptr [EAX]
// 0052044a: FLD float ptr [EBP + 0xffffff6a]
// 00520450: FXCH
// 00520452: FSTP float ptr [EBP + 0xffffff66]
// 00520458: FADD float ptr [EAX + 0x4]
// 0052045b: FLD float ptr [EBP + 0xffffff6e]
// 00520461: FXCH
// 00520463: FSTP float ptr [EBP + 0xffffff6a]
// 00520469: FADD float ptr [EAX + 0x8]
// 0052046c: FSTP float ptr [EBP + 0xffffff6e]
// 00520472: LEA EAX,[EBP + 0xffffff66]
//   Label: LAB_00520472
// 00520478: PUSH EAX
// 00520479: PUSH EBX
// 0052047a: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 0052047f: ADD ESP,0x8
// 00520482: LEA ESI,[EBX + 0x158]
//   Label: LAB_00520482
// 00520488: PUSH ESI
// 00520489: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0052048e: ADD ESP,0x4
// 00520491: PUSH ESI
// 00520492: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 00520497: ADD ESP,0x4
// 0052049a: PUSH ESI
// 0052049b: PUSH dword ptr [EBX + 0x2414]
// 005204a1: LEA EAX,[EBX + 0x30]
// 005204a4: PUSH dword ptr [EBP + 0x92]
// 005204aa: PUSH EAX
// 005204ab: LEA EAX,[EBX + 0x20]
// 005204ae: PUSH EAX
// 005204af: ADD EBX,0xbf84
// 005204b5: PUSH EBX
// 005204b6: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005204bb: ADD ESP,0x18
// 005204be: LEA ESP,[EBP + 0x7a]
// 005204c1: POP EBP
// 005204c2: POP EDI
// 005204c3: POP ESI
// 005204c4: POP EBX
// 005204c5: RET
// 005204c6: CMP dword ptr [EBX + 0xdc],0x0
//   Label: LAB_005204c6
// 005204cd: JNZ 0x005203c0
//   XREF to: 005203c0 (CONDITIONAL_JUMP)
// 005204d3: JMP 0x00520482
//   XREF to: 00520482 (UNCONDITIONAL_JUMP)
// 005204d5: JBE 0x00520472
//   Label: LAB_005204d5
//   XREF to: 00520472 (CONDITIONAL_JUMP)
// 005204d7: CMP EAX,0x11
// 005204da: JNC 0x005204e4
//   XREF to: 005204e4 (CONDITIONAL_JUMP)
// 005204dc: CMP EAX,0x10
// 005204df: JMP 0x0052043a
//   XREF to: 0052043a (UNCONDITIONAL_JUMP)
// 005204e4: JBE 0x00520472
//   Label: LAB_005204e4
//   XREF to: 00520472 (CONDITIONAL_JUMP)
// 005204e6: CMP EAX,0x14
// 005204e9: JC 0x0052043c
//   XREF to: 0052043c (CONDITIONAL_JUMP)
// 005204ef: JBE 0x00520472
//   XREF to: 00520472 (CONDITIONAL_JUMP)
// 005204f1: CMP EAX,0x15
// 005204f4: JMP 0x0052043a
//   XREF to: 0052043a (UNCONDITIONAL_JUMP)
