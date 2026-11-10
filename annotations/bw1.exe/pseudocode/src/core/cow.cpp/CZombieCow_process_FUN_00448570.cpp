// Name: core_cow.cpp_CZombieCow_process_FUN_00448570
// Address: 00448570
// Address Range: [[00448570, 00448ae0]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_process_FUN_00448570(CZombieCow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_cow_cpp_CZombieCow_process_FUN_00448570(CZombieCow *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  uint uVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  CZombieCow *pCVar7;
  uint uVar8;
  CPathMap *path_map;
  byte bVar9;
  float afStackY_10b8 [997];
  uint *puVar10;
  CVector3f *pCVar11;
  float fVar12;
  SDamageInfo *damage_info;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_10c [4];
  float fStack_108;
  CZombieCow *pCStack_d8;
  CZombieCow *pCStack_d4;
  uint uStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  CVector3f CStack_88;
  uint uStack_7c;
  float afStack_78 [4];
  float fStack_68;
  float fStack_64;
  CVector3f CStack_58;
  uint uStack_4c;
  float afStack_48 [5];
  float fStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_1c = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < fStack_1c) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270(&this_ptr_00->base,&fStack_1c);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar5);
  }
  fVar12 = (this_ptr->base).speed;
  *(float *)&(this_ptr->base).base.field_0x2524 =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar12);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  uVar2 = *(uint *)(pSVar6 + 0x24);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(uVar2) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                            (0x02C82A60,this_ptr->sfx_handle);
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"cow?.wav");
            this_ptr->sfx_handle = uVar8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar12 = 0x40900000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0,1);
        }
      }
      else {
        fStack_18 = 0x40900000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_88.x = 0.0;
        CStack_88.y = 0.0;
        max_distance = 0.17453292;
        CStack_88.z = fVar12;
        pCVar11 = &CStack_88;
        fVar12 = 0.5;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar11,
                           fVar12,max_distance);
        if (iVar5 < 0) {
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0,1);
        }
        else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,2,1);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_10c);
      fStack_108 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pCStack_d8 = this_ptr;
      pCStack_d4 = this_ptr;
      damage_info = aSStack_10c;
      fVar12 = 0.7;
      fStack_14 = fStack_108;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&(this_ptr->base).base.model.field_0xe80 + this_ptr->bone_head * 0x30
                );
      puVar10 = &uStack_4c;
      uStack_4c = uStack_d0;
      afStack_48[(uint)bVar9 * -2] = afStack_cc[(uint)bVar9 * -2];
      afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr,puVar10);
      pCVar11 = &CStack_ac;
      CStack_ac.x = fStack_64;
      *(float *)((int)&CStack_ac + (uint)bVar9 * -8 + 4) = afStack_78[(uint)bVar9 * -2 + 6];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_ac + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar7->base,pCVar11,fVar12,damage_info);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040(this_ptr_00,0);
        puVar10 = &uStack_7c;
        uStack_7c = afStack_48[2];
        afStack_78[(uint)bVar9 * -2] = afStack_48[(uint)bVar9 * -2 + 3];
        afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_FUN_00408b40(this_ptr,puVar10);
        blood_type = BLOOD_TYPE_RED;
        CStack_58.x = fStack_34;
        *(float *)((int)&CStack_58 + (uint)bVar9 * -8 + 4) = afStack_48[(uint)bVar9 * -2 + 6];
        *(float *)((int)&CStack_58 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_58,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00448ada_caseD_3;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_0044863b:
      iVar5 = 1;
    }
    else {
LAB_00448820:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_0044863b;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_00448820;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00448ada_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar7 = (CZombieCow *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    afStack_cc[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_cc[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_bc = (this_ptr->base).base.velocity.z * delta_time;
    afStack_9c[2] = afStack_cc[2];
    afStack_9c[(uint)bVar9 * -2 + 3] = afStack_cc[(uint)bVar9 * -2 + 3];
    afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    pCVar11 = &(this_ptr->base).base.position_delta;
    fStack_a0 = afStack_9c[2] + pCVar11->x;
    afStack_9c[0] = afStack_9c[3] + (this_ptr->base).base.position_delta.y;
    afStack_9c[1] = fStack_8c + (this_ptr->base).base.position_delta.z;
    afStack_78[2] = fStack_a0;
    afStack_78[(uint)bVar9 * -2 + 3] = afStack_9c[(uint)bVar9 * -2];
    afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_b8 = afStack_78[2] + pCVar1->x;
    fStack_b4 = afStack_78[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_b0 = fStack_68 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_28.x = fStack_b8;
    *(float *)((int)&CStack_28 + (uint)bVar9 * -8 + 4) = afStack_cc[(uint)bVar9 * -2 + 6];
    *(float *)((int)&CStack_28 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar11->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_28);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
