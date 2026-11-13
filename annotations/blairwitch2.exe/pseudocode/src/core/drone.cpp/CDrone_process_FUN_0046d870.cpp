// Name: core_drone.cpp_CDrone_process_FUN_0046d870
// Address: 0046d870
// Address Range: [[0046d870, 0046df64]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_process_FUN_0046d870(CDrone *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_drone_cpp_CDrone_process_FUN_0046d870(CDrone *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  int iVar4;
  int iVar5;
  CDrone *pCVar6;
  CPathMap *path_map;
  uint uVar7;
  byte bVar8;
  float afStackY_10f0 [999];
  CVector3f *pCVar9;
  CGore *this_ptr_01;
  ulonglong uVar10;
  SDamageInfo *pSVar11;
  EBloodType blood_type;
  float in_stack_fffffec4;
  float fVar12;
  float fStack_134;
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
  CMatrix3x4f *pCStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_24 = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < fStack_24) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      (&this_ptr_00->base,afStack_44 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar4);
  }
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).base.model.accumulated_root_motion.z * (float)_DAT_005d18a1;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar4 = core_motion_cpp_FUN_005035c0();
  iVar4 = *(int *)(iVar4 + 0x24);
  iStack_18 = iVar4;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar4 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar12 = 0x40400000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
        }
      }
      else {
        fStack_1c = 0x40400000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        afStack_d4[2] = 0.0;
        afStack_d4[3] = 0.0;
        afStack_d4[4] = fVar12;
        uVar10._0_4_ = 0x3f000000;
        uVar10._4_4_ = 0.17453292;
        pCVar3 = (this_ptr->base).victim;
        path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,
                           (CVector3f *)uVar10,SUB84(uVar10,4),in_stack_fffffec4);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
        }
        else if ((0 < iVar4) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,2,1);
          uVar7 = this_ptr->sfx_handles[2];
          (this_ptr->base).attack_cooldown = 1.0;
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(uVar7);
          if (iVar4 == 0) {
            uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"drone-attack?.wav");
            this_ptr->sfx_handles[2] = uVar7;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffebc);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
      pSVar11 = (SDamageInfo *)&stack0xfffffebc;
      pCStack_20 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      fVar12 = 0.4;
      core_xform_cpp_FUN_00591530(&DAT_0265370c);
      uStack_48 = uStack_b4;
      afStack_44[(uint)bVar8 * -2] = afStack_b0[(uint)bVar8 * -2];
      afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr);
      pCVar9 = &CStack_c0;
      CStack_c0.x = fStack_9c;
      *(float *)((int)&CStack_c0 + (uint)bVar8 * -8 + 4) = afStack_b0[(uint)bVar8 * -2 + 6];
      pCVar6 = this_ptr;
      *(float *)((int)&CStack_c0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar6->base,pCVar9,fVar12,pSVar11);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
      pSVar11 = (SDamageInfo *)&stack0xfffffebc;
      fVar12 = 0.4;
      core_xform_cpp_FUN_00591530(&DAT_0265370c);
      uStack_f0 = uStack_78;
      *(float *)(&stack0xfffffefc + ((uint)bVar8 * -2 + 6) * 4) = afStack_74[(uint)bVar8 * -2];
      *(float *)(&stack0xfffffefc + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 7) * 4) =
           afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr);
      pCVar9 = &CStack_e4;
      CStack_e4.x = fStack_60;
      *(float *)((int)&CStack_e4 + (uint)bVar8 * -8 + 4) = afStack_74[(uint)bVar8 * -2 + 6];
      pCVar6 = this_ptr;
      *(float *)((int)&CStack_e4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar6->base,pCVar9,fVar12,pSVar11);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_005469a0(this_ptr_00);
        uStack_30 = afStack_44[2];
        afStack_44[(uint)bVar8 * -2 + 6] = afStack_44[(uint)bVar8 * -2 + 3];
        afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr);
        pCVar9 = &CStack_54;
        blood_type = BLOOD_TYPE_ICHOR;
        *(uint *)((int)&CStack_54 + (uint)bVar8 * -8 + 4) =
             *(uint *)(&stack0xfffffefc + (uint)bVar8 * -8);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)(&stack0xfffffefc + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar9,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      if ((this_ptr->base).base.is_on_ground != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,10,1);
      }
    }
    goto switchD_0046defe_caseD_3;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_0046d946:
      uVar10 = 0x100000001;
    }
    else {
LAB_0046db93:
      uVar10 = 0x100000000;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_0046d946;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_0046db93;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0046defe_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if ((iStack_18 == 1) &&
     (iVar4 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005515e0
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,50.0), iVar4 != 0))
  {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      fVar12 = 2.8026e-45;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)fStack_14,(int)fVar12);
      uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,"slime.wav");
      this_ptr->sfx_handles[1] = uVar7;
      fStack_134 = 6.508589e-39;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar6 = (CDrone *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar6 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10();
    fStack_fc = (this_ptr->base).base.velocity.x * delta_time;
    fStack_f8 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_f4 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_90 = fStack_fc;
    afStack_b0[(uint)bVar8 * -2 + 9] = *(float *)(&stack0xfffffefc + ((uint)bVar8 * -2 + 3) * 4);
    afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         *(float *)(&stack0xfffffefc + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 4) * 4);
    pCVar9 = &(this_ptr->base).base.position_delta;
    afStack_74[2] = fStack_90 + pCVar9->x;
    afStack_74[3] = fStack_8c + (this_ptr->base).base.position_delta.y;
    fStack_64 = fStack_88 + (this_ptr->base).base.position_delta.z;
    afStack_b0[2] = afStack_74[2];
    afStack_b0[(uint)bVar8 * -2 + 3] = afStack_74[(uint)bVar8 * -2 + 3];
    afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_d8 = afStack_b0[2] + pCVar1->x;
    afStack_d4[0] = afStack_b0[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_d4[1] = fStack_a0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_84.x = fStack_d8;
    *(float *)((int)&CStack_84 + (uint)bVar8 * -8 + 4) = afStack_d4[(uint)bVar8 * -2];
    *(float *)((int)&CStack_84 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar9->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_84);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
