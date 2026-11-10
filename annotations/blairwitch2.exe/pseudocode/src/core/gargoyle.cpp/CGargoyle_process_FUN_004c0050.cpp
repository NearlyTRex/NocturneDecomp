// Name: core_gargoyle.cpp_CGargoyle_process_FUN_004c0050
// Address: 004c0050
// Address Range: [[004c0050, 004c0b2f]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004c0050(CGargoyle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004c0050(CGargoyle *this_ptr,float delta_time)

{
  byte *puVar1;
  byte *puVar2;
  CDeformableModelInstance *this_ptr_00;
  uint uVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  CPathMap *pCVar9;
  byte bVar10;
  float afStackY_1128 [997];
  CGargoyle *this_ptr_01;
  float *pfVar11;
  CVector3f *pCVar12;
  float fVar13;
  float fVar14;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_17c [4];
  float fStack_178;
  CGargoyle *pCStack_148;
  CGargoyle *pCStack_144;
  float fStack_140;
  float afStack_13c [5];
  CVector3f CStack_128;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  CVector3f CStack_104;
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  float fStack_ac;
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  CVector3f CStack_80;
  float fStack_74;
  float afStack_70 [5];
  uint uStack_5c;
  float fStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar10 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    iVar6 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    if (*(int *)(iVar6 + 0x24) == 8) {
      return;
    }
    if (*(int *)(iVar6 + 0x24) == 5) {
      return;
    }
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  fStack_34 = delta_time * (this_ptr->base).speed;
  pCStack_18 = (CMotionController *)&(this_ptr->base).base.model;
  while (0.0 < fStack_34) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_18,afStack_70 + 0xf);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar6);
  }
  fVar13 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar13);
  iVar6 = core_motion_cpp_FUN_005035c0(pCStack_18);
  iVar6 = *(int *)(iVar6 + 0x24);
  iStack_2c = iVar6;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    switch(iVar6) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar6 = core_gargoyle_cpp_FUN_004bfea0(this_ptr);
      if (iVar6 == 0) {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
        this_ptr->petrify_timer = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,5,1);
        iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
        if (iVar6 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar8;
        }
      }
      else if (this_ptr->returning_home == 0) {
        pCVar5 = (this_ptr->base).victim;
        if (pCVar5 == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar6 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,1,1);
          }
        }
        else {
          afStack_118[2] =
               *(float *)&(pCVar5->base).field_0x20 -
               *(float *)&(this_ptr->base).base.base.field_0x20;
          afStack_118[3] =
               *(float *)&(pCVar5->base).field_0x24 -
               *(float *)&(this_ptr->base).base.base.field_0x24;
          fStack_108 = *(float *)&(pCVar5->base).field_0x28 -
                       *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_44 = afStack_118[2];
          afStack_70[(uint)bVar10 * -2 + 0xc] = afStack_118[(uint)bVar10 * -2 + 3];
          afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
               afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          fStack_38 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40);
          fStack_28 = fStack_38;
          if (fStack_38 < 0x40400000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_70 + 0xb);
            uStack_b0 = uStack_bc;
            afStack_f4[(uint)bVar10 * -2 + 0x12] = afStack_f4[(uint)bVar10 * -2 + 0xf];
            afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
                 afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                         (fStack_ac - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d8dd2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,3,1);
            }
          }
          if (fStack_28 < (this_ptr->base).guard_distance) {
            this_ptr_00 = &(this_ptr->base).base.model;
            if (_DAT_005f75e8 <= fStack_28) {
              iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.1);
              if (iVar6 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)this_ptr_00,2,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)this_ptr_00,4,1);
              }
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)this_ptr_00,1,1);
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar6 = core_gargoyle_cpp_FUN_004bfea0(this_ptr);
      fVar13 = 0x40400000;
      pCStack_1c = (CMotionController *)&(this_ptr->base).base.model;
      if (iVar6 == 0) {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
        this_ptr->petrify_timer = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,5,1);
        iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
        if (iVar6 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar8;
        }
      }
      else {
        puVar1 = &(this_ptr->base).base.model.field_0x2254;
        if (this_ptr->returning_home == 0) {
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
            if (iVar6 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
            }
          }
          else {
            max_distance = 0.17453292;
            fVar14 = 0.5;
            *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
            *(uint *)&(this_ptr->base).base.model.field_0x2258 =
                 *(uint *)&(this_ptr->base).base.model.field_0x225c;
            *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
            pCVar12 = &CStack_80;
            CStack_80.x = 0.0;
            CStack_80.y = 0.0;
            CStack_80.z = fVar13;
            pCVar5 = (this_ptr->base).victim;
            fStack_20 = fVar13;
            pCVar9 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                              ((CCharacter *)this_ptr,
                               (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar9,
                               pCVar12,fVar14,max_distance);
            if (-1 < iVar6) {
              pCVar5 = (this_ptr->base).victim;
              fStack_d4 = *(float *)&(this_ptr->base).base.base.field_0x20 -
                          *(float *)&(pCVar5->base).field_0x20;
              fStack_d0 = *(float *)&(this_ptr->base).base.base.field_0x24 -
                          *(float *)&(pCVar5->base).field_0x24;
              fStack_cc = *(float *)&(this_ptr->base).base.base.field_0x28 -
                          *(float *)&(pCVar5->base).field_0x28;
              fStack_50 = fStack_d4;
              afStack_70[(uint)bVar10 * -2 + 9] = afStack_f4[(uint)bVar10 * -2 + 9];
              afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
                   afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
              uStack_4c = 0;
              fStack_30 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50);
              fStack_24 = fStack_30;
              if (_DAT_005f75e8 < fStack_30) {
                iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.1);
                if (iVar6 == 0) {
                  iVar6 = 2;
                }
                else {
                  iVar6 = 4;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,iVar6,1);
              }
              if ((fStack_24 <= fStack_20) && ((this_ptr->base).attack_cooldown <= 0.0)) {
                pCVar5 = (this_ptr->base).victim;
                fStack_140 = *(float *)&(pCVar5->base).field_0x20 -
                             *(float *)&(this_ptr->base).base.base.field_0x20;
                afStack_13c[0] =
                     *(float *)&(pCVar5->base).field_0x24 -
                     *(float *)&(this_ptr->base).base.base.field_0x24;
                afStack_13c[1] =
                     *(float *)&(pCVar5->base).field_0x28 -
                     *(float *)&(this_ptr->base).base.base.field_0x28;
                fStack_74 = fStack_140;
                afStack_70[(uint)bVar10 * -2] = afStack_13c[(uint)bVar10 * -2];
                afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                     afStack_13c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_74);
                afStack_70[2] = (float)uStack_5c;
                afStack_70[(uint)bVar10 * -2 + 3] = afStack_70[(uint)bVar10 * -2 + 6];
                afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                     afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                             (afStack_70[3] -
                                              (this_ptr->base).base.base.orient.vec.y);
                if (ABS(fStack_14) < (float)_DAT_005d8dd2) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            ((CMotionController *)&(this_ptr->base).base.model,3,1);
                  (this_ptr->base).attack_cooldown = 1.0;
                }
              }
              if ((this_ptr->base).guard_distance < fStack_24) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&(this_ptr->base).base.model,0,1);
              }
            }
          }
        }
        else {
          *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
          *(uint *)&(this_ptr->base).base.model.field_0x2258 =
               *(uint *)&(this_ptr->base).base.model.field_0x225c;
          *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
          fVar14 = 0.17453292;
          CStack_104.x = 0.0;
          CStack_104.y = 0.0;
          CStack_104.z = 0.0;
          pCVar12 = &CStack_104;
          fVar13 = 0.5;
          pCVar9 = (*((this_ptr->home_base->vtable)._ub)->getPathMap)(this_ptr->home_base);
          core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                    ((CCharacter *)this_ptr,(CVector3f *)&this_ptr->home_base->field_0x20,pCVar9,
                     pCVar12,fVar13,fVar14);
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_17c);
      fStack_178 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,5.0);
      damage_info = aSStack_17c;
      pCStack_148 = this_ptr;
      pCStack_144 = this_ptr;
      fVar13 = 0.4;
      fStack_14 = fStack_178;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01cb8128 * 0x30);
      pfVar11 = afStack_13c + 2;
      afStack_13c[2] = (float)uStack_f8;
      afStack_13c[(uint)bVar10 * -2 + 3] = afStack_f4[(uint)bVar10 * -2];
      afStack_13c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar11);
      pCVar12 = &CStack_128;
      CStack_128.x = fStack_e0;
      *(float *)((int)&CStack_128 + (uint)bVar10 * -8 + 4) = afStack_f4[(uint)bVar10 * -2 + 6];
      this_ptr_01 = this_ptr;
      *(float *)((int)&CStack_128 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                (&this_ptr_01->base,pCVar12,fVar13,damage_info);
      break;
    case 5:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar6 = core_gargoyle_cpp_FUN_004bfea0(this_ptr);
      if ((iVar6 != 0) &&
         (fVar13 = this_ptr->petrify_timer - delta_time, this_ptr->petrify_timer = fVar13,
         fVar13 < 0.0)) {
        this_ptr->petrify_timer = 0.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0,1);
        iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
        if (iVar6 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-alive?.wav");
          this_ptr->sfx_handles[1] = uVar8;
        }
      }
    }
    goto switchD_004c0a6d_caseD_4;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_004c015c:
      iVar6 = 1;
    }
    else {
LAB_004c03df:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar6,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_004c015c;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_004c03df;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1,this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
switchD_004c0a6d_caseD_4:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_11c = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    afStack_118[0] = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    afStack_118[1] = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    afStack_f4[2] = fStack_11c;
    afStack_f4[(uint)bVar10 * -2 + 3] = afStack_118[(uint)bVar10 * -2];
    afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    puVar1 = &(this_ptr->base).base.field_0x257c;
    afStack_94[2] = afStack_f4[2] + *(float *)puVar1;
    afStack_94[3] = afStack_f4[3] + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_84 = fStack_e4 + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_c8 = afStack_94[2];
    afStack_f4[(uint)bVar10 * -2 + 0xc] = afStack_94[(uint)bVar10 * -2 + 3];
    afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    puVar2 = &(this_ptr->base).base.model.field_0x2254;
    fStack_98 = fStack_c8 + *(float *)puVar2;
    afStack_94[0] = fStack_c4 + *(float *)&(this_ptr->base).base.model.field_0x2258;
    afStack_94[1] = fStack_c0 + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_a4.x = fStack_98;
    *(float *)((int)&CStack_a4 + (uint)bVar10 * -8 + 4) = afStack_94[(uint)bVar10 * -2];
    *(float *)((int)&CStack_a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    uVar3 = *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 = uVar3;
    *(uint *)puVar2 = uVar3;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_a4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if (iStack_2c == 5) {
    (this_ptr->target_scale).x = this_ptr->stone_red << 8;
    (this_ptr->target_scale).y = this_ptr->stone_green << 8;
    (this_ptr->target_scale).z = this_ptr->stone_blue << 8;
  }
  else {
    (this_ptr->target_scale).y = 0xffff;
    (this_ptr->target_scale).z = 0xffff;
    (this_ptr->target_scale).x = 0xffff;
  }
  iVar6 = (this_ptr->target_scale).x;
  iVar7 = *(int *)&(this_ptr->base).base.base.field_0x108;
  if (iVar7 < iVar6) {
    iVar7 = *(int *)&(this_ptr->base).base.base.field_0x108 + _DAT_01c2a370;
    iVar6 = (this_ptr->target_scale).x;
    *(int *)&(this_ptr->base).base.base.field_0x108 = iVar7;
    if (iVar6 < iVar7) {
      *(int *)&(this_ptr->base).base.base.field_0x108 = iVar6;
    }
  }
  else if (iVar6 < iVar7) {
    iVar7 = *(int *)&(this_ptr->base).base.base.field_0x108 - _DAT_01c2a370;
    iVar6 = (this_ptr->target_scale).x;
    *(int *)&(this_ptr->base).base.base.field_0x108 = iVar7;
    if (iVar7 < iVar6) {
      *(int *)&(this_ptr->base).base.base.field_0x108 = iVar6;
    }
  }
  iVar6 = (this_ptr->target_scale).y;
  iVar7 = *(int *)&(this_ptr->base).base.base.field_0x10c;
  if (iVar7 < iVar6) {
    iVar7 = *(int *)&(this_ptr->base).base.base.field_0x10c + _DAT_01c2a370;
    iVar6 = (this_ptr->target_scale).y;
    *(int *)&(this_ptr->base).base.base.field_0x10c = iVar7;
    if (iVar6 < iVar7) {
      *(int *)&(this_ptr->base).base.base.field_0x10c = iVar6;
    }
  }
  else if (iVar6 < iVar7) {
    iVar7 = *(int *)&(this_ptr->base).base.base.field_0x10c - _DAT_01c2a370;
    iVar6 = (this_ptr->target_scale).y;
    *(int *)&(this_ptr->base).base.base.field_0x10c = iVar7;
    if (iVar7 < iVar6) {
      *(int *)&(this_ptr->base).base.base.field_0x10c = iVar6;
    }
  }
  iVar6 = (this_ptr->target_scale).z;
  iVar7 = *(int *)&(this_ptr->base).base.base.field_0x110;
  if (iVar7 < iVar6) {
    iVar7 = *(int *)&(this_ptr->base).base.base.field_0x110 + _DAT_01c2a370;
    iVar6 = (this_ptr->target_scale).z;
    *(int *)&(this_ptr->base).base.base.field_0x110 = iVar7;
    if (iVar6 < iVar7) {
      *(int *)&(this_ptr->base).base.base.field_0x110 = iVar6;
      return;
    }
  }
  else if (iVar6 < iVar7) {
    iVar7 = *(int *)&(this_ptr->base).base.base.field_0x110 - _DAT_01c2a370;
    iVar6 = (this_ptr->target_scale).z;
    *(int *)&(this_ptr->base).base.base.field_0x110 = iVar7;
    if (iVar7 < iVar6) {
      *(int *)&(this_ptr->base).base.base.field_0x110 = iVar6;
      return;
    }
  }
  return;
}
