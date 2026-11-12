// Name: core_drone.cpp_CDrone_process_FUN_00485d70
// Address: 00485d70
// Address Range: [[00485d70, 00486464]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_process_FUN_00485d70(CDrone *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_drone_cpp_CDrone_process_FUN_00485d70(CDrone *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CDrone *pCVar7;
  CPathMap *path_map;
  uint uVar8;
  byte bVar9;
  float afStackY_10f0 [999];
  CVector3f *pCVar10;
  CGore *this_ptr_01;
  ulonglong uVar11;
  SDamageInfo *pSVar12;
  EBloodType blood_type;
  float in_stack_fffffec4;
  float fVar13;
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
  
  bVar9 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
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
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      (&this_ptr_00->base,afStack_44 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar4);
  }
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).base.model.accumulated_root_motion.z * (float)_DAT_005db69a;
  core_charactr_cpp_FUN_00435320(this_ptr);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  iVar4 = pSVar5->state_index;
  iStack_18 = iVar4;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar4 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar13 = 0x40400000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0,1);
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
        afStack_d4[4] = fVar13;
        uVar11._0_4_ = 0x3f000000;
        uVar11._4_4_ = 0.17453292;
        pCVar3 = (this_ptr->base).victim;
        path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,
                           (CVector3f *)uVar11,SUB84(uVar11,4),in_stack_fffffec4);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0,1);
        }
        else if ((0 < iVar4) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,2,1);
          uVar8 = this_ptr->sfx_handles[2];
          (this_ptr->base).attack_cooldown = 1.0;
          iVar4 = sound_sndmain_cpp_FUN_005735a0(uVar8);
          if (iVar4 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"drone-attack?.wav");
            this_ptr->sfx_handles[2] = uVar8;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffebc);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
      pSVar12 = (SDamageInfo *)&stack0xfffffebc;
      pCStack_20 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      fVar13 = 0.4;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28);
      uStack_48 = uStack_b4;
      afStack_44[(uint)bVar9 * -2] = afStack_b0[(uint)bVar9 * -2];
      afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr);
      pCVar10 = &CStack_c0;
      CStack_c0.x = fStack_9c;
      *(float *)((int)&CStack_c0 + (uint)bVar9 * -8 + 4) = afStack_b0[(uint)bVar9 * -2 + 6];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar7->base,pCVar10,fVar13,pSVar12);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
      pSVar12 = (SDamageInfo *)&stack0xfffffebc;
      fVar13 = 0.4;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28);
      uStack_f0 = uStack_78;
      *(float *)(&stack0xfffffefc + ((uint)bVar9 * -2 + 6) * 4) = afStack_74[(uint)bVar9 * -2];
      *(float *)(&stack0xfffffefc + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 7) * 4) =
           afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr);
      pCVar10 = &CStack_e4;
      CStack_e4.x = fStack_60;
      *(float *)((int)&CStack_e4 + (uint)bVar9 * -8 + 4) = afStack_74[(uint)bVar9 * -2 + 6];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_e4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar7->base,pCVar10,fVar13,pSVar12);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040(this_ptr_00);
        uStack_30 = afStack_44[2];
        afStack_44[(uint)bVar9 * -2 + 6] = afStack_44[(uint)bVar9 * -2 + 3];
        afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_FUN_00408b40(this_ptr);
        pCVar10 = &CStack_54;
        blood_type = BLOOD_TYPE_ICHOR;
        *(uint *)((int)&CStack_54 + (uint)bVar9 * -8 + 4) =
             *(uint *)(&stack0xfffffefc + (uint)bVar9 * -8);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)(&stack0xfffffefc + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 1) * 4);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar10,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      if ((this_ptr->base).base.is_on_ground != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,10,1);
      }
    }
    goto switchD_004863fe_caseD_3;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_00485e46:
      uVar11 = 0x100000001;
    }
    else {
LAB_00486093:
      uVar11 = 0x100000000;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_00485e46;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_00486093;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004863fe_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if ((iStack_18 == 1) &&
     (iVar4 = sound_sndmain_cpp_FUN_00574010
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y), iVar4 != 0)) {
    iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      fVar13 = 2.8026e-45;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
      sound_sndmain_cpp_FUN_00572a50((double)fStack_14,(int)fVar13);
      uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,"slime.wav");
      this_ptr->sfx_handles[1] = uVar8;
      fStack_134 = 6.648135e-39;
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar7 = (CDrone *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700();
    fStack_fc = (this_ptr->base).base.velocity.x * delta_time;
    fStack_f8 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_f4 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_90 = fStack_fc;
    afStack_b0[(uint)bVar9 * -2 + 9] = *(float *)(&stack0xfffffefc + ((uint)bVar9 * -2 + 3) * 4);
    afStack_b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         *(float *)(&stack0xfffffefc + ((uint)bVar9 * -2 + (uint)bVar9 * -2 + 4) * 4);
    pCVar10 = &(this_ptr->base).base.position_delta;
    afStack_74[2] = fStack_90 + pCVar10->x;
    afStack_74[3] = fStack_8c + (this_ptr->base).base.position_delta.y;
    fStack_64 = fStack_88 + (this_ptr->base).base.position_delta.z;
    afStack_b0[2] = afStack_74[2];
    afStack_b0[(uint)bVar9 * -2 + 3] = afStack_74[(uint)bVar9 * -2 + 3];
    afStack_b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_d8 = afStack_b0[2] + pCVar1->x;
    afStack_d4[0] = afStack_b0[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_d4[1] = fStack_a0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_84.x = fStack_d8;
    *(float *)((int)&CStack_84 + (uint)bVar9 * -8 + 4) = afStack_d4[(uint)bVar9 * -2];
    *(float *)((int)&CStack_84 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_84);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
