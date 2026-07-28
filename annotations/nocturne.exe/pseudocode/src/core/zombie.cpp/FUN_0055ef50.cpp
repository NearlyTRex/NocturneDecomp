// Name: core_zombie.cpp_FUN_0055ef50
// Address: 0055ef50
// Address Range: [[0055ef50, 00560ccb]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0055ef50(CZombie *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00560989) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void core_zombie_cpp_FUN_0055ef50(CZombie *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CCharacter *pCVar3;
  CCharacter_full_vtable *pCVar4;
  float fVar5;
  int iVar6;
  CMotionList *pCVar7;
  uint uVar8;
  CDemonActor *pCVar9;
  CVector3f *pCVar10;
  CZombie *pCVar11;
  SMotionTransition *pSVar12;
  CBoundingBox3D *pCVar13;
  CVector3f *pCVar14;
  float *pfVar15;
  SMotion *pSVar16;
  int iVar17;
  CPathMap *pCVar18;
  CDoor *this_ptr;
  int iVar19;
  char *pcVar20;
  char cVar21;
  float10 fVar22;
  float10 fVar23;
  double dVar24;
  char *pcVar25;
  float fVar26;
  char *in_stack_fffffc54;
  CZombie *in_stack_fffffc58;
  float fVar27;
  CZombie *in_stack_fffffc5c;
  CMotionController *this_ptr_00;
  float in_stack_fffffc64;
  byte local_370 [60];
  char local_334 [32];
  CBoundingBox3D local_314;
  CBoundingBox3D local_2fc;
  CBoundingBox3D local_2e4;
  CBoundingBox3D local_2cc;
  CBoundingBox3D local_2b4;
  CVector3f local_29c;
  CVector3f local_290;
  CVector3f local_284 [2];
  CVector3f local_26c;
  UActorVTable local_260;
  float local_25c;
  float local_258;
  char local_254 [4];
  float local_250;
  float local_24c;
  UOrientationVector local_248;
  UOrientationVector local_23c;
  CVector3f local_230;
  UActorVTable local_224;
  float local_220;
  float local_21c;
  byte local_218 [12];
  CVector3f local_20c;
  uint local_200;
  uint local_1fc;
  CMotionList *local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  CVector3f local_1d0;
  CVector3f local_1c4;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  uint local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  CVector3f local_188;
  CVector3f local_17c;
  byte local_170 [12];
  UOrientationVector local_164;
  CVector3f local_158;
  float local_14c;
  float local_148;
  float local_144;
  CVector3f local_140;
  char local_134 [4];
  float local_130;
  float local_12c;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  char local_e0 [8];
  float local_d8;
  UOrientationVector local_d4;
  CVector3f local_c8;
  float local_bc;
  CPlatform *local_b8;
  float local_b4;
  CVector3f local_a4;
  double local_98;
  double local_88;
  byte local_80 [12];
  float local_74;
  float *local_68;
  uint local_5c;
  uint local_58;
  SMotionTransition *local_54;
  CMotionList *local_50;
  CDemonActor *local_4c;
  UActorVTable local_48;
  CMotionList *local_44;
  EActorLifecycleState local_40;
  float local_3c;
  EMotionTransitionCmd local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  CLocation *local_24;
  CDeformableModelInstance *local_20;
  float local_1c;
  SMotionTransition *local_18;
  SMotionTransition *local_14;
  
  iVar6 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = 0;
  pcVar25 = "CHASE_2";
  local_38 = MOTION_CMD_NONE;
  pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&(param_1->base).base.model.motion_controller);
  iVar6 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(pCVar7,pcVar25,iVar6);
  if (iVar6 == 0x16) {
    local_38 = MOTION_CMD_JUMP;
  }
  pCVar3 = (CCharacter *)(param_1->base).base.grabbed_by;
  if (pCVar3 != (CCharacter *)0x0) {
    pCVar4 = (pCVar3->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
              (&(param_1->base).base.model,&local_1d0,0);
    pCVar9 = (*(pCVar4->_uc).getGrabber)(pCVar3);
    if (pCVar9 != (CDemonActor *)0x0) {
      return;
    }
    (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < param_1->pain_cooldown) {
    param_1->pain_cooldown = param_1->pain_cooldown - param_2;
  }
  local_20 = &(param_1->base).base.model;
  local_80._4_4_ = param_2 * (param_1->base).speed;
LAB_0055efe4:
  pCVar2 = local_20;
  if (0.0 < (float)local_80._4_4_) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&local_20->motion_controller,(float *)(local_80 + 4));
    if (uVar8 < 0xb) {
      if (uVar8 < 5) {
        if (uVar8 == 2) {
          pCVar9 = param_1->pickup_target;
          if (pCVar9 != (CDemonActor *)0x0) {
            param_1->pickup_target = (CDemonActor *)0x0;
            iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0
                              (param_1,param_1->object_shape_class);
            if (-1 < iVar6) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                        ((CCharacter *)param_1,iVar6,pCVar9,0.2);
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"%s picked up %s using hand %d\n",param_1,pCVar9,iVar6);
            }
          }
        }
        else {
LAB_0055f021:
          core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,uVar8);
        }
        goto LAB_0055efe4;
      }
      if (uVar8 < 6) {
        if ((param_1->base).victim != (CCharacter *)0x0) {
          local_74 = 1.3f;
          local_290.x = 0.0;
          local_290.y = 0.0;
          local_290.z = 1.3f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)param_1,&local_26c,&local_290);
          pCVar3 = (param_1->base).victim;
          local_1a0 = local_26c.x - (pCVar3->base).location.position.x;
          local_198 = local_26c.z - (pCVar3->base).location.position.z;
          local_19c = 0;
          if (SQRT(local_198 * local_198 + local_1a0 * local_1a0) <= 1.0) {
            local_188.y = 4.0;
            local_188.x = 0.0;
            local_188.z = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)param_1,&local_230,&local_188);
            pCVar3 = (param_1->base).victim;
            local_158.x = (pCVar3->base).location.position.x;
            local_158.z = (pCVar3->base).location.position.z;
            local_158.y = local_230.y;
            core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)param_1);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                      (0x01E57284,&((param_1->base).victim)->base);
            iVar6 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                              (0x01E57284,&local_230,&local_158);
            core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
            if ((iVar6 != 0) ||
               (pCVar3 = (param_1->base).victim,
               pCVar9 = (*((pCVar3->base).vtable._ub)->dtor)(&pCVar3->base,(uint)param_1),
               pCVar9 != (CDemonActor *)0x0)) {
              if (iVar6 != 0) {
                core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
              }
              goto LAB_0055efe4;
            }
          }
        }
        core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        goto LAB_0055efe4;
      }
      if (uVar8 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,uVar8);
        goto LAB_0055efe4;
      }
      if ((param_1->base).victim != (CCharacter *)0x0) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (local_20,&local_29c,param_1->bone_indices[0]);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_248.vec,pCVar10);
        if (param_1->part_indices[4] < 0) {
          pCVar3 = (param_1->base).victim;
          fVar27 = local_248.vec.x - (pCVar3->base).location.position.x;
          fVar5 = local_248.vec.z - (pCVar3->base).location.position.z;
          if ((float)1.5 < SQRT(fVar5 * fVar5 + fVar27 * fVar27)) {
            core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
            goto LAB_0055efe4;
          }
        }
        else {
          pCVar3 = (param_1->base).victim;
          pCVar11 = (CZombie *)
                    (*(((pCVar3->base).vtable._uc)->_uc).applyDamage)
                              (pCVar3,(int)in_stack_fffffc54,(float)in_stack_fffffc58);
          if (pCVar11 != param_1) {
            in_stack_fffffc58 = (CZombie *)0x55f2ba;
            in_stack_fffffc5c = param_1;
            core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
            goto LAB_0055efe4;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffc54);
        pSVar12 = (SMotionTransition *)
                  core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41700000,0x41c80000);
        pCVar3 = (param_1->base).victim;
        local_14 = pSVar12;
        (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                  (pCVar3,(CDemonActor *)&stack0xfffffc54,(int)in_stack_fffffc54);
        local_98 = (double)(float)pSVar12;
        if (0.0 < local_98) {
          fVar27 = 7.893363e-39;
          dVar24 = round(local_98 * 2.5 * 0.25);
          local_80._0_4_ = (uint)ROUND(dVar24);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                    ((CGore *)INT_005b96c4,&local_248.vec,(CVector3f *)0x0,local_80._0_4_,
                     (int)fVar27);
        }
        pCVar3 = (param_1->base).victim;
        in_stack_fffffc54 = (char *)0x55f3ae;
        iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
        if (0 < iVar6) {
          pCVar3 = (param_1->base).victim;
          (*((pCVar3->base).vtable._ub)->archive)(&pCVar3->base);
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
        in_stack_fffffc58 = (CZombie *)0x55f3e3;
        in_stack_fffffc5c = param_1;
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"ghoul-eat-?.wav");
        goto LAB_0055efe4;
      }
      core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
    }
    else if (uVar8 < 0xc) {
      iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,2);
      if (iVar6 < 0) {
        PTR_01cc4800 = "..\\core\\zombie.cpp";
        INT_01cc4804 = 0x1ee;
        core_main_c_FUN_004c8440("WTF!");
      }
      pCVar9 = (param_1->base).base.carry_hands[iVar6].carry_actor;
      if (pCVar9 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s lugging %s\n",param_1,pCVar9);
        local_14c = 0.0;
        local_148 = 6.0;
        local_144 = 17.0;
        (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
        in_stack_fffffc54 = "zom-h0?.wav";
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"zom-h0?.wav");
      }
    }
    else if (uVar8 < 0xd) {
      iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,3);
      if (iVar6 < 0) {
        PTR_01cc4800 = "..\\core\\zombie.cpp";
        INT_01cc4804 = 0x205;
        core_main_c_FUN_004c8440("WTF!");
      }
      pCVar9 = (param_1->base).base.carry_hands[iVar6].carry_actor;
      if (pCVar9 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s tossing %s\n",param_1,pCVar9);
        local_23c.vec.x = 0.0;
        local_23c.vec.y = 0.0;
        local_23c.vec.z = 1.0;
        if ((param_1->base).victim != (CCharacter *)0x0) {
          pCVar9 = (param_1->base).base.carry_hands[iVar6].carry_actor;
          pCVar13 = (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,&local_2e4);
          local_224 = (UActorVTable)((pCVar13->min).x + (pCVar13->max).x);
          local_220 = (pCVar13->min).y + (pCVar13->max).y;
          local_ec.x = (float)local_224 * 0.5f;
          local_21c = (pCVar13->min).z + (pCVar13->max).z;
          local_ec.y = local_220 * 0.5f;
          local_ec.z = local_21c * 0.5f;
          pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              ((param_1->base).base.carry_hands[iVar6].carry_actor,&local_c8,
                               &local_ec);
          pCVar3 = (param_1->base).victim;
          pCVar13 = (*((pCVar3->base).vtable._ub)->getBoundingBox)(&pCVar3->base,&local_314);
          local_1dc = (pCVar13->min).x + (pCVar13->max).x;
          local_1d8 = (pCVar13->min).y + (pCVar13->max).y;
          local_f8.x = local_1dc * 0.5f;
          local_1d4 = (pCVar13->min).z + (pCVar13->max).z;
          local_f8.y = local_1d8 * 0.5f;
          local_f8.z = local_1d4 * 0.5f;
          in_stack_fffffc5c = (CZombie *)&stack0xffffff50;
          in_stack_fffffc58 = (CZombie *)(param_1->base).victim;
          pCVar14 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              ((CDemonActor *)in_stack_fffffc58,(CVector3f *)in_stack_fffffc5c,
                               &local_f8);
          local_1e8 = pCVar14->x - pCVar10->x;
          local_1e4 = pCVar14->y - pCVar10->y;
          local_1e0 = pCVar14->z - pCVar10->z;
          local_2c = SQRT(local_1e0 * local_1e0 + local_1e8 * local_1e8 + local_1e4 * local_1e4);
          if (0.0 < local_2c) {
            in_stack_fffffc5c = (CZombie *)(local_284 + 1);
            in_stack_fffffc58 = param_1;
            pfVar15 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220();
            fVar27 = 1.0 / local_2c;
            local_d4.vec.x = *pfVar15 * fVar27;
            local_d4.vec.y = pfVar15[1] * fVar27;
            local_d4.vec.z = fVar27 * pfVar15[2];
            if (&local_23c != &local_d4) {
              local_23c.vec.x = local_d4.vec.x;
              local_23c.vec.y = local_d4.vec.y;
              local_23c.vec.z = local_d4.vec.z;
            }
          }
        }
        local_23c.vec.x = local_23c.vec.x * 27.0f;
        local_23c.vec.z = local_23c.vec.z * 27.0f;
        local_23c.vec.y = local_23c.vec.y * 27.0f + 5.0f;
        (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
        in_stack_fffffc54 = "zom-h0?.wav";
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"zom-h0?.wav");
      }
    }
    else if (uVar8 < 0xe) {
      if (param_1->target_door != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00456220(param_1->target_door,0.3);
        (*((param_1->target_door->base).vtable._ub)->playSound)
                  (&param_1->target_door->base,"zombie-bang-door?.wav");
        param_1->target_door = (CDoor *)0x0;
      }
    }
    else {
      if (uVar8 < 0x65) goto LAB_0055f021;
      if (uVar8 < 0x66) {
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"fall-?.wav");
      }
      else if (uVar8 == 0x29a) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (pCVar2,&local_11c,param_1->bone_indices[0]);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_104,pCVar10);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                  ((CGore *)INT_005b96c4,&local_104,(CVector3f *)0x0,3,0);
        iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
        if (iVar6 == 0) {
          pcVar25 = "ghoul-dig-?.wav";
        }
        else {
          pcVar25 = "ghoul-eat-?.wav";
        }
        pcVar20 = local_334;
        do {
          cVar21 = *pcVar25;
          *pcVar20 = cVar21;
          if (cVar21 == '\0') break;
          cVar21 = pcVar25[1];
          pcVar25 = pcVar25 + 2;
          pcVar20[1] = cVar21;
          pcVar20 = pcVar20 + 2;
        } while (cVar21 != '\0');
        (*((param_1->base).base.base.vtable._ub)->playSound)((CDemonActor *)param_1,local_334);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,uVar8);
      }
    }
    goto LAB_0055efe4;
  }
  fVar27 = (param_1->base).speed;
  fVar26 = (float)3.1415926535000001;
  fVar5 = (float)0.5;
  iVar6 = param_1->part_indices[3];
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.turn_speed = param_2 * fVar26 * fVar27 * fVar5;
  if (((((param_1->base).base.model.part_data.visibility_flags[iVar6] == 0) &&
       ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[1]] == 0)) ||
      ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[6]] == 0)) &&
     ((0.0 <= param_1->bleedout_timer &&
      (fVar27 = param_1->bleedout_timer + param_2, param_1->bleedout_timer = fVar27,
      (float)6 <= fVar27)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)local_370);
    local_370._4_4_ = 9999.9;
    local_370._52_4_ = param_1;
    local_370._56_4_ = param_1;
    (*(((param_1->base).base.base.vtable._uc)->_uc).getGrabbed)
              ((CCharacter *)param_1,(CDemonActor *)local_370,(int)in_stack_fffffc54);
    param_1->bleedout_timer = -1.0;
  }
  pCVar11 = (CZombie *)&(param_1->base).base.model;
  pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                      ((CMotionController *)pCVar11);
  iVar6 = pSVar16->state_index;
  local_48._ub = (CDemonActor_vtable *)0x0;
  iVar17 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar17 == 0) {
    local_34 = -1.0;
    local_4c = (CDemonActor *)0x3e99999a;
    pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        ((CMotionController *)pCVar11);
    uVar8 = pSVar16->state_index;
    if (uVar8 < 8) {
      if (uVar8 == 0) {
        iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(param_2 * (float)0.125);
        if (iVar6 != 0) {
          iVar6 = 0;
          pcVar25 = "pickass";
          pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                             (&(param_1->base).base.model.motion_controller);
          iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar7,pcVar25,iVar6);
          if (-1 < iVar6) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).base.model.motion_controller,0x10,1);
            goto LAB_0055fc6b;
          }
        }
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
        if (iVar6 != 0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
        (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)param_1,(int)param_2,(CVector3f *)in_stack_fffffc54);
        if (((param_1->base).victim == (CCharacter *)0x0) && (local_38 != MOTION_CMD_NONE)) {
          in_stack_fffffc58 = (CZombie *)0x56023e;
          iVar6 = (**(code **)(*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x14c) + 0x104))()
          ;
          if (iVar6 == 0) goto LAB_0055fc6b;
          *(uint *)(0x01C775EC + 0x220) = 1;
          (param_1->base).victim = *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        }
        if ((param_1->base).victim != (CCharacter *)0x0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
          in_stack_fffffc58 = (CZombie *)0x5601d8;
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
          if (iVar6 == 0) {
            if (param_1->is_female == 0) {
              in_stack_fffffc54 = (char *)0x56027e;
              in_stack_fffffc58 = param_1;
              uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"zom-a0?.wav");
              param_1->sfx_handles[1] = uVar8;
            }
            else {
              in_stack_fffffc54 = (char *)0x5601ff;
              in_stack_fffffc58 = param_1;
              uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"f-zombie-alert?.wav");
              param_1->sfx_handles[1] = uVar8;
            }
          }
        }
      }
      else if (uVar8 < 2) {
        pCVar3 = (param_1->base).victim;
        (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)param_1,(int)param_2,(CVector3f *)in_stack_fffffc54);
        if (((param_1->base).victim == (CCharacter *)0x0) && (local_38 != MOTION_CMD_NONE)) {
          in_stack_fffffc5c = *(CZombie **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          in_stack_fffffc58 = (CZombie *)0x5602d1;
          iVar6 = (*(((in_stack_fffffc5c->base).base.base.vtable._uc)->_uc).releaseFromGrab)();
          if (iVar6 != 0) {
            *(uint *)(0x01C775EC + 0x220) = 1;
            (param_1->base).victim = *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          }
        }
        if ((param_1->base).victim == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).base.model.motion_controller,0,1);
          }
        }
        else if (pCVar3 == (CCharacter *)0x0) {
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
          if (iVar6 == 0) {
            if (param_1->is_female == 0) {
              pcVar25 = "zom-a0?.wav";
            }
            else {
              pcVar25 = "f-zombie-alert?.wav";
            }
            uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)param_1,pcVar25);
            param_1->sfx_handles[1] = uVar8;
          }
LAB_0056033e:
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
        else {
          cVar21 = (param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[1]]
                   != 0;
          if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[3]] != 0)
          {
            cVar21 = cVar21 + '\x01';
          }
          (param_1->base).base.model.accumulated_root_motion.z = 0.0;
          (param_1->base).base.model.accumulated_root_motion.y =
               (param_1->base).base.model.accumulated_root_motion.z;
          (param_1->base).base.model.accumulated_root_motion.x =
               (param_1->base).base.model.accumulated_root_motion.y;
          iVar6 = core_zombie_cpp_FUN_00561010(param_1,param_2);
          if (iVar6 == 0) {
            local_50 = (CMotionList *)1.3f;
            local_40 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,1);
            if (((-1 < (int)local_40) &&
                (pCVar9 = (param_1->base).base.carry_hands[local_40].carry_actor,
                pCVar9 != (CDemonActor *)0x0)) && (param_1->object_shape_class == 1)) {
              local_44 = (CMotionList *)0x3f800000;
              if (pCVar9 != (CDemonActor *)0x0) {
                pCVar13 = (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,&local_2cc);
                local_14 = (SMotionTransition *)&pCVar13->max;
                in_stack_fffffc58 = (CZombie *)&local_194;
                in_stack_fffffc54 = (char *)0x560450;
                core_actor_cpp_CVector_ctor_FUN_0040e160();
                local_194 = (float)local_14->desired_state - (pCVar13->min).x;
                local_190 = (float)local_14->cmd - (pCVar13->min).y;
                local_18c = (float)local_14->to_motion_number - (pCVar13->min).z;
                local_44 = (CMotionList *)(local_18c * (float)0.5 + 1.0);
              }
              local_50 = local_44;
            }
            fVar27 = 0.34906584;
            pCVar10 = (CVector3f *)0x3f8ccccd;
            local_200 = 0;
            local_1f8 = local_50;
            local_1fc = 0;
            pCVar3 = (param_1->base).victim;
            pCVar18 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                              ((CCharacter *)param_1,
                               &(((param_1->base).victim)->base).location.position,pCVar18,pCVar10,
                               fVar27,(float)in_stack_fffffc54);
            pCVar2 = &(param_1->base).base.model;
            if (iVar6 < 0) {
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n");
              in_stack_fffffc54 = (char *)0x1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,0,1);
            }
            else if (iVar6 < 1) {
              in_stack_fffffc54 = (char *)param_1->object_shape_class;
              iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0
                                (param_1,(int)in_stack_fffffc54);
              pCVar3 = (param_1->base).victim;
              local_1ac = (param_1->base).base.base.location.position.x -
                          (pCVar3->base).location.position.x;
              local_1a8 = (param_1->base).base.base.location.position.y -
                          (pCVar3->base).location.position.y;
              local_1a4 = (param_1->base).base.base.location.position.z -
                          (pCVar3->base).location.position.z;
              if (SQRT(local_1a4 * local_1a4 + local_1ac * local_1ac + local_1a8 * local_1a8) <
                  (float)20) {
                in_stack_fffffc54 =
                     (char *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                       ((CDemonActor *)param_1,&local_20c,
                                        &(((param_1->base).victim)->base).location.position);
                iVar17 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_218)
                ;
                if (((ABS(*(float *)(iVar17 + 4)) < (float)0.261799387791667) && (-1 < iVar6)) &&
                   (uVar8 = param_1->object_shape_class, 1 < uVar8)) {
                  if (uVar8 < 3) {
                    if ((param_1->base).base.carry_hands[iVar6].carry_actor != (CDemonActor *)0x0) {
                      engine_console_cpp_CConsole_printf_FUN_0043ac60
                                (PTR_DAT_005ad350,"%s lugging\n");
                      in_stack_fffffc54 = (char *)0x1;
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                (&pCVar2->motion_controller,0xd,1);
                    }
                  }
                  else if ((uVar8 == 3) &&
                          ((param_1->base).base.carry_hands[iVar6].carry_actor != (CDemonActor *)0x0
                          )) {
                    engine_console_cpp_CConsole_printf_FUN_0043ac60
                              (PTR_DAT_005ad350,"%s tossing\n");
                    in_stack_fffffc54 = (char *)0x1;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                              (&pCVar2->motion_controller,0xb,1);
                  }
                }
              }
            }
            else if ((cVar21 != '\0') && ((param_1->base).attack_cooldown <= 0.0)) {
              in_stack_fffffc54 = (char *)(param_1->base).victim;
              iVar6 = (*(((((CZombie *)in_stack_fffffc54)->base).base.base.vtable._uc)->_uc).
                        applyDamage)((CCharacter *)in_stack_fffffc54,(int)in_stack_fffffc58,
                                     (float)in_stack_fffffc5c);
              if (iVar6 == 0) {
                if (((int)local_40 < 0) ||
                   ((param_1->base).base.carry_hands[local_40].carry_actor == (CDemonActor *)0x0)) {
                  if ((local_38 == MOTION_CMD_NONE) ||
                     (pCVar3 = (param_1->base).victim,
                     iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3),
                     iVar6 == 0)) {
                    in_stack_fffffc64 = 1.4013e-45;
                    fVar27 = 4.2039e-45;
                    this_ptr_00 = &(param_1->base).base.model.motion_controller;
                  }
                  else {
                    iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
                    this_ptr_00 = &(param_1->base).base.model.motion_controller;
                    if (iVar6 == 0) {
                      in_stack_fffffc64 = 1.4013e-45;
                      fVar27 = 3.50325e-44;
                    }
                    else {
                      in_stack_fffffc64 = 1.4013e-45;
                      fVar27 = 3.36312e-44;
                    }
                  }
                }
                else {
                  fVar27 = 1.4013e-45;
                  this_ptr_00 = (CMotionController *)0x2;
                }
                in_stack_fffffc58 = (CZombie *)0x560548;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (this_ptr_00,(int)fVar27,(int)in_stack_fffffc64);
                (param_1->base).attack_cooldown = 0.8;
              }
            }
          }
        }
      }
      else if (uVar8 < 3) {
        if ((param_1->base).victim == (CCharacter *)0x0) {
LAB_00560776:
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
        else {
          iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,1);
          if (((-1 < iVar6) &&
              (pCVar3 = (param_1->base).victim,
              iVar17 = (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3), iVar17 < 1))
             && ((param_1->base).base.carry_hands[iVar6].carry_actor != (CDemonActor *)0x0)) {
            in_stack_fffffc54 = (char *)(param_1->base).victim;
            iVar17 = (*(((((CZombie *)in_stack_fffffc54)->base).base.base.vtable._uc)->_uc).
                       applyDamage)((CCharacter *)in_stack_fffffc54,(int)in_stack_fffffc58,
                                    (float)in_stack_fffffc5c);
            if (iVar17 == 0) {
              pCVar9 = (param_1->base).base.carry_hands[iVar6].carry_actor;
              local_3c = 1.0;
              if (pCVar9 != (CDemonActor *)0x0) {
                in_stack_fffffc58 = (CZombie *)0x560820;
                pCVar13 = (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,&local_2fc);
                local_68 = &local_1f4;
                core_actor_cpp_CVector_ctor_FUN_0040e160();
                local_1f4 = (pCVar13->max).x - (pCVar13->min).x;
                local_1f0 = (pCVar13->max).y - (pCVar13->min).y;
                local_1ec = (pCVar13->max).z - (pCVar13->min).z;
                local_3c = local_68[2] * (float)0.5 + local_3c;
              }
              local_34 = local_3c;
              local_54 = (SMotionTransition *)
                         core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                   (&(param_1->base).base.model.motion_controller);
              local_88 = (double)(float)local_54;
              local_14 = local_54;
              if ((1.0 <= local_88) && (local_88 <= 2)) {
                local_48 = (UActorVTable)0x1;
              }
              goto LAB_0055fc6b;
            }
          }
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s gave up swing\n",param_1);
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
      }
      else if (uVar8 == 3) {
        pCVar3 = (param_1->base).victim;
        if ((pCVar3 == (CCharacter *)0x0) ||
           (iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3), 0 < iVar6))
        goto LAB_0056033e;
        in_stack_fffffc54 = (char *)(param_1->base).victim;
        pCVar11 = (CZombie *)
                  (*(((((CZombie *)in_stack_fffffc54)->base).base.base.vtable._uc)->_uc).applyDamage
                  )((CCharacter *)in_stack_fffffc54,(int)in_stack_fffffc58,(float)in_stack_fffffc5c)
        ;
        if (pCVar11 == (CZombie *)0x0) {
          local_34 = 1.3f;
          local_4c = (CDemonActor *)0x40400000;
        }
        else if (pCVar11 != param_1) goto LAB_00560776;
      }
    }
    else if (uVar8 < 9) {
      if (((param_1->base).pool_me == 0) &&
         ((param_1->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            ((CDeformableModelInstance *)pCVar11,&local_a4,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_1c4,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_1c4,0);
        (param_1->base).pool_me = 1;
      }
    }
    else {
      pCVar1 = &(param_1->base).base.base.location;
      if (uVar8 < 0x18) {
        if (0xd < uVar8) {
          if (uVar8 < 0xf) {
            iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                              (0x01C03A10,param_1->rise_from_grave_condition);
            if ((iVar6 != 0) &&
               (fVar27 = param_1->rise_delay - param_2, param_1->rise_delay = fVar27, fVar27 < 0.0))
            {
              iVar6 = 0;
              local_28 = 0.0;
              param_1->rise_delay = param_1->rise_delay + 1.0;
              local_24 = pCVar1;
              for (; (int)local_28 < (int)0x01E57284->actors[0x6d6];
                  local_28 = (float)((int)local_28 + 1)) {
                iVar17 = *(int *)((int)0x01E57284->actors + iVar6 + 0x1b5c);
                iVar19 = (**(code **)(*(int *)(iVar17 + 0x14c) + 0xdc))(iVar17,param_1);
                if (iVar19 != 0) {
                  local_1b8 = *(float *)(iVar17 + 0x20) - (local_24->position).x;
                  local_1b4 = *(float *)(iVar17 + 0x24) - (local_24->position).y;
                  local_1b0 = *(float *)(iVar17 + 0x28) - (local_24->position).z;
                  if ((ABS(local_1b4) <= (float)10) &&
                     (local_1b4 = 0.0,
                     SQRT(local_1b0 * local_1b0 + local_1b8 * local_1b8) <=
                     (param_1->base).guard_distance)) {
                    engine_console_cpp_CConsole_printf_FUN_0043ac60
                              (PTR_DAT_005ad350,"%s rising from the grave\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                              (&(param_1->base).base.model.motion_controller,0xf,1);
                    if ((CGrave *)param_1->grave_actor != (CGrave *)0x0) {
                      core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0
                                ((CGrave *)param_1->grave_actor);
                      param_1->grave_actor = (CDemonActor *)0x0;
                    }
                    (param_1->base).guard_distance = 100.0;
                    break;
                  }
                }
                iVar6 = iVar6 + 4;
              }
            }
          }
          else if (uVar8 == 0x14) {
            (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                      ((CCharacter *)param_1,(int)param_2,(CVector3f *)in_stack_fffffc54);
            pCVar3 = (param_1->base).victim;
            if (((pCVar3 != (CCharacter *)0x0) &&
                (fVar27 = (pCVar1->position).x - (pCVar3->base).location.position.x,
                fVar5 = (param_1->base).base.base.location.position.z -
                        (pCVar3->base).location.position.z,
                SQRT(fVar5 * fVar5 + fVar27 * fVar27) <= (float)3)) &&
               (ABS((param_1->base).base.base.location.position.y -
                    (pCVar3->base).location.position.y) <= (float)2)) {
              in_stack_fffffc58 = (CZombie *)0x0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)pCVar11,0,1);
              in_stack_fffffc54 = (char *)pCVar11;
            }
          }
        }
      }
      else if ((uVar8 < 0x19) || (uVar8 < 0x1a)) {
        iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6);
        if ((iVar6 == 0) &&
           ((*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                      ((CCharacter *)param_1,(int)param_2,(CVector3f *)in_stack_fffffc54),
           (param_1->base).victim != (CCharacter *)0x0)) {
LAB_0055fd59:
          in_stack_fffffc58 = (CZombie *)0x0;
          in_stack_fffffc54 = (char *)&(param_1->base).base.model;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)in_stack_fffffc54,0,1);
        }
      }
      else if ((uVar8 == 0x1c) &&
              (fVar27 = param_1->buried_timer - param_2, param_1->buried_timer = fVar27,
              fVar27 <= 0.0)) {
        pCVar4 = (param_1->base).base.base.vtable._uc;
        param_1->buried_timer = 0.0;
        (*(pCVar4->_uc).dropCarriedObject)
                  ((CCharacter *)param_1,(int)param_2,(CVector3f *)in_stack_fffffc54);
        pCVar3 = (param_1->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          local_254 = (char  [4])((pCVar1->position).x - (pCVar3->base).location.position.x);
          local_250 = (param_1->base).base.base.location.position.y -
                      (pCVar3->base).location.position.y;
          local_24c = (param_1->base).base.base.location.position.z -
                      (pCVar3->base).location.position.z;
          if (local_134 != local_254) {
            local_134 = local_254;
            local_130 = local_250;
            local_12c = local_24c;
          }
          local_1c = local_12c * local_12c +
                     (float)local_134 * (float)local_134 + local_130 * local_130;
          local_5c = ((int)local_1c >> 1) + (int)CVector3f_01c70708.y;
          if ((float)local_5c <= (float)8) {
            local_30 = (param_1->base).base.collision_cylinder_top;
            if (local_30 < (param_1->base).base.collision_cylinder_bottom) {
              local_30 = (param_1->base).base.model.bounding_box.max.y;
            }
            if (local_30 < (param_1->base).base.collision_cylinder_bottom) {
              local_30 = (param_1->base).base.collision_cylinder_bottom + (float)0.5;
            }
            iVar6 = 0;
            do {
              local_80._8_4_ = (float)iVar6 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (SMotionTransition *)iVar6;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)param_1);
              fVar22 = (float10)fcos((float10)(float)local_80._8_4_);
              fVar23 = (float10)fsin((float10)(float)local_80._8_4_);
              in_stack_fffffc54 = (char *)(param_1->base).base.collision_cylinder_radius;
              local_18 = (SMotionTransition *)
                         core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                                   (0x01E57284,(param_1->base).base.base.location.position.x,
                                    (param_1->base).base.base.location.position.z,
                                    (float)(fVar23 * (float10)0.050000000000000003),
                                    (float)(fVar22 * (float10)0.050000000000000003));
              in_stack_fffffc58 = (CZombie *)0x55ff11;
              local_14 = local_18;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              if ((float)local_18 < 1.0) break;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 4);
            if (3 < iVar6) goto LAB_0055fd59;
            param_1->buried_timer = 3.0;
            (param_1->base).victim = (CCharacter *)0x0;
          }
        }
      }
    }
LAB_0055fc6b:
    if ((0.0 <= local_34) && ((param_1->base).victim != (CCharacter *)0x0)) {
      fVar27 = (param_1->base).speed;
      fVar5 = (float)1.57079632675;
      fVar26 = 0.7853982;
      pCVar10 = (CVector3f *)0x40400000;
      (param_1->base).base.walk_step_speed = (float)local_4c * (param_1->base).speed * param_2;
      (param_1->base).base.turn_speed = param_2 * fVar27 * fVar5;
      local_e0[0] = '\0';
      local_e0[1] = '\0';
      local_e0[2] = '\0';
      local_e0[3] = '\0';
      local_d8 = local_34;
      local_e0[4] = '\0';
      local_e0[5] = '\0';
      local_e0[6] = '\0';
      local_e0[7] = '\0';
      pCVar3 = (param_1->base).victim;
      pCVar18 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        ((CCharacter *)param_1,&(((param_1->base).victim)->base).location.position,
                         pCVar18,pCVar10,fVar26,(float)in_stack_fffffc54);
      if (iVar6 != 1) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s giving up attack\n");
        in_stack_fffffc54 = (char *)param_1;
        core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        (param_1->base).base.turn_angle_accumulator = 0.0;
      }
    }
  }
  else {
    uVar8 = (param_1->base).base.is_walking;
    if (uVar8 < 2) {
      if (uVar8 == 1) {
LAB_0055f986:
        if (iVar6 != 1) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
      }
      else {
LAB_0055fc2f:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0,1);
      }
    }
    else {
      if (uVar8 < 3) goto LAB_0055f986;
      if (uVar8 != 3) goto LAB_0055fc2f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
    }
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.model.accumulated_root_motion.x =
         (param_1->base).base.model.accumulated_root_motion.y;
  }
  if (0.0 < (param_1->base).attack_cooldown) {
    (param_1->base).attack_cooldown = (param_1->base).attack_cooldown - param_2;
  }
  pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                      (&(param_1->base).base.model.motion_controller);
  pCVar10 = &(param_1->base).base.model.accumulated_root_motion;
  iVar6 = pSVar16->state_index;
  if (iVar6 == 0xe) {
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  }
  else {
    if (iVar6 != 0xf) {
      iVar17 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)param_1);
      if (iVar17 != 0) {
        pCVar3 = (param_1->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (pCVar11 = (CZombie *)
                      (*(((pCVar3->base).vtable._uc)->_uc).applyDamage)
                                (pCVar3,(int)in_stack_fffffc54,(float)in_stack_fffffc58),
           pCVar11 == param_1)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (0x01E57284,&((param_1->base).victim)->base);
        }
        (param_1->base).base.velocity.y =
             (param_1->base).base.velocity.y - param_2 * (float)32;
        local_260 = (UActorVTable)((param_1->base).base.velocity.x * param_2);
        local_25c = (param_1->base).base.velocity.y * param_2;
        pCVar10 = &(param_1->base).base.position_delta;
        local_258 = param_2 * (param_1->base).base.velocity.z;
        pCVar14 = &(param_1->base).base.model.accumulated_root_motion;
        local_110 = (float)local_260 + pCVar10->x;
        local_10c = local_25c + (param_1->base).base.position_delta.y;
        local_108 = local_258 + (param_1->base).base.position_delta.z;
        local_284[0].x = local_110 + pCVar14->x;
        local_284[0].y = local_10c + (param_1->base).base.model.accumulated_root_motion.y;
        local_284[0].z = local_108 + (param_1->base).base.model.accumulated_root_motion.z;
        (param_1->base).base.position_delta.z = 0.0;
        (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
        pCVar10->x = (param_1->base).base.position_delta.y;
        (param_1->base).base.model.accumulated_root_motion.z = 0.0;
        fVar27 = (param_1->base).base.model.accumulated_root_motion.z;
        (param_1->base).base.model.accumulated_root_motion.y = fVar27;
        pCVar14->x = fVar27;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,local_284);
        if ((iVar6 == 1) &&
           (this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040d890
                                          (DAT_00765a9c,g_CDoorActorType_01af4e9c.name_hash),
           local_58 = this_ptr, this_ptr != (CDoor *)0x0)) {
          pCVar13 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                              ((CDemonActor *)this_ptr,&local_2b4);
          local_bc = (pCVar13->min).x + (pCVar13->max).x;
          local_b8 = (CPlatform *)((pCVar13->min).y + (pCVar13->max).y);
          local_164.vec.x = local_bc * 0.5f;
          local_164.vec.y = (float)local_b8 * 0.5f;
          local_b4 = (pCVar13->min).z + (pCVar13->max).z;
          local_164.vec.z = local_b4 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)this_ptr,&local_17c,&local_164.vec);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                    ((CDemonActor *)param_1,&local_140,&local_17c);
          iVar17 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
          if (ABS(*(float *)(iVar17 + 4)) < (float)0.34906585038888899) {
            iVar17 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
            iVar19 = 0x12;
            if (iVar17 != 0) {
              iVar19 = 0x13;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).base.model.motion_controller,iVar19,1);
            param_1->target_door = (CDoor *)local_58;
          }
        }
      }
      goto LAB_0055fa02;
    }
    pfVar15 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                 (param_1,local_170,pCVar10);
    pCVar1 = &(param_1->base).base.base.location;
    (pCVar1->position).x = *pfVar15 + (pCVar1->position).x;
    (param_1->base).base.base.location.position.y =
         pfVar15[1] + (param_1->base).base.base.location.position.y;
    (param_1->base).base.base.location.position.z =
         pfVar15[2] + (param_1->base).base.base.location.position.z;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  }
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  pCVar10->x = (param_1->base).base.model.accumulated_root_motion.y;
LAB_0055fa02:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  if (iVar6 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
              (&(param_1->base).base.model);
    core_charactr_cpp_FUN_0042a150(param_1,param_2);
  }
  if ((param_1->base).pool_me == 0) {
    iVar6 = param_1->part_indices[5];
    if ((param_1->base).base.model.part_data.visibility_flags[iVar6] == 0) {
      iVar17 = param_1->bone_indices[10];
      fVar27 = 0.5;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,param_1->part_indices[0],param_1->bone_indices[5],0x3e4ccccd);
      if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,param_1->part_indices[1],param_1->bone_indices[3],0x3e4ccccd);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,param_1->part_indices[2],param_1->bone_indices[6],0x3e4ccccd);
      if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,param_1->part_indices[3],param_1->bone_indices[4],0x3e4ccccd);
      }
      iVar17 = param_1->bone_indices[0];
      fVar27 = 0.7;
      iVar6 = param_1->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990
              ((CCharacter *)param_1,iVar6,iVar17,fVar27);
    if ((param_1->part_indices[4] < 0) &&
       ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[5]] != 0)) {
      (param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[5]] = 0;
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,param_1->part_indices[5],param_1->bone_indices[10],0x3e4ccccd);
      (param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[5]] = 1;
    }
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0((CCharacter *)param_1);
  }
  iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,1);
  if (((local_48._ub != (CDemonActor_vtable *)0x0) && (-1 < iVar6)) &&
     (pCVar9 = (param_1->base).base.carry_hands[iVar6].carry_actor, pCVar9 != (CDemonActor *)0x0)) {
    (*((pCVar9->vtable)._ub)->processMeleeHit)(pCVar9,2);
    return;
  }
  return;
}
