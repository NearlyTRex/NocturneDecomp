// Name: core_zombie.cpp_CZombie_process_FUN_0055ef50
// Address: 0055ef50
// Address Range: [[0055ef50, 00560ccb]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_process_FUN_0055ef50(CZombie *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00560989) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombie_cpp_CZombie_process_FUN_0055ef50(CZombie *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CCharacter *pCVar3;
  CCharacter_full_vtable *pCVar4;
  CEnemy_full_vtable *pCVar5;
  int iVar6;
  CMotionList *pCVar7;
  uint uVar8;
  int iVar9;
  CVector3f *pCVar10;
  CZombie *pCVar11;
  EDeathState EVar12;
  CBoundingBox3D *pCVar13;
  CVector3f *pCVar14;
  SMotion *pSVar15;
  CPathMap *pCVar16;
  CDemonActor *pCVar17;
  CDoor *this_ptr;
  int iVar18;
  char *pcVar19;
  char cVar20;
  float10 fVar21;
  float10 fVar22;
  double dVar23;
  char *pcVar24;
  float fVar25;
  float fVar26;
  float max_distance;
  float fVar27;
  SDamageInfo local_3ac;
  SDamageInfo local_370;
  char local_334 [32];
  CBoundingBox3D local_314;
  CBoundingBox3D local_2fc;
  CBoundingBox3D local_2e4;
  CBoundingBox3D local_2cc;
  CBoundingBox3D local_2b4;
  CVector3f local_29c;
  CVector3f local_290;
  CVector3f local_284;
  CVector3f local_278;
  CVector3f local_26c;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  CVector3f local_248;
  CVector3f local_23c;
  CVector3f local_230;
  float local_224;
  float local_220;
  float local_21c;
  CVector3f local_218;
  CVector3f local_20c;
  CVector3f local_200;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  CVector3f local_1e8;
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
  CVector3f local_170;
  CVector3f local_164;
  CVector3f local_158;
  CVector3f local_14c;
  CVector3f local_140;
  float local_134;
  float local_130;
  float local_12c;
  CVector3f local_128;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  CVector3f local_a4;
  double local_98;
  double local_88;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float *local_68;
  float local_5c;
  CDoor *local_58;
  CVector3f *local_54;
  float local_50;
  float local_4c;
  int local_48;
  float local_44;
  int local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  CLocation *local_24;
  CDeformableModelInstance *local_20;
  float local_1c;
  CVector3f *local_18;
  CVector3f *local_14;
  
  iVar6 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = 0;
  pcVar24 = "CHASE_2";
  local_38 = 0;
  pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&(param_1->base).base.model.motion_controller);
  iVar6 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(pCVar7,pcVar24,iVar6);
  if (iVar6 == 0x16) {
    local_38 = 1;
  }
  pCVar3 = (CCharacter *)(param_1->base).base.grabbed_by;
  if (pCVar3 != (CCharacter *)0x0) {
    pCVar4 = (pCVar3->base).vtable._uc;
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                        (&(param_1->base).base.model,&local_1d0,0);
    iVar6 = (*(pCVar4->_uc).attractActorToward)(pCVar3,(CDemonActor *)param_1,pCVar10);
    if (iVar6 != 0) {
      return;
    }
    (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < param_1->pain_cooldown) {
    param_1->pain_cooldown = param_1->pain_cooldown - param_2;
  }
  local_20 = &(param_1->base).base.model;
  local_7c = param_2 * (param_1->base).speed;
LAB_0055efe4:
  pCVar2 = local_20;
  if (0.0 < local_7c) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&local_20->motion_controller,&local_7c);
    if (uVar8 < 0xb) {
      if (uVar8 < 5) {
        if (uVar8 == 2) {
          pCVar17 = param_1->pickup_target;
          if (pCVar17 != (CDemonActor *)0x0) {
            param_1->pickup_target = (CDemonActor *)0x0;
            iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0
                              (param_1,param_1->object_shape_class);
            if (-1 < iVar6) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                        ((CCharacter *)param_1,iVar6,pCVar17,0.2);
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"%s picked up %s using hand %d\n",param_1,pCVar17,iVar6)
              ;
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
               iVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                 (pCVar3,(CDemonActor *)param_1,0), iVar9 != 0)) {
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
                  ((CDemonActor *)param_1,&local_248,pCVar10);
        if (param_1->part_indices[4] < 0) {
          pCVar3 = (param_1->base).victim;
          fVar26 = local_248.x - (pCVar3->base).location.position.x;
          fVar27 = local_248.z - (pCVar3->base).location.position.z;
          if ((float)1.5 < SQRT(fVar27 * fVar27 + fVar26 * fVar26)) {
            core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
            goto LAB_0055efe4;
          }
        }
        else {
          pCVar3 = (param_1->base).victim;
          pCVar11 = (CZombie *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
          if (pCVar11 != param_1) {
            core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
            goto LAB_0055efe4;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_3ac);
        local_3ac.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(15.0,25.0);
        local_3ac.attacker = (CDemonActor *)param_1;
        local_3ac.wielder = (CDemonActor *)param_1;
        pCVar3 = (param_1->base).victim;
        local_14 = (CVector3f *)local_3ac.damage_amount;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_3ac);
        local_98 = (double)local_3ac.damage_amount;
        if (0.0 < local_98) {
          iVar6 = 0x55f37c;
          dVar23 = round(local_98 * 2.5 * 0.25);
          local_80 = (int)ROUND(dVar23);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                    ((CGore *)INT_005b96c4,&local_248,(CVector3f *)0x0,local_80,iVar6);
        }
        pCVar3 = (param_1->base).victim;
        EVar12 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (0 < (int)EVar12) {
          pCVar3 = (param_1->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
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
      pCVar17 = (param_1->base).base.carry_hands[iVar6].carry_actor;
      if (pCVar17 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s lugging %s\n",param_1,pCVar17);
        local_14c.x = 0.0;
        local_14c.y = 6.0;
        local_14c.z = 17.0;
        (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)param_1,iVar6,&local_14c);
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
      pCVar17 = (param_1->base).base.carry_hands[iVar6].carry_actor;
      if (pCVar17 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s tossing %s\n",param_1,pCVar17);
        local_23c.x = 0.0;
        local_23c.y = 0.0;
        local_23c.z = 1.0;
        if ((param_1->base).victim != (CCharacter *)0x0) {
          pCVar17 = (param_1->base).base.carry_hands[iVar6].carry_actor;
          pCVar13 = (*((pCVar17->vtable)._ub)->getBoundingBox)(pCVar17,&local_2e4);
          local_224 = (pCVar13->min).x + (pCVar13->max).x;
          local_220 = (pCVar13->min).y + (pCVar13->max).y;
          local_ec.x = local_224 * 0.5f;
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
          pCVar14 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              (&((param_1->base).victim)->base,&local_b0,&local_f8);
          local_1e8.x = pCVar14->x - pCVar10->x;
          local_1e8.y = pCVar14->y - pCVar10->y;
          local_1e8.z = pCVar14->z - pCVar10->z;
          local_2c = SQRT(local_1e8.z * local_1e8.z +
                          local_1e8.x * local_1e8.x + local_1e8.y * local_1e8.y);
          if (0.0 < local_2c) {
            pCVar10 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                ((CDemonActor *)param_1,&local_278,&local_1e8);
            local_d4.z = 1.0 / local_2c;
            local_d4.x = pCVar10->x * local_d4.z;
            local_d4.y = pCVar10->y * local_d4.z;
            local_d4.z = local_d4.z * pCVar10->z;
            if (&local_23c != &local_d4) {
              local_23c.x = local_d4.x;
              local_23c.y = local_d4.y;
              local_23c.z = local_d4.z;
            }
          }
        }
        local_23c.x = local_23c.x * 27.0f;
        local_23c.z = local_23c.z * 27.0f;
        local_23c.y = local_23c.y * 27.0f + 5.0f;
        (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)param_1,iVar6,&local_23c);
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
          pcVar24 = "ghoul-dig-?.wav";
        }
        else {
          pcVar24 = "ghoul-eat-?.wav";
        }
        pcVar19 = local_334;
        do {
          cVar20 = *pcVar24;
          *pcVar19 = cVar20;
          if (cVar20 == '\0') break;
          cVar20 = pcVar24[1];
          pcVar24 = pcVar24 + 2;
          pcVar19[1] = cVar20;
          pcVar19 = pcVar19 + 2;
        } while (cVar20 != '\0');
        (*((param_1->base).base.base.vtable._ub)->playSound)((CDemonActor *)param_1,local_334);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,uVar8);
      }
    }
    goto LAB_0055efe4;
  }
  fVar26 = (param_1->base).speed;
  fVar25 = (float)3.1415926535000001;
  fVar27 = (float)0.5;
  iVar6 = param_1->part_indices[3];
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.turn_speed = param_2 * fVar25 * fVar26 * fVar27;
  if (((((param_1->base).base.model.part_data.visibility_flags[iVar6] == 0) &&
       ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[1]] == 0)) ||
      ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[6]] == 0)) &&
     ((0.0 <= param_1->bleedout_timer &&
      (fVar26 = param_1->bleedout_timer + param_2, param_1->bleedout_timer = fVar26,
      (float)6 <= fVar26)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_370);
    local_370.damage_amount = 9999.9;
    local_370.attacker = (CDemonActor *)param_1;
    local_370.wielder = (CDemonActor *)param_1;
    (*(((param_1->base).base.base.vtable._uc)->_uc).processDamage)((CCharacter *)param_1,&local_370)
    ;
    param_1->bleedout_timer = -1.0;
  }
  pCVar2 = &(param_1->base).base.model;
  pSVar15 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                      (&pCVar2->motion_controller);
  iVar6 = pSVar15->state_index;
  local_48 = 0;
  iVar9 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
  if (iVar9 == 0) {
    local_34 = -1.0;
    local_4c = 0.3;
    pSVar15 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        (&pCVar2->motion_controller);
    uVar8 = pSVar15->state_index;
    if (uVar8 < 8) {
      if (uVar8 == 0) {
        iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(param_2 * (float)0.125);
        if (iVar6 != 0) {
          iVar6 = 0;
          pcVar24 = "pickass";
          pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                             (&(param_1->base).base.model.motion_controller);
          iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar7,pcVar24,iVar6);
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
        (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
        if (((param_1->base).victim == (CCharacter *)0x0) && (local_38 != 0)) {
          iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6);
          if (iVar6 == 0) goto LAB_0055fc6b;
          *(uint *)(0x01C775EC + 0x220) = 1;
          (param_1->base).victim = *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        }
        if ((param_1->base).victim != (CCharacter *)0x0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
          if (iVar6 == 0) {
            if (param_1->is_female == 0) {
              uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"zom-a0?.wav");
              param_1->sfx_handles[1] = uVar8;
            }
            else {
              uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"f-zombie-alert?.wav");
              param_1->sfx_handles[1] = uVar8;
            }
          }
        }
      }
      else if (uVar8 < 2) {
        pCVar3 = (param_1->base).victim;
        (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
        if ((((param_1->base).victim == (CCharacter *)0x0) && (local_38 != 0)) &&
           (iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),
           iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6), iVar6 != 0)) {
          *(uint *)(0x01C775EC + 0x220) = 1;
          (param_1->base).victim = *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
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
              pcVar24 = "zom-a0?.wav";
            }
            else {
              pcVar24 = "f-zombie-alert?.wav";
            }
            uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)param_1,pcVar24);
            param_1->sfx_handles[1] = uVar8;
          }
LAB_0056033e:
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
        else {
          cVar20 = (param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[1]]
                   != 0;
          if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[3]] != 0)
          {
            cVar20 = cVar20 + '\x01';
          }
          (param_1->base).base.model.accumulated_root_motion.z = 0.0;
          (param_1->base).base.model.accumulated_root_motion.y =
               (param_1->base).base.model.accumulated_root_motion.z;
          (param_1->base).base.model.accumulated_root_motion.x =
               (param_1->base).base.model.accumulated_root_motion.y;
          iVar6 = core_zombie_cpp_FUN_00561010(param_1,param_2);
          if (iVar6 == 0) {
            local_50 = 1.3f;
            local_40 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,1);
            if (((-1 < local_40) &&
                (pCVar17 = (param_1->base).base.carry_hands[local_40].carry_actor,
                pCVar17 != (CDemonActor *)0x0)) && (param_1->object_shape_class == 1)) {
              local_44 = 1.0;
              if (pCVar17 != (CDemonActor *)0x0) {
                pCVar13 = (*((pCVar17->vtable)._ub)->getBoundingBox)(pCVar17,&local_2cc);
                local_14 = &pCVar13->max;
                core_actor_cpp_CVector_ctor_FUN_0040e160(&local_194);
                local_194 = local_14->x - (pCVar13->min).x;
                local_190 = local_14->y - (pCVar13->min).y;
                local_18c = local_14->z - (pCVar13->min).z;
                local_44 = local_18c * (float)0.5 + 1.0;
              }
              local_50 = local_44;
            }
            fVar27 = 0.34906584;
            fVar26 = 1.1;
            local_200.x = 0.0;
            local_200.z = local_50;
            pCVar10 = &local_200;
            local_200.y = 0.0;
            pCVar3 = (param_1->base).victim;
            pCVar16 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                              ((CCharacter *)param_1,
                               &(((param_1->base).victim)->base).location.position,pCVar16,pCVar10,
                               fVar26,fVar27);
            pCVar2 = &(param_1->base).base.model;
            if (iVar6 < 0) {
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,0,1);
            }
            else if (iVar6 < 1) {
              iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0
                                (param_1,param_1->object_shape_class);
              pCVar3 = (param_1->base).victim;
              local_1ac = (param_1->base).base.base.location.position.x -
                          (pCVar3->base).location.position.x;
              local_1a8 = (param_1->base).base.base.location.position.y -
                          (pCVar3->base).location.position.y;
              local_1a4 = (param_1->base).base.base.location.position.z -
                          (pCVar3->base).location.position.z;
              if (SQRT(local_1a4 * local_1a4 + local_1ac * local_1ac + local_1a8 * local_1a8) <
                  (float)20) {
                pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                    ((CDemonActor *)param_1,&local_20c,
                                     &(((param_1->base).victim)->base).location.position);
                pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                    (&local_218,pCVar10);
                if (((ABS(pCVar10->y) < (float)0.261799387791667) && (-1 < iVar6)) &&
                   (uVar8 = param_1->object_shape_class, 1 < uVar8)) {
                  if (uVar8 < 3) {
                    if ((param_1->base).base.carry_hands[iVar6].carry_actor != (CDemonActor *)0x0) {
                      engine_console_cpp_CConsole_printf_FUN_0043ac60
                                (PTR_DAT_005ad350,"%s lugging\n",param_1);
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                (&pCVar2->motion_controller,0xd,1);
                    }
                  }
                  else if ((uVar8 == 3) &&
                          ((param_1->base).base.carry_hands[iVar6].carry_actor != (CDemonActor *)0x0
                          )) {
                    engine_console_cpp_CConsole_printf_FUN_0043ac60
                              (PTR_DAT_005ad350,"%s tossing\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                              (&pCVar2->motion_controller,0xb,1);
                  }
                }
              }
            }
            else if (((cVar20 != '\0') && ((param_1->base).attack_cooldown <= 0.0)) &&
                    (pCVar3 = (param_1->base).victim,
                    pCVar17 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                    pCVar17 == (CDemonActor *)0x0)) {
              if ((local_40 < 0) ||
                 ((param_1->base).base.carry_hands[local_40].carry_actor == (CDemonActor *)0x0)) {
                if ((local_38 == 0) ||
                   (pCVar3 = (param_1->base).victim,
                   EVar12 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
                   EVar12 == DEATH_STATE_ALIVE)) {
                  iVar6 = 3;
                }
                else {
                  iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
                  if (iVar6 == 0) {
                    iVar6 = 0x19;
                  }
                  else {
                    iVar6 = 0x18;
                  }
                }
              }
              else {
                iVar6 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).base.model.motion_controller,iVar6,1);
              (param_1->base).attack_cooldown = 0.8;
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
          if ((((iVar6 < 0) ||
               (pCVar3 = (param_1->base).victim,
               EVar12 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), 0 < (int)EVar12
               )) || ((param_1->base).base.carry_hands[iVar6].carry_actor == (CDemonActor *)0x0)) ||
             (pCVar3 = (param_1->base).victim,
             pCVar17 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
             pCVar17 != (CDemonActor *)0x0)) {
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"%s gave up swing\n",param_1);
            core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
          }
          else {
            pCVar17 = (param_1->base).base.carry_hands[iVar6].carry_actor;
            local_3c = 1.0;
            if (pCVar17 != (CDemonActor *)0x0) {
              pCVar13 = (*((pCVar17->vtable)._ub)->getBoundingBox)(pCVar17,&local_2fc);
              local_68 = &local_1f4;
              core_actor_cpp_CVector_ctor_FUN_0040e160(local_68);
              local_1f4 = (pCVar13->max).x - (pCVar13->min).x;
              local_1f0 = (pCVar13->max).y - (pCVar13->min).y;
              local_1ec = (pCVar13->max).z - (pCVar13->min).z;
              local_3c = local_68[2] * (float)0.5 + local_3c;
            }
            local_34 = local_3c;
            local_54 = (CVector3f *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                 (&(param_1->base).base.model.motion_controller);
            local_88 = (double)(float)local_54;
            local_14 = local_54;
            if ((1.0 <= local_88) && (local_88 <= 2)) {
              local_48 = 1;
            }
          }
        }
      }
      else if (uVar8 == 3) {
        pCVar3 = (param_1->base).victim;
        if ((pCVar3 == (CCharacter *)0x0) ||
           (EVar12 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), 0 < (int)EVar12))
        goto LAB_0056033e;
        pCVar3 = (param_1->base).victim;
        pCVar11 = (CZombie *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar11 == (CZombie *)0x0) {
          local_34 = 1.3f;
          local_4c = 3.0;
        }
        else if (pCVar11 != param_1) goto LAB_00560776;
      }
    }
    else if (uVar8 < 9) {
      if (((param_1->base).pool_me == 0) &&
         ((param_1->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (pCVar2,&local_a4,0);
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
               (fVar26 = param_1->rise_delay - param_2, param_1->rise_delay = fVar26, fVar26 < 0.0))
            {
              iVar6 = 0;
              local_28 = 0;
              param_1->rise_delay = param_1->rise_delay + 1.0;
              local_24 = pCVar1;
              for (; local_28 < (int)0x01E57284->actors[0x6d6]; local_28 = local_28 + 1) {
                iVar9 = *(int *)((int)0x01E57284->actors + iVar6 + 0x1b5c);
                iVar18 = (**(code **)(*(int *)(iVar9 + 0x14c) + 0xdc))(iVar9,param_1);
                if (iVar18 != 0) {
                  local_1b8 = *(float *)(iVar9 + 0x20) - (local_24->position).x;
                  local_1b4 = *(float *)(iVar9 + 0x24) - (local_24->position).y;
                  local_1b0 = *(float *)(iVar9 + 0x28) - (local_24->position).z;
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
            (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
            pCVar3 = (param_1->base).victim;
            if (((pCVar3 != (CCharacter *)0x0) &&
                (fVar26 = (pCVar1->position).x - (pCVar3->base).location.position.x,
                fVar27 = (param_1->base).base.base.location.position.z -
                         (pCVar3->base).location.position.z,
                SQRT(fVar27 * fVar27 + fVar26 * fVar26) <= (float)3)) &&
               (ABS((param_1->base).base.base.location.position.y -
                    (pCVar3->base).location.position.y) <= (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,0,1);
            }
          }
        }
      }
      else if ((uVar8 < 0x19) || (uVar8 < 0x1a)) {
        iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6);
        if ((iVar6 == 0) &&
           ((*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2),
           (param_1->base).victim != (CCharacter *)0x0)) {
LAB_0055fd59:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
        }
      }
      else if ((uVar8 == 0x1c) &&
              (fVar26 = param_1->buried_timer - param_2, param_1->buried_timer = fVar26,
              fVar26 <= 0.0)) {
        pCVar5 = (param_1->base).base.base.vtable._ue;
        param_1->buried_timer = 0.0;
        (*(pCVar5->_ue).updateVictim)(&param_1->base,param_2);
        pCVar3 = (param_1->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          local_254 = (pCVar1->position).x - (pCVar3->base).location.position.x;
          local_250 = (param_1->base).base.base.location.position.y -
                      (pCVar3->base).location.position.y;
          local_24c = (param_1->base).base.base.location.position.z -
                      (pCVar3->base).location.position.z;
          if (&local_134 != &local_254) {
            local_134 = local_254;
            local_130 = local_250;
            local_12c = local_24c;
          }
          local_1c = local_12c * local_12c + local_134 * local_134 + local_130 * local_130;
          local_5c = (float)(((int)local_1c >> 1) + (int)CVector3f_01c70708.y);
          if (local_5c <= (float)8) {
            local_30 = (param_1->base).base.collision_cylinder_top;
            if (local_30 < (param_1->base).base.collision_cylinder_bottom) {
              local_30 = (param_1->base).base.model.bounding_box.max.y;
            }
            if (local_30 < (param_1->base).base.collision_cylinder_bottom) {
              local_30 = (param_1->base).base.collision_cylinder_bottom + (float)0.5;
            }
            iVar6 = 0;
            do {
              local_78 = (float)iVar6 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (CVector3f *)iVar6;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)param_1);
              fVar21 = (float10)fcos((float10)local_78);
              fVar22 = (float10)fsin((float10)local_78);
              local_18 = (CVector3f *)
                         core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                                   (0x01E57284,(param_1->base).base.base.location.position.x,
                                    (param_1->base).base.base.location.position.z,
                                    (float)(fVar22 * (float10)0.050000000000000003),
                                    (float)(fVar21 * (float10)0.050000000000000003),
                                    (param_1->base).base.collision_cylinder_radius,
                                    (param_1->base).base.base.location.position.y +
                                    (param_1->base).base.collision_cylinder_bottom,
                                    (param_1->base).base.base.location.position.y + local_30);
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
      fVar26 = (param_1->base).speed;
      fVar27 = (float)1.57079632675;
      max_distance = 0.7853982;
      fVar25 = 3.0;
      (param_1->base).base.walk_step_speed = local_4c * (param_1->base).speed * param_2;
      (param_1->base).base.turn_speed = param_2 * fVar26 * fVar27;
      local_e0.x = 0.0;
      local_e0.z = local_34;
      pCVar10 = &local_e0;
      local_e0.y = 0.0;
      pCVar3 = (param_1->base).victim;
      pCVar16 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        ((CCharacter *)param_1,&(((param_1->base).victim)->base).location.position,
                         pCVar16,pCVar10,fVar25,max_distance);
      if (iVar6 != 1) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s giving up attack\n",param_1);
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
  pSVar15 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                      (&(param_1->base).base.model.motion_controller);
  pCVar10 = &(param_1->base).base.model.accumulated_root_motion;
  iVar6 = pSVar15->state_index;
  if (iVar6 == 0xe) {
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  }
  else {
    if (iVar6 != 0xf) {
      iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)param_1);
      if (iVar9 != 0) {
        pCVar3 = (param_1->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (pCVar11 = (CZombie *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
           pCVar11 == param_1)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (0x01E57284,&((param_1->base).victim)->base);
        }
        (param_1->base).base.velocity.y =
             (param_1->base).base.velocity.y - param_2 * (float)32;
        local_260 = (param_1->base).base.velocity.x * param_2;
        local_25c = (param_1->base).base.velocity.y * param_2;
        pCVar10 = &(param_1->base).base.position_delta;
        local_258 = param_2 * (param_1->base).base.velocity.z;
        pCVar14 = &(param_1->base).base.model.accumulated_root_motion;
        local_110 = local_260 + pCVar10->x;
        local_10c = local_25c + (param_1->base).base.position_delta.y;
        local_108 = local_258 + (param_1->base).base.position_delta.z;
        local_284.x = local_110 + pCVar14->x;
        local_284.y = local_10c + (param_1->base).base.model.accumulated_root_motion.y;
        local_284.z = local_108 + (param_1->base).base.model.accumulated_root_motion.z;
        (param_1->base).base.position_delta.z = 0.0;
        (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
        pCVar10->x = (param_1->base).base.position_delta.y;
        (param_1->base).base.model.accumulated_root_motion.z = 0.0;
        fVar26 = (param_1->base).base.model.accumulated_root_motion.z;
        (param_1->base).base.model.accumulated_root_motion.y = fVar26;
        pCVar14->x = fVar26;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_284);
        if ((iVar6 == 1) &&
           (this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040d890
                                          (DAT_00765a9c,g_CDoorActorType_01af4e9c.name_hash),
           local_58 = this_ptr, this_ptr != (CDoor *)0x0)) {
          pCVar13 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                              ((CDemonActor *)this_ptr,&local_2b4);
          local_bc = (pCVar13->min).x + (pCVar13->max).x;
          local_b8 = (pCVar13->min).y + (pCVar13->max).y;
          local_164.x = local_bc * 0.5f;
          local_164.y = local_b8 * 0.5f;
          local_b4 = (pCVar13->min).z + (pCVar13->max).z;
          local_164.z = local_b4 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)this_ptr,&local_17c,&local_164);
          pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                              ((CDemonActor *)param_1,&local_140,&local_17c);
          pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                              (&local_128,pCVar10);
          if (ABS(pCVar10->y) < (float)0.34906585038888899) {
            iVar9 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
            iVar18 = 0x12;
            if (iVar9 != 0) {
              iVar18 = 0x13;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).base.model.motion_controller,iVar18,1);
            param_1->target_door = local_58;
          }
        }
      }
      goto LAB_0055fa02;
    }
    pCVar14 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                        ((CDemonActor *)param_1,&local_170,pCVar10);
    pCVar1 = &(param_1->base).base.base.location;
    (pCVar1->position).x = pCVar14->x + (pCVar1->position).x;
    (param_1->base).base.base.location.position.y =
         pCVar14->y + (param_1->base).base.base.location.position.y;
    (param_1->base).base.base.location.position.z =
         pCVar14->z + (param_1->base).base.base.location.position.z;
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
    core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  }
  if ((param_1->base).pool_me == 0) {
    iVar6 = param_1->part_indices[5];
    if ((param_1->base).base.model.part_data.visibility_flags[iVar6] == 0) {
      iVar9 = param_1->bone_indices[10];
      fVar26 = 0.5;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                ((CCharacter *)param_1,param_1->part_indices[0],param_1->bone_indices[5],0.2);
      if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  ((CCharacter *)param_1,param_1->part_indices[1],param_1->bone_indices[3],0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                ((CCharacter *)param_1,param_1->part_indices[2],param_1->bone_indices[6],0.2);
      if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  ((CCharacter *)param_1,param_1->part_indices[3],param_1->bone_indices[4],0.2);
      }
      iVar9 = param_1->bone_indices[0];
      fVar26 = 0.7;
      iVar6 = param_1->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990
              ((CCharacter *)param_1,iVar6,iVar9,fVar26);
    if ((param_1->part_indices[4] < 0) &&
       ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[5]] != 0)) {
      (param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[5]] = 0;
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                ((CCharacter *)param_1,param_1->part_indices[5],param_1->bone_indices[10],0.2);
      (param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[5]] = 1;
    }
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0((CCharacter *)param_1);
  }
  iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,1);
  if (((local_48 != 0) && (-1 < iVar6)) &&
     (pCVar17 = (param_1->base).base.carry_hands[iVar6].carry_actor, pCVar17 != (CDemonActor *)0x0))
  {
    (*((pCVar17->vtable)._ub)->processMeleeHit)(pCVar17,2);
    return;
  }
  return;
}
