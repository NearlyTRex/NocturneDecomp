// Name: core_smiley.cpp_CSmiley_process_FUN_00549ba0
// Address: 00549ba0
// Address Range: [[00549ba0, 0054a636]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_process_FUN_00549ba0(CSmiley *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_smiley_cpp_CSmiley_process_FUN_00549ba0(CSmiley *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  EWalkState EVar4;
  EDeathState EVar5;
  int iVar6;
  uint bone_index;
  int iVar7;
  CPathMap *path_map;
  CSmiley *pCVar8;
  byte bVar9;
  float afStackY_115c [952];
  float *pfVar10;
  uint *puVar11;
  CVector3f *pCVar12;
  float fVar13;
  SDamageInfo *pSVar14;
  EBloodType blood_type;
  float fVar15;
  SDamageInfo SStack_264;
  SDamageInfo SStack_228;
  SDamageInfo SStack_1ec;
  SDamageInfo SStack_1b0;
  float fStack_174;
  float afStack_170 [4];
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  CVector3f CStack_150;
  uint uStack_144;
  float afStack_140 [5];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [5];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [3];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float afStack_cc [3];
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  uint uStack_54;
  float afStack_50 [5];
  CVector3f CStack_3c;
  float afStack_30 [2];
  float fStack_28;
  int iStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  CVector3f *pCStack_14;
  
  bVar9 = 0;
  fVar13 = this_ptr->dismember_cooldown - delta_time;
  this_ptr->dismember_cooldown = fVar13;
  if (fVar13 < 0.0) {
    this_ptr->dismember_cooldown = 0.0;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) &&
     (EVar5 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), EVar5 == DEATH_STATE_ALIVE)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_264);
    SStack_264.damage_type = DAMAGE_TYPE_GENERIC;
    SStack_264.attacker = (CDemonActor *)this_ptr;
    SStack_264.wielder = (CDemonActor *)this_ptr;
    SStack_264.damage_amount = 9999.9;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&SStack_264);
  }
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_30[0] = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < afStack_30[0]) {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0
                           (&this_ptr_00->base,afStack_30);
    if (bone_index < 0x66) {
      if (bone_index == 0x65) {
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1);
        }
        else {
          iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)(pCVar3,(CDemonActor *)this_ptr,0)
          ;
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
      }
    }
    else if (bone_index < 0x67) {
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 != (CCharacter *)0x0) {
        (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
      }
    }
    else if (bone_index == 0x67) {
      iVar6 = this_ptr->attack_hit_count + 1;
      this_ptr->attack_hit_count = iVar6;
      if (2 < iVar6) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          (**(code **)(iRam000002b0 + 0xf8))(0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_228);
          SStack_228.damage_type = DAMAGE_TYPE_FALL_APART;
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&SStack_228);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
    }
  }
  fVar13 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar13);
  pCStack_1c = &(this_ptr->base).base.model.base;
  iVar6 = core_motion_cpp_FUN_005035c0(pCStack_1c);
  iVar6 = *(int *)(iVar6 + 0x24);
  iStack_24 = iVar6;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    switch(iVar6) {
    case 1:
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"Capture");
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          fStack_84 = (pCVar3->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          fStack_80 = (pCVar3->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_7c = (pCVar3->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_108 = fStack_84;
          afStack_11c[(uint)bVar9 * -2 + 6] = afStack_e0[(uint)bVar9 * -2 + 0x18];
          afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
          fStack_28 = SQRT(fStack_100 * fStack_100 +
                           fStack_108 * fStack_108 + fStack_104 * fStack_104);
          fStack_18 = fStack_28;
          if (fStack_28 < 0x40200000 + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_11c + 5);
            uStack_144 = uStack_90;
            afStack_140[(uint)bVar9 * -2] = afStack_e0[(uint)bVar9 * -2 + 0x15];
            afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
            pCStack_14 = (CVector3f *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                   (afStack_140[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS((float)pCStack_14) < (float)_DAT_005e77fd) {
              this_ptr->attack_hit_count = 0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,9,1);
            }
          }
          if (fStack_28 < this_ptr->guard_distance) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,2,1);
          }
        }
      }
      break;
    case 2:
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"Capture");
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
        else {
          if (this_ptr == (CSmiley *)pCVar3->grabbed_by) {
            (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          }
          CStack_3c.z = 0x40200000;
          fStack_20 = 0x40200000;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          CStack_3c.x = 0.0;
          CStack_3c.y = 0.0;
          fVar15 = 0.17453292;
          pCVar12 = &CStack_3c;
          fVar13 = 0.5;
          pCVar3 = (this_ptr->base).victim;
          path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,pCVar12,
                             fVar13,fVar15);
          if ((-1 < iVar6) && (0 < iVar6)) {
            pCVar3 = (this_ptr->base).victim;
            fStack_b4 = (pCVar3->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            fStack_b0 = (pCVar3->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_ac = (pCVar3->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            fStack_6c = fStack_b4;
            afStack_e0[(uint)bVar9 * -2 + 0x1e] = afStack_e0[(uint)bVar9 * -2 + 0xc];
            afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
                 afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
            if ((SQRT(fStack_64 * fStack_64 + fStack_6c * fStack_6c + fStack_68 * fStack_68) <
                 fStack_20 + 1.0) && (this_ptr->attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,6,1);
              this_ptr->attack_cooldown = 1.0;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      break;
    case 6:
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        (**(code **)(iRam000002b0 + 0xf8))(0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_1ec);
        SStack_1ec.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
        pSVar14 = &SStack_1ec;
        SStack_1ec.attacker = (CDemonActor *)this_ptr;
        SStack_1ec.wielder = (CDemonActor *)this_ptr;
        fVar13 = 1.0;
        pCStack_14 = (CVector3f *)SStack_1ec.damage_amount;
        core_xform_cpp_FUN_00591530
                  (&DAT_0265370c,
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_02628618);
        pfVar10 = afStack_11c + 8;
        afStack_fc[0] = afStack_11c[2];
        afStack_11c[(uint)bVar9 * -2 + 9] = afStack_11c[(uint)bVar9 * -2 + 3];
        afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar10);
        pCVar12 = &CStack_f0;
        CStack_f0.x = fStack_174;
        *(float *)((int)&CStack_f0 + (uint)bVar9 * -8 + 4) = afStack_170[(uint)bVar9 * -2];
        pCVar8 = this_ptr;
        *(float *)((int)&CStack_f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_170[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar8->base,pCVar12,fVar13,pSVar14);
      }
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_005469a0(pCStack_1c,0);
        pfVar10 = afStack_e0 + 5;
        afStack_cc[0] = afStack_140[2];
        afStack_e0[(uint)bVar9 * -2 + 6] = afStack_140[(uint)bVar9 * -2 + 3];
        afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar10);
        blood_type = BLOOD_TYPE_RED;
        CStack_150.x = afStack_50[2];
        *(float *)((int)&CStack_150 + (uint)bVar9 * -8 + 4) = afStack_50[(uint)bVar9 * -2 + 3];
        *(float *)((int)&CStack_150 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_50[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_150,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      else if (pCVar3->grabbed_by == (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      else {
        EVar5 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (EVar5 == DEATH_STATE_ALIVE) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_1b0);
          SStack_1b0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
          pSVar14 = &SStack_1b0;
          SStack_1b0.attacker = (CDemonActor *)this_ptr;
          SStack_1b0.wielder = (CDemonActor *)this_ptr;
          fVar13 = 1.0;
          pCStack_14 = (CVector3f *)SStack_1b0.damage_amount;
          core_xform_cpp_FUN_00591530
                    (&DAT_0265370c,
                     (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_02628618)
          ;
          puVar11 = &uStack_54;
          uStack_54 = uStack_c0;
          afStack_50[(uint)bVar9 * -2] = afStack_e0[(uint)bVar9 * -2 + 9];
          afStack_50[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          core_actor_cpp_FUN_00408d70(this_ptr,puVar11);
          pCVar12 = &CStack_60;
          CStack_60.x = fStack_120;
          *(float *)((int)&CStack_60 + (uint)bVar9 * -8 + 4) = afStack_11c[(uint)bVar9 * -2];
          pCVar8 = this_ptr;
          *(float *)((int)&CStack_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
               afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar8->base,pCVar12,fVar13,pSVar14);
        }
        else {
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
      }
      break;
    case 10:
      pCVar3 = (this_ptr->base).victim;
      EVar5 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
      if (EVar5 != DEATH_STATE_ALIVE) {
        pCVar3 = (this_ptr->base).victim;
        (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
    }
    goto switchD_0054a4fd_caseD_3;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_00549e39:
      iVar6 = 2;
    }
    else {
LAB_00549f5a:
      iVar6 = 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_00549e39;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_00549f5a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,1,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0054a4fd_caseD_3:
  if (0.0 < this_ptr->attack_cooldown) {
    this_ptr->attack_cooldown = this_ptr->attack_cooldown - delta_time;
  }
  if (iStack_24 == 0xb) {
    pCStack_14 = &(this_ptr->base).base.model.accumulated_root_motion;
    core_actor_cpp_FUN_00408cf0(this_ptr,pCStack_14);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_15c = fStack_78;
    afStack_170[(uint)bVar9 * -2 + 6] = afStack_e0[(uint)bVar9 * -2 + 0x1b];
    afStack_170[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
    fVar13 = (this_ptr->base).base.base.location.position.y;
    fVar15 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_15c;
    (this_ptr->base).base.base.location.position.y = fVar13 + fStack_158;
    (this_ptr->base).base.base.location.position.z = fVar15 + fStack_154;
    pCStack_14->z = 0.0;
    pCStack_14->y = pCStack_14->z;
    pCStack_14->x = pCStack_14->y;
  }
  else {
    iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
    if (iVar6 != 0) {
      pCVar3 = (this_ptr->base).victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (pCVar8 = (CSmiley *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
         pCVar8 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
      }
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
      fStack_e4 = (this_ptr->base).base.velocity.x * delta_time;
      afStack_e0[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_e0[1] = (this_ptr->base).base.velocity.z * delta_time;
      afStack_e0[2] = fStack_e4;
      afStack_e0[(uint)bVar9 * -2 + 3] = afStack_e0[(uint)bVar9 * -2];
      afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      pCVar12 = &(this_ptr->base).base.position_delta;
      fStack_a8 = afStack_e0[2] + pCVar12->x;
      fStack_a4 = afStack_e0[3] + (this_ptr->base).base.position_delta.y;
      fStack_a0 = fStack_d0 + (this_ptr->base).base.position_delta.z;
      afStack_170[2] = fStack_a8;
      afStack_170[(uint)bVar9 * -2 + 3] = afStack_e0[(uint)bVar9 * -2 + 0xf];
      afStack_170[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
      pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
      fStack_9c = afStack_170[2] + pCVar2->x;
      fStack_98 = afStack_170[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
      fStack_94 = fStack_160 + (this_ptr->base).base.model.accumulated_root_motion.z;
      CStack_12c.x = fStack_9c;
      *(float *)((int)&CStack_12c + (uint)bVar9 * -8 + 4) = afStack_e0[(uint)bVar9 * -2 + 0x12];
      *(float *)((int)&CStack_12c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar12->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar13 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar13;
      pCVar2->x = fVar13;
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_12c);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
