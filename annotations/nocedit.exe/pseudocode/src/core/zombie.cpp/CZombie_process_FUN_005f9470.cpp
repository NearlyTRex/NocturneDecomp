// Name: core_zombie.cpp_CZombie_process_FUN_005f9470
// Address: 005f9470
// Address Range: [[005f9470, 005f9838] [005f990b, 005fb1eb]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie *this_ptr,float delta_time)

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
  int iVar8;
  CMotionList *pCVar9;
  uint uVar10;
  CVector3f *pCVar11;
  CZombie *pCVar12;
  int iVar13;
  CBoundingBox3D *pCVar14;
  float *pfVar15;
  CVector3f *pCVar16;
  SMotion *pSVar17;
  int extraout_EAX;
  uint uVar18;
  int extraout_EAX_00;
  CDemonActor *pCVar19;
  char *pcVar20;
  int iVar21;
  char *pcVar22;
  char cVar23;
  float10 fVar24;
  float10 fVar25;
  double dVar26;
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
  
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    return;
  }
  local_38 = 0;
  pCVar9 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&(this_ptr->base).base.model.motion_controller);
  iVar8 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(pCVar9);
  if (iVar8 == 0x16) {
    local_38 = 1;
  }
  pCVar19 = (this_ptr->base).base.grabbed_by;
  if (pCVar19 != (CDemonActor *)0x0) {
    pCVar4 = (pCVar19->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&(this_ptr->base).base.model,&local_1d0,0);
    iVar8 = (*(pCVar4->_uc).cfunc15)();
    if (iVar8 != 0) {
      return;
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < *(float *)(this_ptr->unk4 + 0x4c)) {
    *(float *)(this_ptr->unk4 + 0x4c) = *(float *)(this_ptr->unk4 + 0x4c) - delta_time;
  }
  local_20 = &(this_ptr->base).base.model;
  local_7c = delta_time * (this_ptr->base).speed;
LAB_005f9504:
  pCVar2 = local_20;
  if (0.0 < local_7c) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_20->motion_controller);
    if (uVar10 < 0xb) {
      if (uVar10 < 5) {
        if (uVar10 == 2) {
          iVar8 = *(int *)(this_ptr->unk1 + 0x18);
          if (iVar8 != 0) {
            this_ptr->unk1[0x18] = '\0';
            this_ptr->unk1[0x19] = '\0';
            this_ptr->unk1[0x1a] = '\0';
            this_ptr->unk1[0x1b] = '\0';
            iVar13 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
            if (-1 < iVar13) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",this_ptr,iVar8,iVar13);
            }
          }
        }
        else {
LAB_005f9541:
          core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
        }
        goto LAB_005f9504;
      }
      if (uVar10 < 6) {
        if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
          local_74 = 1.3f;
          local_290.x = 0.0;
          local_290.y = 0.0;
          local_290.z = 1.3f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_26c,&local_290);
          iVar8 = *(int *)((this_ptr->base).unk2 + 4);
          local_1a0 = local_26c.x - *(float *)(iVar8 + 0x20);
          local_198 = local_26c.z - *(float *)(iVar8 + 0x28);
          local_19c = 0;
          if (SQRT(local_198 * local_198 + local_1a0 * local_1a0) <= 1.0) {
            local_188.y = 4.0;
            local_188.x = 0.0;
            local_188.z = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_230,&local_188);
            iVar8 = *(int *)((this_ptr->base).unk2 + 4);
            local_158.x = *(float *)(iVar8 + 0x20);
            local_158.z = *(float *)(iVar8 + 0x28);
            local_158.y = local_230.y;
            core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                      (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base).unk2 + 4));
            iVar8 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                              (g_CDemonSetPtr,&local_230,&local_158);
            core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
            if ((iVar8 != 0) ||
               (iVar13 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x100)
                         )(), iVar13 != 0)) {
              if (iVar8 != 0) {
                core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
              }
              goto LAB_005f9504;
            }
          }
        }
        core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        goto LAB_005f9504;
      }
      if (uVar10 != 10) {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
        goto LAB_005f9504;
      }
      if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (local_20,&local_29c,*(int *)(this_ptr->unk4 + 4));
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_248,pCVar11);
        if (*(int *)(this_ptr->unk4 + 0x40) < 0) {
          iVar8 = *(int *)((this_ptr->base).unk2 + 4);
          fVar3 = local_248.x - *(float *)(iVar8 + 0x20);
          fVar6 = local_248.z - *(float *)(iVar8 + 0x28);
          if ((float)1.5 < SQRT(fVar6 * fVar6 + fVar3 * fVar3)) {
            core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
            goto LAB_005f9504;
          }
        }
        else {
          pCVar12 = (CZombie *)
                    (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x108))();
          if (pCVar12 != this_ptr) {
            core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
            goto LAB_005f9504;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffc54);
        pCVar11 = (CVector3f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
        local_14 = pCVar11;
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x11c))();
        local_98 = (double)(float)pCVar11;
        if (0.0 < local_98) {
          dVar26 = round(local_98 * 2.5 * 0.25);
          local_80 = (int)ROUND(dVar26);
          core_gore_cpp_FUN_004edbb0();
        }
        iVar8 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x120))();
        if (0 < iVar8) {
          (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x104))();
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        goto LAB_005f9504;
      }
      core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
    }
    else if (uVar10 < 0xc) {
      iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
      if (iVar8 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x1ee;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar19 = (this_ptr->base).base.carry_hands[iVar8].carry_actor;
      if (pCVar19 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s lugging %s\n",this_ptr,pCVar19);
        local_14c = 0;
        local_148 = 0x40c00000;
        local_144 = 0x41880000;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar10 < 0xd) {
      iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
      if (iVar8 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x205;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar19 = (this_ptr->base).base.carry_hands[iVar8].carry_actor;
      if (pCVar19 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s tossing %s\n",this_ptr,pCVar19);
        local_23c = 0.0;
        local_238 = 0.0;
        local_234 = 1.0;
        if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
          pCVar19 = (this_ptr->base).base.carry_hands[iVar8].carry_actor;
          pCVar14 = (*((pCVar19->vtable)._ub)->getBoundingBox)(pCVar19,&local_2e4);
          local_224 = (pCVar14->min).x + (pCVar14->max).x;
          local_220 = (pCVar14->min).y + (pCVar14->max).y;
          local_ec.x = local_224 * 0.5f;
          local_21c = (pCVar14->min).z + (pCVar14->max).z;
          local_ec.y = local_220 * 0.5f;
          local_ec.z = local_21c * 0.5f;
          pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((this_ptr->base).base.carry_hands[iVar8].carry_actor,&local_c8,
                               &local_ec);
          pfVar15 = (float *)(**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) +
                                         0x14))();
          local_1dc = *pfVar15 + pfVar15[3];
          local_1d8 = pfVar15[1] + pfVar15[4];
          local_f8.x = local_1dc * 0.5f;
          local_1d4 = pfVar15[2] + pfVar15[5];
          local_f8.y = local_1d8 * 0.5f;
          local_f8.z = local_1d4 * 0.5f;
          pCVar16 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              (*(CDemonActor **)((this_ptr->base).unk2 + 4),&local_b0,&local_f8);
          local_1e8.x = pCVar16->x - pCVar11->x;
          local_1e8.y = pCVar16->y - pCVar11->y;
          local_1e8.z = pCVar16->z - pCVar11->z;
          local_2c = SQRT(local_1e8.z * local_1e8.z +
                          local_1e8.x * local_1e8.x + local_1e8.y * local_1e8.y);
          if (0.0 < local_2c) {
            pCVar11 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                ((CDemonActor *)this_ptr,&local_278,&local_1e8);
            local_cc = 1.0 / local_2c;
            local_d4 = pCVar11->x * local_cc;
            local_d0 = pCVar11->y * local_cc;
            local_cc = local_cc * pCVar11->z;
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
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar10 < 0xe) {
      if ((CDoor *)this_ptr->unk2 != (CDoor *)0x0) {
        core_door_cpp_CDoor_FUN_00480de0((CDoor *)this_ptr->unk2);
        (**(code **)(*(int *)(this_ptr->unk2 + 0x154) + 0x24))();
        this_ptr->unk2 = 0;
      }
    }
    else {
      if (uVar10 < 0x65) goto LAB_005f9541;
      if (uVar10 < 0x66) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar10 == 0x29a) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_11c,*(int *)(this_ptr->unk4 + 4));
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_104,pCVar11);
        core_gore_cpp_FUN_004edbb0();
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar8 == 0) {
          pcVar20 = "ghoul-dig-?.wav";
        }
        else {
          pcVar20 = "ghoul-eat-?.wav";
        }
        pcVar22 = local_334;
        do {
          cVar23 = *pcVar20;
          *pcVar22 = cVar23;
          if (cVar23 == '\0') break;
          cVar23 = pcVar20[1];
          pcVar20 = pcVar20 + 2;
          pcVar22[1] = cVar23;
          pcVar22 = pcVar22 + 2;
        } while (cVar23 != '\0');
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_334);
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      }
    }
    goto LAB_005f9504;
  }
  fVar3 = (this_ptr->base).speed;
  fVar7 = (float)3.1415926535000001;
  fVar6 = (float)0.5;
  iVar8 = *(int *)(this_ptr->unk4 + 0x3c);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar7 * fVar3 * fVar6;
  if (((((this_ptr->base).base.model.part_visibility_flags[iVar8] == 0) &&
       ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x34)] == 0)) ||
      ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x48)] == 0)) &&
     ((0.0 <= *(float *)(this_ptr->unk4 + 0x50) &&
      (fVar3 = *(float *)(this_ptr->unk4 + 0x50) + delta_time,
      *(float *)(this_ptr->unk4 + 0x50) = fVar3, (float)6 <= fVar3)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_370);
    local_370.damage_amount = 9999.9;
    local_370.attacker = (CDemonActor *)this_ptr;
    local_370.wielder = (CDemonActor *)this_ptr;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&local_370);
    this_ptr->unk4[0x50] = '\0';
    this_ptr->unk4[0x51] = '\0';
    this_ptr->unk4[0x52] = -0x80;
    this_ptr->unk4[0x53] = -0x41;
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar2->motion_controller);
  iVar8 = pSVar17->state_index;
  local_48 = 0;
  iVar13 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar13 == 0) {
    local_34 = -1.0;
    local_4c = 0.3;
    pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&pCVar2->motion_controller);
    uVar10 = pSVar17->state_index;
    if (uVar10 < 8) {
      if (uVar10 == 0) {
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(delta_time * (float)0.125);
        if (iVar8 != 0) {
          pCVar9 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                             (&(this_ptr->base).base.model.motion_controller);
          iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar9);
          if (-1 < iVar8) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0x10,1);
            goto LAB_005fa18b;
          }
        }
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX != 0) {
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        }
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        if ((*(int *)((this_ptr->base).unk2 + 4) == 0) && (local_38 != 0)) {
          iVar8 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                            (&g_HeroActors[g_LocalHeroIndex]->base);
          if (iVar8 == 0) goto LAB_005fa18b;
          g_CGamePtr->unk11 = 1;
          *(CHero **)((this_ptr->base).unk2 + 4) = g_HeroActors[g_LocalHeroIndex];
        }
        if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk4 + 0x58));
          if (iVar8 == 0) {
            if (*(int *)this_ptr->unk4 == 0) {
              uVar18 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"zom-a0?.wav");
              *(uint *)(this_ptr->unk4 + 0x58) = uVar18;
            }
            else {
              uVar18 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"f-zombie-alert?.wav");
              *(uint *)(this_ptr->unk4 + 0x58) = uVar18;
            }
          }
        }
      }
      else if (uVar10 < 2) {
        iVar8 = *(int *)((this_ptr->base).unk2 + 4);
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        if (((*(int *)((this_ptr->base).unk2 + 4) == 0) && (local_38 != 0)) &&
           (iVar13 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                               (&g_HeroActors[g_LocalHeroIndex]->base), iVar13 != 0)) {
          g_CGamePtr->unk11 = 1;
          *(CHero **)((this_ptr->base).unk2 + 4) = g_HeroActors[g_LocalHeroIndex];
        }
        if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (extraout_EAX_00 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
        else if (iVar8 == 0) {
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk4 + 0x58));
          if (iVar8 == 0) {
            if (*(int *)this_ptr->unk4 == 0) {
              pcVar20 = "zom-a0?.wav";
            }
            else {
              pcVar20 = "f-zombie-alert?.wav";
            }
            uVar18 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,pcVar20);
            *(uint *)(this_ptr->unk4 + 0x58) = uVar18;
          }
LAB_005fa85e:
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        }
        else {
          cVar23 = (this_ptr->base).base.model.part_visibility_flags
                   [*(int *)(this_ptr->unk4 + 0x34)] != 0;
          if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x3c)] !=
              0) {
            cVar23 = cVar23 + '\x01';
          }
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          iVar8 = core_zombie_cpp_CZombie_FUN_005fb530(this_ptr);
          if (iVar8 == 0) {
            local_50 = 1.3f;
            local_40 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
            if (((-1 < local_40) &&
                (pCVar19 = (this_ptr->base).base.carry_hands[local_40].carry_actor,
                pCVar19 != (CDemonActor *)0x0)) && (*(int *)(this_ptr->unk1 + 0x1c) == 1)) {
              local_44 = 1.0;
              if (pCVar19 != (CDemonActor *)0x0) {
                pCVar14 = (*((pCVar19->vtable)._ub)->getBoundingBox)(pCVar19,&local_2cc);
                local_14 = &pCVar14->max;
                core_actor_cpp_CVector_ctor_FUN_00410340(&local_194);
                local_194.x = local_14->x - (pCVar14->min).x;
                local_194.y = local_14->y - (pCVar14->min).y;
                local_194.z = local_14->z - (pCVar14->min).z;
                local_44 = local_194.z * (float)0.5 + 1.0;
              }
              local_50 = local_44;
            }
            local_200 = 0;
            local_1f8 = local_50;
            local_1fc = 0;
            (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar8 < 0) {
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
            else if (iVar8 < 1) {
              iVar13 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
              iVar8 = *(int *)((this_ptr->base).unk2 + 4);
              local_1ac = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
              local_1a8 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
              local_1a4 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
              if (SQRT(local_1a4 * local_1a4 + local_1ac * local_1ac + local_1a8 * local_1a8) <
                  (float)20) {
                pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                    ((CDemonActor *)this_ptr,&local_20c,
                                     (CVector3f *)(*(int *)((this_ptr->base).unk2 + 4) + 0x20));
                pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                    (&local_218,pCVar11);
                if (((ABS(pCVar11->y) < (float)0.261799387791667) && (-1 < iVar13)) &&
                   (uVar10 = *(uint *)(this_ptr->unk1 + 0x1c), 1 < uVar10)) {
                  if (uVar10 < 3) {
                    if ((this_ptr->base).base.carry_hands[iVar13].carry_actor != (CDemonActor *)0x0)
                    {
                      engine_console_cpp_CConsole_printf_FUN_00441890
                                (g_CConsolePtr,"%s lugging\n",this_ptr);
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,0xd,1);
                    }
                  }
                  else if ((uVar10 == 3) &&
                          ((this_ptr->base).base.carry_hands[iVar13].carry_actor !=
                           (CDemonActor *)0x0)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s tossing\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&pCVar2->motion_controller,0xb,1);
                  }
                }
              }
            }
            else if (((cVar23 != '\0') && (*(float *)(this_ptr->base).unk2 <= 0.0)) &&
                    (iVar8 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) +
                                         0x108))(), iVar8 == 0)) {
              if ((local_40 < 0) ||
                 ((this_ptr->base).base.carry_hands[local_40].carry_actor == (CDemonActor *)0x0)) {
                if ((local_38 == 0) ||
                   (iVar8 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) +
                                        0x120))(), iVar8 == 0)) {
                  iVar8 = 3;
                }
                else {
                  iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                  if (iVar8 == 0) {
                    iVar8 = 0x19;
                  }
                  else {
                    iVar8 = 0x18;
                  }
                }
              }
              else {
                iVar8 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,iVar8,1);
              (this_ptr->base).unk2[0] = -0x33;
              (this_ptr->base).unk2[1] = -0x34;
              (this_ptr->base).unk2[2] = 'L';
              (this_ptr->base).unk2[3] = '?';
            }
          }
        }
      }
      else if (uVar10 < 3) {
        if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
LAB_005fac96:
          core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        }
        else {
          iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
          if ((((iVar8 < 0) ||
               (iVar13 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x120)
                         )(), 0 < iVar13)) ||
              ((this_ptr->base).base.carry_hands[iVar8].carry_actor == (CDemonActor *)0x0)) ||
             (iVar13 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x108))
                                 (), iVar13 != 0)) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up swing\n",this_ptr);
            core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
          }
          else {
            pCVar19 = (this_ptr->base).base.carry_hands[iVar8].carry_actor;
            local_3c = 1.0;
            if (pCVar19 != (CDemonActor *)0x0) {
              pCVar14 = (*((pCVar19->vtable)._ub)->getBoundingBox)(pCVar19,&local_2fc);
              local_68 = &local_1f4;
              core_actor_cpp_CVector_ctor_FUN_00410340(local_68);
              local_1f4.x = (pCVar14->max).x - (pCVar14->min).x;
              local_1f4.y = (pCVar14->max).y - (pCVar14->min).y;
              local_1f4.z = (pCVar14->max).z - (pCVar14->min).z;
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
      else if (uVar10 == 3) {
        iVar8 = *(int *)((this_ptr->base).unk2 + 4);
        if ((iVar8 == 0) || (iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(), 0 < iVar8))
        goto LAB_005fa85e;
        pCVar12 = (CZombie *)
                  (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x108))();
        if (pCVar12 == (CZombie *)0x0) {
          local_34 = 1.3f;
          local_4c = 3.0;
        }
        else if (pCVar12 != this_ptr) goto LAB_005fac96;
      }
    }
    else if (uVar10 < 9) {
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_a4,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_1c4,pCVar11);
        core_gore_cpp_FUN_004ede30();
        (this_ptr->base).pool_me = 1;
      }
    }
    else {
      pCVar1 = &(this_ptr->base).base.base.location;
      if (uVar10 < 0x18) {
        if (0xd < uVar10) {
          if (uVar10 < 0xf) {
            iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                              (g_CEventListPtr,this_ptr->rise_from_grave_condition);
            if ((iVar8 != 0) &&
               (fVar3 = *(float *)(this_ptr->unk4 + 0x5c) - delta_time,
               *(float *)(this_ptr->unk4 + 0x5c) = fVar3, fVar3 < 0.0)) {
              iVar8 = 0;
              local_28 = 0;
              *(float *)(this_ptr->unk4 + 0x5c) = *(float *)(this_ptr->unk4 + 0x5c) + 1.0;
              local_24 = pCVar1;
              for (; local_28 < g_CDemonSetPtr->damage_listener_count; local_28 = local_28 + 1) {
                iVar13 = *(int *)(g_CDemonSetPtr->unk4 + iVar8 + -4);
                iVar21 = (**(code **)(*(int *)(iVar13 + 0x154) + 0xf8))();
                if (iVar21 != 0) {
                  local_1b8 = *(float *)(iVar13 + 0x20) - (local_24->position).x;
                  local_1b4 = *(float *)(iVar13 + 0x24) - (local_24->position).y;
                  local_1b0 = *(float *)(iVar13 + 0x28) - (local_24->position).z;
                  if ((ABS(local_1b4) <= (float)10) &&
                     (local_1b4 = 0.0,
                     SQRT(local_1b0 * local_1b0 + local_1b8 * local_1b8) <=
                     (this_ptr->base).guard_distance)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s rising from the grave\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&(this_ptr->base).base.model.motion_controller,0xf,1);
                    if (this_ptr->grave_actor != (CDemonActor *)0x0) {
                      core_grave_cpp_FUN_004ee790();
                      this_ptr->grave_actor = (CDemonActor *)0x0;
                    }
                    (this_ptr->base).guard_distance = 100.0;
                    break;
                  }
                }
                iVar8 = iVar8 + 4;
              }
            }
          }
          else if (uVar10 == 0x14) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
            iVar8 = *(int *)((this_ptr->base).unk2 + 4);
            if (((iVar8 != 0) &&
                (fVar3 = (pCVar1->position).x - *(float *)(iVar8 + 0x20),
                fVar6 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28),
                SQRT(fVar6 * fVar6 + fVar3 * fVar3) <= (float)3)) &&
               (ABS((this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24)) <=
                (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
          }
        }
      }
      else if ((uVar10 < 0x19) || (uVar10 < 0x1a)) {
        iVar8 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                          (&g_HeroActors[g_LocalHeroIndex]->base);
        if ((iVar8 == 0) &&
           ((*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)(),
           *(int *)((this_ptr->base).unk2 + 4) != 0)) {
LAB_005fa279:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else if ((uVar10 == 0x1c) &&
              (fVar3 = *(float *)(this_ptr->unk4 + 0x60) - delta_time,
              *(float *)(this_ptr->unk4 + 0x60) = fVar3, fVar3 <= 0.0)) {
        pCVar5 = (this_ptr->base).base.base.vtable._ue;
        this_ptr->unk4[0x60] = '\0';
        this_ptr->unk4[0x61] = '\0';
        this_ptr->unk4[0x62] = '\0';
        this_ptr->unk4[99] = '\0';
        (*(pCVar5->_ue).enemyfunc2)();
        iVar8 = *(int *)((this_ptr->base).unk2 + 4);
        if (iVar8 != 0) {
          local_254 = (pCVar1->position).x - *(float *)(iVar8 + 0x20);
          local_250 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
          local_24c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
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
            iVar8 = 0;
            do {
              local_78 = (float)iVar8 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (CVector3f *)iVar8;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar24 = (float10)fcos((float10)local_78);
              fVar25 = (float10)fsin((float10)local_78);
              local_18 = (CVector3f *)
                         core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                                   (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                    (this_ptr->base).base.base.location.position.z,
                                    (float)(fVar25 * (float10)0.050000000000000003),
                                    (float)(fVar24 * (float10)0.050000000000000003),
                                    (this_ptr->base).base.collision_cylinder_radius,
                                    (void *)((this_ptr->base).base.base.location.position.y +
                                            (this_ptr->base).base.collision_cylinder_bottom),
                                    (void *)((this_ptr->base).base.base.location.position.y +
                                            local_30));
              local_14 = local_18;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              if ((float)local_18 < 1.0) break;
              iVar8 = iVar8 + 1;
            } while (iVar8 < 4);
            if (3 < iVar8) goto LAB_005fa279;
            this_ptr->unk4[0x60] = '\0';
            this_ptr->unk4[0x61] = '\0';
            this_ptr->unk4[0x62] = '@';
            this_ptr->unk4[99] = '@';
            (this_ptr->base).unk2[4] = '\0';
            (this_ptr->base).unk2[5] = '\0';
            (this_ptr->base).unk2[6] = '\0';
            (this_ptr->base).unk2[7] = '\0';
          }
        }
      }
    }
LAB_005fa18b:
    if ((0.0 <= local_34) && (*(int *)((this_ptr->base).unk2 + 4) != 0)) {
      fVar3 = (this_ptr->base).speed;
      fVar6 = (float)1.57079632675;
      (this_ptr->base).base.walk_step_speed = local_4c * (this_ptr->base).speed * delta_time;
      (this_ptr->base).base.turn_speed = delta_time * fVar3 * fVar6;
      local_e0 = 0;
      local_d8 = local_34;
      local_dc = 0;
      (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
      iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
      if (iVar8 != 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s giving up attack\n",this_ptr);
        core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
  }
  else {
    uVar10 = (this_ptr->base).base.field22_0x25b0;
    if (uVar10 < 2) {
      if (uVar10 == 1) {
LAB_005f9ea6:
        if (iVar8 != 1) {
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
      if (uVar10 < 3) goto LAB_005f9ea6;
      if (uVar10 != 3) goto LAB_005fa14f;
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
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  pCVar11 = &(this_ptr->base).base.model.accumulated_root_motion;
  iVar8 = pSVar17->state_index;
  if (iVar8 == 0xe) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  }
  else {
    if (iVar8 != 0xf) {
      iVar13 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
      if (iVar13 != 0) {
        iVar13 = *(int *)((this_ptr->base).unk2 + 4);
        if ((iVar13 != 0) &&
           (pCVar12 = (CZombie *)(**(code **)(*(int *)(iVar13 + 0x154) + 0x108))(),
           pCVar12 == this_ptr)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base).unk2 + 4));
        }
        (this_ptr->base).base.field7_0x2428.y =
             (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
        local_260 = (this_ptr->base).base.field7_0x2428.x * delta_time;
        local_25c = (this_ptr->base).base.field7_0x2428.y * delta_time;
        pCVar11 = &(this_ptr->base).base.field6_0x241c;
        local_258 = delta_time * (this_ptr->base).base.field7_0x2428.z;
        pCVar16 = &(this_ptr->base).base.model.accumulated_root_motion;
        local_110 = local_260 + pCVar11->x;
        local_10c = local_25c + (this_ptr->base).base.field6_0x241c.y;
        local_108 = local_258 + (this_ptr->base).base.field6_0x241c.z;
        local_284 = local_110 + pCVar16->x;
        local_280 = local_10c + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_27c = local_108 + (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.field6_0x241c.z = 0.0;
        (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
        pCVar11->x = (this_ptr->base).base.field6_0x241c.y;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        fVar3 = (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.y = fVar3;
        pCVar16->x = fVar3;
        core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
        if ((iVar8 == 1) &&
           (pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c790
                                (DAT_00823c50,g_CDoorClassInfo.name_hash), local_58 = pCVar19,
           pCVar19 != (CDemonActor *)0x0)) {
          pCVar14 = (*((pCVar19->vtable)._ub)->getBoundingBox)(pCVar19,&local_2b4);
          local_bc = (pCVar14->min).x + (pCVar14->max).x;
          local_b8 = (pCVar14->min).y + (pCVar14->max).y;
          local_164.x = local_bc * 0.5f;
          local_164.y = local_b8 * 0.5f;
          local_b4 = (pCVar14->min).z + (pCVar14->max).z;
          local_164.z = local_b4 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar19,&local_17c,&local_164);
          pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&local_140,&local_17c);
          pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_128,pCVar11);
          if (ABS(pCVar11->y) < (float)0.34906585038888899) {
            iVar13 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            iVar21 = 0x12;
            if (iVar13 != 0) {
              iVar21 = 0x13;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,iVar21,1);
            this_ptr->unk2 = (int)local_58;
          }
        }
      }
      goto LAB_005f9f22;
    }
    pCVar16 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_170,pCVar11);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar16->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar16->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar16->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005f9f22:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  if (iVar8 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  }
  if ((this_ptr->base).pool_me == 0) {
    if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x44)] != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x30)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x38)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
    }
    core_charactr_cpp_CCharacter_FUN_0042b810((CCharacter *)this_ptr);
    if ((*(int *)(this_ptr->unk4 + 0x40) < 0) &&
       ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x44)] != 0)) {
      (this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x44)] = 0;
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      (this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x44)] = 1;
    }
    core_charactr_cpp_CCharacter_FUN_0042b670((CCharacter *)this_ptr);
  }
  iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
  if (((local_48 != 0) && (-1 < iVar8)) &&
     (pCVar19 = (this_ptr->base).base.carry_hands[iVar8].carry_actor, pCVar19 != (CDemonActor *)0x0)
     ) {
    (*((pCVar19->vtable)._ub)->processMeleeHit)(pCVar19,2);
    return;
  }
  return;
}
