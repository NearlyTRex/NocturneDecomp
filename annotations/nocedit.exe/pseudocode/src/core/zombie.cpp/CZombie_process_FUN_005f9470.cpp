// Name: core_zombie.cpp_CZombie_process_FUN_005f9470
// Address: 005f9470
// Address Range: [[005f9470, 005f9838] [005f990b, 005fb1eb]]
// Convention: __cdecl
// Signature: void core_zombie.cpp_CZombie_process_FUN_005f9470(CZombie * this_ptr, float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005faea9) */

void __cdecl core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  CCharacter_full_vtable *pCVar4;
  CEnemy_full_vtable *pCVar5;
  float fVar6;
  float fVar7;
  CEnemy *pCVar8;
  int iVar9;
  CMotionList *pCVar10;
  uint uVar11;
  CVector3f *pCVar12;
  CZombie *pCVar13;
  int iVar14;
  CBoundingBox3D *pCVar15;
  float *pfVar16;
  CVector3f *pCVar17;
  SMotion *pSVar18;
  int extraout_EAX;
  uint uVar19;
  int extraout_EAX_00;
  CDemonActor *pCVar20;
  char *pcVar21;
  int iVar22;
  char *pcVar23;
  char cVar24;
  float10 fVar25;
  float10 fVar26;
  double dVar27;
  SDamageInfo local_370;
  char local_334 [56];
  CBoundingBox3D local_2fc;
  CBoundingBox3D local_2e4;
  CBoundingBox3D local_2cc;
  CBoundingBox3D local_2b4;
  CVector3f local_29c;
  CVector3f local_290;
  float local_284;
  float local_280;
  float local_27c;
  CVector3f local_278;
  CVector3f local_26c;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  CVector3f local_248;
  float local_23c;
  float local_238;
  float local_234;
  CVector3f local_230;
  float local_224;
  float local_220;
  float local_21c;
  CVector3f local_218;
  CVector3f local_20c;
  uint local_200;
  uint local_1fc;
  float local_1f8;
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
  uint local_14c;
  uint local_148;
  uint local_144;
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
  uint local_e0;
  uint local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
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
  CDemonActor *local_58;
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
  
  iVar9 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    return;
  }
  local_38 = 0;
  pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                      (&(this_ptr->base_enemy).base_character.model.motion_controller);
  iVar9 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(pCVar10);
  if (iVar9 == 0x16) {
    local_38 = 1;
  }
  pCVar20 = (this_ptr->base_enemy).base_character.grabbed_by;
  if (pCVar20 != (CDemonActor *)0x0) {
    pCVar4 = (pCVar20->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&(this_ptr->base_enemy).base_character.model,&local_1d0,0);
    iVar9 = (*(pCVar4->_uc).cfunc15)();
    if (iVar9 != 0) {
      return;
    }
    (this_ptr->base_enemy).base_character.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < *(float *)(this_ptr->field4_0xbf48 + 0x4c)) {
    *(float *)(this_ptr->field4_0xbf48 + 0x4c) =
         *(float *)(this_ptr->field4_0xbf48 + 0x4c) - delta_time;
  }
  local_20 = &(this_ptr->base_enemy).base_character.model;
  local_7c = delta_time * (this_ptr->base_enemy).speed;
LAB_005f9504:
  pCVar2 = local_20;
  if (0.0 < local_7c) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_20->motion_controller);
    if (uVar11 < 0xb) {
      if (uVar11 < 5) {
        if (uVar11 == 2) {
          iVar9 = *(int *)(this_ptr->field1_0xbeb4 + 0x18);
          if (iVar9 != 0) {
            this_ptr->field1_0xbeb4[0x18] = '\0';
            this_ptr->field1_0xbeb4[0x19] = '\0';
            this_ptr->field1_0xbeb4[0x1a] = '\0';
            this_ptr->field1_0xbeb4[0x1b] = '\0';
            iVar14 = core_zombie_cpp_CZombie_FUN_005fbd00();
            if (-1 < iVar14) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",this_ptr,iVar9,iVar14);
            }
          }
        }
        else {
LAB_005f9541:
          core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
        }
        goto LAB_005f9504;
      }
      if (uVar11 < 6) {
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) {
          local_74 = 1.3f;
          local_290.x = 0.0;
          local_290.y = 0.0;
          local_290.z = 1.3f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_26c,&local_290);
          iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          local_1a0 = local_26c.x - *(float *)(iVar9 + 0x20);
          local_198 = local_26c.z - *(float *)(iVar9 + 0x28);
          local_19c = 0;
          if (SQRT(local_198 * local_198 + local_1a0 * local_1a0) <= 1.0) {
            local_188.y = 4.0;
            local_188.x = 0.0;
            local_188.z = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_230,&local_188);
            iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            local_158.x = *(float *)(iVar9 + 0x20);
            local_158.z = *(float *)(iVar9 + 0x28);
            local_158.y = local_230.y;
            core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                      (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4));
            iVar9 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                              (g_CDemonSetPtr,&local_230,&local_158);
            core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
            if ((iVar9 != 0) ||
               (iVar14 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                              0x154) + 0x100))(), iVar14 != 0)) {
              if (iVar9 != 0) {
                core_zombie_cpp_CZombie_FUN_005fca10();
              }
              goto LAB_005f9504;
            }
          }
        }
        core_zombie_cpp_CZombie_FUN_005fca10();
        goto LAB_005f9504;
      }
      if (uVar11 != 10) {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
        goto LAB_005f9504;
      }
      if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (local_20,&local_29c,*(int *)(this_ptr->field4_0xbf48 + 4));
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_248,pCVar12);
        if (*(int *)(this_ptr->field4_0xbf48 + 0x40) < 0) {
          iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          fVar3 = local_248.x - *(float *)(iVar9 + 0x20);
          fVar6 = local_248.z - *(float *)(iVar9 + 0x28);
          if ((float)1.5 < SQRT(fVar6 * fVar6 + fVar3 * fVar3)) {
            core_zombie_cpp_CZombie_FUN_005fca10();
            goto LAB_005f9504;
          }
        }
        else {
          pCVar13 = (CZombie *)
                    (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154
                                         ) + 0x108))();
          if (pCVar13 != this_ptr) {
            core_zombie_cpp_CZombie_FUN_005fca10();
            goto LAB_005f9504;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffc54);
        pCVar12 = (CVector3f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
        local_14 = pCVar12;
        (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0x11c))
                  ();
        local_98 = (double)(float)pCVar12;
        if (0.0 < local_98) {
          dVar27 = crt_math_c_round_FUN_005fe6b0(local_98 * 2.5 * 0.25);
          local_80 = (int)ROUND(dVar27);
          core_gore_cpp_FUN_004edbb0();
        }
        iVar9 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) +
                            0x120))();
        if (0 < iVar9) {
          (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0x104)
          )();
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
        (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        goto LAB_005f9504;
      }
      core_zombie_cpp_CZombie_FUN_005fca10();
    }
    else if (uVar11 < 0xc) {
      iVar9 = core_zombie_cpp_CZombie_FUN_005fbd00();
      if (iVar9 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x1ee;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar20 = (this_ptr->base_enemy).base_character.carry_hands[iVar9].carry_actor;
      if (pCVar20 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s lugging %s\n",this_ptr,pCVar20);
        local_14c = 0;
        local_148 = 0x40c00000;
        local_144 = 0x41880000;
        (*(((this_ptr->base_enemy).base_character.base_actor.vtable._uc)->_uc).cfunc21)();
        (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar11 < 0xd) {
      iVar9 = core_zombie_cpp_CZombie_FUN_005fbd00();
      if (iVar9 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x205;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar20 = (this_ptr->base_enemy).base_character.carry_hands[iVar9].carry_actor;
      if (pCVar20 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s tossing %s\n",this_ptr,pCVar20);
        local_23c = 0.0;
        local_238 = 0.0;
        local_234 = 1.0;
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) {
          pCVar20 = (this_ptr->base_enemy).base_character.carry_hands[iVar9].carry_actor;
          pCVar15 = (*((pCVar20->vtable)._ub)->getBoundingBox)(pCVar20,&local_2e4);
          local_224 = (pCVar15->min).x + (pCVar15->max).x;
          local_220 = (pCVar15->min).y + (pCVar15->max).y;
          local_ec.x = local_224 * 0.5f;
          local_21c = (pCVar15->min).z + (pCVar15->max).z;
          local_ec.y = local_220 * 0.5f;
          local_ec.z = local_21c * 0.5f;
          pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((this_ptr->base_enemy).base_character.carry_hands[iVar9].carry_actor,
                               &local_c8,&local_ec);
          pfVar16 = (float *)(**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4
                                                           ) + 0x154) + 0x14))();
          local_1dc = *pfVar16 + pfVar16[3];
          local_1d8 = pfVar16[1] + pfVar16[4];
          local_f8.x = local_1dc * 0.5f;
          local_1d4 = pfVar16[2] + pfVar16[5];
          local_f8.y = local_1d8 * 0.5f;
          local_f8.z = local_1d4 * 0.5f;
          pCVar17 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              (*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4),&local_b0
                               ,&local_f8);
          local_1e8.x = pCVar17->x - pCVar12->x;
          local_1e8.y = pCVar17->y - pCVar12->y;
          local_1e8.z = pCVar17->z - pCVar12->z;
          local_2c = SQRT(local_1e8.z * local_1e8.z +
                          local_1e8.x * local_1e8.x + local_1e8.y * local_1e8.y);
          if (0.0 < local_2c) {
            pCVar12 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                ((CDemonActor *)this_ptr,&local_278,&local_1e8);
            local_cc = 1.0 / local_2c;
            local_d4 = pCVar12->x * local_cc;
            local_d0 = pCVar12->y * local_cc;
            local_cc = local_cc * pCVar12->z;
            if (&local_23c != &local_d4) {
              local_23c = local_d4;
              local_238 = local_d0;
              local_234 = local_cc;
            }
          }
        }
        local_23c = local_23c * 27.0f;
        local_234 = local_234 * 27.0f;
        local_238 = local_238 * 27.0f + 5.0f;
        (*(((this_ptr->base_enemy).base_character.base_actor.vtable._uc)->_uc).cfunc21)();
        (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar11 < 0xe) {
      if (*(CDoor **)(this_ptr->field1_0xbeb4 + 0x24) != (CDoor *)0x0) {
        core_door_cpp_CDoor_FUN_00480de0(*(CDoor **)(this_ptr->field1_0xbeb4 + 0x24));
        (**(code **)(*(int *)(*(int *)(this_ptr->field1_0xbeb4 + 0x24) + 0x154) + 0x24))();
        this_ptr->field1_0xbeb4[0x24] = '\0';
        this_ptr->field1_0xbeb4[0x25] = '\0';
        this_ptr->field1_0xbeb4[0x26] = '\0';
        this_ptr->field1_0xbeb4[0x27] = '\0';
      }
    }
    else {
      if (uVar11 < 0x65) goto LAB_005f9541;
      if (uVar11 < 0x66) {
        (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar11 == 0x29a) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_11c,*(int *)(this_ptr->field4_0xbf48 + 4));
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_104,pCVar12);
        core_gore_cpp_FUN_004edbb0();
        iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar9 == 0) {
          pcVar21 = "ghoul-dig-?.wav";
        }
        else {
          pcVar21 = "ghoul-eat-?.wav";
        }
        pcVar23 = local_334;
        do {
          cVar24 = *pcVar21;
          *pcVar23 = cVar24;
          if (cVar24 == '\0') break;
          cVar24 = pcVar21[1];
          pcVar21 = pcVar21 + 2;
          pcVar23[1] = cVar24;
          pcVar23 = pcVar23 + 2;
        } while (cVar24 != '\0');
        (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,local_334);
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      }
    }
    goto LAB_005f9504;
  }
  fVar3 = (this_ptr->base_enemy).speed;
  fVar7 = (float)3.1415926535000001;
  fVar6 = (float)0.5;
  iVar9 = *(int *)(this_ptr->field4_0xbf48 + 0x3c);
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       delta_time * fVar7 * fVar3 * fVar6;
  if (((((this_ptr->base_enemy).base_character.model.part_visibility_flags[iVar9] == 0) &&
       ((this_ptr->base_enemy).base_character.model.part_visibility_flags
        [*(int *)(this_ptr->field4_0xbf48 + 0x34)] == 0)) ||
      ((this_ptr->base_enemy).base_character.model.part_visibility_flags
       [*(int *)(this_ptr->field4_0xbf48 + 0x48)] == 0)) &&
     ((0.0 <= *(float *)(this_ptr->field4_0xbf48 + 0x50) &&
      (fVar3 = *(float *)(this_ptr->field4_0xbf48 + 0x50) + delta_time,
      *(float *)(this_ptr->field4_0xbf48 + 0x50) = fVar3, (float)6 <= fVar3)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_370);
    local_370.damage_amount = 9999.9;
    local_370.attacker = (CDemonActor *)this_ptr;
    local_370.wielder = (CDemonActor *)this_ptr;
    (*(((this_ptr->base_enemy).base_character.base_actor.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&local_370);
    this_ptr->field4_0xbf48[0x50] = '\0';
    this_ptr->field4_0xbf48[0x51] = '\0';
    this_ptr->field4_0xbf48[0x52] = -0x80;
    this_ptr->field4_0xbf48[0x53] = -0x41;
  }
  pCVar2 = &(this_ptr->base_enemy).base_character.model;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar2->motion_controller);
  iVar9 = pSVar18->state_index;
  local_48 = 0;
  iVar14 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar14 == 0) {
    local_34 = -1.0;
    local_4c = 0.3;
    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&pCVar2->motion_controller);
    uVar11 = pSVar18->state_index;
    if (uVar11 < 8) {
      if (uVar11 == 0) {
        iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(delta_time * (float)0.125);
        if (iVar9 != 0) {
          pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&(this_ptr->base_enemy).base_character.model.motion_controller);
          iVar9 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar10);
          if (-1 < iVar9) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,0x10,1);
            goto LAB_005fa18b;
          }
        }
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX != 0) {
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
        (*(((this_ptr->base_enemy).base_character.base_actor.vtable._ue)->_ue).field_4)();
        if ((*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) && (local_38 != 0)) {
          iVar9 = (*(((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable._uc)->_uc).
                    isDamageable)(&g_HeroActors[g_LocalHeroIndex]->base_character);
          if (iVar9 == 0) goto LAB_005fa18b;
          g_CGamePtr->field73_0x220 = 1;
          *(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4) = g_HeroActors[g_LocalHeroIndex];
        }
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) {
          core_zombie_cpp_CZombie_FUN_005fca10();
          iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                            (*(uint *)(this_ptr->field4_0xbf48 + 0x58));
          if (iVar9 == 0) {
            if (*(int *)this_ptr->field4_0xbf48 == 0) {
              uVar19 = (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"zom-a0?.wav");
              *(uint *)(this_ptr->field4_0xbf48 + 0x58) = uVar19;
            }
            else {
              uVar19 = (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"f-zombie-alert?.wav");
              *(uint *)(this_ptr->field4_0xbf48 + 0x58) = uVar19;
            }
          }
        }
      }
      else if (uVar11 < 2) {
        iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        (*(((this_ptr->base_enemy).base_character.base_actor.vtable._ue)->_ue).field_4)();
        if (((*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) && (local_38 != 0)) &&
           (iVar14 = (*(((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable._uc)->
                       _uc).isDamageable)(&g_HeroActors[g_LocalHeroIndex]->base_character),
           iVar14 != 0)) {
          g_CGamePtr->field73_0x220 = 1;
          *(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4) = g_HeroActors[g_LocalHeroIndex];
        }
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
          if (extraout_EAX_00 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
          }
        }
        else if (iVar9 == 0) {
          iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                            (*(uint *)(this_ptr->field4_0xbf48 + 0x58));
          if (iVar9 == 0) {
            if (*(int *)this_ptr->field4_0xbf48 == 0) {
              pcVar21 = "zom-a0?.wav";
            }
            else {
              pcVar21 = "f-zombie-alert?.wav";
            }
            uVar19 = (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,pcVar21);
            *(uint *)(this_ptr->field4_0xbf48 + 0x58) = uVar19;
          }
LAB_005fa85e:
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
        else {
          cVar24 = (this_ptr->base_enemy).base_character.model.part_visibility_flags
                   [*(int *)(this_ptr->field4_0xbf48 + 0x34)] != 0;
          if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
              [*(int *)(this_ptr->field4_0xbf48 + 0x3c)] != 0) {
            cVar24 = cVar24 + '\x01';
          }
          (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
          (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
               (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
          iVar9 = core_zombie_cpp_CZombie_PickupSomethingPossibly_FUN_005fb530();
          if (iVar9 == 0) {
            local_50 = 1.3f;
            local_40 = core_zombie_cpp_CZombie_FUN_005fbd00();
            if (((-1 < local_40) &&
                (pCVar20 = (this_ptr->base_enemy).base_character.carry_hands[local_40].carry_actor,
                pCVar20 != (CDemonActor *)0x0)) && (*(int *)(this_ptr->field1_0xbeb4 + 0x1c) == 1))
            {
              local_44 = 1.0;
              if (pCVar20 != (CDemonActor *)0x0) {
                pCVar15 = (*((pCVar20->vtable)._ub)->getBoundingBox)(pCVar20,&local_2cc);
                local_14 = &pCVar15->max;
                core_actor_cpp_CVector_ctor_FUN_00410340(&local_194);
                local_194.x = local_14->x - (pCVar15->min).x;
                local_194.y = local_14->y - (pCVar15->min).y;
                local_194.z = local_14->z - (pCVar15->min).z;
                local_44 = local_194.z * (float)0.5 + 1.0;
              }
              local_50 = local_44;
            }
            local_200 = 0;
            local_1f8 = local_50;
            local_1fc = 0;
            (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0xbc
                        ))();
            iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
            pCVar2 = &(this_ptr->base_enemy).base_character.model;
            if (iVar9 < 0) {
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
            else if (iVar9 < 1) {
              iVar14 = core_zombie_cpp_CZombie_FUN_005fbd00();
              iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
              local_1ac = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                          *(float *)(iVar9 + 0x20);
              local_1a8 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                          *(float *)(iVar9 + 0x24);
              local_1a4 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                          *(float *)(iVar9 + 0x28);
              if (SQRT(local_1a4 * local_1a4 + local_1ac * local_1ac + local_1a8 * local_1a8) <
                  (float)20) {
                pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                    ((CDemonActor *)this_ptr,&local_20c,
                                     (CVector3f *)
                                     (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x20));
                pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                    (&local_218,pCVar12);
                if (((ABS(pCVar12->y) < (float)0.261799387791667) && (-1 < iVar14)) &&
                   (uVar11 = *(uint *)(this_ptr->field1_0xbeb4 + 0x1c), 1 < uVar11)) {
                  if (uVar11 < 3) {
                    if ((this_ptr->base_enemy).base_character.carry_hands[iVar14].carry_actor !=
                        (CDemonActor *)0x0) {
                      engine_console_cpp_CConsole_printf_FUN_00441890
                                (g_CConsolePtr,"%s lugging\n",this_ptr);
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,0xd,1);
                    }
                  }
                  else if ((uVar11 == 3) &&
                          ((this_ptr->base_enemy).base_character.carry_hands[iVar14].carry_actor !=
                           (CDemonActor *)0x0)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s tossing\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&pCVar2->motion_controller,0xb,1);
                  }
                }
              }
            }
            else if (((cVar24 != '\0') && (*(float *)(this_ptr->base_enemy).field6_0xbe38 <= 0.0))
                    && (iVar9 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38
                                                              + 4) + 0x154) + 0x108))(), iVar9 == 0)
                    ) {
              if ((local_40 < 0) ||
                 ((this_ptr->base_enemy).base_character.carry_hands[local_40].carry_actor ==
                  (CDemonActor *)0x0)) {
                if ((local_38 == 0) ||
                   (iVar9 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4)
                                                 + 0x154) + 0x120))(), iVar9 == 0)) {
                  iVar9 = 3;
                }
                else {
                  iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                  if (iVar9 == 0) {
                    iVar9 = 0x19;
                  }
                  else {
                    iVar9 = 0x18;
                  }
                }
              }
              else {
                iVar9 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar9,1);
              (this_ptr->base_enemy).field6_0xbe38[0] = -0x33;
              (this_ptr->base_enemy).field6_0xbe38[1] = -0x34;
              (this_ptr->base_enemy).field6_0xbe38[2] = 'L';
              (this_ptr->base_enemy).field6_0xbe38[3] = '?';
            }
          }
        }
      }
      else if (uVar11 < 3) {
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) {
LAB_005fac96:
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
        else {
          iVar9 = core_zombie_cpp_CZombie_FUN_005fbd00();
          if ((((iVar9 < 0) ||
               (iVar14 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                              0x154) + 0x120))(), 0 < iVar14)) ||
              ((this_ptr->base_enemy).base_character.carry_hands[iVar9].carry_actor ==
               (CDemonActor *)0x0)) ||
             (iVar14 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                            0x154) + 0x108))(), iVar14 != 0)) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up swing\n",this_ptr);
            core_zombie_cpp_CZombie_FUN_005fca10();
          }
          else {
            pCVar20 = (this_ptr->base_enemy).base_character.carry_hands[iVar9].carry_actor;
            local_3c = 1.0;
            if (pCVar20 != (CDemonActor *)0x0) {
              pCVar15 = (*((pCVar20->vtable)._ub)->getBoundingBox)(pCVar20,&local_2fc);
              local_68 = &local_1f4;
              core_actor_cpp_CVector_ctor_FUN_00410340(local_68);
              local_1f4.x = (pCVar15->max).x - (pCVar15->min).x;
              local_1f4.y = (pCVar15->max).y - (pCVar15->min).y;
              local_1f4.z = (pCVar15->max).z - (pCVar15->min).z;
              local_3c = local_68->z * (float)0.5 + local_3c;
            }
            local_34 = local_3c;
            local_54 = (CVector3f *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                 (&(this_ptr->base_enemy).base_character.model.motion_controller);
            local_88 = (double)(float)local_54;
            local_14 = local_54;
            if ((1.0 <= local_88) && (local_88 <= 2)) {
              local_48 = 1;
            }
          }
        }
      }
      else if (uVar11 == 3) {
        iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar9 == 0) || (iVar9 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x120))(), 0 < iVar9))
        goto LAB_005fa85e;
        pCVar13 = (CZombie *)
                  (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154)
                              + 0x108))();
        if (pCVar13 == (CZombie *)0x0) {
          local_34 = 1.3f;
          local_4c = 3.0;
        }
        else if (pCVar13 != this_ptr) goto LAB_005fac96;
      }
    }
    else if (uVar11 < 9) {
      if (((this_ptr->base_enemy).pool_me == 0) &&
         ((this_ptr->base_enemy).base_character.base_actor.field11_0xdc == 0)) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_a4,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_1c4,pCVar12);
        core_gore_cpp_FUN_004ede30();
        (this_ptr->base_enemy).pool_me = 1;
      }
    }
    else {
      pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.location;
      if (uVar11 < 0x18) {
        if (0xd < uVar11) {
          if (uVar11 < 0xf) {
            iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                              (g_CEventListPtr,this_ptr->field1_0xbeb4 + 0x28);
            if ((iVar9 != 0) &&
               (fVar3 = *(float *)(this_ptr->field4_0xbf48 + 0x5c) - delta_time,
               *(float *)(this_ptr->field4_0xbf48 + 0x5c) = fVar3, fVar3 < 0.0)) {
              iVar9 = 0;
              local_28 = 0;
              *(float *)(this_ptr->field4_0xbf48 + 0x5c) =
                   *(float *)(this_ptr->field4_0xbf48 + 0x5c) + 1.0;
              local_24 = pCVar1;
              for (; local_28 < g_CDemonSetPtr->damage_listener_count; local_28 = local_28 + 1) {
                iVar14 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar9 + -4);
                iVar22 = (**(code **)(*(int *)(iVar14 + 0x154) + 0xf8))();
                if (iVar22 != 0) {
                  local_1b8 = *(float *)(iVar14 + 0x20) - (local_24->position).x;
                  local_1b4 = *(float *)(iVar14 + 0x24) - (local_24->position).y;
                  local_1b0 = *(float *)(iVar14 + 0x28) - (local_24->position).z;
                  if ((ABS(local_1b4) <= (float)10) &&
                     (local_1b4 = 0.0,
                     SQRT(local_1b0 * local_1b0 + local_1b8 * local_1b8) <=
                     (this_ptr->base_enemy).guard_distance)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s rising from the grave\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&(this_ptr->base_enemy).base_character.model.motion_controller,0xf,1)
                    ;
                    if (*(int *)(this_ptr->field1_0xbeb4 + 0x20) != 0) {
                      core_grave_cpp_FUN_004ee790();
                      this_ptr->field1_0xbeb4[0x20] = '\0';
                      this_ptr->field1_0xbeb4[0x21] = '\0';
                      this_ptr->field1_0xbeb4[0x22] = '\0';
                      this_ptr->field1_0xbeb4[0x23] = '\0';
                    }
                    (this_ptr->base_enemy).guard_distance = 100.0;
                    break;
                  }
                }
                iVar9 = iVar9 + 4;
              }
            }
          }
          else if (uVar11 == 0x14) {
            (*(((this_ptr->base_enemy).base_character.base_actor.vtable._ue)->_ue).field_4)();
            iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            if (((iVar9 != 0) &&
                (fVar3 = (pCVar1->position).x - *(float *)(iVar9 + 0x20),
                fVar6 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                        *(float *)(iVar9 + 0x28),
                SQRT(fVar6 * fVar6 + fVar3 * fVar3) <= (float)3)) &&
               (ABS((this_ptr->base_enemy).base_character.base_actor.location.position.y -
                    *(float *)(iVar9 + 0x24)) <= (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
          }
        }
      }
      else if ((uVar11 < 0x19) || (uVar11 < 0x1a)) {
        iVar9 = (*(((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable._uc)->_uc).
                  isDamageable)(&g_HeroActors[g_LocalHeroIndex]->base_character);
        if ((iVar9 == 0) &&
           ((*(((this_ptr->base_enemy).base_character.base_actor.vtable._ue)->_ue).field_4)(),
           *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0)) {
LAB_005fa279:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
        }
      }
      else if ((uVar11 == 0x1c) &&
              (fVar3 = *(float *)(this_ptr->field4_0xbf48 + 0x60) - delta_time,
              *(float *)(this_ptr->field4_0xbf48 + 0x60) = fVar3, fVar3 <= 0.0)) {
        pCVar5 = (this_ptr->base_enemy).base_character.base_actor.vtable._ue;
        this_ptr->field4_0xbf48[0x60] = '\0';
        this_ptr->field4_0xbf48[0x61] = '\0';
        this_ptr->field4_0xbf48[0x62] = '\0';
        this_ptr->field4_0xbf48[99] = '\0';
        (*(pCVar5->_ue).field_4)();
        iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if (iVar9 != 0) {
          local_254 = (pCVar1->position).x - *(float *)(iVar9 + 0x20);
          local_250 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                      *(float *)(iVar9 + 0x24);
          local_24c = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                      *(float *)(iVar9 + 0x28);
          if (&local_134 != &local_254) {
            local_134 = local_254;
            local_130 = local_250;
            local_12c = local_24c;
          }
          local_1c = local_12c * local_12c + local_134 * local_134 + local_130 * local_130;
          local_5c = (float)(((int)local_1c >> 1) + DAT_02d7a7b8);
          if (local_5c <= (float)8) {
            local_30 = *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x358);
            if (local_30 < *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x354)) {
              local_30 = (this_ptr->base_enemy).base_character.model.bounding_box.max.y;
            }
            if (local_30 < *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x354)) {
              local_30 = *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x354) +
                         (float)0.5;
            }
            iVar9 = 0;
            do {
              local_78 = (float)iVar9 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (CVector3f *)iVar9;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar25 = (float10)fcos((float10)local_78);
              fVar26 = (float10)fsin((float10)local_78);
              local_18 = (CVector3f *)
                         core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                                   (g_CDemonSetPtr,
                                    (this_ptr->base_enemy).base_character.base_actor.location.
                                    position.x,
                                    (this_ptr->base_enemy).base_character.base_actor.location.
                                    position.z,(float)(fVar26 * (float10)0.050000000000000003),
                                    (float)(fVar25 * (float10)0.050000000000000003),
                                    *(float *)((this_ptr->base_enemy).base_character.cloth_data +
                                              0x348),
                                    (void *)((this_ptr->base_enemy).base_character.base_actor.
                                             location.position.y +
                                            *(float *)((this_ptr->base_enemy).base_character.
                                                       cloth_data + 0x354)),
                                    (void *)((this_ptr->base_enemy).base_character.base_actor.
                                             location.position.y + local_30));
              local_14 = local_18;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              if ((float)local_18 < 1.0) break;
              iVar9 = iVar9 + 1;
            } while (iVar9 < 4);
            if (3 < iVar9) goto LAB_005fa279;
            this_ptr->field4_0xbf48[0x60] = '\0';
            this_ptr->field4_0xbf48[0x61] = '\0';
            this_ptr->field4_0xbf48[0x62] = '@';
            this_ptr->field4_0xbf48[99] = '@';
            (this_ptr->base_enemy).field6_0xbe38[4] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[5] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[6] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[7] = '\0';
          }
        }
      }
    }
LAB_005fa18b:
    if ((0.0 <= local_34) && (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0)) {
      fVar3 = (this_ptr->base_enemy).speed;
      fVar6 = (float)1.57079632675;
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
           local_4c * (this_ptr->base_enemy).speed * delta_time;
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
           delta_time * fVar3 * fVar6;
      local_e0 = 0;
      local_d8 = local_34;
      local_dc = 0;
      (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0xbc))();
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
      if (iVar9 != 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s giving up attack\n",this_ptr);
        core_zombie_cpp_CZombie_FUN_005fca10();
        pCVar8 = &this_ptr->base_enemy;
        (pCVar8->base_character).field2_0x240c[0xc] = '\0';
        (pCVar8->base_character).field2_0x240c[0xd] = '\0';
        (pCVar8->base_character).field2_0x240c[0xe] = '\0';
        (pCVar8->base_character).field2_0x240c[0xf] = '\0';
      }
    }
  }
  else {
    uVar11 = *(uint *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x10);
    if (uVar11 < 2) {
      if (uVar11 == 1) {
LAB_005f9ea6:
        if (iVar9 != 1) {
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
      }
      else {
LAB_005fa14f:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
      }
    }
    else {
      if (uVar11 < 3) goto LAB_005f9ea6;
      if (uVar11 != 3) goto LAB_005fa14f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
         (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
         (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
  }
  if (0.0 < *(float *)(this_ptr->base_enemy).field6_0xbe38) {
    *(float *)(this_ptr->base_enemy).field6_0xbe38 =
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - delta_time;
  }
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base_enemy).base_character.model.motion_controller);
  pCVar12 = &(this_ptr->base_enemy).base_character.model.accumulated_root_motion;
  iVar9 = pSVar18->state_index;
  if (iVar9 == 0xe) {
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  }
  else {
    if (iVar9 != 0xf) {
      iVar14 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
      if (iVar14 != 0) {
        iVar14 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar14 != 0) &&
           (pCVar13 = (CZombie *)(**(code **)(*(int *)(iVar14 + 0x154) + 0x108))(),
           pCVar13 == this_ptr)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4));
        }
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) =
             *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) -
             delta_time * (float)32;
        local_260 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x1c) *
                    delta_time;
        local_25c = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) *
                    delta_time;
        pcVar21 = (this_ptr->base_enemy).base_character.field2_0x240c + 0x10;
        local_258 = delta_time *
                    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x24);
        pCVar12 = &(this_ptr->base_enemy).base_character.model.accumulated_root_motion;
        local_110 = local_260 + *(float *)pcVar21;
        local_10c = local_25c +
                    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
        local_108 = local_258 +
                    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
        local_284 = local_110 + pCVar12->x;
        local_280 = local_10c +
                    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
        local_27c = local_108 +
                    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
        pCVar8 = &this_ptr->base_enemy;
        (pCVar8->base_character).field2_0x240c[0x18] = '\0';
        (pCVar8->base_character).field2_0x240c[0x19] = '\0';
        (pCVar8->base_character).field2_0x240c[0x1a] = '\0';
        (pCVar8->base_character).field2_0x240c[0x1b] = '\0';
        *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
             *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
        *(float *)pcVar21 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
        fVar3 = (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y = fVar3;
        pCVar12->x = fVar3;
        core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
        if ((iVar9 == 1) &&
           (pCVar20 = core_actor_cpp_castToClassHash_FUN_0040c790
                                (DAT_00823c50,g_CDoorClassInfo.name_hash), local_58 = pCVar20,
           pCVar20 != (CDemonActor *)0x0)) {
          pCVar15 = (*((pCVar20->vtable)._ub)->getBoundingBox)(pCVar20,&local_2b4);
          local_bc = (pCVar15->min).x + (pCVar15->max).x;
          local_b8 = (pCVar15->min).y + (pCVar15->max).y;
          local_164.x = local_bc * 0.5f;
          local_164.y = local_b8 * 0.5f;
          local_b4 = (pCVar15->min).z + (pCVar15->max).z;
          local_164.z = local_b4 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar20,&local_17c,&local_164);
          pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&local_140,&local_17c);
          pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_128,pCVar12);
          if (ABS(pCVar12->y) < (float)0.34906585038888899) {
            iVar14 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            iVar22 = 0x12;
            if (iVar14 != 0) {
              iVar22 = 0x13;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar22,1);
            *(CDemonActor **)(this_ptr->field1_0xbeb4 + 0x24) = local_58;
          }
        }
      }
      goto LAB_005f9f22;
    }
    pCVar17 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_170,pCVar12);
    pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.location;
    (pCVar1->position).x = pCVar17->x + (pCVar1->position).x;
    (this_ptr->base_enemy).base_character.base_actor.location.position.y =
         pCVar17->y + (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    (this_ptr->base_enemy).base_character.base_actor.location.position.z =
         pCVar17->z + (this_ptr->base_enemy).base_character.base_actor.location.position.z;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  pCVar12->x = (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
LAB_005f9f22:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  if (iVar9 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base_enemy).base_character.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  }
  if ((this_ptr->base_enemy).pool_me == 0) {
    if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
        [*(int *)(this_ptr->field4_0xbf48 + 0x44)] != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x30)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x38)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
    }
    core_charactr_cpp_CCharacter_FUN_0042b810((CCharacter *)this_ptr);
    if ((*(int *)(this_ptr->field4_0xbf48 + 0x40) < 0) &&
       ((this_ptr->base_enemy).base_character.model.part_visibility_flags
        [*(int *)(this_ptr->field4_0xbf48 + 0x44)] != 0)) {
      (this_ptr->base_enemy).base_character.model.part_visibility_flags
      [*(int *)(this_ptr->field4_0xbf48 + 0x44)] = 0;
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      (this_ptr->base_enemy).base_character.model.part_visibility_flags
      [*(int *)(this_ptr->field4_0xbf48 + 0x44)] = 1;
    }
    core_charactr_cpp_CCharacter_FUN_0042b670((CCharacter *)this_ptr);
  }
  iVar9 = core_zombie_cpp_CZombie_FUN_005fbd00();
  if (((local_48 != 0) && (-1 < iVar9)) &&
     (pCVar20 = (this_ptr->base_enemy).base_character.carry_hands[iVar9].carry_actor,
     pCVar20 != (CDemonActor *)0x0)) {
    (*((pCVar20->vtable)._ub)->processMeleeHit)(pCVar20,2);
    return;
  }
  return;
}
