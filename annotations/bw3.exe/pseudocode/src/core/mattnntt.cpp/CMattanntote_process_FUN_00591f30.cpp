// Name: core_mattnntt.cpp_CMattanntote_process_FUN_00591f30
// Address: 00591f30
// Address Range: [[00591f30, 005936f4]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_process_FUN_00591f30(CMattanntote *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mattnntt_cpp_CMattanntote_process_FUN_00591f30(CMattanntote *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  uint uVar6;
  SMotion *pSVar7;
  uint uVar8;
  CPathMap *path_map;
  int iVar9;
  CDemonActor *pCVar10;
  byte bVar11;
  float afStackY_130c [1011];
  CGore *this_ptr_00;
  CVector3f *pCVar12;
  float fVar13;
  uint *puVar14;
  float *pfVar15;
  EBloodType blood_type;
  float max_distance;
  float fStack_324;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  uint uStack_2dc;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  CVector3f CStack_2ac;
  float fStack_2a0;
  float afStack_29c [5];
  uint uStack_288;
  float fStack_27c;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  CVector3f CStack_258;
  float fStack_24c;
  float afStack_248 [4];
  float fStack_238;
  float fStack_234;
  uint uStack_230;
  uint uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  float afStack_20c [5];
  float fStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  float afStack_1ec [3];
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float afStack_1d4 [3];
  uint uStack_1c8;
  float fStack_1c4;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  float fStack_1b0;
  float afStack_1ac [5];
  float fStack_198;
  uint uStack_194;
  uint uStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  uint uStack_180;
  float afStack_174 [3];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  uint uStack_14c;
  uint uStack_148;
  float fStack_144;
  float afStack_140 [5];
  float afStack_12c [3];
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  float fStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  CVector3f CStack_c0;
  uint uStack_b4;
  float afStack_b0 [5];
  float afStack_9c [3];
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  CMotionController *pCStack_54;
  float fStack_50;
  CLocation *pCStack_4c;
  uint uStack_48;
  float fStack_44;
  CDeformableModelInstance *pCStack_40;
  CDeformableModelInstance *pCStack_3c;
  CDeformableModelInstance *pCStack_38;
  CDeformableModelInstance *pCStack_34;
  CVector3f *pCStack_30;
  CVector3f *pCStack_2c;
  CVector3f *pCStack_28;
  CLocation *pCStack_24;
  CDeformableModelInstance *pCStack_20;
  CVector3f *pCStack_1c;
  float fStack_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar11 = 0;
  iVar5 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar5 != 0) {
    if (0.0 < this_ptr->pain_cooldown) {
      this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
    }
    fVar2 = this_ptr->fade_timer + delta_time;
    this_ptr->fade_timer = fVar2;
    if (this_ptr->max_fade_time <= fVar2) {
      this_ptr->fade_timer = this_ptr->max_fade_time;
    }
    pCStack_14 = &(this_ptr->base).base.model;
    core_skeleton_cpp_FUN_0054dcc0(pCStack_14,this_ptr->bone_l_foot);
    puVar14 = &uStack_210;
    uStack_210 = uStack_b4;
    afStack_20c[(uint)bVar11 * -2] = afStack_b0[(uint)bVar11 * -2];
    afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    core_actor_cpp_FUN_00408b80(this_ptr,puVar14);
    fStack_1e0 = fStack_2c4;
    afStack_20c[(uint)bVar11 * -2 + 0xc] = *(float *)(&stack0xfffffd40 + (uint)bVar11 * -8);
    afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         *(float *)(&stack0xfffffd44 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    this_ptr->flames[0].base.location.position.x = fStack_1e0;
    this_ptr->flames[0].base.location.position.y = fStack_1dc;
    this_ptr->flames[0].base.location.position.z = fStack_1d8;
    core_skeleton_cpp_FUN_0054dcc0(pCStack_14,this_ptr->bone_r_foot);
    pfVar15 = afStack_20c + 2;
    afStack_20c[2] = (float)uStack_180;
    afStack_20c[(uint)bVar11 * -2 + 3] = afStack_1ac[(uint)bVar11 * -2 + 0xc];
    afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar15);
    fStack_24c = fStack_2a0;
    afStack_248[(uint)bVar11 * -2] = afStack_29c[(uint)bVar11 * -2];
    afStack_248[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    this_ptr->flames[1].base.location.position.x = fStack_24c;
    this_ptr->flames[1].base.location.position.y = afStack_248[0];
    this_ptr->flames[1].base.location.position.z = afStack_248[1];
    core_skeleton_cpp_FUN_0054dcc0(pCStack_14,this_ptr->bone_r_toe);
    pfVar15 = afStack_1ac + 0xe;
    afStack_174[0] = (float)uStack_288;
    afStack_1ac[(uint)bVar11 * -2 + 0xf] = afStack_29c[(uint)bVar11 * -2 + 6];
    afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
         afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar15);
    fStack_1b0 = fStack_27c;
    afStack_1ac[(uint)bVar11 * -2] = afStack_29c[(uint)bVar11 * -2 + 9];
    afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    this_ptr->flames[2].base.location.position.x = fStack_1b0;
    this_ptr->flames[2].base.location.position.y = afStack_1ac[0];
    this_ptr->flames[2].base.location.position.z = afStack_1ac[1];
    core_skeleton_cpp_FUN_0054dcc0(pCStack_14,this_ptr->bone_l_toe);
    pfVar15 = afStack_20c + 8;
    afStack_1ec[0] = (float)uStack_15c;
    afStack_20c[(uint)bVar11 * -2 + 9] = afStack_1ac[(uint)bVar11 * -2 + 0x15];
    afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar15);
    fStack_2e8 = afStack_140[2];
    *(float *)((int)&stack0xfffffd1c + (uint)bVar11 * -8) = afStack_140[(uint)bVar11 * -2 + 3];
    *(float *)((int)&stack0xfffffd20 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
         afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    pCVar10 = &this_ptr->flames[0].base;
    this_ptr->flames[3].base.location.position.x = fStack_2e8;
    this_ptr->flames[3].base.location.position.y = fStack_2e4;
    this_ptr->flames[3].base.location.position.z = fStack_2e0;
    do {
      (*((UActorVTable *)(pCVar10->actor_name + 0x154))->_ub->process)(pCVar10,delta_time);
      pCVar10 = (CDemonActor *)&pCVar10[1].next_actor;
    } while (pCVar10 != (CDemonActor *)this_ptr->sfx_handles);
    if ((this_ptr->fade_done == 0) && (this_ptr->speed_boosted == 0)) {
      fVar2 = (this_ptr->base).speed;
      this_ptr->speed_boosted = 1;
      fVar2 = fVar2 + _DAT_005d91ab;
      this_ptr->run_mode = 1;
      (this_ptr->base).speed = fVar2;
    }
    if ((0.0 < this_ptr->wander_timer) && (this_ptr->wander_timer - delta_time <= 0.0)) {
      pCVar1 = &(this_ptr->base).base.base.location;
      iVar9 = _DAT_01d5ba14 * 4;
      iVar5 = *(int *)(iVar9 + 0x1d5ba04);
      fStack_f0 = (pCVar1->position).x - *(float *)(iVar5 + 0x20);
      fStack_ec = (this_ptr->base).base.base.location.position.y - *(float *)(iVar5 + 0x24);
      fStack_e8 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar5 + 0x28);
      fStack_108 = fStack_f0;
      afStack_140[(uint)bVar11 * -2 + 0xf] = afStack_140[(uint)bVar11 * -2 + 0x15];
      afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
           afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
      fStack_68 = fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104;
      fStack_84 = (float)(((int)fStack_68 >> 1) + _DAT_01d1a0a4);
      pCStack_4c = pCVar1;
      if (fStack_84 < (float)_DAT_005d91b3) {
        this_ptr->wander_timer = 0.5;
      }
      else {
        fVar2 = (this_ptr->base).speed + _DAT_005d91bb;
        this_ptr->wander_timer = 0.0;
        (this_ptr->base).speed = fVar2;
        iVar5 = *(int *)(iVar9 + 0x1d5ba04);
        iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
        pCStack_54 = &(this_ptr->base).base.model.base;
        if (iVar5 == 0) {
          iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_144 = *(float *)(iVar5 + 0x20) - (pCStack_4c->position).x;
          afStack_140[0] = *(float *)(iVar5 + 0x24) - (pCStack_4c->position).y;
          afStack_140[1] = *(float *)(iVar5 + 0x28) - (pCStack_4c->position).z;
          afStack_9c[0] = fStack_144;
          afStack_b0[(uint)bVar11 * -2 + 6] = afStack_140[(uint)bVar11 * -2];
          afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_b0 + 5);
          fStack_fc = fStack_324;
          afStack_140[(uint)bVar11 * -2 + 0x12] = *(float *)(&stack0xfffffce0 + (uint)bVar11 * -8);
          afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
               *(float *)(&stack0xfffffce4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                       (fStack_f8 - (this_ptr->base).base.base.orient.vec.y);
          pCStack_14 = (CDeformableModelInstance *)fStack_18;
          pCStack_14 = (CDeformableModelInstance *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                 (fStack_fc - (this_ptr->base).base.base.orient.vec.x);
          fVar2 = (this_ptr->base).base.base.orient.vec.x;
          (this_ptr->base).base.base.orient.vec.y =
               (this_ptr->base).base.base.orient.vec.y + fStack_18;
          (this_ptr->base).base.base.orient.vec.x = fVar2 + (float)pCStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_54,0xd,1);
      }
    }
    fVar2 = this_ptr->wander_retarget_timer - delta_time;
    this_ptr->wander_retarget_timer = fVar2;
    if (fVar2 < 0.0) {
      this_ptr->wander_retarget_timer = 0.0;
    }
    fVar2 = this_ptr->wander_timer - delta_time;
    this_ptr->wander_timer = fVar2;
    if (fVar2 < 0.0) {
      this_ptr->wander_mode = 0;
      this_ptr->run_mode = 0;
      if (this_ptr->wander_timer < (float)_DAT_005d91c3) {
        this_ptr->wander_timer = 0.0;
        this_ptr->speed_boosted = 0;
      }
    }
    pCStack_30 = &(this_ptr->base).base.velocity;
    fStack_50 = delta_time * (this_ptr->base).speed;
    pCStack_2c = &(this_ptr->base).base.position_delta;
    pCStack_28 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCStack_20 = &(this_ptr->base).base.model;
    pCStack_24 = &(this_ptr->base).base.base.location;
    pCStack_1c = &this_ptr->wander_target;
    while (0.0 < fStack_50) {
      uVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCStack_20->base,&fStack_50);
      if (uVar6 < 0x451) {
        if (uVar6 < 0x44d) {
          if (1000 < uVar6) {
            if (uVar6 < 0x3ea) {
              iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                ((this_ptr->base).base.carry_hands[1].carry_actor,
                                 g_CWeaponClassInfo.name_hash);
              if (iVar5 != 0) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                uStack_48 = *(uint *)(iVar5 + 0x568);
                *(CMattanntote **)(iVar5 + 0x304) = this_ptr;
                *(uint *)(iVar5 + 0x568) = 100;
                iVar9 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5);
                if (iVar9 != 0) {
                  (**(code **)(*(int *)(iVar5 + 0x154) + 0xe4))(iVar5);
                  iVar9 = sound_sndmain_cpp_FUN_00556700
                                    (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                              uVar6 * 4 + 0x2c));
                  if (iVar9 == 0) {
                    uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"mann_firestaff.wav");
                    *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) =
                         uVar8;
                    *(uint *)(iVar5 + 0x568) = uStack_48;
                    goto LAB_00592354;
                  }
                }
                *(uint *)(iVar5 + 0x568) = uStack_48;
              }
            }
            else if ((uVar6 == 0x44c) &&
                    (iVar5 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handles[0]), iVar5 == 0))
            {
              uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"mann_stand.wav");
              this_ptr->sfx_handles[0] = uVar6;
            }
          }
        }
        else if (uVar6 < 0x44e) {
          iVar5 = sound_sndmain_cpp_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar6 * 4 + 0x2c));
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"mann_chasewalk.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
          }
        }
        else if (uVar6 < 0x44f) {
          iVar5 = sound_sndmain_cpp_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar6 * 4 + 0x2c));
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"mann_chasefast.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
          }
        }
        else if (uVar6 < 0x450) {
          iVar5 = sound_sndmain_cpp_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar6 * 4 + 0x2c));
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"mann_attack.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
          }
        }
        else {
          iVar5 = sound_sndmain_cpp_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar6 * 4 + 0x2c));
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"mann_attack1.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
          }
        }
      }
      else if (uVar6 < 0x452) {
        iVar5 = sound_sndmain_cpp_FUN_00556700
                          (*(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c
                                    ));
        if (iVar5 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"mann_attack2.wav");
          *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
        }
      }
      else if (uVar6 < 0x454) {
        if (uVar6 < 0x453) {
          iVar5 = sound_sndmain_cpp_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar6 * 4 + 0x2c));
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"mann_attack3.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
          }
        }
        else {
          iVar5 = sound_sndmain_cpp_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar6 * 4 + 0x2c));
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"mann_pain.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
          }
        }
      }
      else if (uVar6 < 0x455) {
        iVar5 = sound_sndmain_cpp_FUN_00556700
                          (*(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c
                                    ));
        if (iVar5 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"mann_die.wav");
          *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
        }
      }
      else if (uVar6 < 0x456) {
        iVar5 = sound_sndmain_cpp_FUN_00556700
                          (*(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c
                                    ));
        if (iVar5 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"mann_warning.wav");
          *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
        }
      }
      else if (uVar6 < 0x457) {
        iVar5 = sound_sndmain_cpp_FUN_00556700
                          (*(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c
                                    ));
        if (iVar5 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"mann_appear.wav");
          *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar6 * 4 + 0x2c) = uVar8;
        }
      }
      else if ((uVar6 == 0x457) &&
              (iVar5 = sound_sndmain_cpp_FUN_00556700
                                 (*(uint *)((int)(this_ptr->flames + 0xc) + 0x2c)), iVar5 == 0)) {
        uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"mann_disappear.wav");
        *(uint *)((int)(this_ptr->flames + 0xc) + 0x2c) = uVar6;
      }
LAB_00592354:
      fVar2 = (this_ptr->base).speed;
      fVar13 = (float)_DAT_005d91cb;
      (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
      core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar2 * fVar13);
      pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_20->base);
      iVar5 = pSVar7->state_index;
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"State: %d\n",iVar5);
      iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                        ((CCharacter *)this_ptr,delta_time);
      if (iVar9 == 0) {
        switch(iVar5) {
        case 0:
          iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_270 = *(float *)(iVar5 + 0x20) - (pCStack_24->position).x;
          fStack_26c = *(float *)(iVar5 + 0x24) - (pCStack_24->position).y;
          fStack_268 = *(float *)(iVar5 + 0x28) - (pCStack_24->position).z;
          fStack_318 = fStack_270;
          *(float *)((int)&stack0xfffffcec + (uint)bVar11 * -8) =
               afStack_29c[(uint)bVar11 * -2 + 0xc];
          *(float *)((int)&stack0xfffffcf0 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
               afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
          if (&fStack_21c != &stack0xfffffce8) {
            fStack_21c = fStack_318;
            fStack_218 = fStack_314;
            fStack_214 = fStack_310;
          }
          if (0.0 < (this_ptr->base).attack_cooldown) {
            fStack_80 = fStack_214 * fStack_214 + fStack_21c * fStack_21c + fStack_218 * fStack_218;
            fStack_7c = (float)(((int)fStack_80 >> 1) + _DAT_01d1a0a4);
            if (fStack_7c < 0x40A00000 + 1.0) break;
          }
          iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
          if (iVar5 == 0) {
            iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
            if (iVar5 != 0) {
              core_mattnntt_cpp_FUN_00593a90(this_ptr);
            }
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            if ((this_ptr->base).victim == (CCharacter *)0x0) {
              iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
              if (iVar5 == 0) break;
              g_CGamePtr->player_hit_flag = 1;
              (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            }
            if ((this_ptr->base).victim != (CCharacter *)0x0) {
              this_ptr->attack_committed = 0;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&fStack_21c);
              uStack_2dc = afStack_29c[2];
              *(float *)((int)&stack0xfffffd28 + (uint)bVar11 * -8) =
                   afStack_29c[(uint)bVar11 * -2 + 3];
              *(float *)(&stack0xfffffd2c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                   afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
              pCStack_14 = (CDeformableModelInstance *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                     (fStack_2d8 - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS((float)pCStack_14) < (float)_DAT_005d91e3) &&
                 ((this_ptr->base).attack_cooldown <= 0.0)) {
                fStack_78 = fStack_214 * fStack_214 +
                            fStack_21c * fStack_21c + fStack_218 * fStack_218;
                fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
                if (fStack_74 < 0x40A00000 + 1.0) {
                  this_ptr->attack_committed = 1;
                  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar5 < 0x4b) {
                    iVar5 = 3;
                  }
                  else if ((iVar5 < 0x4b) || (0x5a < iVar5)) {
                    iVar5 = 5;
                  }
                  else {
                    iVar5 = 4;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&pCStack_20->base,iVar5,1);
                  (this_ptr->base).attack_cooldown = 3.0;
                  break;
                }
              }
              core_mattnntt_cpp_FUN_00593a90(this_ptr);
            }
          }
          break;
        case 1:
        case 2:
          iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_264 = *(float *)(iVar5 + 0x20) - (pCStack_24->position).x;
          fStack_260 = *(float *)(iVar5 + 0x24) - (pCStack_24->position).y;
          fStack_25c = *(float *)(iVar5 + 0x28) - (pCStack_24->position).z;
          afStack_d4[2] = fStack_264;
          afStack_d4[(uint)bVar11 * -2 + 3] = afStack_29c[(uint)bVar11 * -2 + 0xf];
          afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               afStack_29c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
          if (&fStack_228 != afStack_d4 + 2) {
            fStack_228 = afStack_d4[2];
            fStack_224 = afStack_d4[3];
            fStack_220 = fStack_c4;
          }
          if (0.0 < (this_ptr->base).attack_cooldown) {
            fStack_70 = fStack_220 * fStack_220 + fStack_228 * fStack_228 + fStack_224 * fStack_224;
            fStack_6c = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
            if ((fStack_6c < 0x40A00000 + 1.0) && (this_ptr->attack_committed == 0)) {
              engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Going to Stand\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0,1);
              break;
            }
          }
          pCVar4 = (this_ptr->base).victim;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if (((this_ptr->base).victim == (CCharacter *)0x0) &&
             (iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), iVar5 != 0)) {
            g_CGamePtr->player_hit_flag = 1;
            (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          }
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
            if (iVar5 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0,1);
            }
          }
          else if (pCVar4 == (CCharacter *)0x0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          else {
            pCStack_28->z = 0.0;
            pCStack_28->y = pCStack_28->z;
            pCStack_28->x = pCStack_28->y;
            fVar2 = (float)this_ptr->wander_mode;
            if (fVar2 == 0.0) {
              max_distance = 0.34906584;
              fVar13 = 0.2;
              CStack_c0.z = 0x40A00000;
              pCVar12 = &CStack_c0;
              iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              CStack_c0.x = fVar2;
              CStack_c0.y = fVar2;
              path_map = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x154) + 0xc4))(iVar5);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 (CVector3f *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20),
                                 path_map,pCVar12,fVar13,max_distance);
              if (iVar5 < 0) {
                engine_console_cpp_FUN_00441ff0
                          (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_20->base,0,1);
              }
              else if (0 < iVar5) {
                pCVar4 = (this_ptr->base).victim;
                fStack_18c = (pCVar4->base).location.position.x - (pCStack_24->position).x;
                fStack_188 = (pCVar4->base).location.position.y - (pCStack_24->position).y;
                fStack_184 = (pCVar4->base).location.position.z - (pCStack_24->position).z;
                afStack_1d4[0] = fStack_18c;
                afStack_20c[(uint)bVar11 * -2 + 0xf] = afStack_1ac[(uint)bVar11 * -2 + 9];
                afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
                     afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_20c + 0xe);
                uStack_1c8 = afStack_1ac[2];
                afStack_20c[(uint)bVar11 * -2 + 0x12] = afStack_1ac[(uint)bVar11 * -2 + 3];
                afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
                     afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
                pCStack_14 = (CDeformableModelInstance *)
                             core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                       (fStack_1c4 - (this_ptr->base).base.base.orient.vec.y);
                if ((ABS((float)pCStack_14) < (float)_DAT_005d91e3) &&
                   ((this_ptr->base).attack_cooldown <= 0.0)) {
                  this_ptr->attack_committed = 1;
                  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar5 < 0x4b) {
                    iVar5 = 3;
                  }
                  else if ((iVar5 < 0x4b) || (0x5a < iVar5)) {
                    iVar5 = 5;
                  }
                  else {
                    iVar5 = 4;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&pCStack_20->base,iVar5,1);
                  (this_ptr->base).attack_cooldown = 3.0;
                }
              }
            }
            else {
              if (this_ptr->wander_retarget_timer <= 0.0) {
                fStack_60 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
                CStack_e4.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
                fStack_5c = fStack_60;
                CStack_e4.z = fStack_60;
                CStack_e4.y = 0.0;
                if (&CStack_e4 != pCStack_1c) {
                  pCStack_1c->x = CStack_e4.x;
                  pCStack_1c->y = 0.0;
                  pCStack_1c->z = fStack_60;
                }
                fStack_44 = SQRT(pCStack_1c->z * pCStack_1c->z +
                                 pCStack_1c->x * pCStack_1c->x + pCStack_1c->y * pCStack_1c->y);
                if (fStack_44 <= 0.0) {
                  pCStack_1c->z = 0.0;
                  pCStack_1c->y = pCStack_1c->z;
                  pCStack_1c->x = pCStack_1c->y;
                }
                else {
                  fVar2 = 1.0 / fStack_44;
                  pCStack_1c->x = pCStack_1c->x * fVar2;
                  pCStack_1c->y = pCStack_1c->y * fVar2;
                  pCStack_1c->z = pCStack_1c->z * fVar2;
                }
                fVar2 = pCStack_1c->y * _DAT_005d91d7;
                fVar13 = pCStack_1c->z * _DAT_005d91d7;
                pCStack_1c->x = pCStack_1c->x * _DAT_005d91d7;
                pCStack_1c->y = fVar2;
                pCStack_1c->z = fVar13;
                iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                pCStack_1c->x = *(float *)(iVar5 + 0x20) + pCStack_1c->x;
                pCStack_1c->y = *(float *)(iVar5 + 0x24) + pCStack_1c->y;
                pCStack_1c->z = *(float *)(iVar5 + 0x28) + pCStack_1c->z;
                this_ptr->wander_retarget_timer = 1.0;
                pCStack_40 = (CDeformableModelInstance *)CStack_e4.x;
                pCStack_14 = (CDeformableModelInstance *)CStack_e4.x;
              }
              CStack_258.x = 0.0;
              CStack_258.y = 0.0;
              CStack_258.z = 0.0;
              core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,pCStack_1c,(CPathMap *)0x0,&CStack_258,0.2,0.0);
            }
          }
          break;
        case 3:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          else {
            iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_2f4 = (pCStack_24->position).x - *(float *)(iVar5 + 0x20);
            fStack_2f0 = (pCStack_24->position).y - *(float *)(iVar5 + 0x24);
            fStack_2ec = (pCStack_24->position).z - *(float *)(iVar5 + 0x28);
            fStack_198 = fStack_2f4;
            afStack_1ac[(uint)bVar11 * -2 + 6] =
                 *(float *)((int)&stack0xfffffd10 + (uint)bVar11 * -8);
            afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 *(float *)((int)&stack0xfffffd14 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            if (afStack_20c + 0x14 != afStack_1ac + 5) {
              fStack_1bc = fStack_198;
              uStack_1b8 = uStack_194;
              uStack_1b4 = uStack_190;
            }
            pCStack_34 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc930(&pCStack_20->base)
            ;
            pCStack_14 = pCStack_34;
            if ((0x3f7fffff < (int)pCStack_34) && ((float)pCStack_34 <= _DAT_005d91d3)) {
              pCVar10 = (this_ptr->base).base.carry_hands[1].carry_actor;
              (*((pCVar10->vtable)._ub)->processMeleeHit)(pCVar10,2);
            }
          }
          break;
        case 4:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          else {
            iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            afStack_248[2] = (pCStack_24->position).x - *(float *)(iVar5 + 0x20);
            afStack_248[3] = (pCStack_24->position).y - *(float *)(iVar5 + 0x24);
            fStack_238 = (pCStack_24->position).z - *(float *)(iVar5 + 0x28);
            fStack_1f8 = afStack_248[2];
            afStack_20c[(uint)bVar11 * -2 + 6] = afStack_248[(uint)bVar11 * -2 + 3];
            afStack_20c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_248[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            if (afStack_248 + 5 != afStack_20c + 5) {
              fStack_234 = fStack_1f8;
              uStack_230 = uStack_1f4;
              uStack_22c = uStack_1f0;
            }
            pCStack_3c = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc930(&pCStack_20->base)
            ;
            pCStack_14 = pCStack_3c;
            if ((0x403fffff < (int)pCStack_3c) && ((int)pCStack_3c < 0x40800001)) {
              pCVar10 = (this_ptr->base).base.carry_hands[1].carry_actor;
              (*((pCVar10->vtable)._ub)->processMeleeHit)(pCVar10,2);
            }
          }
          break;
        case 5:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          else {
            iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_30c = (pCStack_24->position).x - *(float *)(iVar5 + 0x20);
            fStack_308 = (pCStack_24->position).y - *(float *)(iVar5 + 0x24);
            fStack_304 = (pCStack_24->position).z - *(float *)(iVar5 + 0x28);
            fStack_120 = fStack_30c;
            afStack_140[(uint)bVar11 * -2 + 9] =
                 *(float *)((int)&stack0xfffffcf8 + (uint)bVar11 * -8);
            afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                 *(float *)((int)&stack0xfffffcfc + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            if (afStack_1ac + 0x17 != afStack_140 + 8) {
              fStack_150 = fStack_120;
              uStack_14c = uStack_11c;
              uStack_148 = uStack_118;
            }
            pCStack_38 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc930(&pCStack_20->base)
            ;
            pCStack_14 = pCStack_38;
            if ((0x403fffff < (int)pCStack_38) && ((int)pCStack_38 < 0x40800001)) {
              pCVar10 = (this_ptr->base).base.carry_hands[1].carry_actor;
              (*((pCVar10->vtable)._ub)->processMeleeHit)(pCVar10,2);
            }
          }
          break;
        case 6:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          break;
        case 9:
          if (((this_ptr->base).pool_me == 0) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            core_skeleton_cpp_FUN_0054dbd0(pCStack_20,0);
            pfVar15 = afStack_140 + 5;
            afStack_12c[0] = afStack_b0[2];
            afStack_140[(uint)bVar11 * -2 + 6] = afStack_b0[(uint)bVar11 * -2 + 3];
            afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            core_actor_cpp_FUN_00408b80(this_ptr,pfVar15);
            blood_type = BLOOD_TYPE_RED;
            pCVar12 = &CStack_90;
            CStack_90.x = fStack_114;
            *(float *)((int)&CStack_90 + (uint)bVar11 * -8 + 4) =
                 afStack_140[(uint)bVar11 * -2 + 0xc];
            this_ptr_00 = g_CGorePtr;
            *(float *)((int)&CStack_90 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 afStack_140[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar12,blood_type);
            (this_ptr->base).pool_me = 1;
          }
          break;
        case 0xd:
          iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
          if (iVar5 == 0) goto switchD_00593661_caseD_e;
          pCStack_14 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc930(&pCStack_20->base);
          if ((float)_DAT_005d91db < (float)pCStack_14) {
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
                      (&pCStack_20->base,"stand",0.0);
          }
          break;
        case 0xe:
switchD_00593661_caseD_e:
          if (this_ptr->fading_out == 0) {
            this_ptr->fading_out = 1;
            this_ptr->fade_timer = 0.0;
            core_charactr_cpp_FUN_0042fbd0(this_ptr,pCStack_24,0,0,0x42480000,0,0x40000000);
          }
          break;
        case 0xf:
          if (this_ptr->fading_out == 1) {
            this_ptr->fade_timer = 0.0;
            this_ptr->fading_out = 0;
            core_charactr_cpp_FUN_0042fbd0(this_ptr,pCStack_24,0,0,0x42480000,0,0x40000000);
            this_ptr->wander_timer = 4.0;
            this_ptr->wander_mode = 1;
          }
        }
      }
      else {
        EVar3 = (this_ptr->base).base.walk_state;
        if (EVar3 < 2) {
          if (EVar3 == WALK_STATE_WALKING) {
LAB_005923d6:
            if (iVar5 != 2) {
              core_mattnntt_cpp_FUN_00593a90(this_ptr);
            }
          }
          else {
LAB_00592a8c:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0,1);
          }
        }
        else {
          if (EVar3 < WALK_STATE_NO_PATH) goto LAB_005923d6;
          if (EVar3 != WALK_STATE_NO_PATH) goto LAB_00592a8c;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0,1);
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        }
        pCStack_28->z = 0.0;
        pCStack_28->y = pCStack_28->z;
        pCStack_28->x = pCStack_28->y;
      }
      if (0.0 < (this_ptr->base).attack_cooldown) {
        (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
      }
      iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
      if ((iVar5 != 0) && (this_ptr->alerted == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0xd,1);
        this_ptr->alerted = 1;
      }
      core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
      fStack_300 = pCStack_30->x * delta_time;
      fStack_2fc = pCStack_30->y * delta_time;
      fStack_2f8 = pCStack_30->z * delta_time;
      fStack_2b8 = fStack_300;
      *(uint *)((int)&stack0xfffffd4c + (uint)bVar11 * -8) =
           *(uint *)((int)&stack0xfffffd04 + (uint)bVar11 * -8);
      *(uint *)((int)&stack0xfffffd50 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
           *(uint *)((int)&stack0xfffffd08 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      fStack_2d0 = fStack_2b8 + pCStack_2c->x;
      fStack_2cc = fStack_2b4 + pCStack_2c->y;
      fStack_2c8 = fStack_2b0 + pCStack_2c->z;
      fStack_168 = fStack_2d0;
      afStack_1ac[(uint)bVar11 * -2 + 0x12] = *(float *)((int)&stack0xfffffd34 + (uint)bVar11 * -8);
      pCVar12 = pCStack_2c;
      afStack_1ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
           *(float *)((int)&stack0xfffffd38 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      fStack_d8 = fStack_168 + pCStack_28->x;
      afStack_d4[0] = fStack_164 + pCStack_28->y;
      afStack_d4[1] = fStack_160 + pCStack_28->z;
      CStack_2ac.x = fStack_d8;
      *(float *)((int)&CStack_2ac + (uint)bVar11 * -8 + 4) = afStack_d4[(uint)bVar11 * -2];
      *(float *)((int)&CStack_2ac + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      pCVar12->z = 0.0;
      pCVar12->y = pCVar12->z;
      pCVar12->x = pCVar12->y;
      pCStack_28->z = 0.0;
      pCStack_28->y = pCStack_28->z;
      pCStack_28->x = pCStack_28->y;
      core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_2ac);
    }
    core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_20);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                      ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash
                      );
    if (iVar5 != 0) {
      (**(code **)(*(int *)(iVar5 + 0x154) + 0xc))(iVar5,delta_time);
      return;
    }
  }
  return;
}
