// Name: core_construc.cpp_CConstruct_process_FUN_00436e80
// Address: 00436e80
// Address Range: [[00436e80, 00437b6e]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_process_FUN_00436e80(CConstruct *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_construc_cpp_CConstruct_process_FUN_00436e80(CConstruct *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *pCVar2;
  CDeformableModelInstance *pCVar3;
  CVector3f *pCVar4;
  CBodyPart *this_ptr_00;
  EWalkState EVar5;
  CCharacter *pCVar6;
  int iVar7;
  SBoneGuyBox *pSVar8;
  CDemonActor *pCVar9;
  int iVar10;
  uint uVar11;
  CPathMap *path_map;
  CConstruct *pCVar12;
  byte bVar13;
  float afStackY_19b4 [1504];
  SDamageInfo *pSVar14;
  CVector3f *pCVar15;
  float fVar16;
  float in_stack_fffffdf4;
  float fStack_208;
  uint uStack_1d8;
  uint auStack_1d4 [7];
  uint uStack_1b8;
  uint uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float afStack_1a8 [2];
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  uint uStack_190;
  float fStack_18c;
  uint uStack_188;
  float fStack_17c;
  CVector3f CStack_170;
  float fStack_164;
  float afStack_160 [5];
  uint uStack_14c;
  float fStack_148;
  uint uStack_140;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint uStack_128;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  uint uStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CBodyPart *pCStack_3c;
  CMotionController *pCStack_38;
  SBoneGuyBox *pSStack_34;
  CQuaternion4f *pCStack_30;
  CQuaternion4f *pCStack_2c;
  float *pfStack_28;
  int iStack_24;
  CVector3f *pCStack_20;
  float fStack_1c;
  int iStack_18;
  CMatrix3x4f *pCStack_14;
  
  bVar13 = 0;
  iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,this_ptr->death_event);
  if (iVar7 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_construc_cpp_CConstruct_explode_FUN_00438060(this_ptr);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
              (&(this_ptr->base).base.model.base,0xb,0.0);
  }
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
    return;
  }
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar16 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar16;
    if (fVar16 <= this_ptr->recombine_time) {
      this_ptr_00 = this_ptr->boxes[this_ptr->pickable_box_index].body_part;
      if (this_ptr_00 == (CBodyPart *)0x0) {
        return;
      }
      pCVar9 = (*((this_ptr_00->base).vtable._ub)->getCarrier)(&this_ptr_00->base);
      if (pCVar9 != *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
        return;
      }
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->death_event);
      core_event_cpp_CEventList_executeCommands_FUN_004894f0
                (0x01C38BC0,"ConstructKilled");
      pCVar2 = &(this_ptr_00->base).location;
      CStack_e0.y = 3.0;
      CStack_e0.x = 0.0;
      CStack_e0.z = 0.0;
      iVar7 = 0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                (0x01C3DEB4,&pCVar2->position,0.5,&CStack_e0,0xffff);
      do {
        iVar7 = iVar7 + 1;
        core_fire_cpp_CFireEffect_createFirefly_FUN_0049d6a0
                  (0x01C3DEB4,pCVar2,0,0x4000,0x10000,0,0xffff,1.0,0.4);
      } while (iVar7 < 10);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00
                (*(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4));
      return;
    }
    core_construc_cpp_FUN_004382a0(this_ptr);
  }
  if (this_ptr->blown_up == 2) {
    fVar16 = delta_time / _DAT_005f46a8 + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar16;
    if (fVar16 < 1.0) {
      iStack_24 = 0;
      if (this_ptr->box_count < 1) {
        return;
      }
      pSStack_34 = this_ptr->boxes;
      pfStack_28 = &this_ptr->recombine_interpolation;
      pCStack_2c = &this_ptr->boxes[0].dest_orient;
      pCStack_30 = &this_ptr->boxes[0].start_orient;
      pCStack_20 = &this_ptr->boxes[0].source_pos;
      do {
        pCVar15 = pCStack_20;
        pSVar8 = pSStack_34 + iStack_24;
        pCStack_3c = pSVar8->body_part;
        fStack_5c = (pSVar8->pos).x - pCStack_20->x;
        fStack_58 = (pSVar8->pos).y - pCStack_20->y;
        fStack_54 = (pSVar8->pos).z - pCStack_20->z;
        fStack_ec = fStack_5c;
        afStack_160[(uint)bVar13 * -2 + 0x1e] = afStack_94[(uint)bVar13 * -2 + 0xf];
        afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
             afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
        fStack_68 = fStack_ec * *pfStack_28;
        fStack_64 = fStack_e8 * *pfStack_28;
        fStack_60 = fStack_e4 * *pfStack_28;
        fStack_74 = fStack_ec * *pfStack_28;
        afStack_94[(uint)bVar13 * -2 + 9] = afStack_94[(uint)bVar13 * -2 + 0xc];
        afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
             afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
        afStack_d0[2] = pCVar15->x + fStack_74;
        afStack_d0[3] = pCVar15->y + fStack_70;
        fStack_c0 = pCVar15->z + fStack_6c;
        fStack_f8 = afStack_d0[2];
        afStack_160[(uint)bVar13 * -2 + 0x1b] = afStack_d0[(uint)bVar13 * -2 + 3];
        afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
             afStack_d0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        core_xform_cpp_slerpQuaternion_FUN_00593df0
                  (pCStack_2c,pCStack_30,this_ptr->recombine_interpolation);
        uStack_1d8 = auStack_1d4[3];
        *(uint *)((int)auStack_1d4 + (uint)bVar13 * 0xfffffff8) =
             *(uint *)((int)auStack_1d4 + ((uint)bVar13 * -2 + 4) * 4);
        *(uint *)((int)auStack_1d4 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 1) * 4) =
             *(uint *)((int)auStack_1d4 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 5) * 4);
        ((uint *)((int)auStack_1d4 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 1) * 4))
        [(uint)bVar13 * -2 + 1] =
             ((uint *)((int)auStack_1d4 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 5) * 4))
             [(uint)bVar13 * -2 + 1];
        core_xform_cpp_FUN_005940b0(&uStack_1d8);
        fStack_1a0 = fStack_17c;
        *(uint *)((int)afStack_1a8 + ((uint)bVar13 * -2 + 3) * 4) =
             *(uint *)((int)afStack_1a8 + ((uint)bVar13 * -2 + 0xc) * 4);
        *(uint *)((int)afStack_1a8 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 4) * 4) =
             *(uint *)((int)afStack_1a8 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd) * 4);
        fStack_1a0 = this_ptr->recombine_interpolation * (float)_DAT_005cde1b + fStack_1a0;
        (pCStack_3c->base).location.position.x = fStack_f8;
        (pCStack_3c->base).location.position.y = fStack_f4;
        pUVar1 = &(pCStack_3c->base).orient;
        (pCStack_3c->base).location.position.z = fStack_f0;
        if (pUVar1 != (UOrientationVector *)&fStack_1a0) {
          (pUVar1->vec).x = fStack_1a0;
          (pCStack_3c->base).orient.vec.y = fStack_19c;
          (pCStack_3c->base).orient.vec.z = fStack_198;
        }
        if (&pCStack_3c->physics_box != (CBox *)(afStack_160 + 0x1a)) {
          (pCStack_3c->physics_box).position.x = fStack_f8;
          (pCStack_3c->physics_box).position.y = fStack_f4;
          (pCStack_3c->physics_box).position.z = fStack_f0;
        }
        pCVar15 = &(pCStack_3c->physics_box).orientation;
        if (pCVar15 != (CVector3f *)&fStack_1a0) {
          pCVar15->x = fStack_1a0;
          (pCStack_3c->physics_box).orientation.y = fStack_19c;
          (pCStack_3c->physics_box).orientation.z = fStack_198;
        }
        iStack_24 = iStack_24 + 1;
        pCStack_2c = (CQuaternion4f *)((int)(pCStack_2c + 4) + 8);
        pCStack_30 = (CQuaternion4f *)((int)(pCStack_30 + 4) + 8);
        pCStack_20 = pCStack_20 + 6;
      } while (iStack_24 < this_ptr->box_count);
      return;
    }
    iVar7 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00547440
              (&(this_ptr->base).base.model);
    pCVar12 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0
                  (0x01D182F0,pCVar12->boxes[0].body_part,1);
        pCVar12->boxes[0].body_part = (CBodyPart *)0x0;
        iVar7 = iVar7 + 1;
        pCVar12 = (CConstruct *)((pCVar12->base).base.base.orient_matrix.m + 1);
      } while (iVar7 < this_ptr->box_count);
    }
    this_ptr->blown_up = 0;
    (this_ptr->base).base.hit_points = (float)this_ptr->initial_hit_points;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_48 = delta_time * (this_ptr->base).speed;
  pCVar3 = &(this_ptr->base).base.model;
  while (0.0 < fStack_48) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&pCVar3->base,afStack_94 + 0x13);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar7);
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0();
  iVar7 = core_motion_cpp_FUN_005035c0(pCVar3);
  iVar7 = *(int *)(iVar7 + 0x24);
  iStack_18 = iVar7;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar7) {
    case 0:
    case 1:
    case 2:
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      pCVar3 = &(this_ptr->base).base.model;
      if (iVar7 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar3->base,3,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar3->base,3,1);
      }
      break;
    case 3:
    case 4:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCStack_38 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_38,0,1);
        }
      }
      else {
        fVar16 = 0.17453292;
        uStack_1b8 = 0;
        fStack_1b0 = 0x40400000;
        uStack_1b4 = 0;
        pCVar15 = (CVector3f *)0x3f000000;
        pCVar6 = (this_ptr->base).victim;
        fStack_44 = 0x40400000 + (float)_DAT_005cde03;
        path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar15,
                           fVar16,in_stack_fffffdf4);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_38,0,1);
        }
        else {
          pCVar2 = &(this_ptr->base).base.base.location;
          pCVar6 = (this_ptr->base).victim;
          fStack_d4 = (pCVar2->position).x - (pCVar6->base).location.position.x;
          afStack_d0[0] =
               (this_ptr->base).base.base.location.position.y - (pCVar6->base).location.position.y;
          afStack_d0[1] =
               (this_ptr->base).base.base.location.position.z - (pCVar6->base).location.position.z;
          fStack_194 = fStack_d4;
          *(float *)((int)afStack_1a8 + ((uint)bVar13 * -2 + 6) * 4) = afStack_d0[(uint)bVar13 * -2]
          ;
          *(float *)((int)afStack_1a8 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 7) * 4) =
               afStack_d0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          fStack_1c = SQRT(fStack_18c * fStack_18c + fStack_194 * fStack_194);
          uStack_190 = 0;
          fStack_40 = fStack_1c;
          if ((fStack_1c <= fStack_44) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            fStack_110 = (pCVar6->base).location.position.x - (pCVar2->position).x;
            fStack_10c = (pCVar6->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_108 = (pCVar6->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            fStack_164 = fStack_110;
            afStack_160[(uint)bVar13 * -2] = afStack_160[(uint)bVar13 * -2 + 0x15];
            afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
            uStack_14c = uStack_140;
            afStack_160[(uint)bVar13 * -2 + 6] = afStack_160[(uint)bVar13 * -2 + 9];
            afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
                 afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
            pCStack_14 = (CMatrix3x4f *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                   (fStack_148 - (this_ptr->base).base.base.orient.vec.y);
            if (ABS((float)pCStack_14) < (float)_DAT_005cde0b) {
              fVar16 = 1.4013e-45;
              iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (pCStack_38,iVar7 + 5,(int)fVar16);
              uVar11 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 2.5;
              iVar7 = sound_sndmain_cpp_FUN_00550b70(uVar11);
              if ((iVar7 == 0) &&
                 (iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]), iVar7 == 0)) {
                uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar11;
              }
            }
          }
          if ((this_ptr->base).guard_distance * _DAT_005cde13 < fStack_40) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
      }
      break;
    case 5:
    case 6:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffdec);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pSVar14 = (SDamageInfo *)&stack0xfffffdec;
      pCStack_14 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      fVar16 = 0.4;
      core_xform_cpp_FUN_00591530();
      uStack_188 = afStack_160[2];
      *(float *)((int)afStack_1a8 + ((uint)bVar13 * -2 + 9) * 4) =
           afStack_160[(uint)bVar13 * -2 + 3];
      *(float *)((int)afStack_1a8 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 10) * 4) =
           afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      core_actor_cpp_FUN_00408d70();
      pCVar15 = &CStack_a4;
      CStack_a4.x = fStack_1ac;
      *(uint *)((int)&CStack_a4 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)afStack_1a8 + (uint)bVar13 * 0xfffffff8);
      pCVar12 = this_ptr;
      *(uint *)((int)&CStack_a4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)afStack_1a8 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 1) * 4);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar12->base,pCVar15,fVar16,pSVar14);
      pSVar14 = (SDamageInfo *)&stack0xfffffdec;
      fVar16 = 0.4;
      core_xform_cpp_FUN_00591530();
      uStack_80 = uStack_128;
      afStack_94[(uint)bVar13 * -2 + 6] = afStack_160[(uint)bVar13 * -2 + 0xf];
      afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
      core_actor_cpp_FUN_00408d70();
      pCVar15 = &CStack_bc;
      CStack_bc.x = fStack_98;
      *(float *)((int)&CStack_bc + (uint)bVar13 * -8 + 4) = afStack_94[(uint)bVar13 * -2];
      pCVar12 = this_ptr;
      *(float *)((int)&CStack_bc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar12->base,pCVar15,fVar16,pSVar14);
      break;
    case 0xb:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 0xc:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if (((this_ptr->base).victim != (CCharacter *)0x0) ||
         (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                            (0x01C38BC0,this_ptr->fall_event), iVar7 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0xe,1);
        iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
        if ((iVar7 == 0) &&
           ((iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]), iVar7 == 0 &&
            (iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]), iVar7 == 0)))) {
          uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"batman-alert.wav");
          this_ptr->sfx_handles[0] = uVar11;
        }
      }
      break;
    case 0xe:
      if ((this_ptr->base).base.base.location.position.y <
          (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005cddfb) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar3->base,0xf,1);
      }
      break;
    case 0xf:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    }
    goto switchD_00437b48_caseD_7;
  }
  EVar5 = (this_ptr->base).base.walk_state;
  if (EVar5 < 2) {
    if (EVar5 == WALK_STATE_WALKING) {
LAB_0043739d:
      iVar10 = 1;
      iVar7 = 3;
    }
    else {
LAB_004375f4:
      iVar10 = 1;
      iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar7,iVar10);
  }
  else {
    if (EVar5 < WALK_STATE_NO_PATH) goto LAB_0043739d;
    if (EVar5 != WALK_STATE_NO_PATH) goto LAB_004375f4;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar3->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00437b48_caseD_7:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if ((iVar7 != 0) && (iStack_18 != 0xc)) {
    core_charactr_cpp_FUN_00423a10();
    fStack_11c = (this_ptr->base).base.velocity.x * delta_time;
    fStack_118 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_114 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_134 = fStack_11c;
    afStack_160[(uint)bVar13 * -2 + 0xc] = afStack_160[(uint)bVar13 * -2 + 0x12];
    afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
         afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
    pCVar15 = &(this_ptr->base).base.position_delta;
    fStack_b0 = fStack_134 + pCVar15->x;
    afStack_ac[0] = fStack_130 + (this_ptr->base).base.position_delta.y;
    afStack_ac[1] = fStack_12c + (this_ptr->base).base.position_delta.z;
    fStack_104 = fStack_b0;
    afStack_160[(uint)bVar13 * -2 + 0x18] = afStack_ac[(uint)bVar13 * -2];
    afStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
         afStack_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    pCVar4 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_94[2] = fStack_104 + pCVar4->x;
    afStack_94[3] = fStack_100 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_84 = fStack_fc + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_170.x = afStack_94[2];
    *(float *)((int)&CStack_170 + (uint)bVar13 * -8 + 4) = afStack_94[(uint)bVar13 * -2 + 3];
    *(float *)((int)&CStack_170 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
         afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar15->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar4->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_170);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  iVar7 = iStack_18;
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if (((iVar7 == 3) || (iVar7 == 4)) &&
     (iVar7 = sound_sndmain_cpp_FUN_005515e0
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z), iVar7 != 0)) {
    iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle);
    if (iVar7 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    fVar16 = 2.8026e-45;
    pCStack_14 = (CMatrix3x4f *)core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)(float)pCStack_14,(int)fVar16);
    uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    this_ptr->sfx_handle = uVar11;
    fStack_208 = 6.195215e-39;
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  return;
}
