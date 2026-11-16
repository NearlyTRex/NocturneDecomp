// Name: core_construc.cpp_CConstruct_process_FUN_00445cb0
// Address: 00445cb0
// Address Range: [[00445cb0, 00446e1b]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_process_FUN_00445cb0(CConstruct *this_ptr,float delta_time)

#include "nocturne.h"

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
  uint *puVar15;
  CConstruct *pCVar16;
  uint *puVar17;
  byte bVar18;
  float afStackY_1a80 [1507];
  CFireEffect *this_ptr_00;
  float size;
  float alpha;
  SMRGLTextureBasic *texture_ptr;
  float fVar19;
  SDamageInfo *pSVar20;
  CVector3f *pCVar21;
  float in_stack_fffffd30;
  CQuaternion4f CStack_2a4;
  CQuaternion4f CStack_294;
  CVector3f CStack_284;
  CVector3f CStack_278;
  CVector3f CStack_26c;
  float fStack_260;
  float afStack_25c [2];
  CVector3f CStack_254;
  CVector3f CStack_248;
  CVector3f CStack_23c;
  CVector3f CStack_230;
  float fStack_224;
  float afStack_220 [2];
  CVector3f CStack_218;
  float fStack_20c;
  float afStack_208 [4];
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
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [4];
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [4];
  float fStack_d8;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  float afStack_60 [4];
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
  
  bVar18 = 0;
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
        pCVar21 = &CStack_230;
        CStack_230.x = CStack_c8.x;
        *(uint *)((int)&CStack_230 + (uint)bVar18 * -8 + 4) =
             *(uint *)((int)&CStack_c8 + (uint)bVar18 * -8 + 4);
        *(uint *)((int)&CStack_230 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
             *(uint *)((int)&CStack_c8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar21,&CStack_11c);
        pCVar2 = pCStack_14;
        afStack_154[2] = CStack_11c.x;
        afStack_154[(uint)bVar18 * -2 + 3] = *(float *)((int)&CStack_11c + (uint)bVar18 * -8 + 4);
        fVar19 = (float)DAT_007dc5b4;
        afStack_154[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
             *(float *)((int)&CStack_11c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (pCVar2,(int)fVar19,&CStack_b0);
        pCVar21 = &CStack_110;
        CStack_110.x = CStack_b0.x;
        *(uint *)((int)&CStack_110 + (uint)bVar18 * -8 + 4) =
             *(uint *)((int)&CStack_b0 + (uint)bVar18 * -8 + 4);
        *(uint *)((int)&CStack_110 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
             *(uint *)((int)&CStack_b0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar21,&CStack_218);
        fVar19 = afStack_154[2];
        fStack_140 = CStack_218.x;
        afStack_154[(uint)bVar18 * -2 + 6] = *(float *)((int)&CStack_218 + (uint)bVar18 * -8 + 4);
        afStack_154[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
             *(float *)((int)&CStack_218 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        afStack_208[2] = fVar19 + fStack_140;
        afStack_208[3] = afStack_154[3] + fStack_13c;
        fStack_1f8 = fStack_144 + fStack_138;
        fStack_194 = fVar19 + fStack_140;
        afStack_1b4[(uint)bVar18 * -2 + 9] = afStack_208[(uint)bVar18 * -2 + 3];
        size = fStack_3c;
        alpha = fStack_40;
        fVar19 = fStack_4c;
        afStack_1b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
             afStack_208[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
        texture_ptr = (SMRGLTextureBasic *)&DAT_00611130;
        pCVar21 = &CStack_248;
        fStack_1b8 = fStack_194 * _DAT_005d6f71;
        afStack_1b4[0] = fStack_190 * _DAT_005d6f71;
        afStack_1b4[1] = fStack_18c * _DAT_005d6f71;
        CStack_248.x = fStack_194 * _DAT_005d6f71;
        *(float *)((int)&CStack_248 + (uint)bVar18 * -8 + 4) = afStack_1b4[(uint)bVar18 * -2];
        this_ptr_00 = 0x01C57074;
        *(float *)((int)&CStack_248 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
             afStack_1b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
LAB_00445e87:
        core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0
                  (this_ptr_00,pCVar21,size,alpha,fVar19,texture_ptr);
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
        pCVar21 = &CStack_80;
        this_ptr_00 = 0x01C57074;
        alpha = fStack_40;
        fVar19 = fStack_4c;
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
    fVar19 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar19;
    if (fVar19 <= this_ptr->recombine_time) {
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
        CStack_a4.x = 0.0;
        CStack_a4.z = 0.0;
        iVar8 = iVar8 + 1;
        CStack_a4.y = 1.0;
        core_fire_cpp_CFireEffect_createFirefly_FUN_004b5fa0
                  (0x01C57074,&pCVar14->position,&CStack_a4,4000,0xffdc,1,35000,1.0,0.2);
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
    fVar19 = delta_time / _DAT_005fddc8 + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar19;
    if (fVar19 < 1.0) {
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
        pCVar21 = pCStack_1c;
        pSVar10 = pSStack_30 + iStack_20;
        pCStack_44 = pSVar10->body_part;
        fStack_188 = (pSVar10->pos).x - pCStack_1c->x;
        fStack_184 = (pSVar10->pos).y - pCStack_1c->y;
        fStack_180 = (pSVar10->pos).z - pCStack_1c->z;
        fStack_17c = fStack_188;
        afStack_1b4[(uint)bVar18 * -2 + 0xf] = afStack_1b4[(uint)bVar18 * -2 + 0xc];
        afStack_1b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
             afStack_1b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
        fStack_98 = fStack_17c * *pfStack_24;
        afStack_94[0] = fStack_178 * *pfStack_24;
        afStack_94[1] = fStack_174 * *pfStack_24;
        fStack_224 = fStack_17c * *pfStack_24;
        afStack_220[(uint)bVar18 * -2] = afStack_94[(uint)bVar18 * -2];
        afStack_220[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
             afStack_94[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
        afStack_e8[2] = pCVar21->x + fStack_224;
        afStack_e8[3] = pCVar21->y + afStack_220[0];
        fStack_d8 = pCVar21->z + afStack_220[1];
        fStack_1a0 = afStack_e8[2];
        afStack_1b4[(uint)bVar18 * -2 + 6] = afStack_e8[(uint)bVar18 * -2 + 3];
        afStack_1b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
             afStack_e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
        core_xform_cpp_slerpQuaternion_FUN_005b7940
                  (pCStack_2c,pCStack_28,this_ptr->recombine_interpolation,&CStack_2a4);
        CStack_294.w = CStack_2a4.w;
        puVar17 = (uint *)((int)&CStack_294 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        puVar15 = (uint *)((int)&CStack_2a4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        *(uint *)((int)&CStack_294 + (uint)bVar18 * -8 + 4) =
             *(uint *)((int)&CStack_2a4 + (uint)bVar18 * -8 + 4);
        *puVar17 = *puVar15;
        puVar17[(uint)bVar18 * -2 + 1] = puVar15[(uint)bVar18 * -2 + 1];
        core_xform_cpp_quaternionToEulerAngles_FUN_005b7c00(&CStack_294,&CStack_134);
        fStack_170 = CStack_134.x;
        afStack_1b4[(uint)bVar18 * -2 + 0x12] = *(float *)((int)&CStack_134 + (uint)bVar18 * -8 + 4)
        ;
        afStack_1b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13] =
             *(float *)((int)&CStack_134 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
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
        pCVar21 = &(pCStack_44->physics_box).orientation;
        if (pCVar21 != (CVector3f *)(afStack_1b4 + 0x11)) {
          pCVar21->x = fStack_170;
          (pCStack_44->physics_box).orientation.y = fStack_16c;
          (pCStack_44->physics_box).orientation.z = fStack_168;
        }
        iStack_20 = iStack_20 + 1;
        pCStack_2c = (CQuaternion4f *)&pCStack_2c[4].y;
        pCStack_28 = (CQuaternion4f *)&pCStack_28[4].y;
        pCStack_1c = pCStack_1c + 6;
      } while (iStack_20 < this_ptr->box_count);
      return;
    }
    iVar8 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00569ae0
              (&(this_ptr->base).base.model);
    pCVar16 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740
                  (0x01D2C900,&(pCVar16->boxes[0].body_part)->base,1);
        pCVar16->boxes[0].body_part = (CBodyPart *)0x0;
        iVar8 = iVar8 + 1;
        pCVar16 = (CConstruct *)((pCVar16->base).base.base.orient_matrix.m + 1);
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
  afStack_60[3] = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  pCVar2 = &(this_ptr->base).base.model;
  while (0.0 < afStack_60[3]) {
    uVar12 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar2->base,afStack_60 + 3);
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
        fVar19 = 0.17453292;
        pCVar21 = (CVector3f *)0x3f000000;
        uStack_1e8 = 0;
        fStack_1e0 = 0x40400000;
        uStack_1e4 = 0;
        pCVar5 = (this_ptr->base).victim;
        fStack_18 = 0x40400000 + (float)_DAT_005d6f85;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar21,
                           fVar19,in_stack_fffffd30);
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
          afStack_208[(uint)bVar18 * -2] = afStack_208[(uint)bVar18 * -2 + 6];
          afStack_208[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
               afStack_208[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
          fStack_50 = SQRT(afStack_208[1] * afStack_208[1] + fStack_20c * fStack_20c);
          afStack_208[0] = 0.0;
          if (((this_ptr->base).attack_cooldown <= 0.0) && (fStack_50 <= fStack_18)) {
            afStack_1d8[2] = (pCVar5->base).location.position.x - (pCVar14->position).x;
            afStack_1d8[3] =
                 (pCVar5->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            fStack_1c8 = (pCVar5->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            CStack_104.x = afStack_1d8[2];
            *(float *)((int)&CStack_104 + (uint)bVar18 * -8 + 4) =
                 afStack_1d8[(uint)bVar18 * -2 + 3];
            *(float *)((int)&CStack_104 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
                 afStack_1d8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_104,&CStack_d4)
            ;
            fStack_260 = CStack_d4.x;
            afStack_25c[(uint)bVar18 * -2] = *(float *)((int)&CStack_d4 + (uint)bVar18 * -8 + 4);
            afStack_25c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                 *(float *)((int)&CStack_d4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
            pCStack_14 = (CDeformableModelInstance *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                   (afStack_25c[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS((float)pCStack_14) < (float)_DAT_005d6f8d) {
              fVar19 = 1.4013e-45;
              iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (pCStack_48,iVar8 + 5,(int)fVar19);
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
      fVar19 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar20 = (SDamageInfo *)(fVar19 * this_ptr->difficulty_speed_scale);
      pCStack_14 = (CDeformableModelInstance *)
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      fVar19 = 1.0;
      core_xform_cpp_transformVector3x4_FUN_005b5080
                ((CVector3f *)&DAT_02c8af28,(CMatrix3x4f *)((int)pCStack_14 + DAT_007dc5b8 * 0x30),
                 &CStack_284);
      pCVar21 = &CStack_74;
      CStack_74.x = CStack_284.x;
      *(uint *)((int)&CStack_74 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_284 + (uint)bVar18 * -8 + 4);
      *(uint *)((int)&CStack_74 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&CStack_284 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar21,&CStack_26c);
      pCVar21 = &CStack_bc;
      CStack_bc.x = CStack_26c.x;
      *(uint *)((int)&CStack_bc + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_26c + (uint)bVar18 * -8 + 4);
      pCVar16 = this_ptr;
      *(uint *)((int)&CStack_bc + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&CStack_26c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar16->base,pCVar21,fVar19,pSVar20);
      pSVar20 = (SDamageInfo *)&stack0xfffffd20;
      fVar19 = 1.0;
      core_xform_cpp_transformVector3x4_FUN_005b5080
                ((CVector3f *)&DAT_02c8af28,
                 (CMatrix3x4f *)
                 ((pCStack_14->base).current_motion_name + DAT_007dc5c0 * 0x30 + -0x30),&CStack_254)
      ;
      pCVar21 = &CStack_164;
      CStack_164.x = CStack_254.x;
      *(uint *)((int)&CStack_164 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_254 + (uint)bVar18 * -8 + 4);
      *(uint *)((int)&CStack_164 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&CStack_254 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar21,&CStack_23c);
      pCVar21 = &CStack_f8;
      CStack_f8.x = CStack_23c.x;
      *(uint *)((int)&CStack_f8 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_23c + (uint)bVar18 * -8 + 4);
      pCVar16 = this_ptr;
      *(uint *)((int)&CStack_f8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&CStack_23c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar16->base,pCVar21,fVar19,pSVar20);
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
      afStack_154[0] = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      afStack_154[1] = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
      fStack_ec = fStack_158;
      afStack_e8[(uint)bVar18 * -2] = afStack_154[(uint)bVar18 * -2];
      afStack_e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_154[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
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
      fVar19 = 1.4013e-45;
      iVar8 = 3;
    }
    else {
LAB_00446804:
      fVar19 = 1.4013e-45;
      iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar8,(int)fVar19);
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
    afStack_1b4[(uint)bVar18 * -2 + 3] = afStack_94[(uint)bVar18 * -2 + 3];
    afStack_1b4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
         afStack_94[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
    pCVar21 = &(this_ptr->base).base.position_delta;
    fStack_68 = afStack_1b4[2] + pCVar21->x;
    fStack_64 = afStack_1b4[3] + (this_ptr->base).base.position_delta.y;
    afStack_60[0] = fStack_1a4 + (this_ptr->base).base.position_delta.z;
    fStack_128 = fStack_68;
    afStack_124[(uint)bVar18 * -2] = afStack_60[(uint)bVar18 * -2 + -1];
    afStack_124[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_60[(uint)bVar18 * -2 + (uint)bVar18 * -2];
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1dc = fStack_128 + pCVar3->x;
    afStack_1d8[0] = afStack_124[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_1d8[1] = afStack_124[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_1c4.x = fStack_1dc;
    *(float *)((int)&CStack_1c4 + (uint)bVar18 * -8 + 4) = afStack_1d8[(uint)bVar18 * -2];
    *(float *)((int)&CStack_1c4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         afStack_1d8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar21->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar19 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar19;
    pCVar3->x = fVar19;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_1c4);
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
