// Name: core_zombie.cpp_CZombie_process_FUN_005f9470
// Address: 005f9470
// Address Range: [[005f9470, 005f9838] [005f990b, 005fb1eb]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Removing unreachable block (ram,0x005faea9) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie *this_ptr,float delta_time)

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
  CBoundingBox3D *pCVar12;
  CVector3f *pCVar13;
  SMotion *pSVar14;
  CPathMap *pCVar15;
  CDemonActor *pCVar16;
  CDoor *this_ptr_00;
  char *pcVar17;
  int iVar18;
  char *pcVar19;
  char cVar20;
  float10 fVar21;
  float10 fVar22;
  float fVar23;
  float fVar24;
  float max_distance;
  float fVar25;
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
  CVector3f local_1f4;
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
  CVector3f local_194;
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
  CVector3f *local_68;
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
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  local_38 = 0;
  pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&(this_ptr->base).base.model.motion_controller);
  iVar6 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(pCVar7);
  if (iVar6 == 0x16) {
    local_38 = 1;
  }
  pCVar3 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCVar3 != (CCharacter *)0x0) {
    pCVar4 = (pCVar3->base).vtable._uc;
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&(this_ptr->base).base.model,&local_1d0,0);
    iVar6 = (*(pCVar4->_uc).attractActorToward)(pCVar3,(CDemonActor *)this_ptr,pCVar10);
    if (iVar6 != 0) {
      return;
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < this_ptr->pain_cooldown) {
    this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
  }
  local_20 = &(this_ptr->base).base.model;
  local_7c = delta_time * (this_ptr->base).speed;
LAB_005f9504:
  pCVar2 = local_20;
  if (0.0 < local_7c) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_20->motion_controller);
    if (uVar8 < 0xb) {
      if (uVar8 < 5) {
        if (uVar8 == 2) {
          pCVar16 = this_ptr->pickup_target;
          if (pCVar16 != (CDemonActor *)0x0) {
            this_ptr->pickup_target = (CDemonActor *)0x0;
            iVar6 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
            if (-1 < iVar6) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                        ((CCharacter *)this_ptr,iVar6,pCVar16,0.2);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",this_ptr,pCVar16,iVar6);
            }
          }
        }
        else {
LAB_005f9541:
          core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
        }
        goto LAB_005f9504;
      }
      if (uVar8 < 6) {
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          local_74 = 1.3f;
          local_290.x = 0.0;
          local_290.y = 0.0;
          local_290.z = 1.3f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_26c,&local_290);
          pCVar3 = (this_ptr->base).victim;
          local_1a0 = local_26c.x - (pCVar3->base).location.position.x;
          local_198 = local_26c.z - (pCVar3->base).location.position.z;
          local_19c = 0;
          if (SQRT(local_198 * local_198 + local_1a0 * local_1a0) <= 1.0) {
            local_188.y = 4.0;
            local_188.x = 0.0;
            local_188.z = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_230,&local_188);
            pCVar3 = (this_ptr->base).victim;
            local_158.x = (pCVar3->base).location.position.x;
            local_158.z = (pCVar3->base).location.position.z;
            local_158.y = local_230.y;
            core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                      (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
            iVar6 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                              (g_CDemonSetPtr,&local_230,&local_158);
            core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
            if ((iVar6 != 0) ||
               (pCVar3 = (this_ptr->base).victim,
               iVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                 (pCVar3,(CDemonActor *)this_ptr,0), iVar9 != 0)) {
              if (iVar6 != 0) {
                core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
              }
              goto LAB_005f9504;
            }
          }
        }
        core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        goto LAB_005f9504;
      }
      if (uVar8 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
        goto LAB_005f9504;
      }
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (local_20,&local_29c,this_ptr->bone_indices[0]);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_248,pCVar10);
        if (this_ptr->part_indices[4] < 0) {
          pCVar3 = (this_ptr->base).victim;
          fVar24 = local_248.x - (pCVar3->base).location.position.x;
          fVar25 = local_248.z - (pCVar3->base).location.position.z;
          if ((float)1.5 < SQRT(fVar25 * fVar25 + fVar24 * fVar24)) {
            core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
            goto LAB_005f9504;
          }
        }
        else {
          pCVar3 = (this_ptr->base).victim;
          pCVar11 = (CZombie *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
          if (pCVar11 != this_ptr) {
            core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
            goto LAB_005f9504;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_3ac);
        local_3ac.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
        local_3ac.attacker = (CDemonActor *)this_ptr;
        local_3ac.wielder = (CDemonActor *)this_ptr;
        pCVar3 = (this_ptr->base).victim;
        local_14 = (CVector3f *)local_3ac.damage_amount;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_3ac);
        local_98 = (double)local_3ac.damage_amount;
        if (0.0 < local_98) {
          local_80 = (int)ROUND(ROUND(local_98 * 2.5 * 0.25));
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                    (g_CGorePtr,&local_248,(CVector3f *)0x0,local_80,0);
        }
        pCVar3 = (this_ptr->base).victim;
        iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (0 < iVar6) {
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        goto LAB_005f9504;
      }
      core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
    }
    else if (uVar8 < 0xc) {
      iVar6 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
      if (iVar6 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x1ee;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar16 = (this_ptr->base).base.carry_hands[iVar6].carry_actor;
      if (pCVar16 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s lugging %s\n",this_ptr,pCVar16);
        local_14c.x = 0.0;
        local_14c.y = 6.0;
        local_14c.z = 17.0;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar6,&local_14c);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar8 < 0xd) {
      iVar6 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
      if (iVar6 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x205;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar16 = (this_ptr->base).base.carry_hands[iVar6].carry_actor;
      if (pCVar16 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s tossing %s\n",this_ptr,pCVar16);
        local_23c.x = 0.0;
        local_23c.y = 0.0;
        local_23c.z = 1.0;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          pCVar16 = (this_ptr->base).base.carry_hands[iVar6].carry_actor;
          pCVar12 = (*((pCVar16->vtable)._ub)->getBoundingBox)(pCVar16,&local_2e4);
          local_224 = (pCVar12->min).x + (pCVar12->max).x;
          local_220 = (pCVar12->min).y + (pCVar12->max).y;
          local_ec.x = local_224 * 0.5f;
          local_21c = (pCVar12->min).z + (pCVar12->max).z;
          local_ec.y = local_220 * 0.5f;
          local_ec.z = local_21c * 0.5f;
          pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((this_ptr->base).base.carry_hands[iVar6].carry_actor,&local_c8,
                               &local_ec);
          pCVar3 = (this_ptr->base).victim;
          pCVar12 = (*((pCVar3->base).vtable._ub)->getBoundingBox)(&pCVar3->base,&local_314);
          local_1dc = (pCVar12->min).x + (pCVar12->max).x;
          local_1d8 = (pCVar12->min).y + (pCVar12->max).y;
          local_f8.x = local_1dc * 0.5f;
          local_1d4 = (pCVar12->min).z + (pCVar12->max).z;
          local_f8.y = local_1d8 * 0.5f;
          local_f8.z = local_1d4 * 0.5f;
          pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              (&((this_ptr->base).victim)->base,&local_b0,&local_f8);
          local_1e8.x = pCVar13->x - pCVar10->x;
          local_1e8.y = pCVar13->y - pCVar10->y;
          local_1e8.z = pCVar13->z - pCVar10->z;
          local_2c = SQRT(local_1e8.z * local_1e8.z +
                          local_1e8.x * local_1e8.x + local_1e8.y * local_1e8.y);
          if (0.0 < local_2c) {
            pCVar10 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                ((CDemonActor *)this_ptr,&local_278,&local_1e8);
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
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar6,&local_23c);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar8 < 0xe) {
      if (this_ptr->target_door != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00480de0(this_ptr->target_door,0.3);
        (*((this_ptr->target_door->base).vtable._ub)->playSound)
                  (&this_ptr->target_door->base,"zombie-bang-door?.wav");
        this_ptr->target_door = (CDoor *)0x0;
      }
    }
    else {
      if (uVar8 < 0x65) goto LAB_005f9541;
      if (uVar8 < 0x66) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar8 == 0x29a) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_11c,this_ptr->bone_indices[0]);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_104,pCVar10);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0(g_CGorePtr,&local_104,(CVector3f *)0x0,3,0)
        ;
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar6 == 0) {
          pcVar17 = "ghoul-dig-?.wav";
        }
        else {
          pcVar17 = "ghoul-eat-?.wav";
        }
        pcVar19 = local_334;
        do {
          cVar20 = *pcVar17;
          *pcVar19 = cVar20;
          if (cVar20 == '\0') break;
          cVar20 = pcVar17[1];
          pcVar17 = pcVar17 + 2;
          pcVar19[1] = cVar20;
          pcVar19 = pcVar19 + 2;
        } while (cVar20 != '\0');
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_334);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
      }
    }
    goto LAB_005f9504;
  }
  fVar24 = (this_ptr->base).speed;
  fVar23 = (float)3.1415926535000001;
  fVar25 = (float)0.5;
  iVar6 = this_ptr->part_indices[3];
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar23 * fVar24 * fVar25;
  if (((((this_ptr->base).base.model.part_data.visibility_flags[iVar6] == 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0)) ||
      ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)) &&
     ((0.0 <= this_ptr->bleedout_timer &&
      (fVar24 = this_ptr->bleedout_timer + delta_time, this_ptr->bleedout_timer = fVar24,
      (float)6 <= fVar24)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_370);
    local_370.damage_amount = 9999.9;
    local_370.attacker = (CDemonActor *)this_ptr;
    local_370.wielder = (CDemonActor *)this_ptr;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&local_370);
    this_ptr->bleedout_timer = -1.0;
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar2->motion_controller);
  iVar6 = pSVar14->state_index;
  local_48 = 0;
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    local_34 = -1.0;
    local_4c = 0.3;
    pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&pCVar2->motion_controller);
    uVar8 = pSVar14->state_index;
    if (uVar8 < 8) {
      if (uVar8 == 0) {
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(delta_time * (float)0.125);
        if (iVar6 != 0) {
          pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                             (&(this_ptr->base).base.model.motion_controller);
          iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar7);
          if (-1 < iVar6) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0x10,1);
            goto LAB_005fa18b;
          }
        }
        iVar6 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar6 != 0) {
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        }
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if (((this_ptr->base).victim == (CCharacter *)0x0) && (local_38 != 0)) {
          iVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                            (&g_HeroActors[g_LocalHeroIndex]->base);
          if (iVar6 == 0) goto LAB_005fa18b;
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = &g_HeroActors[g_LocalHeroIndex]->base;
        }
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
          if (iVar6 == 0) {
            if (this_ptr->is_female == 0) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"zom-a0?.wav");
              this_ptr->sfx_handles[1] = uVar8;
            }
            else {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"f-zombie-alert?.wav");
              this_ptr->sfx_handles[1] = uVar8;
            }
          }
        }
      }
      else if (uVar8 < 2) {
        pCVar3 = (this_ptr->base).victim;
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((((this_ptr->base).victim == (CCharacter *)0x0) && (local_38 != 0)) &&
           (iVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                              (&g_HeroActors[g_LocalHeroIndex]->base), iVar6 != 0)) {
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = &g_HeroActors[g_LocalHeroIndex]->base;
        }
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
        else if (pCVar3 == (CCharacter *)0x0) {
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
          if (iVar6 == 0) {
            if (this_ptr->is_female == 0) {
              pcVar17 = "zom-a0?.wav";
            }
            else {
              pcVar17 = "f-zombie-alert?.wav";
            }
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,pcVar17);
            this_ptr->sfx_handles[1] = uVar8;
          }
LAB_005fa85e:
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        }
        else {
          cVar20 = (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                   != 0;
          if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0
             ) {
            cVar20 = cVar20 + '\x01';
          }
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          iVar6 = core_zombie_cpp_CZombie_FUN_005fb530(this_ptr);
          if (iVar6 == 0) {
            local_50 = 1.3f;
            local_40 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
            if (((-1 < local_40) &&
                (pCVar16 = (this_ptr->base).base.carry_hands[local_40].carry_actor,
                pCVar16 != (CDemonActor *)0x0)) && (this_ptr->object_shape_class == 1)) {
              local_44 = 1.0;
              if (pCVar16 != (CDemonActor *)0x0) {
                pCVar12 = (*((pCVar16->vtable)._ub)->getBoundingBox)(pCVar16,&local_2cc);
                local_14 = &pCVar12->max;
                core_actor_cpp_CVector_ctor_FUN_00410340(&local_194);
                local_194.x = local_14->x - (pCVar12->min).x;
                local_194.y = local_14->y - (pCVar12->min).y;
                local_194.z = local_14->z - (pCVar12->min).z;
                local_44 = local_194.z * (float)0.5 + 1.0;
              }
              local_50 = local_44;
            }
            fVar25 = 0.34906584;
            fVar24 = 1.1;
            local_200.x = 0.0;
            local_200.z = local_50;
            pCVar10 = &local_200;
            local_200.y = 0.0;
            pCVar3 = (this_ptr->base).victim;
            pCVar15 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                              ((CCharacter *)this_ptr,
                               &(((this_ptr->base).victim)->base).location.position,pCVar15,pCVar10,
                               fVar24,fVar25);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar6 < 0) {
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
            else if (iVar6 < 1) {
              iVar6 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
              pCVar3 = (this_ptr->base).victim;
              local_1ac = (this_ptr->base).base.base.location.position.x -
                          (pCVar3->base).location.position.x;
              local_1a8 = (this_ptr->base).base.base.location.position.y -
                          (pCVar3->base).location.position.y;
              local_1a4 = (this_ptr->base).base.base.location.position.z -
                          (pCVar3->base).location.position.z;
              if (SQRT(local_1a4 * local_1a4 + local_1ac * local_1ac + local_1a8 * local_1a8) <
                  (float)20) {
                pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                    ((CDemonActor *)this_ptr,&local_20c,
                                     &(((this_ptr->base).victim)->base).location.position);
                pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                    (&local_218,pCVar10);
                if (((ABS(pCVar10->y) < (float)0.261799387791667) && (-1 < iVar6)) &&
                   (uVar8 = this_ptr->object_shape_class, 1 < uVar8)) {
                  if (uVar8 < 3) {
                    if ((this_ptr->base).base.carry_hands[iVar6].carry_actor != (CDemonActor *)0x0)
                    {
                      engine_console_cpp_CConsole_printf_FUN_00441890
                                (g_CConsolePtr,"%s lugging\n",this_ptr);
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,0xd,1);
                    }
                  }
                  else if ((uVar8 == 3) &&
                          ((this_ptr->base).base.carry_hands[iVar6].carry_actor !=
                           (CDemonActor *)0x0)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s tossing\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&pCVar2->motion_controller,0xb,1);
                  }
                }
              }
            }
            else if (((cVar20 != '\0') && ((this_ptr->base).attack_cooldown <= 0.0)) &&
                    (pCVar3 = (this_ptr->base).victim,
                    pCVar16 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                    pCVar16 == (CDemonActor *)0x0)) {
              if ((local_40 < 0) ||
                 ((this_ptr->base).base.carry_hands[local_40].carry_actor == (CDemonActor *)0x0)) {
                if ((local_38 == 0) ||
                   (pCVar3 = (this_ptr->base).victim,
                   iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), iVar6 == 0))
                {
                  iVar6 = 3;
                }
                else {
                  iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
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
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,iVar6,1);
              (this_ptr->base).attack_cooldown = 0.8;
            }
          }
        }
      }
      else if (uVar8 < 3) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
LAB_005fac96:
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        }
        else {
          iVar6 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
          if ((((iVar6 < 0) ||
               (pCVar3 = (this_ptr->base).victim,
               iVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), 0 < iVar9)) ||
              ((this_ptr->base).base.carry_hands[iVar6].carry_actor == (CDemonActor *)0x0)) ||
             (pCVar3 = (this_ptr->base).victim,
             pCVar16 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
             pCVar16 != (CDemonActor *)0x0)) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up swing\n",this_ptr);
            core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
          }
          else {
            pCVar16 = (this_ptr->base).base.carry_hands[iVar6].carry_actor;
            local_3c = 1.0;
            if (pCVar16 != (CDemonActor *)0x0) {
              pCVar12 = (*((pCVar16->vtable)._ub)->getBoundingBox)(pCVar16,&local_2fc);
              local_68 = &local_1f4;
              core_actor_cpp_CVector_ctor_FUN_00410340(local_68);
              local_1f4.x = (pCVar12->max).x - (pCVar12->min).x;
              local_1f4.y = (pCVar12->max).y - (pCVar12->min).y;
              local_1f4.z = (pCVar12->max).z - (pCVar12->min).z;
              local_3c = local_68->z * (float)0.5 + local_3c;
            }
            local_34 = local_3c;
            local_54 = (CVector3f *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                 (&(this_ptr->base).base.model.motion_controller);
            local_88 = (double)(float)local_54;
            local_14 = local_54;
            if ((1.0 <= local_88) && (local_88 <= 2)) {
              local_48 = 1;
            }
          }
        }
      }
      else if (uVar8 == 3) {
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 == (CCharacter *)0x0) ||
           (iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), 0 < iVar6))
        goto LAB_005fa85e;
        pCVar3 = (this_ptr->base).victim;
        pCVar11 = (CZombie *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar11 == (CZombie *)0x0) {
          local_34 = 1.3f;
          local_4c = 3.0;
        }
        else if (pCVar11 != this_ptr) goto LAB_005fac96;
      }
    }
    else if (uVar8 < 9) {
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_a4,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_1c4,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_1c4,0);
        (this_ptr->base).pool_me = 1;
      }
    }
    else {
      pCVar1 = &(this_ptr->base).base.base.location;
      if (uVar8 < 0x18) {
        if (0xd < uVar8) {
          if (uVar8 < 0xf) {
            iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                              (g_CEventListPtr,this_ptr->rise_from_grave_condition);
            if ((iVar6 != 0) &&
               (fVar24 = this_ptr->rise_delay - delta_time, this_ptr->rise_delay = fVar24,
               fVar24 < 0.0)) {
              iVar6 = 0;
              local_28 = 0;
              this_ptr->rise_delay = this_ptr->rise_delay + 1.0;
              local_24 = pCVar1;
              for (; local_28 < g_CDemonSetPtr->character_count; local_28 = local_28 + 1) {
                iVar9 = *(int *)((int)g_CDemonSetPtr->characters + iVar6);
                iVar18 = (**(code **)(*(int *)(iVar9 + 0x154) + 0xf8))(iVar9,this_ptr);
                if (iVar18 != 0) {
                  local_1b8 = *(float *)(iVar9 + 0x20) - (local_24->position).x;
                  local_1b4 = *(float *)(iVar9 + 0x24) - (local_24->position).y;
                  local_1b0 = *(float *)(iVar9 + 0x28) - (local_24->position).z;
                  if ((ABS(local_1b4) <= (float)10) &&
                     (local_1b4 = 0.0,
                     SQRT(local_1b0 * local_1b0 + local_1b8 * local_1b8) <=
                     (this_ptr->base).guard_distance)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s rising from the grave\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&(this_ptr->base).base.model.motion_controller,0xf,1);
                    if ((CGrave *)this_ptr->grave_actor != (CGrave *)0x0) {
                      core_grave_cpp_CGrave_FUN_004ee790((CGrave *)this_ptr->grave_actor);
                      this_ptr->grave_actor = (CDemonActor *)0x0;
                    }
                    (this_ptr->base).guard_distance = 100.0;
                    break;
                  }
                }
                iVar6 = iVar6 + 4;
              }
            }
          }
          else if (uVar8 == 0x14) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar3 = (this_ptr->base).victim;
            if (((pCVar3 != (CCharacter *)0x0) &&
                (fVar24 = (pCVar1->position).x - (pCVar3->base).location.position.x,
                fVar25 = (this_ptr->base).base.base.location.position.z -
                         (pCVar3->base).location.position.z,
                SQRT(fVar25 * fVar25 + fVar24 * fVar24) <= (float)3)) &&
               (ABS((this_ptr->base).base.base.location.position.y -
                    (pCVar3->base).location.position.y) <= (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
          }
        }
      }
      else if ((uVar8 < 0x19) || (uVar8 < 0x1a)) {
        iVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                          (&g_HeroActors[g_LocalHeroIndex]->base);
        if ((iVar6 == 0) &&
           ((*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time), (this_ptr->base).victim != (CCharacter *)0x0)) {
LAB_005fa279:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else if ((uVar8 == 0x1c) &&
              (fVar24 = this_ptr->buried_timer - delta_time, this_ptr->buried_timer = fVar24,
              fVar24 <= 0.0)) {
        pCVar5 = (this_ptr->base).base.base.vtable._ue;
        this_ptr->buried_timer = 0.0;
        (*(pCVar5->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          local_254 = (pCVar1->position).x - (pCVar3->base).location.position.x;
          local_250 = (this_ptr->base).base.base.location.position.y -
                      (pCVar3->base).location.position.y;
          local_24c = (this_ptr->base).base.base.location.position.z -
                      (pCVar3->base).location.position.z;
          if (&local_134 != &local_254) {
            local_134 = local_254;
            local_130 = local_250;
            local_12c = local_24c;
          }
          local_1c = local_12c * local_12c + local_134 * local_134 + local_130 * local_130;
          local_5c = (float)(((int)local_1c >> 1) + INT_02d7a7b8);
          if (local_5c <= (float)8) {
            local_30 = (this_ptr->base).base.collision_cylinder_top;
            if (local_30 < (this_ptr->base).base.collision_cylinder_bottom) {
              local_30 = (this_ptr->base).base.model.bounding_box.max.y;
            }
            if (local_30 < (this_ptr->base).base.collision_cylinder_bottom) {
              local_30 = (this_ptr->base).base.collision_cylinder_bottom + (float)0.5;
            }
            iVar6 = 0;
            do {
              local_78 = (float)iVar6 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (CVector3f *)iVar6;
              core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar21 = (float10)fcos((float10)local_78);
              fVar22 = (float10)fsin((float10)local_78);
              local_18 = (CVector3f *)
                         core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470
                                   (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                    (this_ptr->base).base.base.location.position.z,
                                    (float)(fVar22 * (float10)0.050000000000000003),
                                    (float)(fVar21 * (float10)0.050000000000000003),
                                    (this_ptr->base).base.collision_cylinder_radius,
                                    (this_ptr->base).base.base.location.position.y +
                                    (this_ptr->base).base.collision_cylinder_bottom,
                                    (this_ptr->base).base.base.location.position.y + local_30);
              local_14 = local_18;
              core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
              if ((float)local_18 < 1.0) break;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 4);
            if (3 < iVar6) goto LAB_005fa279;
            this_ptr->buried_timer = 3.0;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
        }
      }
    }
LAB_005fa18b:
    if ((0.0 <= local_34) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
      fVar24 = (this_ptr->base).speed;
      fVar25 = (float)1.57079632675;
      max_distance = 0.7853982;
      fVar23 = 3.0;
      (this_ptr->base).base.walk_step_speed = local_4c * (this_ptr->base).speed * delta_time;
      (this_ptr->base).base.turn_speed = delta_time * fVar24 * fVar25;
      local_e0.x = 0.0;
      local_e0.z = local_34;
      pCVar10 = &local_e0;
      local_e0.y = 0.0;
      pCVar3 = (this_ptr->base).victim;
      pCVar15 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar15,pCVar10,fVar23,max_distance);
      if (iVar6 != 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s giving up attack\n",this_ptr);
        core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
  }
  else {
    uVar8 = (this_ptr->base).base.is_walking;
    if (uVar8 < 2) {
      if (uVar8 == 1) {
LAB_005f9ea6:
        if (iVar6 != 1) {
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        }
      }
      else {
LAB_005fa14f:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    else {
      if (uVar8 < 3) goto LAB_005f9ea6;
      if (uVar8 != 3) goto LAB_005fa14f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  pCVar10 = &(this_ptr->base).base.model.accumulated_root_motion;
  iVar6 = pSVar14->state_index;
  if (iVar6 == 0xe) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  }
  else {
    if (iVar6 != 0xf) {
      iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
      if (iVar9 != 0) {
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (pCVar11 = (CZombie *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
           pCVar11 == this_ptr)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
        }
        (this_ptr->base).base.velocity.y =
             (this_ptr->base).base.velocity.y - delta_time * (float)32;
        local_260 = (this_ptr->base).base.velocity.x * delta_time;
        local_25c = (this_ptr->base).base.velocity.y * delta_time;
        pCVar10 = &(this_ptr->base).base.position_delta;
        local_258 = delta_time * (this_ptr->base).base.velocity.z;
        pCVar13 = &(this_ptr->base).base.model.accumulated_root_motion;
        local_110 = local_260 + pCVar10->x;
        local_10c = local_25c + (this_ptr->base).base.position_delta.y;
        local_108 = local_258 + (this_ptr->base).base.position_delta.z;
        local_284.x = local_110 + pCVar13->x;
        local_284.y = local_10c + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_284.z = local_108 + (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.position_delta.z = 0.0;
        (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
        pCVar10->x = (this_ptr->base).base.position_delta.y;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        fVar24 = (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.y = fVar24;
        pCVar13->x = fVar24;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_284);
        if ((iVar6 == 1) &&
           (this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                             (PTR_00823c50,g_CDoorClassInfo.name_hash),
           local_58 = this_ptr_00, this_ptr_00 != (CDoor *)0x0)) {
          pCVar12 = (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                              ((CDemonActor *)this_ptr_00,&local_2b4);
          local_bc = (pCVar12->min).x + (pCVar12->max).x;
          local_b8 = (pCVar12->min).y + (pCVar12->max).y;
          local_164.x = local_bc * 0.5f;
          local_164.y = local_b8 * 0.5f;
          local_b4 = (pCVar12->min).z + (pCVar12->max).z;
          local_164.z = local_b4 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr_00,&local_17c,&local_164);
          pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&local_140,&local_17c);
          pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_128,pCVar10);
          if (ABS(pCVar10->y) < (float)0.34906585038888899) {
            iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            iVar18 = 0x12;
            if (iVar9 != 0) {
              iVar18 = 0x13;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,iVar18,1);
            this_ptr->target_door = local_58;
          }
        }
      }
      goto LAB_005f9f22;
    }
    pCVar13 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_170,pCVar10);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar13->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar13->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar13->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar10->x = (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005f9f22:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  if (iVar6 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar6 = this_ptr->part_indices[5];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar6] == 0) {
      iVar9 = this_ptr->bone_indices[10];
      fVar24 = 0.5;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],this_ptr->bone_indices[5],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],this_ptr->bone_indices[3],0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],this_ptr->bone_indices[6],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],this_ptr->bone_indices[4],0.2);
      }
      iVar9 = this_ptr->bone_indices[0];
      fVar24 = 0.7;
      iVar6 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
              ((CCharacter *)this_ptr,iVar6,iVar9,fVar24);
    if ((this_ptr->part_indices[4] < 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0)) {
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 0;
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[5],this_ptr->bone_indices[10],0.2);
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 1;
    }
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042b670((CCharacter *)this_ptr);
  }
  iVar6 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
  if (((local_48 != 0) && (-1 < iVar6)) &&
     (pCVar16 = (this_ptr->base).base.carry_hands[iVar6].carry_actor, pCVar16 != (CDemonActor *)0x0)
     ) {
    (*((pCVar16->vtable)._ub)->processMeleeHit)(pCVar16,2);
    return;
  }
  return;
}
