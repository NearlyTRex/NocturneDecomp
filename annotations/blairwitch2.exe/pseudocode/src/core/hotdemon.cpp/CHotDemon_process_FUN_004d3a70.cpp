// Name: core_hotdemon.cpp_CHotDemon_process_FUN_004d3a70
// Address: 004d3a70
// Address Range: [[004d3a70, 004d42ce]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004d3a70(CHotDemon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004d3a70(CHotDemon *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  byte *puVar2;
  byte *puVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  int iVar6;
  int iVar7;
  CPathMap *path_map;
  uint uVar8;
  byte bVar9;
  float afStackY_114c [997];
  CHotDemon *this_ptr_00;
  float *pfVar10;
  CVector3f *pCVar11;
  float fVar12;
  uint *puVar13;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_1a0 [4];
  float fStack_19c;
  CHotDemon *pCStack_16c;
  CHotDemon *pCStack_168;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [5];
  float fStack_140;
  uint uStack_13c;
  float fStack_138;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [4];
  float fStack_114;
  uint uStack_110;
  float afStack_104 [3];
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [4];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  uint uStack_bc;
  float afStack_b8 [4];
  float fStack_a8;
  uint uStack_a4;
  float fStack_98;
  uint uStack_8c;
  float fStack_88;
  uint uStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  CMotionController *pCStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  fStack_34 = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < fStack_34) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCVar1,afStack_b8 + 0x21);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar6);
  }
  fVar12 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar12);
  iVar6 = core_motion_cpp_FUN_005035c0(pCVar1);
  iVar6 = *(int *)(iVar6 + 0x24);
  iStack_1c = iVar6;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    switch(iVar6) {
    case 0:
    case 6:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar5 = (this_ptr->base).victim;
      pCStack_24 = (CMotionController *)&(this_ptr->base).base.model;
      if (pCVar5 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,1,1);
        }
      }
      else {
        fStack_50 = *(float *)&(pCVar5->base).field_0x20 -
                    *(float *)&(this_ptr->base).base.base.field_0x20;
        fStack_4c = *(float *)&(pCVar5->base).field_0x24 -
                    *(float *)&(this_ptr->base).base.base.field_0x24;
        fStack_48 = *(float *)&(pCVar5->base).field_0x28 -
                    *(float *)&(this_ptr->base).base.base.field_0x28;
        fStack_128 = fStack_50;
        afStack_124[(uint)bVar9 * -2] = afStack_b8[(uint)bVar9 * -2 + 0x1b];
        afStack_124[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
        fStack_38 = SQRT(afStack_124[1] * afStack_124[1] +
                         fStack_128 * fStack_128 + afStack_124[0] * afStack_124[0]);
        fStack_2c = fStack_38;
        if (fStack_38 < 0x40000000) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_128);
          uStack_8c = uStack_80;
          afStack_b8[(uint)bVar9 * -2 + 0xc] = afStack_b8[(uint)bVar9 * -2 + 0xf];
          afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
               afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
          fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                       (fStack_88 - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(fStack_14) < (float)_DAT_005da661) {
            if (iStack_1c == 0) {
              iVar6 = 2;
            }
            else {
              iVar6 = 8;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,iVar6,1);
            iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
            if (iVar6 == 0) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
              this_ptr->sfx_handles[0] = uVar8;
            }
          }
        }
        if (fStack_2c < (this_ptr->base).guard_distance) {
          pCVar1 = &(this_ptr->base).base.model;
          if (_DAT_005f8868 <= fStack_2c) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar1,7,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar1,1,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
        }
      }
      break;
    case 1:
    case 7:
    case 0xf:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar12 = 0x40000000;
      pCStack_20 = (CMotionController *)&(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          if (iStack_1c == 1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,0,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,6,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
        }
      }
      else {
        fStack_28 = 0x40000000;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        CStack_134.x = 0.0;
        CStack_134.y = 0.0;
        max_distance = 0.17453292;
        CStack_134.z = fVar12;
        pCVar11 = &CStack_134;
        fVar12 = 0.5;
        pCVar5 = (this_ptr->base).victim;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,path_map,
                           pCVar11,fVar12,max_distance);
        if (-1 < iVar6) {
          pCVar5 = (this_ptr->base).victim;
          afStack_124[2] =
               *(float *)&(this_ptr->base).base.base.field_0x20 -
               *(float *)&(pCVar5->base).field_0x20;
          afStack_124[3] =
               *(float *)&(this_ptr->base).base.base.field_0x24 -
               *(float *)&(pCVar5->base).field_0x24;
          fStack_114 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                       *(float *)&(pCVar5->base).field_0x28;
          fStack_140 = afStack_124[2];
          afStack_154[(uint)bVar9 * -2 + 6] = afStack_124[(uint)bVar9 * -2 + 3];
          afStack_154[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_124[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          fStack_18 = SQRT(fStack_138 * fStack_138 + fStack_140 * fStack_140);
          uStack_13c = 0;
          fStack_30 = fStack_18;
          if ((_DAT_005f8868 < fStack_18) && (iStack_1c != 7)) {
            (this_ptr->base).attack_cooldown = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,7,1);
          }
          if ((fStack_30 <= fStack_28) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar5 = (this_ptr->base).victim;
            fStack_74 = *(float *)&(pCVar5->base).field_0x20 -
                        *(float *)&(this_ptr->base).base.base.field_0x20;
            fStack_70 = *(float *)&(pCVar5->base).field_0x24 -
                        *(float *)&(this_ptr->base).base.base.field_0x24;
            fStack_6c = *(float *)&(pCVar5->base).field_0x28 -
                        *(float *)&(this_ptr->base).base.base.field_0x28;
            fStack_ec = fStack_74;
            afStack_e8[(uint)bVar9 * -2] = afStack_b8[(uint)bVar9 * -2 + 0x12];
            afStack_e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_ec);
            uStack_68 = uStack_44;
            afStack_b8[(uint)bVar9 * -2 + 0x15] = afStack_b8[(uint)bVar9 * -2 + 0x1e];
            afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
                 afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                         (fStack_64 - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005da661) {
              if (iStack_1c == 7) {
                iVar6 = 8;
              }
              else {
                iVar6 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,iVar6,1);
              iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
              if (iVar6 == 0) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
                this_ptr->sfx_handles[0] = uVar8;
              }
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          if ((this_ptr->base).guard_distance < fStack_30) {
            pCVar1 = &(this_ptr->base).base.model;
            if (iStack_1c == 7) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCVar1,6,1);
              (this_ptr->base).attack_cooldown = 0.0;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCVar1,0,1);
              (this_ptr->base).attack_cooldown = 0.0;
            }
          }
        }
      }
      break;
    case 2:
    case 8:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1a0);
      fStack_19c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      damage_info = aSStack_1a0;
      pCStack_16c = this_ptr;
      pCStack_168 = this_ptr;
      fVar12 = 0.4;
      fStack_14 = fStack_19c;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01cee014 * 0x30);
      pfVar10 = afStack_124 + 8;
      afStack_104[0] = (float)uStack_110;
      afStack_124[(uint)bVar9 * -2 + 9] = afStack_124[(uint)bVar9 * -2 + 6];
      afStack_124[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
           afStack_124[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar10);
      pCVar11 = &CStack_f8;
      CStack_f8.x = afStack_154[2];
      *(float *)((int)&CStack_f8 + (uint)bVar9 * -8 + 4) = afStack_154[(uint)bVar9 * -2 + 3];
      this_ptr_00 = this_ptr;
      *(float *)((int)&CStack_f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_154[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                (&this_ptr_00->base,pCVar11,fVar12,damage_info);
      break;
    case 5:
    case 0xb:
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        core_skeleton_cpp_FUN_005469a0(&(this_ptr->base).base.model,0);
        puVar13 = &uStack_bc;
        uStack_bc = uStack_a4;
        afStack_b8[(uint)bVar9 * -2] = afStack_b8[(uint)bVar9 * -2 + 6];
        afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar13);
        blood_type = BLOOD_TYPE_RED;
        CStack_164.x = fStack_98;
        *(float *)((int)&CStack_164 + (uint)bVar9 * -8 + 4) = afStack_b8[(uint)bVar9 * -2 + 9];
        *(float *)((int)&CStack_164 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_164,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_004d42c8_caseD_3;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_004d3b3e:
      iVar6 = 1;
    }
    else {
LAB_004d3cfb:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar6,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_004d3b3e;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_004d3cfb;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620((CMotionController *)pCVar1,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
switchD_004d42c8_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_5c = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_58 = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_54 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    afStack_b8[2] = fStack_5c;
    afStack_b8[(uint)bVar9 * -2 + 3] = afStack_b8[(uint)bVar9 * -2 + 0x18];
    afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
    puVar2 = &(this_ptr->base).base.field_0x257c;
    fStack_158 = afStack_b8[2] + *(float *)puVar2;
    afStack_154[0] = afStack_b8[3] + *(float *)&(this_ptr->base).base.field_0x2580;
    afStack_154[1] = fStack_a8 + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_d4 = fStack_158;
    afStack_e8[(uint)bVar9 * -2 + 6] = afStack_154[(uint)bVar9 * -2];
    afStack_e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_154[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    puVar3 = &(this_ptr->base).base.model.field_0x2254;
    afStack_e8[2] = fStack_d4 + *(float *)puVar3;
    afStack_e8[3] = fStack_d0 + *(float *)&(this_ptr->base).base.model.field_0x2258;
    fStack_d8 = fStack_cc + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_c8.x = afStack_e8[2];
    *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4) = afStack_e8[(uint)bVar9 * -2 + 3];
    *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar3 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_c8);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
