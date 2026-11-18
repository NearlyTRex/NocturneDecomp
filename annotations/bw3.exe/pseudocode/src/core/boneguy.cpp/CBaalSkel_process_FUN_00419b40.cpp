// Name: core_boneguy.cpp_CBaalSkel_process_FUN_00419b40
// Address: 00419b40
// Address Range: [[00419b40, 0041a809]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBaalSkel_process_FUN_00419b40(CBaalSkel *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBaalSkel_process_FUN_00419b40(CBaalSkel *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  CHero *pCVar6;
  float fVar7;
  int iVar8;
  SBoneGuyBox *pSVar9;
  SMotion *pSVar10;
  int iVar11;
  CDemonActor *pCVar12;
  uint uVar13;
  CPathMap *path_map;
  uint *puVar14;
  CVector3f *pCVar15;
  uint *puVar16;
  byte bVar17;
  float afStackY_19a8 [1493];
  CEnemy *pCVar18;
  SDamageInfo *pSVar19;
  ulonglong uVar20;
  float in_stack_fffffdc8;
  float fVar21;
  float fStack_230;
  SDamageInfo SStack_208;
  CQuaternion4f CStack_1cc;
  CQuaternion4f CStack_1bc;
  float fStack_1ac;
  float afStack_1a8 [4];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  CVector3f CStack_170;
  CVector3f CStack_164;
  CVector3f CStack_158;
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [2];
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  CVector3f CStack_11c;
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_100 [4];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CBodyPart *pCStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  SBoneGuyBox *pSStack_38;
  CMotionController *pCStack_34;
  CQuaternion4f *pCStack_30;
  float *pfStack_2c;
  CQuaternion4f *pCStack_28;
  int iStack_24;
  CVector3f *pCStack_20;
  float fStack_1c;
  float fStack_14;
  
  bVar17 = 0;
  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (g_CEventListPtr,(this_ptr->base).death_event);
  if (iVar8 != 0) {
    (this_ptr->base).base.base.hit_points = 0.0;
    (this_ptr->base).base.pool_me = 1;
    (this_ptr->base).recombine_interpolation = 0.0;
    if ((this_ptr->base).blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(&this_ptr->base);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              (&(this_ptr->base).base.base.model.base,5,0.0);
  }
  iVar8 = (*(((this_ptr->base).base.base.base.vtable._ue)->_ue).randomize)((CEnemy *)this_ptr);
  if (iVar8 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0((this_ptr->base).sfx_handle);
    return;
  }
  if (((this_ptr->base).blown_up == 1) && (0.0 < (this_ptr->base).base.base.hit_points)) {
    (this_ptr->base).recombine_interpolation = (this_ptr->base).recombine_interpolation + delta_time
    ;
    return;
  }
  if ((this_ptr->base).blown_up == 2) {
    fVar21 = delta_time / 2.0f + (this_ptr->base).recombine_interpolation;
    (this_ptr->base).recombine_interpolation = fVar21;
    if (fVar21 < 1.0) {
      iStack_24 = 0;
      if ((this_ptr->base).box_count < 1) {
        return;
      }
      pSStack_38 = (this_ptr->base).boxes;
      pfStack_2c = &(this_ptr->base).recombine_interpolation;
      pCStack_30 = &(this_ptr->base).boxes[0].dest_orient;
      pCStack_28 = &(this_ptr->base).boxes[0].start_orient;
      pCStack_20 = &(this_ptr->base).boxes[0].source_pos;
      do {
        pCVar15 = pCStack_20;
        pSVar9 = pSStack_38 + iStack_24;
        pCStack_54 = pSVar9->body_part;
        fStack_140 = (pSVar9->pos).x - pCStack_20->x;
        afStack_13c[0] = (pSVar9->pos).y - pCStack_20->y;
        afStack_13c[1] = (pSVar9->pos).z - pCStack_20->z;
        fStack_80 = fStack_140;
        afStack_ac[(uint)bVar17 * -2 + 0xc] = afStack_13c[(uint)bVar17 * -2];
        afStack_ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
             afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
        fStack_128 = fStack_80 * *pfStack_2c;
        afStack_124[0] = fStack_7c * *pfStack_2c;
        afStack_124[1] = fStack_78 * *pfStack_2c;
        fStack_1ac = fStack_80 * *pfStack_2c;
        afStack_1a8[(uint)bVar17 * -2] = afStack_124[(uint)bVar17 * -2];
        afStack_1a8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             afStack_124[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
        fStack_8c = pCVar15->x + fStack_1ac;
        fStack_88 = pCVar15->y + afStack_1a8[0];
        fStack_84 = pCVar15->z + afStack_1a8[1];
        fStack_98 = fStack_8c;
        afStack_ac[(uint)bVar17 * -2 + 6] = afStack_ac[(uint)bVar17 * -2 + 9];
        afStack_ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
             afStack_ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
        core_xform_cpp_slerpQuaternion_FUN_00585b20
                  (pCStack_30,pCStack_28,(this_ptr->base).recombine_interpolation,&CStack_1bc);
        CStack_1cc.w = CStack_1bc.w;
        puVar16 = (uint *)((int)&CStack_1cc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        puVar14 = (uint *)((int)&CStack_1bc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        *(uint *)((int)&CStack_1cc + (uint)bVar17 * -8 + 4) =
             *(uint *)((int)&CStack_1bc + (uint)bVar17 * -8 + 4);
        *puVar16 = *puVar14;
        puVar16[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
        core_xform_cpp_quaternionToEulerAngles_FUN_00585de0(&CStack_1cc,&CStack_c8);
        fStack_17c = CStack_c8.x;
        afStack_1a8[(uint)bVar17 * -2 + 0xc] = *(float *)((int)&CStack_c8 + (uint)bVar17 * -8 + 4);
        afStack_1a8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
             *(float *)((int)&CStack_c8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        fStack_17c = (this_ptr->base).recombine_interpolation * (float)6.2831853070000001 +
                     fStack_17c;
        (pCStack_54->base).location.position.x = fStack_98;
        (pCStack_54->base).location.position.y = fStack_94;
        pUVar1 = &(pCStack_54->base).orient;
        (pCStack_54->base).location.position.z = fStack_90;
        if (pUVar1 != (UOrientationVector *)(afStack_1a8 + 0xb)) {
          (pUVar1->vec).x = fStack_17c;
          (pCStack_54->base).orient.vec.y = fStack_178;
          (pCStack_54->base).orient.vec.z = fStack_174;
        }
        if (&pCStack_54->physics_box != (CBox *)(afStack_ac + 5)) {
          (pCStack_54->physics_box).position.x = fStack_98;
          (pCStack_54->physics_box).position.y = fStack_94;
          (pCStack_54->physics_box).position.z = fStack_90;
        }
        pCVar15 = &(pCStack_54->physics_box).orientation;
        if (pCVar15 != (CVector3f *)(afStack_1a8 + 0xb)) {
          pCVar15->x = fStack_17c;
          (pCStack_54->physics_box).orientation.y = fStack_178;
          (pCStack_54->physics_box).orientation.z = fStack_174;
        }
        iStack_24 = iStack_24 + 1;
        pCStack_30 = (CQuaternion4f *)&pCStack_30[4].y;
        pCStack_28 = (CQuaternion4f *)&pCStack_28[4].y;
        pCStack_20 = pCStack_20 + 6;
      } while (iStack_24 < (this_ptr->base).box_count);
      return;
    }
    iVar8 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0054e670
              (&(this_ptr->base).base.base.model);
    pCVar15 = (CVector3f *)this_ptr;
    if (0 < (this_ptr->base).box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10
                  (g_CDemonMission_PTR_00600530,&(*(CBodyPart **)(pCVar15 + 0x116f))->base,1);
        pCVar15[0x116f].x = 0;
        iVar8 = iVar8 + 1;
        pCVar15 = pCVar15 + 6;
      } while (iVar8 < (this_ptr->base).box_count);
    }
    (this_ptr->base).blown_up = 0;
    fVar21 = (this_ptr->base).recombine_time * (float)0.5;
    (this_ptr->base).base.base.hit_points = 10.0;
    (this_ptr->base).recombine_time = fVar21;
    if (fVar21 <= (float)2.5) {
      (this_ptr->base).recombine_time = 2.5;
    }
  }
  (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.base.model.accumulated_root_motion.y =
       (this_ptr->base).base.base.model.accumulated_root_motion.z;
  (this_ptr->base).base.base.model.accumulated_root_motion.x =
       (this_ptr->base).base.base.model.accumulated_root_motion.y;
  pCVar2 = &(this_ptr->base).base.base.model;
  fStack_48 = delta_time * (this_ptr->base).base.speed;
  pCStack_34 = &pCVar2->base;
  while (0.0 < fStack_48) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,&fStack_48);
    if (iVar8 == 100) {
      pCVar12 = (this_ptr->base).pickup_target;
      if (pCVar12 != (CDemonActor *)0x0) {
        (this_ptr->base).pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
                  ((CCharacter *)this_ptr,1,pCVar12,0.2,(CMatrix3x4f *)0x0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar8);
    }
  }
  fVar21 = (this_ptr->base).base.speed;
  (this_ptr->base).base.base.walk_step_speed =
       (this_ptr->base).base.base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar21);
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_34);
  iVar8 = pSVar10->state_index;
  iStack_40 = iVar8;
  iVar11 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    switch(iVar8) {
    case 0:
      pCVar6 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      afStack_1a8[2] =
           (this_ptr->base).base.base.base.location.position.x -
           (pCVar6->base).base.location.position.x;
      afStack_1a8[3] =
           (this_ptr->base).base.base.base.location.position.y -
           (pCVar6->base).base.location.position.y;
      fStack_198 = (this_ptr->base).base.base.base.location.position.z -
                   (pCVar6->base).base.location.position.z;
      fStack_b0 = afStack_1a8[2];
      afStack_ac[(uint)bVar17 * -2] = afStack_1a8[(uint)bVar17 * -2 + 3];
      afStack_ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           afStack_1a8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
      if (0.0 < (this_ptr->base).base.attack_cooldown) {
        fStack_60 = afStack_ac[1] * afStack_ac[1] +
                    fStack_b0 * fStack_b0 + afStack_ac[0] * afStack_ac[0];
        fStack_5c = (float)(((int)fStack_60 >> 1) + g_FastSqrtMagic);
        if (fStack_5c <= 3.0f + (float)0.20000000000000001) break;
      }
      fStack_1c = afStack_ac[1] * afStack_ac[1] +
                  fStack_b0 * fStack_b0 + afStack_ac[0] * afStack_ac[0];
      fStack_58 = (float)(((int)fStack_1c >> 1) + g_FastSqrtMagic);
      pCVar2 = &(this_ptr->base).base.base.model;
      if (3.0f + (float)0.20000000000000001 < fStack_58) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
        if (iVar8 == 0) {
          (*(((this_ptr->base).base.base.base.vtable._ue)->_ue).updateVictim)
                    ((CEnemy *)this_ptr,delta_time);
          if ((this_ptr->base).base.victim != (CCharacter *)0x0) {
            (this_ptr->base).guard_idle = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,1,1);
          }
        }
        else {
          (this_ptr->base).guard_idle = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,1,1);
        }
      }
      else {
        (this_ptr->base).guard_idle = 1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,6,1);
      }
      break;
    case 1:
      pCVar6 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      fStack_194 = (this_ptr->base).base.base.base.location.position.x -
                   (pCVar6->base).base.location.position.x;
      fStack_190 = (this_ptr->base).base.base.base.location.position.y -
                   (pCVar6->base).base.location.position.y;
      fStack_18c = (this_ptr->base).base.base.base.location.position.z -
                   (pCVar6->base).base.location.position.z;
      fStack_188 = fStack_194;
      afStack_1a8[(uint)bVar17 * -2 + 9] = afStack_1a8[(uint)bVar17 * -2 + 6];
      afStack_1a8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
           afStack_1a8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
      fStack_44 = fStack_180 * fStack_180 + fStack_188 * fStack_188 + fStack_184 * fStack_184;
      fStack_50 = (float)(((int)fStack_44 >> 1) + g_FastSqrtMagic);
      if (((fStack_50 <= 3.0f + (float)0.20000000000000001) &&
          (0.0 < (this_ptr->base).base.attack_cooldown)) && ((this_ptr->base).guard_idle == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0,1);
      }
      (*(((this_ptr->base).base.base.base.vtable._ue)->_ue).updateVictim)
                ((CEnemy *)this_ptr,delta_time);
      if ((this_ptr->base).base.victim == (CCharacter *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.base.model.base,0,1);
        }
      }
      else {
        iVar8 = core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930
                          (&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          fStack_3c = 3.0f;
          uVar20._0_4_ = 0.5;
          uVar20._4_4_ = 0.17453292;
          uStack_110 = 0;
          fStack_108 = 3.0f;
          uStack_10c = 0;
          pCVar5 = (this_ptr->base).base.victim;
          path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).base.victim)->base).location.position,path_map,
                             (CVector3f *)uVar20,SUB84(uVar20,4),in_stack_fffffdc8);
          pCVar2 = &(this_ptr->base).base.base.model;
          if (iVar8 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441ff0
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
          }
          else {
            pCVar5 = (this_ptr->base).base.victim;
            fVar21 = (this_ptr->base).base.base.base.location.position.x -
                     (pCVar5->base).location.position.x;
            fVar7 = (this_ptr->base).base.base.base.location.position.z -
                    (pCVar5->base).location.position.z;
            if ((SQRT(fVar7 * fVar7 + fVar21 * fVar21) <= fStack_3c + (float)0.5) &&
               ((this_ptr->base).base.attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,6,1);
              (this_ptr->base).guard_idle = 1;
              sound_sndmain_cpp_killSfx_FUN_00556be0((this_ptr->base).sfx_handle);
              (*((this_ptr->base).base.base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"boneguy-swing?.wav");
              (this_ptr->base).base.attack_cooldown = 1.0;
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffdbc);
      pSVar19 = (SDamageInfo *)&stack0xfffffdbc;
      fVar21 = 0.4;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_ZeroVector,
                 (CMatrix3x4f *)
                 (this_ptr->base).base.base.model.bone_transform.bone_model_matrices[g_INT_007e1620]
                 .m,&CStack_14c);
      pCVar15 = &CStack_158;
      CStack_158.x = CStack_14c.x;
      *(uint *)((int)&CStack_158 + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&CStack_14c + (uint)bVar17 * -8 + 4);
      *(uint *)((int)&CStack_158 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           *(uint *)((int)&CStack_14c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar15,&CStack_134);
      pCVar15 = &CStack_170;
      CStack_170.x = CStack_134.x;
      *(uint *)((int)&CStack_170 + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&CStack_134 + (uint)bVar17 * -8 + 4);
      pCVar18 = (CEnemy *)this_ptr;
      *(uint *)((int)&CStack_170 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           *(uint *)((int)&CStack_134 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(pCVar18,pCVar15,fVar21,pSVar19);
      break;
    case 5:
      if (((this_ptr->base).base.pool_me == 0) &&
         ((this_ptr->base).base.base.base.standing_platform == (CPlatform *)0x0)) {
        (this_ptr->base).base.pool_me = 1;
      }
      break;
    case 6:
      pCVar12 = (this_ptr->base).base.base.carry_hands[1].carry_actor;
      if (pCVar12 == (CDemonActor *)0x0) {
        fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930(pCStack_34)
        ;
        if (((float)0.55000000000000004 < fStack_14) && ((this_ptr->base).base.attack_cooldown <= 0.0)
           ) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_208);
          SStack_208.damage_amount = (this_ptr->base).base.attack_damage;
          pSVar19 = &SStack_208;
          SStack_208.attacker = (CDemonActor *)this_ptr;
          SStack_208.wielder = (CDemonActor *)this_ptr;
          fVar21 = 2.0;
          core_xform_cpp_transformVector3x4_FUN_00583260
                    (&g_ZeroVector,
                     (CMatrix3x4f *)
                     (this_ptr->base).base.base.model.bone_transform.bone_model_matrices
                     [g_INT_007e1628].m,&CStack_164);
          pCVar15 = &CStack_bc;
          CStack_bc.x = CStack_164.x;
          *(uint *)((int)&CStack_bc + (uint)bVar17 * -8 + 4) =
               *(uint *)((int)&CStack_164 + (uint)bVar17 * -8 + 4);
          *(uint *)((int)&CStack_bc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
               *(uint *)((int)&CStack_164 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar15,&CStack_11c);
          pCVar15 = &CStack_74;
          CStack_74.x = CStack_11c.x;
          *(uint *)((int)&CStack_74 + (uint)bVar17 * -8 + 4) =
               *(uint *)((int)&CStack_11c + (uint)bVar17 * -8 + 4);
          pCVar18 = (CEnemy *)this_ptr;
          *(uint *)((int)&CStack_74 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
               *(uint *)((int)&CStack_11c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(pCVar18,pCVar15,fVar21,pSVar19);
          (this_ptr->base).base.attack_cooldown = 2.5;
        }
      }
      else {
        (*((pCVar12->vtable)._ub)->processMeleeHit)(pCVar12,2);
        (this_ptr->base).base.attack_cooldown = 2.5;
      }
    }
    goto switchD_0041a7ec_caseD_3;
  }
  EVar4 = (this_ptr->base).base.base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_00419fef:
      iVar8 = 1;
    }
    else {
LAB_0041a251:
      iVar8 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.base.model.base,iVar8,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_00419fef;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0041a251;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.base.model.accumulated_root_motion.y =
       (this_ptr->base).base.base.model.accumulated_root_motion.z;
  (this_ptr->base).base.base.model.accumulated_root_motion.x =
       (this_ptr->base).base.base.model.accumulated_root_motion.y;
switchD_0041a7ec_caseD_3:
  if (0.0 < (this_ptr->base).base.attack_cooldown) {
    (this_ptr->base).base.attack_cooldown = (this_ptr->base).base.attack_cooldown - delta_time;
  }
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar8 != 0) {
    pCVar5 = (this_ptr->base).base.victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar12 = (*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar12 == (CDemonActor *)this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).base.victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    fStack_104 = (this_ptr->base).base.base.velocity.x * delta_time;
    afStack_100[0] = (this_ptr->base).base.base.velocity.y * delta_time;
    afStack_100[1] = (this_ptr->base).base.base.velocity.z * delta_time;
    fStack_d4 = fStack_104;
    afStack_d0[(uint)bVar17 * -2] = afStack_100[(uint)bVar17 * -2];
    afStack_d0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         afStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    pCVar15 = &(this_ptr->base).base.base.position_delta;
    afStack_100[2] = fStack_d4 + pCVar15->x;
    afStack_100[3] = afStack_d0[0] + (this_ptr->base).base.base.position_delta.y;
    fStack_f0 = afStack_d0[1] + (this_ptr->base).base.base.position_delta.z;
    fStack_ec = afStack_100[2];
    afStack_100[(uint)bVar17 * -2 + 6] = afStack_100[(uint)bVar17 * -2 + 3];
    afStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         afStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    pCVar3 = &(this_ptr->base).base.base.model.accumulated_root_motion;
    afStack_ac[2] = fStack_ec + pCVar3->x;
    afStack_ac[3] = fStack_e8 + (this_ptr->base).base.base.model.accumulated_root_motion.y;
    fStack_9c = fStack_e4 + (this_ptr->base).base.base.model.accumulated_root_motion.z;
    CStack_e0.x = afStack_ac[2];
    *(float *)((int)&CStack_e0 + (uint)bVar17 * -8 + 4) = afStack_ac[(uint)bVar17 * -2 + 3];
    *(float *)((int)&CStack_e0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    (this_ptr->base).base.base.position_delta.z = 0.0;
    (this_ptr->base).base.base.position_delta.y = (this_ptr->base).base.base.position_delta.z;
    pCVar15->x = (this_ptr->base).base.base.position_delta.y;
    (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
    fVar21 = (this_ptr->base).base.base.model.accumulated_root_motion.z;
    (this_ptr->base).base.base.model.accumulated_root_motion.y = fVar21;
    pCVar3->x = fVar21;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_e0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if ((iStack_40 == 1) &&
     (iVar8 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00557170
                        ((double)(this_ptr->base).base.base.base.location.position.x,
                         (double)(this_ptr->base).base.base.base.location.position.y,
                         (double)(this_ptr->base).base.base.base.location.position.z,100.0),
     iVar8 != 0)) {
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700((this_ptr->base).sfx_handle);
    if (iVar8 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    fVar21 = 2.8026e-45;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)fStack_14,(int)fVar21);
    uVar13 = (*((this_ptr->base).base.base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    (this_ptr->base).sfx_handle = uVar13;
    fStack_230 = 6.027454e-39;
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0((this_ptr->base).sfx_handle);
  return;
}
