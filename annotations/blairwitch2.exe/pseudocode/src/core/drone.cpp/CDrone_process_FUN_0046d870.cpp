// Name: core_drone.cpp_CDrone_process_FUN_0046d870
// Address: 0046d870
// Address Range: [[0046d870, 0046df64]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_process_FUN_0046d870(CDrone *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_drone_cpp_CDrone_process_FUN_0046d870(CDrone *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  byte *puVar1;
  byte *puVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  int iVar6;
  CDrone *pCVar7;
  CPathMap *path_map;
  uint uVar8;
  byte bVar9;
  float afStackY_10f0 [999];
  CVector3f *pCVar10;
  CGore *this_ptr_01;
  float fVar11;
  ulonglong uVar12;
  SDamageInfo *pSVar13;
  EBloodType blood_type;
  float in_stack_fffffec4;
  uint uStack_134;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [5];
  CVector3f CStack_c0;
  uint uStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  uint uStack_78;
  float afStack_74 [4];
  float fStack_64;
  float fStack_60;
  CVector3f CStack_54;
  uint uStack_48;
  float afStack_44 [5];
  uint uStack_30;
  float fStack_24;
  byte *puStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    return;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  fStack_24 = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < fStack_24) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr_00,afStack_44 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar5);
  }
  *(float *)&(this_ptr->base).base.field_0x2594 =
       *(float *)&(this_ptr->base).base.model.field_0x225c * (float)_DAT_005d18a1;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar5 = core_motion_cpp_FUN_005035c0();
  iVar5 = *(int *)(iVar5 + 0x24);
  iStack_18 = iVar5;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar11 = 0x40400000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,0,1);
        }
      }
      else {
        fStack_1c = 0x40400000;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        afStack_d4[2] = 0.0;
        afStack_d4[3] = 0.0;
        afStack_d4[4] = fVar11;
        uVar12 = 0x3e32b8c23f000000;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,path_map,
                           (CVector3f *)uVar12,(float)((ulonglong)uVar12 >> 0x20),in_stack_fffffec4)
        ;
        if (iVar5 < 0) {
          engine_console_cpp_FUN_00436710();
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,0,1);
        }
        else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,2,1);
          uVar8 = this_ptr->sfx_handles[2];
          (this_ptr->base).attack_cooldown = 1.0;
          iVar5 = sound_sndmain_cpp_FUN_00550b70(uVar8);
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"drone-attack?.wav");
            this_ptr->sfx_handles[2] = uVar8;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffebc);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
      pSVar13 = (SDamageInfo *)&stack0xfffffebc;
      puStack_20 = &(this_ptr->base).base.model.field_0xe80;
      fVar11 = 0.4;
      core_xform_cpp_FUN_00591530(&DAT_0265370c);
      uStack_48 = uStack_b4;
      afStack_44[(uint)bVar9 * -2] = afStack_b0[(uint)bVar9 * -2];
      afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr);
      pCVar10 = &CStack_c0;
      CStack_c0.x = fStack_9c;
      *(float *)((int)&CStack_c0 + (uint)bVar9 * -8 + 4) = afStack_b0[(uint)bVar9 * -2 + 6];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar7->base,pCVar10,fVar11,pSVar13);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
      pSVar13 = (SDamageInfo *)&stack0xfffffebc;
      fVar11 = 0.4;
      core_xform_cpp_FUN_00591530(&DAT_0265370c);
      uStack_f0 = uStack_78;
      *(float *)((int)&stack0xffffff08 + ((uint)bVar9 * -2 + 3) * 4) = afStack_74[(uint)bVar9 * -2];
      *(float *)((int)&stack0xffffff08 + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 4) * 4) =
           afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr);
      pCVar10 = &CStack_e4;
      CStack_e4.x = fStack_60;
      *(float *)((int)&CStack_e4 + (uint)bVar9 * -8 + 4) = afStack_74[(uint)bVar9 * -2 + 6];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_e4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar7->base,pCVar10,fVar11,pSVar13);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        core_skeleton_cpp_FUN_005469a0(this_ptr_00);
        uStack_30 = afStack_44[2];
        afStack_44[(uint)bVar9 * -2 + 6] = afStack_44[(uint)bVar9 * -2 + 3];
        afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr);
        pCVar10 = &CStack_54;
        blood_type = BLOOD_TYPE_ICHOR;
        *(uint *)((int)&CStack_54 + (uint)bVar9 * -8 + 4) =
             *(uint *)(&stack0xfffffefc + (uint)bVar9 * -8);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)(&stack0xffffff00 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar10,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      if ((this_ptr->base).base.is_on_ground != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,10,1);
      }
    }
    goto switchD_0046defe_caseD_3;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_0046d946:
      uVar12 = 0x100000001;
    }
    else {
LAB_0046db93:
      uVar12 = 0x100000000;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,(int)uVar12,
               (int)((ulonglong)uVar12 >> 0x20));
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_0046d946;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_0046db93;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,0,1);
    engine_console_cpp_FUN_00436710();
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
switchD_0046defe_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if ((iStack_18 == 1) &&
     (iVar5 = sound_sndmain_cpp_FUN_005515e0
                        ((double)*(float *)&(this_ptr->base).base.base.field_0x20,
                         (double)*(float *)&(this_ptr->base).base.base.field_0x24), iVar5 != 0)) {
    iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar5 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      iVar5 = 2;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)fStack_14,iVar5);
      uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,"slime.wav");
      this_ptr->sfx_handles[1] = uVar8;
      uStack_134 = 0x46df4c;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar7 = (CDrone *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10();
    fStack_fc = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_f8 = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_f4 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_90 = fStack_fc;
    afStack_b0[(uint)bVar9 * -2 + 9] = *(float *)((int)&stack0xffffff08 + (uint)bVar9 * -8);
    afStack_b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         *(float *)((int)&stack0xffffff08 + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4);
    puVar1 = &(this_ptr->base).base.field_0x257c;
    afStack_74[2] = fStack_90 + *(float *)puVar1;
    afStack_74[3] = fStack_8c + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_64 = fStack_88 + *(float *)&(this_ptr->base).base.field_0x2584;
    afStack_b0[2] = afStack_74[2];
    afStack_b0[(uint)bVar9 * -2 + 3] = afStack_74[(uint)bVar9 * -2 + 3];
    afStack_b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    puVar2 = &(this_ptr->base).base.model.field_0x2254;
    fStack_d8 = afStack_b0[2] + *(float *)puVar2;
    afStack_d4[0] = afStack_b0[3] + *(float *)&(this_ptr->base).base.model.field_0x2258;
    afStack_d4[1] = fStack_a0 + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_84.x = fStack_d8;
    *(float *)((int)&CStack_84 + (uint)bVar9 * -8 + 4) = afStack_d4[(uint)bVar9 * -2];
    *(float *)((int)&CStack_84 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_84);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
