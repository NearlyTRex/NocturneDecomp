// Name: core_construc.cpp_CConstruct_process_FUN_00442a20
// Address: 00442a20
// Address Range: [[00442a20, 00443c82]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_process_FUN_00442a20(CConstruct *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_construc_cpp_CConstruct_process_FUN_00442a20(CConstruct *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CBodyPart *pCVar4;
  CCharacter *pCVar5;
  EWalkState EVar6;
  SMotion *pSVar7;
  int iVar8;
  CDemonActor *pCVar9;
  uint uVar10;
  CCharacter *pCVar11;
  SBoneGuyBox *pSVar12;
  uint uVar13;
  float fVar14;
  CPathMap *path_map;
  CConstruct *pCVar15;
  CLocation *pCVar16;
  byte bVar17;
  float afStackY_1a80 [1508];
  SMRGLTextureBasic *texture_ptr;
  float force_immediate;
  SDamageInfo *pSVar18;
  CVector3f *pCVar19;
  float in_stack_fffffd38;
  uint uStack_284;
  CVector3f CStack_278;
  float fStack_26c;
  float afStack_268 [4];
  float fStack_258;
  uint uStack_254;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float afStack_230 [4];
  float afStack_220 [4];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
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
  CVector3f CStack_1dc;
  float fStack_1d0;
  float afStack_1cc [5];
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [4];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  CVector3f CStack_17c;
  uint uStack_170;
  float afStack_16c [5];
  float fStack_158;
  CVector3f CStack_14c;
  uint uStack_140;
  float afStack_13c [4];
  float fStack_12c;
  uint uStack_128;
  float fStack_11c;
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
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [4];
  float fStack_84;
  float fStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CMotionController *pCStack_48;
  CBodyPart *pCStack_44;
  CBodyPart *pCStack_40;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  SBoneGuyBox *pSStack_2c;
  float *pfStack_28;
  CQuaternion4f *pCStack_24;
  CQuaternion4f *pCStack_20;
  int iStack_1c;
  CVector3f *pCStack_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar17 = 0;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  iStack_38 = pSVar7->state_index;
  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,this_ptr->death_event);
  if (iVar8 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_construc_cpp_CConstruct_explode_FUN_00444110(this_ptr);
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"ConstructDead");
    }
    this_ptr->blown_up = 1;
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              (&(this_ptr->base).base.model.base,0xb,0.0);
    this_ptr->pickable_box_index = -1;
  }
  fStack_34 = 0.25;
  fStack_3c = 1.0;
  fStack_30 = 1.0;
  if ((this_ptr->base).pool_me == 0) {
    if (this_ptr->blown_up == 0) {
      if (iStack_38 != 0xc) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
        if (iVar8 == 0) {
          uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"stick-heartbeat.wav @ .2");
          this_ptr->sfx_handles[1] = uVar10;
          fStack_30 = 1.0;
          fStack_34 = 0.4;
        }
        pCStack_14 = &(this_ptr->base).base.model;
        core_skeleton_cpp_FUN_0054dcc0();
        uStack_284 = uStack_128;
        *(float *)(&stack0xfffffd60 + ((uint)bVar17 * -2 + 8) * 4) =
             afStack_13c[(uint)bVar17 * -2 + 6];
        *(float *)(&stack0xfffffd60 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 9) * 4) =
             afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
        core_actor_cpp_FUN_00408b80();
        fStack_ec = fStack_11c;
        afStack_13c[(uint)bVar17 * -2 + 0x15] = afStack_13c[(uint)bVar17 * -2 + 9];
        afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16] =
             afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
        core_skeleton_cpp_FUN_0054dcc0();
        afStack_1cc[2] = (float)uStack_170;
        afStack_1cc[(uint)bVar17 * -2 + 3] = afStack_16c[(uint)bVar17 * -2];
        afStack_1cc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             afStack_16c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
        core_actor_cpp_FUN_00408b80();
        fVar14 = fStack_ec;
        afStack_94[2] = fStack_158;
        afStack_94[(uint)bVar17 * -2 + 3] = afStack_16c[(uint)bVar17 * -2 + 6];
        afStack_94[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             afStack_16c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
        fStack_f8 = fVar14 + afStack_94[2];
        fStack_f4 = fStack_e8 + afStack_94[3];
        fStack_f0 = fStack_e4 + fStack_84;
        afStack_220[2] = fVar14 + afStack_94[2];
        afStack_220[(uint)bVar17 * -2 + 3] = afStack_13c[(uint)bVar17 * -2 + 0x12];
        afStack_220[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13];
        fStack_200 = afStack_220[2] * _DAT_005b9679;
        fStack_1fc = afStack_220[3] * _DAT_005b9679;
        fStack_1f8 = fStack_210 * _DAT_005b9679;
        CStack_278.x = afStack_220[2] * _DAT_005b9679;
        *(float *)((int)&CStack_278 + (uint)bVar17 * -8 + 4) = afStack_220[(uint)bVar17 * -2 + 9];
        *(float *)((int)&CStack_278 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
             afStack_220[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
        iVar8 = this_ptr->trail_texture_type;
        if (iVar8 == 1) {
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16c4;
          pCVar19 = &CStack_278;
        }
        else if (iVar8 == 2) {
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16dc;
          pCVar19 = &CStack_278;
        }
        else {
          if (iVar8 != 3) goto LAB_00442bf6;
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16f4;
          pCVar19 = &CStack_278;
        }
LAB_00442bee:
        core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
                  (0x01C73654,pCVar19,fStack_30,fStack_34,fStack_3c,texture_ptr);
      }
    }
    else if (this_ptr->blown_up == 1) {
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
      if (iVar8 == 0) {
        uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"stick-heartbeat.wav @ .5");
        this_ptr->sfx_handles[1] = uVar10;
        fStack_34 = 0.4;
      }
      pCVar4 = this_ptr->boxes[this_ptr->pickable_box_index].body_part;
      if (pCVar4 != (CBodyPart *)0x0) {
        pCVar16 = &(pCVar4->base).location;
        if ((CLocation *)&CStack_17c != pCVar16) {
          CStack_17c.x = (pCVar16->position).x;
          CStack_17c.y = (pCVar4->base).location.position.y;
          CStack_17c.z = (pCVar4->base).location.position.z;
        }
        iVar8 = this_ptr->trail_texture_type;
        if (iVar8 == 1) {
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16c4;
          pCVar19 = &CStack_17c;
        }
        else if (iVar8 == 2) {
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16dc;
          pCVar19 = &CStack_17c;
        }
        else {
          if (iVar8 != 3) goto LAB_00442bf6;
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16f4;
          pCVar19 = &CStack_17c;
        }
        goto LAB_00442bee;
      }
    }
  }
LAB_00442bf6:
  iVar8 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar8 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
    return;
  }
  if ((0.0 < (this_ptr->base).base.hit_points) && (0 < this_ptr->pickable_box_index)) {
    pCStack_40 = this_ptr->boxes[this_ptr->pickable_box_index].body_part;
    if ((pCStack_40 != (CBodyPart *)0x0) &&
       (pCVar9 = (*((pCStack_40->base).vtable._ub)->getCarrier)(&pCStack_40->base),
       pCVar9 == *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,this_ptr->death_event);
      core_event_cpp_CEventList_executeCommands_FUN_0048c150
                (0x01C6E360,"ConstructKilled");
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[5]);
      if (iVar8 == 0) {
        uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"stick-die.wav");
        this_ptr->sfx_handles[5] = uVar10;
      }
      pCVar16 = &(pCStack_40->base).location;
      iVar8 = 0;
      CStack_1dc.x = 0.0;
      CStack_1dc.y = 1.0;
      CStack_1dc.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                (0x01C73654,&pCVar16->position,0.5,&CStack_1dc,0x4000);
      do {
        afStack_230[1] = 1.0;
        afStack_230[0] = 0.0;
        afStack_230[2] = 0.0;
        iVar8 = iVar8 + 1;
        core_fire_cpp_CFireEffect_createFirefly_FUN_004a29d0
                  (0x01C73654,pCVar16,afStack_268 + 0xe,4000,0xffdc,1,35000,1.0,0.2);
      } while (iVar8 < 10);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0
                (*(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      (pCStack_40->base).lifecycle_state = ACTOR_DESTROYED;
      this_ptr->blown_up = 3;
      return;
    }
  }
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar14 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar14;
    if (fVar14 <= this_ptr->recombine_time) {
      return;
    }
    core_construc_cpp_FUN_004443d0();
    return;
  }
  if (this_ptr->blown_up == 2) {
    pCVar4 = this_ptr->boxes[this_ptr->pickable_box_index].body_part;
    if (pCVar4 != (CBodyPart *)0x0) {
      pCVar11 = (CCharacter *)(*((pCVar4->base).vtable._ub)->getCarrier)(&pCVar4->base);
      pCVar5 = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if (pCVar11 == pCVar5) {
        core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(pCVar5);
      }
    }
    fVar14 = delta_time / _DAT_005dd6f8 + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar14;
    if (fVar14 < 1.0) {
      iStack_1c = 0;
      if (this_ptr->box_count < 1) {
        return;
      }
      pSStack_2c = this_ptr->boxes;
      pfStack_28 = &this_ptr->recombine_interpolation;
      pCStack_24 = &this_ptr->boxes[0].dest_orient;
      pCStack_20 = &this_ptr->boxes[0].start_orient;
      pCStack_18 = &this_ptr->boxes[0].source_pos;
      do {
        pCVar19 = pCStack_18;
        pSVar12 = pSStack_2c + iStack_1c;
        pCStack_44 = pSVar12->body_part;
        fStack_b0 = (pSVar12->pos).x - pCStack_18->x;
        fStack_ac = (pSVar12->pos).y - pCStack_18->y;
        fStack_a8 = (pSVar12->pos).z - pCStack_18->z;
        afStack_268[2] = fStack_b0;
        afStack_268[(uint)bVar17 * -2 + 3] = afStack_13c[(uint)bVar17 * -2 + 0x24];
        afStack_268[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x25];
        fStack_68 = afStack_268[2] * *pfStack_28;
        fStack_64 = afStack_268[3] * *pfStack_28;
        fStack_60 = fStack_258 * *pfStack_28;
        fStack_c8 = afStack_268[2] * *pfStack_28;
        afStack_13c[(uint)bVar17 * -2 + 0x1e] = afStack_94[(uint)bVar17 * -2 + 0xc];
        afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1f] =
             afStack_94[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
        afStack_1a8[2] = pCVar19->x + fStack_c8;
        afStack_1a8[3] = pCVar19->y + fStack_c4;
        fStack_198 = pCVar19->z + fStack_c0;
        afStack_13c[2] = afStack_1a8[2];
        afStack_13c[(uint)bVar17 * -2 + 3] = afStack_1a8[(uint)bVar17 * -2 + 3];
        afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             afStack_1a8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
        core_xform_cpp_slerpQuaternion_FUN_00585b20();
        *(uint *)(&stack0xfffffd60 + ((uint)bVar17 * -2 + 4) * 4) =
             *(uint *)(&stack0xfffffd60 + (uint)bVar17 * -8);
        *(uint *)(&stack0xfffffd60 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 5) * 4) =
             *(uint *)(&stack0xfffffd60 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 1) * 4);
        *(uint *)
         ((int)(&stack0xfffffd60 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 5) * 4) +
         ((uint)bVar17 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&stack0xfffffd60 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 1) * 4) +
              ((uint)bVar17 * -2 + 1) * 4);
        core_xform_cpp_FUN_00585de0();
        fStack_20c = fStack_1d0;
        afStack_220[(uint)bVar17 * -2 + 6] = afStack_1cc[(uint)bVar17 * -2];
        afStack_220[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
             afStack_1cc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
        fStack_20c = this_ptr->recombine_interpolation * (float)_DAT_005b969d + fStack_20c;
        (pCStack_44->base).location.position.x = afStack_13c[2];
        (pCStack_44->base).location.position.y = afStack_13c[3];
        pUVar1 = &(pCStack_44->base).orient;
        (pCStack_44->base).location.position.z = fStack_12c;
        if (pUVar1 != (UOrientationVector *)(afStack_220 + 5)) {
          (pUVar1->vec).x = fStack_20c;
          (pCStack_44->base).orient.vec.y = fStack_208;
          (pCStack_44->base).orient.vec.z = fStack_204;
        }
        if (&pCStack_44->physics_box != (CBox *)(afStack_13c + 2)) {
          (pCStack_44->physics_box).position.x = afStack_13c[2];
          (pCStack_44->physics_box).position.y = afStack_13c[3];
          (pCStack_44->physics_box).position.z = fStack_12c;
        }
        pCVar19 = &(pCStack_44->physics_box).orientation;
        if (pCVar19 != (CVector3f *)(afStack_220 + 5)) {
          pCVar19->x = fStack_20c;
          (pCStack_44->physics_box).orientation.y = fStack_208;
          (pCStack_44->physics_box).orientation.z = fStack_204;
        }
        iStack_1c = iStack_1c + 1;
        pCStack_24 = (CQuaternion4f *)((int)(pCStack_24 + 4) + 8);
        pCStack_20 = (CQuaternion4f *)((int)(pCStack_20 + 4) + 8);
        pCStack_18 = pCStack_18 + 6;
      } while (iStack_1c < this_ptr->box_count);
      return;
    }
    iVar8 = 0;
    core_skeleton_cpp_FUN_0054e670();
    pCVar15 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10
                  (0x01D81080,pCVar15->boxes[0].body_part,1);
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
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,afStack_94 + 0x10)
    ;
    if (uVar10 == 0) {
LAB_0044335d:
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
    }
    else {
      if (uVar10 < 2) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[2]);
        if (iVar8 == 0) {
          uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"stick-stump?.wav @ .2");
          this_ptr->sfx_handles[2] = uVar13;
        }
LAB_0044337c:
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[3]);
        if (iVar8 == 0) {
          uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"stick-leg1.wav @ .2");
          this_ptr->sfx_handles[3] = uVar13;
        }
        goto LAB_0044335d;
      }
      if (uVar10 == 7) goto LAB_0044337c;
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850();
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iStack_38) {
    case 0:
    case 1:
    case 2:
      iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
      pCVar2 = &(this_ptr->base).base.model;
      if (iVar8 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,3,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,3,1);
      }
      break;
    case 3:
    case 4:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCStack_48 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_48,0,1);
        }
      }
      else {
        fVar14 = 0.17453292;
        pCVar19 = (CVector3f *)0x3f000000;
        uStack_1e8 = 0;
        fStack_1e0 = 0x40400000;
        uStack_1e4 = 0;
        pCVar5 = (this_ptr->base).victim;
        fStack_50 = 0x40400000 + (float)_DAT_005b968d;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar19,
                           fVar14,in_stack_fffffd38);
        if (iVar8 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_48,0,1);
        }
        else {
          pCVar16 = &(this_ptr->base).base.base.location;
          pCVar5 = (this_ptr->base).victim;
          fStack_194 = (pCVar16->position).x - (pCVar5->base).location.position.x;
          fStack_190 = (this_ptr->base).base.base.location.position.y -
                       (pCVar5->base).location.position.y;
          fStack_18c = (this_ptr->base).base.base.location.position.z -
                       (pCVar5->base).location.position.z;
          afStack_16c[2] = fStack_194;
          afStack_16c[(uint)bVar17 * -2 + 3] = afStack_1a8[(uint)bVar17 * -2 + 6];
          afStack_16c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
               afStack_1a8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
          fStack_4c = SQRT(afStack_16c[4] * afStack_16c[4] + afStack_16c[2] * afStack_16c[2]);
          afStack_16c[3] = 0.0;
          if (((this_ptr->base).attack_cooldown <= 0.0) && (fStack_4c <= fStack_50)) {
            fStack_104 = (pCVar5->base).location.position.x - (pCVar16->position).x;
            fStack_100 = (pCVar5->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_fc = (pCVar5->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            fStack_80 = fStack_104;
            afStack_94[(uint)bVar17 * -2 + 6] = afStack_13c[(uint)bVar17 * -2 + 0xf];
            afStack_94[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
                 afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
            uStack_140 = uStack_188;
            afStack_13c[(uint)bVar17 * -2] = afStack_1a8[(uint)bVar17 * -2 + 9];
            afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 afStack_1a8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
            pCStack_14 = (CDeformableModelInstance *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (afStack_13c[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS((float)pCStack_14) < (float)_DAT_005b9695) {
              fVar14 = 1.4013e-45;
              iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (pCStack_48,iVar8 + 5,(int)fVar14);
              uVar10 = this_ptr->sfx_handles[6];
              (this_ptr->base).attack_cooldown = 2.5;
              iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(uVar10);
              if (iVar8 == 0) {
                uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"stick-attack?.wav");
                this_ptr->sfx_handles[6] = uVar10;
              }
            }
          }
        }
      }
      break;
    case 5:
    case 6:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffd20);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      pSVar18 = (SDamageInfo *)&stack0xfffffd20;
      pCStack_14 = (CDeformableModelInstance *)
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      fVar14 = 1.0;
      core_xform_cpp_FUN_00583260();
      uStack_bc = afStack_230[3];
      afStack_13c[(uint)bVar17 * -2 + 0x21] = afStack_220[(uint)bVar17 * -2];
      afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x22] =
           afStack_220[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      core_actor_cpp_FUN_00408b80();
      pCVar19 = &CStack_a4;
      CStack_a4.x = fStack_26c;
      *(float *)((int)&CStack_a4 + (uint)bVar17 * -8 + 4) = afStack_268[(uint)bVar17 * -2];
      pCVar15 = this_ptr;
      *(float *)((int)&CStack_a4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           afStack_268[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar15->base,pCVar19,fVar14,pSVar18);
      pSVar18 = (SDamageInfo *)&stack0xfffffd20;
      fVar14 = 1.0;
      core_xform_cpp_FUN_00583260();
      uStack_98 = uStack_254;
      afStack_94[(uint)bVar17 * -2] = afStack_268[(uint)bVar17 * -2 + 6];
      afStack_94[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           afStack_268[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
      core_actor_cpp_FUN_00408b80();
      pCVar19 = &CStack_14c;
      CStack_14c.x = fStack_23c;
      *(float *)((int)&CStack_14c + (uint)bVar17 * -8 + 4) = afStack_268[(uint)bVar17 * -2 + 0xc];
      pCVar15 = this_ptr;
      *(float *)((int)&CStack_14c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           afStack_268[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar15->base,pCVar19,fVar14,pSVar18);
      break;
    case 0xb:
      if (this_ptr->death_sound_played == 0) {
        uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"stick-die.wav");
        this_ptr->death_sound_played = 1;
        this_ptr->sfx_handles[5] = uVar10;
      }
      break;
    case 0xc:
      iVar8 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_110 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
      fStack_10c = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      fStack_108 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
      fStack_e0 = fStack_110;
      afStack_13c[(uint)bVar17 * -2 + 0x18] = afStack_13c[(uint)bVar17 * -2 + 0xc];
      afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x19] =
           afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
      if ((SQRT(fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0 + fStack_dc * fStack_dc) <
           (this_ptr->base).guard_distance * _DAT_005b9685) &&
         (((*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                     (&this_ptr->base,delta_time), (this_ptr->base).victim != (CCharacter *)0x0 ||
          (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                             (0x01C6E360,this_ptr->fall_event), iVar8 != 0)))) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0xe,1);
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[5]);
        if ((iVar8 == 0) &&
           (((iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[6]),
             iVar8 == 0 &&
             (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[4]),
             iVar8 == 0)) &&
            (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[4]),
            iVar8 == 0)))) {
          uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"stick-attack1.wav");
          this_ptr->sfx_handles[4] = uVar10;
        }
      }
      break;
    case 0xe:
      if ((this_ptr->base).base.base.location.position.y <
          (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005b967d) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0xf,1);
      }
      break;
    case 0xf:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[7]);
      if (iVar8 == 0) {
        uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"stick-leaps.wav");
        this_ptr->sfx_handles[7] = uVar10;
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    }
    goto switchD_00443c5c_caseD_7;
  }
  EVar6 = (this_ptr->base).base.walk_state;
  if (EVar6 < 2) {
    if (EVar6 == WALK_STATE_WALKING) {
LAB_0044342f:
      force_immediate = 1.4013e-45;
      fVar14 = 4.2039e-45;
    }
    else {
LAB_00443674:
      force_immediate = 1.4013e-45;
      fVar14 = (float)core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,(int)fVar14,(int)force_immediate);
  }
  else {
    if (EVar6 < WALK_STATE_NO_PATH) goto LAB_0044342f;
    if (EVar6 != WALK_STATE_NO_PATH) goto LAB_00443674;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00443c5c_caseD_7:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if ((iVar8 != 0) && (iStack_38 != 0xc)) {
    core_charactr_cpp_FUN_0042c1e0();
    fStack_74 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_70 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_6c = (this_ptr->base).base.velocity.z * delta_time;
    fStack_1ac = fStack_74;
    afStack_1a8[(uint)bVar17 * -2] = afStack_94[(uint)bVar17 * -2 + 9];
    afStack_1a8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         afStack_94[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
    pCVar19 = &(this_ptr->base).base.position_delta;
    fStack_248 = fStack_1ac + pCVar19->x;
    fStack_244 = afStack_1a8[0] + (this_ptr->base).base.position_delta.y;
    fStack_240 = afStack_1a8[1] + (this_ptr->base).base.position_delta.z;
    fStack_d4 = fStack_248;
    afStack_13c[(uint)bVar17 * -2 + 0x1b] = afStack_268[(uint)bVar17 * -2 + 9];
    afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1c] =
         afStack_268[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1f4 = fStack_d4 + pCVar3->x;
    fStack_1f0 = fStack_d0 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1ec = fStack_cc + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_1b8.x = fStack_1f4;
    *(float *)((int)&CStack_1b8 + (uint)bVar17 * -8 + 4) = afStack_220[(uint)bVar17 * -2 + 0xc];
    *(float *)((int)&CStack_1b8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_220[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar19->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar14 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar14;
    pCVar3->x = fVar14;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_1b8);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if (((iStack_38 == 3) || (iStack_38 == 4)) &&
     (iVar8 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00557170
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,100.0), iVar8 != 0))
  {
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]);
    if ((iVar8 == 0) && (iVar8 = core_actor_cpp_randomChance_FUN_0040cf40(0.3), iVar8 != 0)) {
      uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                         ((CDemonActor *)this_ptr,"stick-walk_growl1.wav");
      this_ptr->sfx_handles[0] = uVar10;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
  return;
}
