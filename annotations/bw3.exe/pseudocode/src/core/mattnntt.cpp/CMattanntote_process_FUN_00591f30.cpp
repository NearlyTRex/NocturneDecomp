// Name: core_mattnntt.cpp_CMattanntote_process_FUN_00591f30
// Address: 00591f30
// Address Range: [[00591f30, 005936f4]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_process_FUN_00591f30(CMattanntote *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_mattnntt_cpp_CMattanntote_process_FUN_00591f30(CMattanntote *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  CHero *pCVar3;
  EWalkState EVar4;
  CCharacter_full_vtable *pCVar5;
  int iVar6;
  EDeathState EVar7;
  uint uVar8;
  SMotion *pSVar9;
  int iVar10;
  CCharacter *pCVar11;
  uint uVar12;
  CMattanntote *pCVar13;
  CPathMap *path_map;
  CDemonActor *pCVar14;
  byte bVar15;
  float afStackY_130c [12];
  int aiStackY_12dc [12];
  float afStackY_12ac [75];
  int aiStackY_1180 [3];
  float afStackY_1174 [9];
  CDemonActor *apCStackY_1150 [9];
  float afStackY_112c [895];
  CVector3f *pCVar16;
  UOrientationVector *input_local_point;
  CGore *this_ptr_00;
  float fVar17;
  CDemonActor *in_stack_fffffcec;
  CMattanntote *in_stack_fffffcf0;
  CMattanntote *in_stack_fffffcf8;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  CVector3f CStack_2c4;
  float fStack_2b8;
  float afStack_2b4 [2];
  byte auStack_2ac [8];
  float fStack_2a4;
  CVector3f CStack_2a0;
  CVector3f CStack_294;
  CVector3f CStack_288;
  byte auStack_27c [8];
  float afStack_274 [4];
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  CVector3f CStack_258;
  float fStack_24c;
  float afStack_248 [4];
  float fStack_238;
  float fStack_234;
  float fStack_230;
  char acStack_22c [4];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  CVector3f CStack_21c;
  CVector3f CStack_210;
  CVector3f CStack_204;
  float fStack_1f8;
  float fStack_1f4;
  char acStack_1f0 [4];
  CVector3f CStack_1ec;
  float fStack_1e0;
  float afStack_1dc [2];
  CVector3f CStack_1d4;
  float fStack_1c8;
  float afStack_1c4 [4];
  int iStack_1b4;
  float fStack_1b0;
  float afStack_1ac [2];
  CVector3f CStack_1a4;
  float fStack_198;
  float fStack_194;
  int iStack_190;
  char acStack_18c [4];
  float afStack_188 [2];
  CVector3f CStack_180;
  UOrientationVector UStack_174;
  float fStack_168;
  float fStack_164;
  CDemonActor *pCStack_160;
  CVector3f CStack_15c;
  float fStack_150;
  float fStack_14c;
  uint uStack_148;
  float fStack_144;
  float afStack_140 [2];
  CVector3f CStack_138;
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [2];
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [5];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  int iStack_c0;
  int iStack_bc;
  float fStack_b8;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
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
  float fStack_48;
  float fStack_44;
  CDeformableModelInstance *pCStack_40;
  CDeformableModelInstance *pCStack_3c;
  CDeformableModelInstance *pCStack_38;
  CDeformableModelInstance *pCStack_34;
  CVector3f *pCStack_30;
  CVector3f *pCStack_2c;
  CVector3f *pCStack_28;
  CVector3f *pCStack_24;
  CMattanntote *pCStack_20;
  CVector3f *pCStack_1c;
  float fStack_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar15 = 0;
  iVar6 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar6 != 0) {
    if (0.0 < this_ptr->pain_cooldown) {
      this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
    }
    fVar17 = this_ptr->fade_timer + delta_time;
    this_ptr->fade_timer = fVar17;
    if (this_ptr->max_fade_time <= fVar17) {
      this_ptr->fade_timer = this_ptr->max_fade_time;
    }
    pCStack_14 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
              (pCStack_14,this_ptr->bone_l_foot,&CStack_b4);
    pCVar16 = &CStack_210;
    CStack_210.x = CStack_b4.x;
    *(uint *)((int)&CStack_210 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&CStack_b4 + (uint)bVar15 * -8 + 4);
    *(uint *)((int)&CStack_210 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         *(uint *)((int)&CStack_b4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,pCVar16,&CStack_2c4);
    fStack_1e0 = CStack_2c4.x;
    afStack_1dc[(uint)bVar15 * -2] = *(float *)((int)&CStack_2c4 + (uint)bVar15 * -8 + 4);
    afStack_1dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         *(float *)((int)&CStack_2c4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    this_ptr->flames[0].base.location.position.x = fStack_1e0;
    this_ptr->flames[0].base.location.position.y = afStack_1dc[0];
    this_ptr->flames[0].base.location.position.z = afStack_1dc[1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
              (pCStack_14,this_ptr->bone_r_foot,&CStack_180);
    pCVar16 = &CStack_204;
    CStack_204.x = CStack_180.x;
    *(uint *)((int)&CStack_204 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&CStack_180 + (uint)bVar15 * -8 + 4);
    *(uint *)((int)&CStack_204 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         *(uint *)((int)&CStack_180 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,pCVar16,&CStack_2a0);
    fStack_24c = CStack_2a0.x;
    afStack_248[(uint)bVar15 * -2] = *(float *)((int)&CStack_2a0 + (uint)bVar15 * -8 + 4);
    afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         *(float *)((int)&CStack_2a0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    this_ptr->flames[1].base.location.position.x = fStack_24c;
    this_ptr->flames[1].base.location.position.y = afStack_248[0];
    this_ptr->flames[1].base.location.position.z = afStack_248[1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
              (pCStack_14,this_ptr->bone_r_toe,&CStack_288);
    input_local_point = &UStack_174;
    UStack_174.vec.x = CStack_288.x;
    *(uint *)((int)&UStack_174 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&CStack_288 + (uint)bVar15 * -8 + 4);
    *(uint *)((int)&UStack_174 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         *(uint *)((int)&CStack_288 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,&input_local_point->vec,(CVector3f *)auStack_27c);
    fStack_1b0 = (float)auStack_27c._0_4_;
    afStack_1ac[(uint)bVar15 * -2] = *(float *)(auStack_27c + (uint)bVar15 * -8 + 4);
    afStack_1ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         *(float *)(auStack_27c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    this_ptr->flames[2].base.location.position.x = fStack_1b0;
    this_ptr->flames[2].base.location.position.y = afStack_1ac[0];
    this_ptr->flames[2].base.location.position.z = afStack_1ac[1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
              (pCStack_14,this_ptr->bone_l_toe,&CStack_15c);
    pCVar16 = &CStack_1ec;
    CStack_1ec.x = CStack_15c.x;
    *(uint *)((int)&CStack_1ec + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&CStack_15c + (uint)bVar15 * -8 + 4);
    *(uint *)((int)&CStack_1ec + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         *(uint *)((int)&CStack_15c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,pCVar16,&CStack_138);
    fStack_2e8 = CStack_138.x;
    *(uint *)((int)&stack0xfffffd04 + ((uint)bVar15 * -2 + 6) * 4) =
         *(uint *)((int)&CStack_138 + (uint)bVar15 * -8 + 4);
    *(uint *)((int)&stack0xfffffd04 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 7) * 4) =
         *(uint *)((int)&CStack_138 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    pCVar14 = &this_ptr->flames[0].base;
    this_ptr->flames[3].base.location.position.x = fStack_2e8;
    this_ptr->flames[3].base.location.position.y = fStack_2e4;
    this_ptr->flames[3].base.location.position.z = fStack_2e0;
    do {
      fVar17 = delta_time;
      (*((pCVar14->vtable)._ub)->process)(pCVar14,delta_time);
      pCVar14 = (CDemonActor *)&pCVar14[1].next_actor;
    } while (pCVar14 != (CDemonActor *)this_ptr->sfx_handles);
    if ((this_ptr->fade_done == 0) && (this_ptr->speed_boosted == 0)) {
      fVar2 = (this_ptr->base).speed;
      this_ptr->speed_boosted = 1;
      fVar2 = fVar2 + 8.5f;
      this_ptr->run_mode = 1;
      (this_ptr->base).speed = fVar2;
    }
    iVar6 = g_INT_01d5ba14;
    if ((0.0 < this_ptr->wander_timer) && (this_ptr->wander_timer - delta_time <= 0.0)) {
      pCVar1 = &(this_ptr->base).base.base.location;
      pCVar3 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      fStack_f0 = (pCVar1->position).x - (pCVar3->base).base.location.position.x;
      fStack_ec = (this_ptr->base).base.base.location.position.y -
                  (pCVar3->base).base.location.position.y;
      fStack_e8 = (this_ptr->base).base.base.location.position.z -
                  (pCVar3->base).base.location.position.z;
      fStack_108 = fStack_f0;
      afStack_104[(uint)bVar15 * -2] = afStack_104[(uint)bVar15 * -2 + 6];
      afStack_104[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_104[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      fStack_68 = afStack_104[1] * afStack_104[1] +
                  fStack_108 * fStack_108 + afStack_104[0] * afStack_104[0];
      fStack_84 = (float)(((int)fStack_68 >> 1) + g_INT_01d1a0a4);
      pCStack_4c = pCVar1;
      if (fStack_84 < (float)12) {
        this_ptr->wander_timer = 0.5;
      }
      else {
        fVar2 = (this_ptr->base).speed + -8.5f;
        this_ptr->wander_timer = 0.0;
        (this_ptr->base).speed = fVar2;
        EVar7 = (*(((g_CHero_PTR_ARRAY_01d5ba04[iVar6]->base).base.vtable._uc)->_uc).getDeathState)
                          (&g_CHero_PTR_ARRAY_01d5ba04[iVar6]->base);
        pCStack_54 = &(this_ptr->base).base.model.base;
        if (EVar7 == DEATH_STATE_ALIVE) {
          pCVar3 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
          fStack_144 = (pCVar3->base).base.location.position.x - (pCStack_4c->position).x;
          afStack_140[0] = (pCVar3->base).base.location.position.y - (pCStack_4c->position).y;
          afStack_140[1] = (pCVar3->base).base.location.position.z - (pCStack_4c->position).z;
          CStack_9c.x = fStack_144;
          *(float *)((int)&CStack_9c + (uint)bVar15 * -8 + 4) = afStack_140[(uint)bVar15 * -2];
          *(float *)((int)&CStack_9c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
               afStack_140[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                    (&CStack_9c,(CVector3f *)&stack0xfffffcdc);
          afStack_104[2] = fVar17;
          afStack_104[(uint)bVar15 * -2 + 3] = *(float *)(&stack0xfffffce0 + (uint)bVar15 * -8);
          afStack_104[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               *(float *)(&stack0xfffffce4 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
          fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                (afStack_104[3] - (this_ptr->base).base.base.orient.vec.y);
          pCStack_14 = (CDeformableModelInstance *)fStack_18;
          pCStack_14 = (CDeformableModelInstance *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                 (afStack_104[2] - (this_ptr->base).base.base.orient.vec.x);
          fVar17 = (this_ptr->base).base.base.orient.vec.x;
          (this_ptr->base).base.base.orient.vec.y =
               (this_ptr->base).base.base.orient.vec.y + fStack_18;
          (this_ptr->base).base.base.orient.vec.x = fVar17 + (float)pCStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_54,0xd,1);
      }
    }
    fVar17 = this_ptr->wander_retarget_timer - delta_time;
    this_ptr->wander_retarget_timer = fVar17;
    if (fVar17 < 0.0) {
      this_ptr->wander_retarget_timer = 0.0;
    }
    fVar17 = this_ptr->wander_timer - delta_time;
    this_ptr->wander_timer = fVar17;
    if (fVar17 < 0.0) {
      this_ptr->wander_mode = 0;
      this_ptr->run_mode = 0;
      if (this_ptr->wander_timer < (float)-2) {
        this_ptr->wander_timer = 0.0;
        this_ptr->speed_boosted = 0;
      }
    }
    pCStack_30 = &(this_ptr->base).base.velocity;
    fStack_50 = delta_time * (this_ptr->base).speed;
    pCStack_2c = &(this_ptr->base).base.position_delta;
    pCStack_28 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCStack_20 = (CMattanntote *)&(this_ptr->base).base.model;
    pCStack_24 = &(this_ptr->base).base.base.location.position;
    pCStack_1c = &this_ptr->wander_target;
    while (0.0 < fStack_50) {
      uVar8 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                        ((CMotionController *)pCStack_20,&fStack_50);
      if (uVar8 < 0x451) {
        if (uVar8 < 0x44d) {
          if (1000 < uVar8) {
            if (uVar8 < 0x3ea) {
              pCVar11 = (CCharacter *)
                        core_actor_cpp_castToClassHash_FUN_0040c840
                                  ((this_ptr->base).base.carry_hands[1].carry_actor,
                                   g_CWeaponClassInfo.name_hash);
              if (pCVar11 != (CCharacter *)0x0) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                fStack_48 = (pCVar11->model).bone_origins[0x4f].y;
                (pCVar11->model).bone_origins[0x1c].y = (float)this_ptr;
                pCVar5 = (pCVar11->base).vtable._uc;
                (pCVar11->model).bone_origins[0x4f].y = 1.4013e-43;
                iVar6 = (*(pCVar5->_uc).canBeGrabbed)
                                  (pCVar11,in_stack_fffffcec,(int)in_stack_fffffcf0);
                if (iVar6 != 0) {
                  in_stack_fffffcf0 = (CMattanntote *)0x592722;
                  (*(((pCVar11->base).vtable._uc)->_uc).isGrabbable)
                            (pCVar11,(CDemonActor *)in_stack_fffffcf8);
                  in_stack_fffffcf8 = (CMattanntote *)0x592732;
                  iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                                    (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                              uVar8 * 4 + 0x2c));
                  if (iVar6 == 0) {
                    in_stack_fffffcf8 = this_ptr;
                    uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"mann_firestaff.wav");
                    *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) =
                         uVar12;
                    (pCVar11->model).bone_origins[0x4f].y = fStack_48;
                    goto LAB_00592354;
                  }
                }
                (pCVar11->model).bone_origins[0x4f].y = fStack_48;
              }
            }
            else if ((uVar8 == 0x44c) &&
                    (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]),
                    iVar6 == 0)) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"mann_stand.wav");
              this_ptr->sfx_handles[0] = uVar8;
            }
          }
        }
        else if (uVar8 < 0x44e) {
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar8 * 4 + 0x2c));
          if (iVar6 == 0) {
            uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"mann_chasewalk.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
          }
        }
        else if (uVar8 < 0x44f) {
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar8 * 4 + 0x2c));
          if (iVar6 == 0) {
            uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"mann_chasefast.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
          }
        }
        else if (uVar8 < 0x450) {
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar8 * 4 + 0x2c));
          if (iVar6 == 0) {
            uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"mann_attack.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
          }
        }
        else {
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar8 * 4 + 0x2c));
          if (iVar6 == 0) {
            uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"mann_attack1.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
          }
        }
      }
      else if (uVar8 < 0x452) {
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c
                                    ));
        if (iVar6 == 0) {
          uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"mann_attack2.wav");
          *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
        }
      }
      else if (uVar8 < 0x454) {
        if (uVar8 < 0x453) {
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar8 * 4 + 0x2c));
          if (iVar6 == 0) {
            uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"mann_attack3.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
          }
        }
        else {
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            (*(uint *)(this_ptr->flames[5].base.footstep_sound_code +
                                      uVar8 * 4 + 0x2c));
          if (iVar6 == 0) {
            uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"mann_pain.wav");
            *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
          }
        }
      }
      else if (uVar8 < 0x455) {
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c
                                    ));
        if (iVar6 == 0) {
          uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"mann_die.wav");
          *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
        }
      }
      else if (uVar8 < 0x456) {
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c
                                    ));
        if (iVar6 == 0) {
          uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"mann_warning.wav");
          *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
        }
      }
      else if (uVar8 < 0x457) {
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c
                                    ));
        if (iVar6 == 0) {
          uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"mann_appear.wav");
          *(uint *)(this_ptr->flames[5].base.footstep_sound_code + uVar8 * 4 + 0x2c) = uVar12;
        }
      }
      else if ((uVar8 == 0x457) &&
              (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                                 (*(uint *)((int)(this_ptr->flames + 5 + 7) + 0x2c)), iVar6 == 0)) {
        uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"mann_disappear.wav");
        *(uint *)((int)(this_ptr->flames + 5 + 7) + 0x2c) = uVar8;
      }
LAB_00592354:
      fVar17 = (this_ptr->base).speed;
      fVar2 = (float)2;
      (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
      core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
                ((CCharacter *)this_ptr,delta_time * fVar17 * fVar2);
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                         ((CMotionController *)pCStack_20);
      iVar6 = pSVar9->state_index;
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"State: %d\n");
      iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                         ((CCharacter *)this_ptr,delta_time);
      if (iVar10 == 0) {
        switch(iVar6) {
        case 0:
          pCVar3 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
          fVar17 = (pCVar3->base).base.location.position.x - pCStack_24->x;
          afStack_274[1] = fVar17;
          afStack_274[2] = (pCVar3->base).base.location.position.y - pCStack_24->y;
          afStack_274[3] = (pCVar3->base).base.location.position.z - pCStack_24->z;
          *(float *)(&stack0xfffffcec + (uint)bVar15 * -8) = afStack_274[(uint)bVar15 * -2 + 2];
          *(float *)(&stack0xfffffcf0 + (uint)bVar15 * -8 + (uint)bVar15 * -8) =
               afStack_274[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 3];
          if (&CStack_21c != (CVector3f *)&stack0xfffffce8) {
            CStack_21c.x = fVar17;
            CStack_21c.y = (float)in_stack_fffffcec;
            CStack_21c.z = (float)in_stack_fffffcf0;
          }
          if (0.0 < (this_ptr->base).attack_cooldown) {
            fStack_80 = CStack_21c.z * CStack_21c.z +
                        CStack_21c.x * CStack_21c.x + CStack_21c.y * CStack_21c.y;
            fStack_7c = (float)(((int)fStack_80 >> 1) + g_INT_01d1a0a4);
            if (fStack_7c < 5.0f + 1.0) break;
          }
          EVar7 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                    getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
          if (EVar7 == DEATH_STATE_ALIVE) {
            iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
            if (iVar6 != 0) {
              core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(this_ptr);
            }
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            if ((this_ptr->base).victim == (CCharacter *)0x0) {
              in_stack_fffffcf0 = (CMattanntote *)0x592c68;
              EVar7 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                        getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
              if (EVar7 == DEATH_STATE_ALIVE) break;
              g_CGamePtr->player_hit_flag = 1;
              (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base;
            }
            if ((this_ptr->base).victim != (CCharacter *)0x0) {
              this_ptr->attack_committed = 0;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                        (&CStack_21c,&CStack_294);
              fStack_2dc = CStack_294.x;
              *(uint *)((int)&stack0xfffffd04 + ((uint)bVar15 * -2 + 9) * 4) =
                   *(uint *)((int)&CStack_294 + (uint)bVar15 * -8 + 4);
              *(uint *)
               ((int)&stack0xfffffd04 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 10) * 4) =
                   *(uint *)((int)&CStack_294 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              pCStack_14 = (CDeformableModelInstance *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                     (fStack_2d8 - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS((float)pCStack_14) < (float)0.17453292519444399) &&
                 ((this_ptr->base).attack_cooldown <= 0.0)) {
                fStack_78 = CStack_21c.z * CStack_21c.z +
                            CStack_21c.x * CStack_21c.x + CStack_21c.y * CStack_21c.y;
                fStack_74 = (float)(((int)fStack_78 >> 1) + g_INT_01d1a0a4);
                if (fStack_74 < 5.0f + 1.0) {
                  this_ptr->attack_committed = 1;
                  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar6 < 0x4b) {
                    iVar6 = 3;
                  }
                  else if ((iVar6 < 0x4b) || (0x5a < iVar6)) {
                    iVar6 = 5;
                  }
                  else {
                    iVar6 = 4;
                  }
                  in_stack_fffffcf8 = (CMattanntote *)0x1;
                  in_stack_fffffcf0 = pCStack_20;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)pCStack_20,iVar6,1);
                  (this_ptr->base).attack_cooldown = 3.0;
                  break;
                }
              }
              in_stack_fffffcf8 = this_ptr;
              core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(this_ptr);
            }
          }
          break;
        case 1:
        case 2:
          pCVar3 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
          fStack_264 = (pCVar3->base).base.location.position.x - pCStack_24->x;
          fStack_260 = (pCVar3->base).base.location.position.y - pCStack_24->y;
          fStack_25c = (pCVar3->base).base.location.position.z - pCStack_24->z;
          afStack_d4[2] = fStack_264;
          afStack_d4[(uint)bVar15 * -2 + 3] = afStack_274[(uint)bVar15 * -2 + 5];
          afStack_d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_274[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 6];
          if (&fStack_228 != afStack_d4 + 2) {
            fStack_228 = afStack_d4[2];
            fStack_224 = afStack_d4[3];
            fStack_220 = fStack_c4;
          }
          if (0.0 < (this_ptr->base).attack_cooldown) {
            fStack_70 = fStack_220 * fStack_220 + fStack_228 * fStack_228 + fStack_224 * fStack_224;
            fStack_6c = (float)(((int)fStack_70 >> 1) + g_INT_01d1a0a4);
            if ((fStack_6c < 5.0f + 1.0) && (this_ptr->attack_committed == 0)) {
              engine_console_cpp_CConsole_printf_FUN_00441ff0
                        (g_CConsolePtr,"Going to Stand\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_20,0,1);
              break;
            }
          }
          pCVar11 = (this_ptr->base).victim;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if (((this_ptr->base).victim == (CCharacter *)0x0) &&
             (EVar7 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                        getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base),
             EVar7 != DEATH_STATE_ALIVE)) {
            g_CGamePtr->player_hit_flag = 1;
            (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base;
          }
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            in_stack_fffffcf0 = this_ptr;
            pCVar13 = (CMattanntote *)
                      core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
            if (pCVar13 == (CMattanntote *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_20,0,1);
              in_stack_fffffcf0 = pCVar13;
            }
          }
          else if (pCVar11 == (CCharacter *)0x0) {
            in_stack_fffffcf0 = (CMattanntote *)0x592f4f;
            core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(this_ptr);
          }
          else {
            pCStack_28->z = 0.0;
            pCStack_28->y = pCStack_28->z;
            pCStack_28->x = pCStack_28->y;
            iVar6 = this_ptr->wander_mode;
            if (iVar6 == 0) {
              fVar17 = 0.34906584;
              in_stack_fffffcf0 = (CMattanntote *)0x3e4ccccd;
              fStack_b8 = 5.0f;
              iStack_c0 = iVar6;
              iStack_bc = iVar6;
              path_map = (*((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._ub)->
                           getPathMap)((CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 &(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.
                                  position,path_map,(CVector3f *)in_stack_fffffcf0,fVar17,
                                 (float)in_stack_fffffcf8);
              if (iVar6 < 0) {
                engine_console_cpp_CConsole_printf_FUN_00441ff0
                          (g_CConsolePtr,"%s gave up chase - I'm confused\n");
                in_stack_fffffcf8 = (CMattanntote *)0x1;
                in_stack_fffffcf0 = pCStack_20;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)pCStack_20,0,1);
              }
              else if (0 < iVar6) {
                pCVar11 = (this_ptr->base).victim;
                CStack_1d4.x = (pCVar11->base).location.position.x -
                               ((CVector3f *)&pCStack_24->x)->x;
                acStack_18c[0] = SUB41(CStack_1d4.x,0);
                acStack_18c[1] = SUB41(CStack_1d4.x,1);
                acStack_18c[2] = SUB41(CStack_1d4.x,2);
                acStack_18c[3] = SUB41(CStack_1d4.x,3);
                afStack_188[0] = (pCVar11->base).location.position.y - pCStack_24->y;
                afStack_188[1] = (pCVar11->base).location.position.z - pCStack_24->z;
                *(float *)((int)&CStack_1d4 + (uint)bVar15 * -8 + 4) =
                     afStack_188[(uint)bVar15 * -2];
                *(float *)((int)&CStack_1d4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                     afStack_188[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                          (&CStack_1d4,&CStack_1a4);
                fStack_1c8 = CStack_1a4.x;
                afStack_1c4[(uint)bVar15 * -2] =
                     *(float *)((int)&CStack_1a4 + (uint)bVar15 * -8 + 4);
                afStack_1c4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                     *(float *)((int)&CStack_1a4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
                in_stack_fffffcf8 =
                     (CMattanntote *)(afStack_1c4[0] - (this_ptr->base).base.base.orient.vec.y);
                pCStack_14 = (CDeformableModelInstance *)
                             core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                       ((float)in_stack_fffffcf8);
                if ((ABS((float)pCStack_14) < (float)0.17453292519444399) &&
                   ((this_ptr->base).attack_cooldown <= 0.0)) {
                  this_ptr->attack_committed = 1;
                  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar6 < 0x4b) {
                    iVar6 = 3;
                  }
                  else if ((iVar6 < 0x4b) || (0x5a < iVar6)) {
                    iVar6 = 5;
                  }
                  else {
                    iVar6 = 4;
                  }
                  in_stack_fffffcf8 = (CMattanntote *)0x1;
                  in_stack_fffffcf0 = pCStack_20;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)pCStack_20,iVar6,1);
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
                  fVar17 = 1.0 / fStack_44;
                  pCStack_1c->x = pCStack_1c->x * fVar17;
                  pCStack_1c->y = pCStack_1c->y * fVar17;
                  pCStack_1c->z = pCStack_1c->z * fVar17;
                }
                fVar17 = pCStack_1c->y * 12.0f;
                fVar2 = pCStack_1c->z * 12.0f;
                pCStack_1c->x = pCStack_1c->x * 12.0f;
                pCStack_1c->y = fVar17;
                pCStack_1c->z = fVar2;
                pCVar3 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
                pCStack_1c->x = (pCVar3->base).base.location.position.x + pCStack_1c->x;
                pCStack_1c->y = (pCVar3->base).base.location.position.y + pCStack_1c->y;
                pCStack_1c->z = (pCVar3->base).base.location.position.z + pCStack_1c->z;
                this_ptr->wander_retarget_timer = 1.0;
                pCStack_40 = (CDeformableModelInstance *)CStack_e4.x;
                pCStack_14 = (CDeformableModelInstance *)CStack_e4.x;
              }
              in_stack_fffffcf0 = (CMattanntote *)0x3e4ccccd;
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
            in_stack_fffffcf0 = this_ptr;
            core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(this_ptr);
          }
          else {
            pCVar3 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
            fStack_2f4 = ((CVector3f *)&pCStack_24->x)->x - (pCVar3->base).base.location.position.x;
            fStack_2f0 = pCStack_24->y - (pCVar3->base).base.location.position.y;
            fStack_2ec = pCStack_24->z - (pCVar3->base).base.location.position.z;
            fStack_198 = fStack_2f4;
            (&fStack_194)[(uint)bVar15 * -2] =
                 *(float *)((int)&stack0xfffffd04 + ((uint)bVar15 * -2 + 3) * 4);
            (&iStack_190)[(uint)bVar15 * -2 + (uint)bVar15 * -2] =
                 *(int *)((int)&stack0xfffffd04 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 4) * 4);
            if (afStack_1c4 + 2 != &fStack_198) {
              afStack_1c4[2] = fStack_198;
              afStack_1c4[3] = fStack_194;
              iStack_1b4 = iStack_190;
            }
            in_stack_fffffcf0 = pCStack_20;
            pCStack_34 = (CDeformableModelInstance *)
                         core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                   ((CMotionController *)pCStack_20);
            pCStack_14 = pCStack_34;
            if ((0x3f7fffff < (int)pCStack_34) && ((float)pCStack_34 <= 2.0f)) {
              in_stack_fffffcf0 = (CMattanntote *)0x2;
              pCVar14 = (this_ptr->base).base.carry_hands[1].carry_actor;
              (*((pCVar14->vtable)._ub)->processMeleeHit)(pCVar14,2);
            }
          }
          break;
        case 4:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            in_stack_fffffcf0 = this_ptr;
            core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(this_ptr);
          }
          else {
            pCVar3 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
            afStack_248[2] =
                 ((CVector3f *)&pCStack_24->x)->x - (pCVar3->base).base.location.position.x;
            afStack_248[3] = pCStack_24->y - (pCVar3->base).base.location.position.y;
            fStack_238 = pCStack_24->z - (pCVar3->base).base.location.position.z;
            fStack_1f8 = afStack_248[2];
            (&fStack_1f4)[(uint)bVar15 * -2] = afStack_248[(uint)bVar15 * -2 + 3];
            (&fStack_1f4)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            if (afStack_248 + 5 != &fStack_1f8) {
              fStack_234 = fStack_1f8;
              fStack_230 = fStack_1f4;
              acStack_22c[0] = acStack_1f0[0];
              acStack_22c[1] = acStack_1f0[1];
              acStack_22c[2] = acStack_1f0[2];
              acStack_22c[3] = acStack_1f0[3];
            }
            in_stack_fffffcf0 = pCStack_20;
            pCStack_3c = (CDeformableModelInstance *)
                         core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                   ((CMotionController *)pCStack_20);
            pCStack_14 = pCStack_3c;
            if ((0x403fffff < (int)pCStack_3c) && ((int)pCStack_3c < 0x40800001)) {
              in_stack_fffffcf0 = (CMattanntote *)0x2;
              pCVar14 = (this_ptr->base).base.carry_hands[1].carry_actor;
              (*((pCVar14->vtable)._ub)->processMeleeHit)(pCVar14,2);
            }
          }
          break;
        case 5:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            in_stack_fffffcf0 = this_ptr;
            core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(this_ptr);
          }
          else {
            in_stack_fffffcf8 =
                 (CMattanntote *)
                 (pCStack_24->y -
                 (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position.y);
            fStack_120 = ((CVector3f *)&pCStack_24->x)->x -
                         (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position.x
            ;
            afStack_11c[(uint)bVar15 * -2] = *(float *)(&stack0xfffffcf8 + (uint)bVar15 * -8);
            afStack_11c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 *(float *)(&stack0xfffffcfc + (uint)bVar15 * -8 + (uint)bVar15 * -8);
            if (&fStack_150 != &fStack_120) {
              fStack_150 = fStack_120;
              fStack_14c = afStack_11c[0];
              uStack_148 = afStack_11c[1];
            }
            in_stack_fffffcf0 = pCStack_20;
            pCStack_38 = (CDeformableModelInstance *)
                         core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                   ((CMotionController *)pCStack_20);
            pCStack_14 = pCStack_38;
            if ((0x403fffff < (int)pCStack_38) && ((int)pCStack_38 < 0x40800001)) {
              in_stack_fffffcf0 = (CMattanntote *)0x2;
              pCVar14 = (this_ptr->base).base.carry_hands[1].carry_actor;
              (*((pCVar14->vtable)._ub)->processMeleeHit)(pCVar14,2);
            }
          }
          break;
        case 6:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            in_stack_fffffcf0 = this_ptr;
            core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(this_ptr);
          }
          break;
        case 9:
          if (((this_ptr->base).pool_me == 0) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                      ((CDeformableModelInstance *)pCStack_20,0,&CStack_a8);
            pCVar16 = &CStack_12c;
            CStack_12c.x = CStack_a8.x;
            *(uint *)((int)&CStack_12c + (uint)bVar15 * -8 + 4) =
                 *(uint *)((int)&CStack_a8 + (uint)bVar15 * -8 + 4);
            *(uint *)((int)&CStack_12c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                 *(uint *)((int)&CStack_a8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,pCVar16,&CStack_114);
            fVar17 = 0.0;
            pCVar16 = &CStack_90;
            CStack_90.x = CStack_114.x;
            *(uint *)((int)&CStack_90 + (uint)bVar15 * -8 + 4) =
                 *(uint *)((int)&CStack_114 + (uint)bVar15 * -8 + 4);
            this_ptr_00 = g_CGorePtr;
            *(uint *)((int)&CStack_90 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                 *(uint *)((int)&CStack_114 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar16,(EBloodType)fVar17)
            ;
            (this_ptr->base).pool_me = 1;
          }
          break;
        case 0xd:
          EVar7 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                    getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
          if (EVar7 == DEATH_STATE_ALIVE) goto switchD_00593661_caseD_e;
          pCStack_14 = (CDeformableModelInstance *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                 ((CMotionController *)pCStack_20);
          if ((float)0.84999999999999998 < (float)pCStack_14) {
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
                      ((CMotionController *)pCStack_20,"stand",0.0);
          }
          break;
        case 0xe:
switchD_00593661_caseD_e:
          if (this_ptr->fading_out == 0) {
            this_ptr->fading_out = 1;
            this_ptr->fade_timer = 0.0;
            core_charactr_cpp_CCharacter_igniteBone_FUN_0042fbd0
                      ((CCharacter *)this_ptr,pCStack_24,0,0,50.0,0,2.0);
          }
          break;
        case 0xf:
          if (this_ptr->fading_out == 1) {
            this_ptr->fade_timer = 0.0;
            this_ptr->fading_out = 0;
            core_charactr_cpp_CCharacter_igniteBone_FUN_0042fbd0
                      ((CCharacter *)this_ptr,pCStack_24,0,0,50.0,0,2.0);
            this_ptr->wander_timer = 4.0;
            this_ptr->wander_mode = 1;
          }
        }
      }
      else {
        EVar4 = (this_ptr->base).base.walk_state;
        if (EVar4 < 2) {
          if (EVar4 == WALK_STATE_WALKING) {
LAB_005923d6:
            if (iVar6 != 2) {
              core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(this_ptr);
            }
          }
          else {
LAB_00592a8c:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)pCStack_20,0,1);
          }
        }
        else {
          if (EVar4 < WALK_STATE_NO_PATH) goto LAB_005923d6;
          if (EVar4 != WALK_STATE_NO_PATH) goto LAB_00592a8c;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)pCStack_20,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        }
        pCStack_28->z = 0.0;
        pCStack_28->y = pCStack_28->z;
        pCStack_28->x = pCStack_28->y;
      }
      if (0.0 < (this_ptr->base).attack_cooldown) {
        (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
      }
      EVar7 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
      if ((EVar7 != DEATH_STATE_ALIVE) && (this_ptr->alerted == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)pCStack_20,0xd,1);
        this_ptr->alerted = 1;
      }
      core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
      fStack_2fc = pCStack_30->y * delta_time;
      fStack_2f8 = pCStack_30->z * delta_time;
      fStack_2b8 = pCStack_30->x * delta_time;
      afStack_2b4[(uint)bVar15 * -2] = *(float *)((int)&stack0xfffffd04 + (uint)bVar15 * -8);
      afStack_2b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           *(float *)((int)&stack0xfffffd04 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 1) * 4);
      fStack_2d0 = fStack_2b8 + pCStack_2c->x;
      fStack_2cc = afStack_2b4[0] + pCStack_2c->y;
      fStack_2c8 = afStack_2b4[1] + pCStack_2c->z;
      fStack_168 = fStack_2d0;
      (&fStack_164)[(uint)bVar15 * -2] =
           *(float *)((int)&stack0xfffffd04 + ((uint)bVar15 * -2 + 0xc) * 4);
      pCVar16 = pCStack_2c;
      (&pCStack_160)[(uint)bVar15 * -2 + (uint)bVar15 * -2] =
           *(CDemonActor **)
            ((int)&stack0xfffffd04 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd) * 4);
      fStack_d8 = fStack_168 + pCStack_28->x;
      afStack_d4[0] = fStack_164 + pCStack_28->y;
      afStack_d4[1] = (float)pCStack_160 + pCStack_28->z;
      auStack_2ac._0_4_ = fStack_d8;
      *(float *)(auStack_2ac + (uint)bVar15 * -8 + 4) = afStack_d4[(uint)bVar15 * -2];
      *(float *)(auStack_2ac + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           afStack_d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      pCVar16->z = 0.0;
      pCVar16->y = pCVar16->z;
      pCVar16->x = pCVar16->y;
      pCStack_28->z = 0.0;
      pCStack_28->y = pCStack_28->z;
      pCStack_28->x = pCStack_28->y;
      in_stack_fffffcec = (CDemonActor *)auStack_2ac;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230
                ((CCharacter *)this_ptr,(CVector3f *)in_stack_fffffcec);
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)pCStack_20);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
    pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c840
                        ((this_ptr->base).base.carry_hands[1].carry_actor,
                         g_CWeaponClassInfo.name_hash);
    if (pCVar14 != (CDemonActor *)0x0) {
      (*((pCVar14->vtable)._ub)->process)(pCVar14,delta_time);
      return;
    }
  }
  return;
}
