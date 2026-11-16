// Name: core_smiley.cpp_CSmiley_process_FUN_0056c220
// Address: 0056c220
// Address Range: [[0056c220, 0056ccb6]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_process_FUN_0056c220(CSmiley *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_smiley_cpp_CSmiley_process_FUN_0056c220(CSmiley *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  EWalkState EVar4;
  EDeathState EVar5;
  int iVar6;
  uint bone_index;
  SMotion *pSVar7;
  int iVar8;
  CPathMap *path_map;
  CSmiley *pCVar9;
  byte bVar10;
  float afStackY_115c [952];
  CVector3f *pCVar11;
  float fVar12;
  SDamageInfo *pSVar13;
  EBloodType blood_type;
  float fVar14;
  SDamageInfo SStack_264;
  SDamageInfo SStack_228;
  SDamageInfo SStack_1ec;
  SDamageInfo SStack_1b0;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [4];
  float fStack_154;
  CVector3f CStack_150;
  float fStack_144;
  float afStack_140 [2];
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_114;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [2];
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [2];
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float afStack_30 [2];
  float fStack_28;
  int iStack_24;
  float fStack_20;
  CDeformableModelInstance *pCStack_1c;
  float fStack_18;
  CVector3f *pCStack_14;
  
  bVar10 = 0;
  fVar12 = this_ptr->dismember_cooldown - delta_time;
  this_ptr->dismember_cooldown = fVar12;
  if (fVar12 < 0.0) {
    this_ptr->dismember_cooldown = 0.0;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) &&
     (EVar5 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), EVar5 == DEATH_STATE_ALIVE)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_264);
    SStack_264.damage_type = DAMAGE_TYPE_GENERIC;
    SStack_264.attacker = (CDemonActor *)this_ptr;
    SStack_264.wielder = (CDemonActor *)this_ptr;
    SStack_264.damage_amount = 9999.9;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&SStack_264);
  }
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
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
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270
                           (&this_ptr_00->base,afStack_30);
    if (bone_index < 0x66) {
      if (bone_index == 0x65) {
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1);
        }
        else {
          iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)(pCVar3,(CDemonActor *)this_ptr,0)
          ;
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,bone_index);
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
          (**(code **)(iRam00000154 + 0xf0))(0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_228);
          SStack_228.damage_type = DAMAGE_TYPE_FALL_APART;
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&SStack_228);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,bone_index);
    }
  }
  fVar12 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320
            ((CCharacter *)this_ptr,delta_time * fVar12);
  pCStack_1c = &(this_ptr->base).base.model;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCStack_1c->base);
  iVar6 = pSVar7->state_index;
  iStack_24 = iVar6;
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 1:
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"Capture");
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          fStack_84 = (pCVar3->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          afStack_80[0] =
               (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_80[1] =
               (pCVar3->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          CStack_108.x = fStack_84;
          *(float *)((int)&CStack_108 + (uint)bVar10 * -8 + 4) = afStack_80[(uint)bVar10 * -2];
          *(float *)((int)&CStack_108 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          fStack_28 = SQRT(CStack_108.z * CStack_108.z +
                           CStack_108.x * CStack_108.x + CStack_108.y * CStack_108.y);
          fStack_18 = fStack_28;
          if (fStack_28 < 0x40200000 + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_108,&CStack_90)
            ;
            fStack_144 = CStack_90.x;
            afStack_140[(uint)bVar10 * -2] = *(float *)((int)&CStack_90 + (uint)bVar10 * -8 + 4);
            afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 *(float *)((int)&CStack_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            pCStack_14 = (CVector3f *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                   (afStack_140[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS((float)pCStack_14) < (float)_DAT_005f29f7) {
              this_ptr->attack_hit_count = 0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,9,1);
            }
          }
          if (fStack_28 < this_ptr->guard_distance) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,2,1);
          }
        }
      }
      break;
    case 2:
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"Capture");
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,1,1);
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
          fVar14 = 0.17453292;
          pCVar11 = &CStack_3c;
          fVar12 = 0.5;
          pCVar3 = (this_ptr->base).victim;
          path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,pCVar11,
                             fVar12,fVar14);
          if ((-1 < iVar6) && (0 < iVar6)) {
            pCVar3 = (this_ptr->base).victim;
            fStack_b4 = (pCVar3->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            afStack_b0[0] =
                 (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            afStack_b0[1] =
                 (pCVar3->base).location.position.z - (this_ptr->base).base.base.location.position.z
            ;
            fStack_6c = fStack_b4;
            afStack_68[(uint)bVar10 * -2] = afStack_b0[(uint)bVar10 * -2];
            afStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if ((SQRT(afStack_68[1] * afStack_68[1] +
                      fStack_6c * fStack_6c + afStack_68[0] * afStack_68[0]) < fStack_20 + 1.0) &&
               (this_ptr->attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,6,1);
              this_ptr->attack_cooldown = 1.0;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,1,1);
      }
      break;
    case 6:
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        (**(code **)(iRam00000154 + 0xf0))(0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_1ec);
        SStack_1ec.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
        pSVar13 = &SStack_1ec;
        SStack_1ec.attacker = (CDemonActor *)this_ptr;
        SStack_1ec.wielder = (CDemonActor *)this_ptr;
        fVar12 = 1.0;
        pCStack_14 = (CVector3f *)SStack_1ec.damage_amount;
        core_xform_cpp_transformVector3x4_FUN_005b5080
                  ((CVector3f *)&DAT_02c8af28,
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_02c5fce0,
                   &CStack_114);
        pCVar11 = &CStack_fc;
        CStack_fc.x = CStack_114.x;
        *(uint *)((int)&CStack_fc + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_fc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar11,&CStack_174);
        pCVar11 = &CStack_f0;
        CStack_f0.x = CStack_174.x;
        *(uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_174 + (uint)bVar10 * -8 + 4);
        pCVar9 = this_ptr;
        *(uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_174 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar9->base,pCVar11,fVar12,pSVar13);
      }
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (pCStack_1c,0,&CStack_138);
        pCVar11 = &CStack_cc;
        CStack_cc.x = CStack_138.x;
        *(uint *)((int)&CStack_cc + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_138 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_cc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_138 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar11,&CStack_48);
        blood_type = BLOOD_TYPE_RED;
        CStack_150.x = CStack_48.x;
        *(uint *)((int)&CStack_150 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_48 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_150 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_48 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_150,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,1,1);
      }
      else if (pCVar3->grabbed_by == (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,1,1);
      }
      else {
        EVar5 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (EVar5 == DEATH_STATE_ALIVE) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_1b0);
          SStack_1b0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
          pSVar13 = &SStack_1b0;
          SStack_1b0.attacker = (CDemonActor *)this_ptr;
          SStack_1b0.wielder = (CDemonActor *)this_ptr;
          fVar12 = 1.0;
          pCStack_14 = (CVector3f *)SStack_1b0.damage_amount;
          core_xform_cpp_transformVector3x4_FUN_005b5080
                    ((CVector3f *)&DAT_02c8af28,
                     (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_02c5fce0,
                     &CStack_c0);
          pCVar11 = &CStack_54;
          CStack_54.x = CStack_c0.x;
          *(uint *)((int)&CStack_54 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + 4);
          *(uint *)((int)&CStack_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                    ((CDemonActor *)this_ptr,pCVar11,&CStack_120);
          pCVar11 = &CStack_60;
          CStack_60.x = CStack_120.x;
          *(uint *)((int)&CStack_60 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_120 + (uint)bVar10 * -8 + 4);
          pCVar9 = this_ptr;
          *(uint *)((int)&CStack_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_120 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar9->base,pCVar11,fVar12,pSVar13);
        }
        else {
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,1,1);
        }
      }
      break;
    case 10:
      pCVar3 = (this_ptr->base).victim;
      EVar5 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
      if (EVar5 != DEATH_STATE_ALIVE) {
        pCVar3 = (this_ptr->base).victim;
        (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,1,1);
      }
    }
    goto switchD_0056cb7d_caseD_3;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_0056c4b9:
      iVar6 = 2;
    }
    else {
LAB_0056c5da:
      iVar6 = 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_0056c4b9;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0056c5da;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,1,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0056cb7d_caseD_3:
  if (0.0 < this_ptr->attack_cooldown) {
    this_ptr->attack_cooldown = this_ptr->attack_cooldown - delta_time;
  }
  if (iStack_24 == 0xb) {
    pCStack_14 = &(this_ptr->base).base.model.accumulated_root_motion;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
              ((CDemonActor *)this_ptr,pCStack_14,&CStack_78);
    pCVar1 = &(this_ptr->base).base.base.location;
    afStack_164[2] = CStack_78.x;
    afStack_164[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_78 + (uint)bVar10 * -8 + 4);
    afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         *(float *)((int)&CStack_78 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    fVar12 = (this_ptr->base).base.base.location.position.y;
    fVar14 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + afStack_164[2];
    (this_ptr->base).base.base.location.position.y = fVar12 + afStack_164[3];
    (this_ptr->base).base.base.location.position.z = fVar14 + fStack_154;
    pCStack_14->z = 0.0;
    pCStack_14->y = pCStack_14->z;
    pCStack_14->x = pCStack_14->y;
  }
  else {
    iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
    if (iVar6 != 0) {
      pCVar3 = (this_ptr->base).victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (pCVar9 = (CSmiley *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
         pCVar9 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
      }
      core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700((CCharacter *)this_ptr,delta_time);
      fStack_e4 = (this_ptr->base).base.velocity.x * delta_time;
      afStack_e0[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_e0[1] = (this_ptr->base).base.velocity.z * delta_time;
      afStack_e0[2] = fStack_e4;
      afStack_e0[(uint)bVar10 * -2 + 3] = afStack_e0[(uint)bVar10 * -2];
      afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pCVar11 = &(this_ptr->base).base.position_delta;
      afStack_b0[2] = afStack_e0[2] + pCVar11->x;
      afStack_b0[3] = afStack_e0[3] + (this_ptr->base).base.position_delta.y;
      fStack_a0 = fStack_d0 + (this_ptr->base).base.position_delta.z;
      fStack_168 = afStack_b0[2];
      afStack_164[(uint)bVar10 * -2] = afStack_b0[(uint)bVar10 * -2 + 3];
      afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
      fStack_9c = fStack_168 + pCVar2->x;
      fStack_98 = afStack_164[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
      fStack_94 = afStack_164[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
      CStack_12c.x = fStack_9c;
      *(float *)((int)&CStack_12c + (uint)bVar10 * -8 + 4) = afStack_b0[(uint)bVar10 * -2 + 6];
      *(float *)((int)&CStack_12c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar11->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar12 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar12;
      pCVar2->x = fVar12;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_12c);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
