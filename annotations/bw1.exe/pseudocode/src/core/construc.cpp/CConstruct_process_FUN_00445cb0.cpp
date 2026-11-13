// Name: core_construc.cpp_CConstruct_process_FUN_00445cb0
// Address: 00445cb0
// Address Range: [[00445cb0, 00446e1b]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_process_FUN_00445cb0(CConstruct *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_construc_cpp_CConstruct_process_FUN_00445cb0(CConstruct *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CBodyPart *pCVar4;
  CCharacter *pCVar5;
  EWalkState EVar6;
  SMotion *pSVar7;
  int iVar8;
  CCharacter *pCVar9;
  SBoneGuyBox *pSVar10;
  CDemonActor *pCVar11;
  uint uVar12;
  uint uVar13;
  CPathMap *path_map;
  CLocation *pCVar14;
  CConstruct *pCVar15;
  byte bVar16;
  float afStackY_1a80 [1507];
  CFireEffect *this_ptr_00;
  float size;
  float alpha;
  SMRGLTextureBasic *texture_ptr;
  float fVar17;
  SDamageInfo *pSVar18;
  CVector3f *pCVar19;
  float in_stack_fffffd30;
  uint uStack_284;
  CVector3f CStack_278;
  float fStack_26c;
  float afStack_268 [5];
  uint uStack_254;
  CVector3f CStack_248;
  float fStack_23c;
  float afStack_238 [5];
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_20c;
  uint uStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  CVector3f CStack_1c4;
  float fStack_1b8;
  float afStack_1b4 [4];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_110;
  float fStack_104;
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [4];
  float fStack_d8;
  uint uStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  CVector3f CStack_80;
  uint uStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CMotionController *pCStack_48;
  CBodyPart *pCStack_44;
  float fStack_40;
  float fStack_3c;
  CBodyPart *pCStack_38;
  int iStack_34;
  SBoneGuyBox *pSStack_30;
  CQuaternion4f *pCStack_2c;
  CQuaternion4f *pCStack_28;
  float *pfStack_24;
  int iStack_20;
  CVector3f *pCStack_1c;
  float fStack_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar16 = 0;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  iStack_34 = pSVar7->state_index;
  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->death_event);
  if (iVar8 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_construc_cpp_CConstruct_explode_FUN_004472a0(this_ptr);
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"ConstructDead");
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
              (&(this_ptr->base).base.model.base,0xb,0.0);
  }
  fStack_40 = 0.25;
  fStack_4c = 1.0;
  fStack_3c = 1.0;
  if ((this_ptr->base).pool_me == 0) {
    if (this_ptr->blown_up == 0) {
      if (iStack_34 != 0xc) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
        if (iVar8 == 0) {
          uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"stick-heartbeat.wav @ .2");
          this_ptr->sfx_handles[1] = uVar12;
          fStack_3c = 1.0;
          fStack_40 = 0.4;
        }
        pCStack_14 = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (pCStack_14,DAT_007dc5b0,&CStack_c8);
        afStack_238[2] = CStack_c8.x;
        afStack_238[(uint)bVar16 * -2 + 3] = *(float *)((int)&CStack_c8 + (uint)bVar16 * -8 + 4);
        afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             *(float *)((int)&CStack_c8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_actor_cpp_FUN_00408b40();
        pCVar2 = pCStack_14;
        fStack_14c = fStack_11c;
        afStack_1b4[(uint)bVar16 * -2 + 0x1b] = afStack_1b4[(uint)bVar16 * -2 + 0x27];
        fVar17 = (float)DAT_007dc5b4;
        afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c] =
             afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x28];
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (pCVar2,(int)fVar17,&CStack_b0);
        fStack_110 = CStack_b0.x;
        afStack_1b4[(uint)bVar16 * -2 + 0x2a] = *(float *)((int)&CStack_b0 + (uint)bVar16 * -8 + 4);
        afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x2b] =
             *(float *)((int)&CStack_b0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_actor_cpp_FUN_00408b40();
        fVar17 = fStack_14c;
        fStack_140 = fStack_218;
        afStack_1b4[(uint)bVar16 * -2 + 0x1e] = afStack_238[(uint)bVar16 * -2 + 9];
        afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f] =
             afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
        fStack_200 = fVar17 + fStack_140;
        fStack_1fc = fStack_148 + fStack_13c;
        fStack_1f8 = fStack_144 + fStack_138;
        fStack_194 = fVar17 + fStack_140;
        afStack_1b4[(uint)bVar16 * -2 + 9] = afStack_238[(uint)bVar16 * -2 + 0xf];
        size = fStack_3c;
        alpha = fStack_40;
        fVar17 = fStack_4c;
        afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
             afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
        texture_ptr = (SMRGLTextureBasic *)&DAT_00611130;
        pCVar19 = &CStack_248;
        fStack_1b8 = fStack_194 * _DAT_005d6f71;
        afStack_1b4[0] = fStack_190 * _DAT_005d6f71;
        afStack_1b4[1] = fStack_18c * _DAT_005d6f71;
        CStack_248.x = fStack_194 * _DAT_005d6f71;
        *(float *)((int)&CStack_248 + (uint)bVar16 * -8 + 4) = afStack_1b4[(uint)bVar16 * -2];
        this_ptr_00 = 0x01C57074;
        *(float *)((int)&CStack_248 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
LAB_00445e87:
        core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0
                  (this_ptr_00,pCVar19,size,alpha,fVar17,texture_ptr);
      }
    }
    else if (this_ptr->blown_up == 1) {
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
      if (iVar8 == 0) {
        uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"stick-heartbeat.wav @ .5");
        this_ptr->sfx_handles[1] = uVar12;
        fStack_40 = 0.4;
      }
      pCVar4 = this_ptr->boxes[this_ptr->pickable_box_index].body_part;
      if (pCVar4 != (CBodyPart *)0x0) {
        pCVar14 = &(pCVar4->base).location;
        if ((CLocation *)&CStack_80 != pCVar14) {
          CStack_80.x = (pCVar14->position).x;
          CStack_80.y = (pCVar4->base).location.position.y;
          CStack_80.z = (pCVar4->base).location.position.z;
        }
        texture_ptr = (SMRGLTextureBasic *)&DAT_00611130;
        pCVar19 = &CStack_80;
        this_ptr_00 = 0x01C57074;
        alpha = fStack_40;
        fVar17 = fStack_4c;
        size = fStack_3c;
        goto LAB_00445e87;
      }
    }
  }
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
    return;
  }
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar17 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar17;
    if (fVar17 <= this_ptr->recombine_time) {
      pCStack_38 = this_ptr->boxes[this_ptr->pickable_box_index].body_part;
      if (pCStack_38 == (CBodyPart *)0x0) {
        return;
      }
      pCVar11 = (*((pCStack_38->base).vtable._ub)->getCarrier)(&pCStack_38->base);
      if (pCVar11 != *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
        return;
      }
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,this_ptr->death_event);
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                (0x01C51D80,"ConstructKilled");
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[5]);
      if (iVar8 == 0) {
        uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"stick-die.wav");
        this_ptr->sfx_handles[5] = uVar12;
      }
      pCVar14 = &(pCStack_38->base).location;
      iVar8 = 0;
      CStack_278.x = 0.0;
      CStack_278.y = 1.0;
      CStack_278.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                (0x01C57074,&pCVar14->position,0.5,&CStack_278,0xffff);
      do {
        uStack_a4 = 0;
        uStack_9c = 0;
        iVar8 = iVar8 + 1;
        uStack_a0 = 0x3f800000;
        core_fire_cpp_CFireEffect_createFirefly_FUN_004b5fa0
                  (0x01C57074,pCVar14,&uStack_a4,4000,0xffdc,1,35000,1.0,0.2);
      } while (iVar8 < 10);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0
                (*(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
      (pCStack_38->base).lifecycle_state = ACTOR_DESTROYED;
      this_ptr->blown_up = 3;
      return;
    }
    core_construc_cpp_FUN_00447560();
  }
  if (this_ptr->blown_up == 2) {
    pCVar4 = this_ptr->boxes[this_ptr->pickable_box_index].body_part;
    if (pCVar4 != (CBodyPart *)0x0) {
      pCVar9 = (CCharacter *)(*((pCVar4->base).vtable._ub)->getCarrier)(&pCVar4->base);
      pCVar5 = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (pCVar9 == pCVar5) {
        core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(pCVar5);
      }
    }
    fVar17 = delta_time / _DAT_005fddc8 + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar17;
    if (fVar17 < 1.0) {
      iStack_20 = 0;
      if (this_ptr->box_count < 1) {
        return;
      }
      pSStack_30 = this_ptr->boxes;
      pfStack_24 = &this_ptr->recombine_interpolation;
      pCStack_2c = &this_ptr->boxes[0].dest_orient;
      pCStack_28 = &this_ptr->boxes[0].start_orient;
      pCStack_1c = &this_ptr->boxes[0].source_pos;
      do {
        pCVar19 = pCStack_1c;
        pSVar10 = pSStack_30 + iStack_20;
        pCStack_44 = pSVar10->body_part;
        fStack_188 = (pSVar10->pos).x - pCStack_1c->x;
        fStack_184 = (pSVar10->pos).y - pCStack_1c->y;
        fStack_180 = (pSVar10->pos).z - pCStack_1c->z;
        fStack_17c = fStack_188;
        afStack_1b4[(uint)bVar16 * -2 + 0xf] = afStack_1b4[(uint)bVar16 * -2 + 0xc];
        afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10] =
             afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
        fStack_98 = fStack_17c * *pfStack_24;
        afStack_94[0] = fStack_178 * *pfStack_24;
        afStack_94[1] = fStack_174 * *pfStack_24;
        fStack_224 = fStack_17c * *pfStack_24;
        afStack_238[(uint)bVar16 * -2 + 6] = afStack_94[(uint)bVar16 * -2];
        afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
             afStack_94[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
        afStack_e8[2] = pCVar19->x + fStack_224;
        afStack_e8[3] = pCVar19->y + fStack_220;
        fStack_d8 = pCVar19->z + fStack_21c;
        fStack_1a0 = afStack_e8[2];
        afStack_1b4[(uint)bVar16 * -2 + 6] = afStack_e8[(uint)bVar16 * -2 + 3];
        afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
             afStack_e8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_xform_cpp_slerpQuaternion_FUN_005b7940(pCStack_2c);
        *(uint *)(&stack0xfffffd60 + ((uint)bVar16 * -2 + 4) * 4) =
             *(uint *)(&stack0xfffffd60 + (uint)bVar16 * -8);
        *(uint *)(&stack0xfffffd60 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 5) * 4) =
             *(uint *)(&stack0xfffffd60 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 1) * 4);
        *(uint *)
         ((int)(&stack0xfffffd60 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 5) * 4) +
         ((uint)bVar16 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&stack0xfffffd60 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 1) * 4) +
              ((uint)bVar16 * -2 + 1) * 4);
        core_xform_cpp_FUN_005b7c00();
        fStack_170 = fStack_134;
        afStack_1b4[(uint)bVar16 * -2 + 0x12] = afStack_1b4[(uint)bVar16 * -2 + 0x21];
        afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13] =
             afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x22];
        fStack_170 = this_ptr->recombine_interpolation * (float)_DAT_005d6f95 + fStack_170;
        (pCStack_44->base).location.position.x = fStack_1a0;
        (pCStack_44->base).location.position.y = fStack_19c;
        pUVar1 = &(pCStack_44->base).orient;
        (pCStack_44->base).location.position.z = fStack_198;
        if (pUVar1 != (UOrientationVector *)(afStack_1b4 + 0x11)) {
          (pUVar1->vec).x = fStack_170;
          (pCStack_44->base).orient.vec.y = fStack_16c;
          (pCStack_44->base).orient.vec.z = fStack_168;
        }
        if (&pCStack_44->physics_box != (CBox *)(afStack_1b4 + 5)) {
          (pCStack_44->physics_box).position.x = fStack_1a0;
          (pCStack_44->physics_box).position.y = fStack_19c;
          (pCStack_44->physics_box).position.z = fStack_198;
        }
        pCVar19 = &(pCStack_44->physics_box).orientation;
        if (pCVar19 != (CVector3f *)(afStack_1b4 + 0x11)) {
          pCVar19->x = fStack_170;
          (pCStack_44->physics_box).orientation.y = fStack_16c;
          (pCStack_44->physics_box).orientation.z = fStack_168;
        }
        iStack_20 = iStack_20 + 1;
        pCStack_2c = (CQuaternion4f *)((int)(pCStack_2c + 4) + 8);
        pCStack_28 = (CQuaternion4f *)((int)(pCStack_28 + 4) + 8);
        pCStack_1c = pCStack_1c + 6;
      } while (iStack_20 < this_ptr->box_count);
      return;
    }
    iVar8 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00569ae0
              (&(this_ptr->base).base.model);
    pCVar15 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740
                  (0x01D2C900,pCVar15->boxes[0].body_part,1);
        pCVar15->boxes[0].body_part = (CBodyPart *)0x0;
        iVar8 = iVar8 + 1;
        pCVar15 = (CConstruct *)((pCVar15->base).base.base.orient_matrix.m + 1);
      } while (iVar8 < this_ptr->box_count);
    }
    this_ptr->blown_up = 0;
    (this_ptr->base).base.hit_points = (float)this_ptr->initial_hit_points;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_54 = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  pCVar2 = &(this_ptr->base).base.model;
  while (0.0 < fStack_54) {
    uVar12 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar2->base,afStack_70 + 7);
    if (uVar12 == 0) {
LAB_004464ed:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar12);
    }
    else {
      if (uVar12 < 2) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[2]);
        if (iVar8 == 0) {
          uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"stick-stump?.wav @ .2");
          this_ptr->sfx_handles[2] = uVar13;
        }
LAB_0044650c:
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[3]);
        if (iVar8 == 0) {
          uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"stick-leg1.wav @ .2");
          this_ptr->sfx_handles[3] = uVar13;
        }
        goto LAB_004464ed;
      }
      if (uVar12 == 7) goto LAB_0044650c;
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar12);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320();
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iStack_34) {
    case 0:
    case 1:
    case 2:
      iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      pCVar2 = &(this_ptr->base).base.model;
      if (iVar8 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,3,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,3,1);
      }
      break;
    case 3:
    case 4:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCStack_48 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_48,0,1);
        }
      }
      else {
        fVar17 = 0.17453292;
        pCVar19 = (CVector3f *)0x3f000000;
        uStack_1e8 = 0;
        fStack_1e0 = 0x40400000;
        uStack_1e4 = 0;
        pCVar5 = (this_ptr->base).victim;
        fStack_18 = 0x40400000 + (float)_DAT_005d6f85;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar19,
                           fVar17,in_stack_fffffd30);
        if (iVar8 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_48,0,1);
        }
        else {
          pCVar14 = &(this_ptr->base).base.base.location;
          pCVar5 = (this_ptr->base).victim;
          fStack_1f4 = (pCVar14->position).x - (pCVar5->base).location.position.x;
          fStack_1f0 = (this_ptr->base).base.base.location.position.y -
                       (pCVar5->base).location.position.y;
          fStack_1ec = (this_ptr->base).base.base.location.position.z -
                       (pCVar5->base).location.position.z;
          fStack_20c = fStack_1f4;
          afStack_238[(uint)bVar16 * -2 + 0xc] = afStack_238[(uint)bVar16 * -2 + 0x12];
          afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
               afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
          fStack_50 = SQRT(fStack_204 * fStack_204 + fStack_20c * fStack_20c);
          uStack_208 = 0;
          if (((this_ptr->base).attack_cooldown <= 0.0) && (fStack_50 <= fStack_18)) {
            afStack_1d8[2] = (pCVar5->base).location.position.x - (pCVar14->position).x;
            afStack_1d8[3] =
                 (pCVar5->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            fStack_1c8 = (pCVar5->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            fStack_104 = afStack_1d8[2];
            afStack_1b4[(uint)bVar16 * -2 + 0x2d] = afStack_1d8[(uint)bVar16 * -2 + 3];
            afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x2e] =
                 afStack_1d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
            afStack_268[2] = (float)uStack_d4;
            afStack_268[(uint)bVar16 * -2 + 3] = afStack_e8[(uint)bVar16 * -2 + 6];
            afStack_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
                 afStack_e8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
            pCStack_14 = (CDeformableModelInstance *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                   (afStack_268[3] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS((float)pCStack_14) < (float)_DAT_005d6f8d) {
              fVar17 = 1.4013e-45;
              iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (pCStack_48,iVar8 + 5,(int)fVar17);
              uVar12 = this_ptr->sfx_handles[6];
              (this_ptr->base).attack_cooldown = 2.5;
              iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(uVar12);
              if (iVar8 == 0) {
                uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"stick-attack?.wav");
                this_ptr->sfx_handles[6] = uVar12;
              }
            }
          }
        }
      }
      break;
    case 5:
    case 6:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffd20);
      fVar17 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar18 = (SDamageInfo *)(fVar17 * this_ptr->difficulty_speed_scale);
      pCStack_14 = (CDeformableModelInstance *)
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      fVar17 = 1.0;
      core_xform_cpp_FUN_005b5080();
      uStack_74 = uStack_284;
      afStack_70[(uint)bVar16 * -2] = *(float *)(&stack0xfffffd60 + ((uint)bVar16 * -2 + 8) * 4);
      afStack_70[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           *(float *)(&stack0xfffffd60 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 9) * 4);
      core_actor_cpp_FUN_00408b40();
      pCVar19 = &CStack_bc;
      CStack_bc.x = fStack_26c;
      *(float *)((int)&CStack_bc + (uint)bVar16 * -8 + 4) = afStack_268[(uint)bVar16 * -2];
      pCVar15 = this_ptr;
      *(float *)((int)&CStack_bc + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           afStack_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar15->base,pCVar19,fVar17,pSVar18);
      pSVar18 = (SDamageInfo *)&stack0xfffffd20;
      fVar17 = 1.0;
      core_xform_cpp_FUN_005b5080();
      uStack_164 = uStack_254;
      afStack_1b4[(uint)bVar16 * -2 + 0x15] = afStack_268[(uint)bVar16 * -2 + 6];
      afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16] =
           afStack_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
      core_actor_cpp_FUN_00408b40();
      pCVar19 = &CStack_f8;
      CStack_f8.x = fStack_23c;
      *(float *)((int)&CStack_f8 + (uint)bVar16 * -8 + 4) = afStack_238[(uint)bVar16 * -2];
      pCVar15 = this_ptr;
      *(float *)((int)&CStack_f8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar15->base,pCVar19,fVar17,pSVar18);
      break;
    case 0xb:
      if (this_ptr->death_sound_played == 0) {
        uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"stick-die.wav");
        this_ptr->death_sound_played = 1;
        this_ptr->sfx_handles[5] = uVar12;
      }
      break;
    case 0xc:
      iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      fStack_158 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
      fStack_154 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      fStack_150 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
      fStack_ec = fStack_158;
      afStack_e8[(uint)bVar16 * -2] = afStack_1b4[(uint)bVar16 * -2 + 0x18];
      afStack_e8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
      if ((SQRT(afStack_e8[1] * afStack_e8[1] +
                fStack_ec * fStack_ec + afStack_e8[0] * afStack_e8[0]) <
           (this_ptr->base).guard_distance * _DAT_005d6f7d) &&
         (((*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                     (&this_ptr->base,delta_time), (this_ptr->base).victim != (CCharacter *)0x0 ||
          (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                             (0x01C51D80,this_ptr->fall_event), iVar8 != 0)))) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0xe,1);
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[5]);
        if ((iVar8 == 0) &&
           (((iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[6]),
             iVar8 == 0 &&
             (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[4]),
             iVar8 == 0)) &&
            (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[4]),
            iVar8 == 0)))) {
          uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"stick-attack1.wav");
          this_ptr->sfx_handles[4] = uVar12;
        }
      }
      break;
    case 0xe:
      if ((this_ptr->base).base.base.location.position.y <
          (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005d6f75) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0xf,1);
      }
      break;
    case 0xf:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[7]);
      if (iVar8 == 0) {
        uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"stick-leaps.wav");
        this_ptr->sfx_handles[7] = uVar12;
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    }
    goto switchD_00446df5_caseD_7;
  }
  EVar6 = (this_ptr->base).base.walk_state;
  if (EVar6 < 2) {
    if (EVar6 == WALK_STATE_WALKING) {
LAB_004465bf:
      fVar17 = 1.4013e-45;
      iVar8 = 3;
    }
    else {
LAB_00446804:
      fVar17 = 1.4013e-45;
      iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar8,(int)fVar17);
  }
  else {
    if (EVar6 < WALK_STATE_NO_PATH) goto LAB_004465bf;
    if (EVar6 != WALK_STATE_NO_PATH) goto LAB_00446804;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00446df5_caseD_7:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if ((iVar8 != 0) && (iStack_34 != 0xc)) {
    core_charactr_cpp_FUN_0042d700();
    afStack_94[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_94[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_84 = (this_ptr->base).base.velocity.z * delta_time;
    afStack_1b4[2] = afStack_94[2];
    afStack_1b4[(uint)bVar16 * -2 + 3] = afStack_94[(uint)bVar16 * -2 + 3];
    afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
         afStack_94[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    pCVar19 = &(this_ptr->base).base.position_delta;
    afStack_70[2] = afStack_1b4[2] + pCVar19->x;
    afStack_70[3] = afStack_1b4[3] + (this_ptr->base).base.position_delta.y;
    fStack_60 = fStack_1a4 + (this_ptr->base).base.position_delta.z;
    fStack_128 = afStack_70[2];
    afStack_1b4[(uint)bVar16 * -2 + 0x24] = afStack_70[(uint)bVar16 * -2 + 3];
    afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x25] =
         afStack_70[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1dc = fStack_128 + pCVar3->x;
    afStack_1d8[0] = fStack_124 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_1d8[1] = fStack_120 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_1c4.x = fStack_1dc;
    *(float *)((int)&CStack_1c4 + (uint)bVar16 * -8 + 4) = afStack_1d8[(uint)bVar16 * -2];
    *(float *)((int)&CStack_1c4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_1d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar19->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar17 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar17;
    pCVar3->x = fVar17;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_1c4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if (((iStack_34 == 3) || (iStack_34 == 4)) &&
     (iVar8 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00574010
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,100.0), iVar8 != 0))
  {
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
    if ((iVar8 == 0) && (iVar8 = core_actor_cpp_randomChance_FUN_0040cd00(0.3), iVar8 != 0)) {
      uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                         ((CDemonActor *)this_ptr,"stick-walk_growl1.wav");
      this_ptr->sfx_handles[0] = uVar12;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
  return;
}
