// Name: core_dog.cpp_CZombieDog_process_FUN_0045e360
// Address: 0045e360
// Address Range: [[0045e360, 0045eaa6]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_process_FUN_0045e360(CZombieDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dog_cpp_CZombieDog_process_FUN_0045e360(CZombieDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  byte *puVar2;
  byte *puVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  int iVar6;
  CZombieDog *pCVar7;
  uint uVar8;
  CPathMap *path_map;
  byte bVar9;
  float afStackY_1104 [997];
  float *pfVar10;
  CVector3f *pCVar11;
  float fVar12;
  SDamageInfo *damage_info;
  uint *puVar13;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_158 [4];
  float fStack_154;
  CZombieDog *pCStack_124;
  CZombieDog *pCStack_120;
  float fStack_11c;
  float afStack_118 [5];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  CVector3f CStack_c8;
  uint uStack_bc;
  float afStack_b8 [2];
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [5];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [5];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0((CCharacter *)this_ptr,delta_time);
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420
            ((CCharacter *)this_ptr,delta_time,0);
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  fStack_24 = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < fStack_24) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCVar1,&fStack_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar6);
  }
  iVar6 = core_motion_cpp_FUN_005035c0(pCVar1);
  fVar12 = (this_ptr->base).speed;
  iVar6 = *(int *)(iVar6 + 0x24);
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  iStack_18 = iVar6;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar12);
  if (iVar6 == 2) {
    *(float *)&(this_ptr->base).base.field_0x2598 =
         *(float *)&(this_ptr->base).base.field_0x2598 * (float)_DAT_005d090c;
  }
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iStack_18) {
    case 0:
      iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      pCStack_1c = (CMotionController *)&(this_ptr->base).base.model;
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar5 = (this_ptr->base).victim;
        if (pCVar5 != (CCharacter *)0x0) {
          fStack_80 = *(float *)&(pCVar5->base).field_0x20 -
                      *(float *)&(this_ptr->base).base.base.field_0x20;
          fStack_7c = *(float *)&(pCVar5->base).field_0x24 -
                      *(float *)&(this_ptr->base).base.base.field_0x24;
          fStack_78 = *(float *)&(pCVar5->base).field_0x28 -
                      *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_104 = fStack_80;
          afStack_118[(uint)bVar9 * -2 + 6] = afStack_a0[(uint)bVar9 * -2 + 9];
          afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          fStack_2c = fStack_fc * fStack_fc + fStack_104 * fStack_104 + fStack_100 * fStack_100;
          fStack_28 = (float)(((int)fStack_2c >> 1) + _DAT_01caf5b4);
          if (fStack_28 < _DAT_005f5334) {
            iVar6 = 1;
          }
          else {
            iVar6 = 2;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,iVar6,1);
          iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70
                            (0x0264B290,this_ptr->sfx_handle);
          if (iVar6 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"dog5.wav");
            this_ptr->sfx_handle = uVar8;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar5 = (this_ptr->base).victim;
      pCStack_20 = (CMotionController *)&(this_ptr->base).base.model;
      if (pCVar5 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
        }
      }
      else {
        fStack_d4 = *(float *)&(this_ptr->base).base.base.field_0x20 -
                    *(float *)&(pCVar5->base).field_0x20;
        afStack_d0[0] =
             *(float *)&(this_ptr->base).base.base.field_0x24 - *(float *)&(pCVar5->base).field_0x24
        ;
        afStack_d0[1] =
             *(float *)&(this_ptr->base).base.base.field_0x28 - *(float *)&(pCVar5->base).field_0x28
        ;
        fStack_f8 = fStack_d4;
        afStack_118[(uint)bVar9 * -2 + 9] = afStack_d0[(uint)bVar9 * -2];
        afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if ((_DAT_005f5334 <
             SQRT(fStack_f0 * fStack_f0 + fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4)) &&
           (iStack_18 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,2,1);
        }
        CStack_ec.z = 0x40400000;
        fStack_30 = 0x40400000;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        CStack_ec.x = 0.0;
        CStack_ec.y = 0.0;
        max_distance = 0.17453292;
        pCVar11 = &CStack_ec;
        fVar12 = 0.5;
        pCVar5 = (this_ptr->base).victim;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,path_map,
                           pCVar11,fVar12,max_distance);
        pCVar1 = &(this_ptr->base).base.model;
        if (iVar6 < 0) {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar1,0,1);
        }
        else if ((0 < iVar6) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
          if ((float)_DAT_005d0914 < fStack_14) {
            iVar6 = 3;
          }
          else {
            iVar6 = 4;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar1,iVar6,1);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_158);
      fStack_154 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pCStack_124 = this_ptr;
      pCStack_120 = this_ptr;
      damage_info = aSStack_158;
      fVar12 = 0.7;
      fStack_14 = fStack_154;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,
                 &(this_ptr->base).base.model.field_0xe80 + this_ptr->bone_indices[1] * 0x30);
      pfVar10 = afStack_a0 + 0x17;
      afStack_44[0] = afStack_118[2];
      afStack_a0[(uint)bVar9 * -2 + 0x18] = afStack_118[(uint)bVar9 * -2 + 3];
      afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
           afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar10);
      pCVar11 = &CStack_b0;
      CStack_b0.x = fStack_68;
      *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4) = afStack_a0[(uint)bVar9 * -2 + 0xf];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar7->base,pCVar11,fVar12,damage_info);
      iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(0x0264B290,this_ptr->sfx_handle);
      if (iVar6 == 0) {
        uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"dog5.wav");
        this_ptr->sfx_handle = uVar8;
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        core_skeleton_cpp_FUN_005469a0(&(this_ptr->base).base.model,0);
        puVar13 = &uStack_bc;
        uStack_bc = uStack_5c;
        afStack_b8[(uint)bVar9 * -2] = afStack_a0[(uint)bVar9 * -2 + 0x12];
        afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar13);
        blood_type = BLOOD_TYPE_RED;
        CStack_c8.x = afStack_a0[2];
        *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4) = afStack_a0[(uint)bVar9 * -2 + 3];
        *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_c8,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_0045eaa0_caseD_5;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_0045e482:
      iVar6 = 1;
    }
    else {
LAB_0045e65c:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar6,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_0045e482;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0045e65c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
switchD_0045eaa0_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    pCVar5 = (this_ptr->base).victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar7 = (CZombieDog *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_50 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_4c = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_48 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_8c = fStack_50;
    afStack_a0[(uint)bVar9 * -2 + 6] = afStack_a0[(uint)bVar9 * -2 + 0x15];
    afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
    puVar2 = &(this_ptr->base).base.field_0x257c;
    fStack_74 = fStack_8c + *(float *)puVar2;
    fStack_70 = fStack_88 + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_6c = fStack_84 + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_11c = fStack_74;
    afStack_118[(uint)bVar9 * -2] = afStack_a0[(uint)bVar9 * -2 + 0xc];
    afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    puVar3 = &(this_ptr->base).base.model.field_0x2254;
    fStack_a4 = fStack_11c + *(float *)puVar3;
    afStack_a0[0] = afStack_118[0] + *(float *)&(this_ptr->base).base.model.field_0x2258;
    afStack_a0[1] = afStack_118[1] + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_e0.x = fStack_a4;
    *(float *)((int)&CStack_e0 + (uint)bVar9 * -8 + 4) = afStack_a0[(uint)bVar9 * -2];
    *(float *)((int)&CStack_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar3 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_e0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
