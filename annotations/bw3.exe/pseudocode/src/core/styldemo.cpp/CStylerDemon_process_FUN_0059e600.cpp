// Name: core_styldemo.cpp_CStylerDemon_process_FUN_0059e600
// Address: 0059e600
// Address Range: [[0059e600, 005a014d]]
// Convention: __cdecl
// Signature: void __cdecl core_styldemo_cpp_CStylerDemon_process_FUN_0059e600(CStylerDemon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_styldemo_cpp_CStylerDemon_process_FUN_0059e600(CStylerDemon *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  char cVar3;
  EWalkState EVar4;
  CHero *pCVar5;
  CCharacter_full_vtable *pCVar6;
  CDemonMission *pCVar7;
  int iVar8;
  CDemonActor *pCVar9;
  uint uVar10;
  EDeathState EVar11;
  CMotionList *pCVar12;
  SMotion *pSVar13;
  int iVar14;
  CCharacter *pCVar15;
  CPathMap *path_map;
  char *pcVar16;
  uint *puVar17;
  CDeformableModelInstance *pCVar18;
  byte bVar19;
  double dVar20;
  float afStackY_1318 [1000];
  CStylerDemon *this_ptr_00;
  float fVar21;
  CGore *this_ptr_01;
  CVector3f *pCVar22;
  float radius;
  float explosion_type;
  SDamageInfo *damage_info;
  float fVar23;
  CDemonMission *in_stack_fffffcac;
  CDemonActor *in_stack_fffffcb0;
  CDemonActor *in_stack_fffffcb8;
  float fStack_32c;
  CVector3f CStack_324;
  CVector3f CStack_318;
  CVector3f CStack_30c;
  CVector3f CStack_300;
  float fStack_2f4;
  float afStack_2f0 [2];
  CVector3f CStack_2e8;
  float fStack_2dc;
  float afStack_2d8 [2];
  CVector3f CStack_2d0;
  CVector3f CStack_2c4;
  float fStack_2b8;
  float afStack_2b4 [4];
  float fStack_2a4;
  float fStack_2a0;
  float afStack_29c [2];
  CVector3f CStack_294;
  float fStack_288;
  float afStack_284 [2];
  CVector3f CStack_27c;
  float fStack_270;
  float afStack_26c [2];
  CVector3f CStack_264;
  CVector3f CStack_258;
  CVector3f CStack_24c;
  CVector3f CStack_240;
  CVector3f CStack_234;
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [4];
  float fStack_208;
  CVector3f CStack_204;
  float fStack_1f8;
  float afStack_1f4 [2];
  CVector3f CStack_1ec;
  CVector3f CStack_1e0;
  CVector3f CStack_1d4;
  CVector3f CStack_1c8;
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  float fStack_1a4;
  float afStack_1a0 [4];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  CVector3f CStack_180;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [2];
  CVector3f CStack_15c;
  float fStack_150;
  float afStack_14c [4];
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  CVector3f CStack_fc;
  uint uStack_f0;
  uint uStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [2];
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [2];
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [2];
  CVector3f CStack_9c;
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float afStack_7c [3];
  CDemonActor *pCStack_70;
  CDemonActor *pCStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  CLocation *pCStack_50;
  float fStack_48;
  float fStack_40;
  float fStack_38;
  CCharacter *pCStack_30;
  float fStack_2c;
  CDeformableModelInstance *pCStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  UOrientationVector *pUStack_1c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  bVar19 = 0;
  iVar8 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar8 == 0) {
    return;
  }
  if (this_ptr->exorcism_spawned == 0) {
    pCVar9 = core_actor_cpp_createActorByName_FUN_0040c4f0("CExorcism");
    this_ptr->exorcism = pCVar9;
    (*((pCVar9->vtable)._ub)->setup)(pCVar9);
    pcVar16 = "Bible";
    pCVar9 = this_ptr->exorcism;
    do {
      cVar3 = *pcVar16;
      pCVar9->actor_name[0] = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pCVar9->actor_name[1] = cVar3;
      pCVar9 = (CDemonActor *)(pCVar9->actor_name + 2);
    } while (cVar3 != '\0');
    core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
              (g_CDemonMission_PTR_00600530,this_ptr->exorcism);
    if (this_ptr->exorcism != (CDemonActor *)0x0) {
      this_ptr->exorcism->is_transparent = 1;
      this_ptr->exorcism->is_renderable = 0;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (&(this_ptr->base).base.model,(this_ptr->base).base.carry_hands[0].bone_index,
               &CStack_1c8);
    pCVar22 = &CStack_9c;
    CStack_9c.x = CStack_1c8.x;
    *(uint *)((int)&CStack_9c + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&CStack_1c8 + (uint)bVar19 * -8 + 4);
    *(uint *)((int)&CStack_9c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)&CStack_1c8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,pCVar22,&CStack_1bc);
    fStack_150 = CStack_1bc.x;
    afStack_14c[(uint)bVar19 * -2] = *(float *)((int)&CStack_1bc + (uint)bVar19 * -8 + 4);
    afStack_14c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         *(float *)((int)&CStack_1bc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    pCVar9 = this_ptr->exorcism;
    (pCVar9->location).position.x = fStack_150;
    (pCVar9->location).position.y = afStack_14c[0];
    (pCVar9->location).position.z = afStack_14c[1];
    pCVar9 = this_ptr->exorcism;
    pUVar1 = &(this_ptr->base).base.base.orient;
    if (&pCVar9->orient != pUVar1) {
      (pCVar9->orient).vec.x = (pUVar1->vec).x;
      (pCVar9->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
      (pCVar9->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(this_ptr->exorcism);
    core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
              ((CCharacter *)this_ptr,0,this_ptr->exorcism,0.0,(CMatrix3x4f *)0x0);
    this_ptr->exorcism_spawned = 1;
  }
  (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
  if ((this_ptr->base).victim == (CCharacter *)0x0) {
    EVar11 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
               getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
    if (EVar11 == DEATH_STATE_ALIVE) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0,1);
      return;
    }
    g_CGamePtr->player_hit_flag = 1;
    (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base;
  }
  pCVar15 = (this_ptr->base).victim;
  if (pCVar15 == (CCharacter *)0x0) {
    return;
  }
  fStack_288 = (this_ptr->base).base.base.location.position.x - (pCVar15->base).location.position.x;
  afStack_284[0] =
       (this_ptr->base).base.base.location.position.y - (pCVar15->base).location.position.y;
  afStack_284[1] =
       (this_ptr->base).base.base.location.position.z - (pCVar15->base).location.position.z;
  fStack_d8 = fStack_288;
  afStack_d4[(uint)bVar19 * -2] = afStack_284[(uint)bVar19 * -2];
  afStack_d4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
       afStack_284[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
  if (afStack_2b4 + 2 != &fStack_d8) {
    afStack_2b4[2] = fStack_d8;
    afStack_2b4[3] = afStack_d4[0];
    fStack_2a4 = afStack_d4[1];
  }
  fStack_64 = fStack_2a4 * fStack_2a4 +
              afStack_2b4[2] * afStack_2b4[2] + afStack_2b4[3] * afStack_2b4[3];
  fStack_24 = (float)(((int)fStack_64 >> 1) + g_INT_01d1a0a4);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pUStack_1c = &(this_ptr->base).base.base.orient;
  fStack_68 = delta_time * (this_ptr->base).speed;
  pCStack_20 = &(this_ptr->base).base.model.base;
  while (0.0 < fStack_68) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_20,&fStack_68);
    if (uVar10 < 0x583) {
      if (uVar10 < 0x57b) {
        if (uVar10 < 0x4b5) {
          if (uVar10 < 0x4b2) {
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
          }
          else if (uVar10 < 0x4b3) {
            (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).bind_time = 15.0;
            (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).bind_type = 4;
          }
          else if (uVar10 == 0x4b3) {
            pcVar16 = "Zombie1";
            pCStack_18 = core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar9 = pCStack_18;
            do {
              cVar3 = *pcVar16;
              pCVar9->actor_name[0] = cVar3;
              if (cVar3 == '\0') break;
              cVar3 = pcVar16[1];
              pcVar16 = pcVar16 + 2;
              pCVar9->actor_name[1] = cVar3;
              pCVar9 = (CDemonActor *)(pCVar9->actor_name + 2);
            } while (cVar3 != '\0');
            CStack_1ec.z = 3.0;
            CStack_1ec.x = 0.0;
            CStack_1ec.y = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,&CStack_1ec,&CStack_2e8);
            pCVar9 = pCStack_18;
            fStack_270 = CStack_2e8.x;
            afStack_26c[(uint)bVar19 * -2] = *(float *)((int)&CStack_2e8 + (uint)bVar19 * -8 + 4);
            afStack_26c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 *(float *)((int)&CStack_2e8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            (pCVar9->location).position.x = fStack_270;
            (pCVar9->location).position.y = afStack_26c[0];
            (pCVar9->location).position.z = afStack_26c[1];
            if (&pCVar9->orient != pUStack_1c) {
              (pCVar9->orient).vec.x = (pUStack_1c->vec).x;
              (pCVar9->orient).vec.y = (pUStack_1c->vec).y;
              (pCVar9->orient).vec.z = (pUStack_1c->vec).z;
            }
            pCVar18 = (CDeformableModelInstance *)(pCStack_18 + 1);
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      (pCVar18,"newzomb1.dfm");
            pCStack_18[0x1d].create_event[0x48] = '\0';
            pCStack_18[0x1d].create_event[0x49] = '\0';
            pCStack_18[0x1d].create_event[0x4a] = -0x80;
            pCStack_18[0x1d].create_event[0x4b] = '?';
            (*((pCStack_18->vtable)._ub)->setup)(pCStack_18);
            fVar23 = 1.4013e-45;
            pcVar16 = "stand";
            pCVar12 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                ((CMotionController *)pCVar18);
            iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                              (pCVar12,pcVar16,(int)fVar23);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar18,iVar8,0.0);
            pCVar7 = g_CDemonMission_PTR_00600530;
            pCStack_18[0x1b].platform_orientation_delta.y = 10.0;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(pCVar7,pCStack_18);
            pcVar16 = "Zombie2";
            pCStack_70 = core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar9 = pCStack_70;
            do {
              cVar3 = *pcVar16;
              pCVar9->actor_name[0] = cVar3;
              if (cVar3 == '\0') break;
              cVar3 = pcVar16[1];
              pcVar16 = pcVar16 + 2;
              pCVar9->actor_name[1] = cVar3;
              pCVar9 = (CDemonActor *)(pCVar9->actor_name + 2);
            } while (cVar3 != '\0');
            CStack_24c.x = 3.0;
            CStack_24c.z = 3.0;
            CStack_24c.y = 0.0;
            pCStack_18 = pCStack_70;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,&CStack_24c,&CStack_1b0);
            fStack_21c = CStack_1b0.x;
            afStack_218[(uint)bVar19 * -2] = *(float *)((int)&CStack_1b0 + (uint)bVar19 * -8 + 4);
            afStack_218[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 *(float *)((int)&CStack_1b0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            (pCStack_70->location).position.x = fStack_21c;
            (pCStack_70->location).position.y = afStack_218[0];
            (pCStack_70->location).position.z = afStack_218[1];
            if (&pCStack_70->orient != pUStack_1c) {
              (pCStack_70->orient).vec.x = (pUStack_1c->vec).x;
              (pCStack_70->orient).vec.y = (pUStack_1c->vec).y;
              (pCStack_70->orient).vec.z = (pUStack_1c->vec).z;
            }
            pCVar18 = (CDeformableModelInstance *)(pCStack_18 + 1);
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      (pCVar18,"newzomb1.dfm");
            pCVar9 = pCStack_18;
            pCStack_18[0x1d].create_event[0x48] = '\0';
            pCStack_18[0x1d].create_event[0x49] = '\0';
            pCStack_18[0x1d].create_event[0x4a] = -0x80;
            pCStack_18[0x1d].create_event[0x4b] = '?';
            (*((pCStack_18->vtable)._ub)->setup)(pCStack_18);
            fVar23 = 1.4013e-45;
            pcVar16 = "stand";
            pCVar12 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                ((CMotionController *)pCVar18);
            iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                              (pCVar12,pcVar16,(int)fVar23);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar18,iVar8,0.0);
            pCVar7 = g_CDemonMission_PTR_00600530;
            pCVar9[0x1b].platform_orientation_delta.y = 10.0;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(pCVar7,pCVar9);
            pcVar16 = "Zombie3";
            pCStack_6c = core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar9 = pCStack_6c;
            do {
              cVar3 = *pcVar16;
              pCVar9->actor_name[0] = cVar3;
              if (cVar3 == '\0') break;
              cVar3 = pcVar16[1];
              pcVar16 = pcVar16 + 2;
              pCVar9->actor_name[1] = cVar3;
              pCVar9 = (CDemonActor *)(pCVar9->actor_name + 2);
            } while (cVar3 != '\0');
            CStack_234.x = -3.0;
            CStack_234.y = 0.0;
            CStack_234.z = 3.0;
            pCStack_18 = pCStack_6c;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,&CStack_234,&CStack_174);
            fStack_168 = CStack_174.x;
            afStack_164[(uint)bVar19 * -2] = *(float *)((int)&CStack_174 + (uint)bVar19 * -8 + 4);
            afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 *(float *)((int)&CStack_174 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            (pCStack_6c->location).position.x = fStack_168;
            (pCStack_6c->location).position.y = afStack_164[0];
            (pCStack_6c->location).position.z = afStack_164[1];
            if (&pCStack_6c->orient != pUStack_1c) {
              (pCStack_6c->orient).vec.x = (pUStack_1c->vec).x;
              (pCStack_6c->orient).vec.y = (pUStack_1c->vec).y;
              (pCStack_6c->orient).vec.z = (pUStack_1c->vec).z;
            }
            pCVar18 = (CDeformableModelInstance *)(pCStack_18 + 1);
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      (pCVar18,"newzomb1.dfm");
            pCStack_18[0x1d].create_event[0x48] = '\0';
            pCStack_18[0x1d].create_event[0x49] = '\0';
            pCStack_18[0x1d].create_event[0x4a] = -0x80;
            pCStack_18[0x1d].create_event[0x4b] = '?';
            (*((pCStack_18->vtable)._ub)->setup)(pCStack_18);
            fVar23 = 1.4013e-45;
            pcVar16 = "stand";
            pCVar12 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                ((CMotionController *)pCVar18);
            iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                              (pCVar12,pcVar16,(int)fVar23);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar18,iVar8,0.0);
            in_stack_fffffcac = g_CDemonMission_PTR_00600530;
            pCStack_18[0x1b].platform_orientation_delta.y = 10.0;
            in_stack_fffffcb0 = pCStack_18;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(in_stack_fffffcac,pCStack_18)
            ;
          }
          else {
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
          }
        }
        else if (uVar10 < 0x4b6) {
          explosion_type = 2.8026e-45;
          radius = 0.0;
          fVar21 = 0.0;
          fVar23 = 4.0;
          puVar17 = (uint *)
                    ((int)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14] + (uint)bVar19 * -8 + 0x24);
          CStack_15c.x = (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position.x
          ;
          *(uint *)((int)&CStack_15c + (uint)bVar19 * -8 + 4) = *puVar17;
          *(uint *)((int)&CStack_15c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
               puVar17[(uint)bVar19 * -2 + 1];
          CStack_15c.y = CStack_15c.y + 5.0f;
          core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0
                    (g_CFireEffect_PTR_005fc5a0,&CStack_15c,fVar23,fVar21,radius,(int)explosion_type
                    );
          (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).bind_time = 5.0;
          (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).bind_type = 3;
        }
        else if (uVar10 < 0x579) {
          if (uVar10 == 0x578) {
            iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]);
            if (iVar8 == 0) {
              uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"stydem_stand.wav");
              this_ptr->sfx_handles[0] = uVar10;
            }
          }
          else {
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
          }
        }
        else if (uVar10 < 0x57a) {
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
          if (iVar8 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_walk.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
          }
        }
        else {
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
          if (iVar8 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_run.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
          }
        }
      }
      else if (uVar10 < 0x57c) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_attack.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
      else if (uVar10 < 0x57f) {
        if (uVar10 < 0x57d) {
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
          if (iVar8 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_damage.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
          }
        }
        else if (uVar10 < 0x57e) {
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
          if (iVar8 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_die.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
          }
        }
        else {
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
          if (iVar8 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_stand_fly.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
          }
        }
      }
      else if (uVar10 < 0x580) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_walk_fly.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
      else if (uVar10 < 0x581) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_run_fly.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
      else if (uVar10 < 0x582) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_attack_fly.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
      else {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_warning_fly_spell.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
    }
    else if (uVar10 < 0x584) {
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
      if (iVar8 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_fly_spell.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
      }
    }
    else if (uVar10 < 0x58a) {
      if (uVar10 < 0x586) {
        if (uVar10 < 0x585) {
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
          if (iVar8 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_damage_fly.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
          }
        }
        else {
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
          if (iVar8 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_die_fly.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
          }
        }
      }
      else if (uVar10 < 0x587) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_takeoff.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
      else if (uVar10 < 0x588) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_land.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
      else if (uVar10 < 0x589) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_warning_spell_1.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
      else {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_spell_1.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
    }
    else if (uVar10 < 0x58b) {
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
      if (iVar8 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_warning_spell_2.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
      }
    }
    else if (uVar10 < 0x58e) {
      if (uVar10 < 0x58c) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_spell_2.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
      else if (uVar10 < 0x58d) {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_warning_spell_3.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
      else {
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
        if (iVar8 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_spell_3.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
        }
      }
    }
    else if (uVar10 < 0x58f) {
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
      if (iVar8 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_raise_zombie.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
      }
    }
    else if (uVar10 < 0x590) {
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
      if (iVar8 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_transforming.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
      }
    }
    else if (uVar10 < 0x591) {
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar10]);
      if (iVar8 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_taunt1.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar10] = fVar23;
      }
    }
    else if (uVar10 == 0x591) {
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0x19]);
      if (iVar8 == 0) {
        uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"stydem_taunt2.wav");
        this_ptr->sfx_handles[0x19] = uVar10;
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
    }
  }
  fVar23 = (this_ptr->base).speed;
  fVar21 = (float)2;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar23 * fVar21);
  pCStack_28 = &(this_ptr->base).base.model;
  pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_28->base);
  iVar8 = pSVar13->state_index;
  iVar14 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar14 == 0) {
    switch(iVar8) {
    case 0:
    case 7:
      EVar11 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                 getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
      if (EVar11 == DEATH_STATE_ALIVE) {
        dVar20 = round((double)fStack_24);
        fStack_14 = (float)(int)ROUND(dVar20);
        iVar8 = core_styldemo_cpp_CStylerDemon_tryAttack_FUN_005a0480(this_ptr,(int)fStack_14);
        if ((iVar8 == 0) &&
           (((5.2f < fStack_24 || ((this_ptr->base).attack_cooldown <= 0.0)) &&
            (fStack_24 < (this_ptr->base).guard_distance)))) {
          pCVar18 = &(this_ptr->base).base.model;
          if (10.0f <= fStack_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar18->base,8,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar18->base,1,1);
          }
        }
      }
      break;
    case 1:
    case 2:
    case 8:
    case 9:
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        fVar23 = 8.265136e-39;
        dVar20 = round((double)fStack_24);
        fStack_14 = (float)(int)ROUND(dVar20);
        iVar14 = core_styldemo_cpp_CStylerDemon_tryAttack_FUN_005a0480(this_ptr,(int)fStack_14);
        if (iVar14 == 0) {
          pCVar18 = &(this_ptr->base).base.model;
          if (fStack_24 <= 5.2f + (float)0.29999999999999999) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar18->base,0,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else if ((0.0 < this_ptr->summon_cooldown) ||
                  (iVar14 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar14 < 0x56)) {
            fVar21 = 0.17453292;
            pCVar22 = (CVector3f *)0x3e4ccccd;
            fStack_e8 = 5.2f + (float)-0.20000000000000001;
            (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
            (this_ptr->base).base.model.accumulated_root_motion.y =
                 (this_ptr->base).base.model.accumulated_root_motion.z;
            (this_ptr->base).base.model.accumulated_root_motion.x =
                 (this_ptr->base).base.model.accumulated_root_motion.y;
            uStack_f0 = 0;
            uStack_ec = 0;
            pCVar15 = (this_ptr->base).victim;
            fStack_14 = fStack_e8;
            path_map = (*((pCVar15->base).vtable._ub)->getPathMap)(&pCVar15->base);
            iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                               ((CCharacter *)this_ptr,
                                &(((this_ptr->base).victim)->base).location.position,path_map,
                                pCVar22,fVar21,fVar23);
            if (-1 < iVar14) {
              if ((10.0f < fStack_24) && (iVar8 != 8)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(this_ptr->base).base.model.base,8,1);
              }
              if ((this_ptr->base).guard_distance < fStack_24) {
                pCVar18 = &(this_ptr->base).base.model;
                if (iVar8 == 8) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar18->base,7,1)
                  ;
                }
                else {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar18->base,0,1)
                  ;
                }
              }
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar18->base,0x19,1);
            this_ptr->summon_cooldown = 15.0;
          }
        }
      }
      break;
    case 0xb:
      pCVar5 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      fStack_114 = (pCVar5->base).base.location.position.x -
                   (this_ptr->base).base.base.location.position.x;
      afStack_110[0] =
           (pCVar5->base).base.location.position.y - (this_ptr->base).base.base.location.position.y;
      afStack_110[1] =
           (pCVar5->base).base.location.position.z - (this_ptr->base).base.base.location.position.z;
      CStack_108.x = fStack_114;
      *(float *)((int)&CStack_108 + (uint)bVar19 * -8 + 4) = afStack_110[(uint)bVar19 * -2];
      *(float *)((int)&CStack_108 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_110[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_108,&CStack_12c);
      fStack_1a4 = CStack_12c.x;
      afStack_1a0[(uint)bVar19 * -2] = *(float *)((int)&CStack_12c + (uint)bVar19 * -8 + 4);
      afStack_1a0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           *(float *)((int)&CStack_12c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      fStack_60 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (afStack_1a0[0] - (this_ptr->base).base.base.orient.vec.y);
      fStack_14 = fStack_60;
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_1a4 - (this_ptr->base).base.base.orient.vec.x);
      fVar23 = (this_ptr->base).base.base.orient.vec.x;
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_60;
      (this_ptr->base).base.base.orient.vec.x = fVar23 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
      (this_ptr->base).attack_cooldown = 5.0;
      break;
    case 0xc:
      pCStack_50 = &(this_ptr->base).base.base.location;
      pCVar5 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      afStack_218[2] = (pCVar5->base).base.location.position.x - (pCStack_50->position).x;
      afStack_218[3] =
           (pCVar5->base).base.location.position.y - (this_ptr->base).base.base.location.position.y;
      fStack_208 = (pCVar5->base).base.location.position.z -
                   (this_ptr->base).base.base.location.position.z;
      CStack_cc.x = afStack_218[2];
      *(float *)((int)&CStack_cc + (uint)bVar19 * -8 + 4) = afStack_218[(uint)bVar19 * -2 + 3];
      *(float *)((int)&CStack_cc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_218[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_cc,&CStack_2c4);
      fStack_18c = CStack_2c4.x;
      afStack_1a0[(uint)bVar19 * -2 + 6] = *(float *)((int)&CStack_2c4 + (uint)bVar19 * -8 + 4);
      afStack_1a0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
           *(float *)((int)&CStack_2c4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      fStack_58 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_188 - (this_ptr->base).base.base.orient.vec.y);
      fStack_14 = fStack_58;
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_18c - (this_ptr->base).base.base.orient.vec.x);
      fVar23 = (this_ptr->base).base.base.orient.vec.x;
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_58;
      (this_ptr->base).base.base.orient.vec.x = fVar23 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
      pCVar5 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      fStack_2f4 = (pCVar5->base).base.location.position.x - (pCStack_50->position).x;
      afStack_2f0[0] = (pCVar5->base).base.location.position.y - (pCStack_50->position).y;
      afStack_2f0[1] = (pCVar5->base).base.location.position.z - (pCStack_50->position).z;
      CStack_318.x = fStack_2f4;
      *(float *)((int)&CStack_318 + (uint)bVar19 * -8 + 4) = afStack_2f0[(uint)bVar19 * -2];
      *(float *)((int)&CStack_318 + ((uint)bVar19 * -2 + (uint)bVar19 * -2) * 4 + 8) =
           afStack_2f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                (pCStack_28,g_INT_02d24cf4,&CStack_264);
      pCVar22 = &CStack_300;
      CStack_300.x = CStack_264.x;
      *(uint *)((int)&CStack_300 + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)&CStack_264 + (uint)bVar19 * -8 + 4);
      *(uint *)((int)&CStack_300 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)&CStack_264 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar22,&CStack_258);
      fVar23 = SQRT(CStack_318.z * CStack_318.z +
                    CStack_318.x * CStack_318.x + CStack_318.y * CStack_318.y);
      CStack_30c.x = CStack_258.x;
      *(uint *)((int)&CStack_30c + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)&CStack_258 + (uint)bVar19 * -8 + 4);
      *(uint *)((int)&CStack_30c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)&CStack_258 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      if (0.0 < fVar23) {
        fVar21 = 1.0 / fVar23;
        CStack_318.x = CStack_318.x * fVar21;
        CStack_318.y = CStack_318.y * fVar21;
        CStack_318.z = CStack_318.z * fVar21;
      }
      else {
        CStack_318.y = 0.0;
        CStack_318.x = 0.0;
        CStack_318.z = 0.0;
      }
      CStack_318.x = CStack_318.x * 15.0f;
      CStack_318.y = CStack_318.y * 15.0f;
      CStack_318.z = CStack_318.z * 15.0f;
      fStack_2c = fVar23;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
                (g_CFireEffect_PTR_005fc5a0,&CStack_30c,&CStack_318,1,2,0);
      break;
    case 0xd:
      iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
      fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                            (&pCStack_28->base);
      if ((float)0.84999999999999998 < fStack_14) {
        if (iVar8 < 0x32) {
          fVar23 = 3.92364e-44;
        }
        else {
          if (99 < iVar8) goto switchD_005a0147_caseD_3;
          fVar23 = 4.06377e-44;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&pCStack_28->base,(int)fVar23,1);
      }
    case 3:
    case 10:
switchD_005a0147_caseD_3:
      core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                (&(this_ptr->base).base.model.base);
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffc94);
      damage_info = (SDamageInfo *)&stack0xfffffc94;
      fVar23 = 0.6;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_CVector3f_02cfd900,
                 (CMatrix3x4f *)
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices[g_INT_02d24cf4].m,
                 &CStack_240);
      pCVar22 = &CStack_b4;
      CStack_b4.x = CStack_240.x;
      *(uint *)((int)&CStack_b4 + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)&CStack_240 + (uint)bVar19 * -8 + 4);
      *(uint *)((int)&CStack_b4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)&CStack_240 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar22,&CStack_2d0);
      pCVar22 = &CStack_1e0;
      CStack_1e0.x = CStack_2d0.x;
      *(uint *)((int)&CStack_1e0 + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)&CStack_2d0 + (uint)bVar19 * -8 + 4);
      this_ptr_00 = this_ptr;
      *(uint *)((int)&CStack_1e0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)&CStack_2d0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                (&this_ptr_00->base,pCVar22,fVar23,damage_info);
      (this_ptr->base).attack_cooldown = 2.0;
      break;
    case 0x12:
      (this_ptr->base).attack_cooldown = 16.0;
      break;
    case 0x14:
      (this_ptr->base).attack_cooldown = 6.0;
      break;
    case 0x16:
      pCVar5 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      afStack_14c[2] =
           (pCVar5->base).base.location.position.x - (this_ptr->base).base.base.location.position.x;
      afStack_14c[3] =
           (pCVar5->base).base.location.position.y - (this_ptr->base).base.base.location.position.y;
      fStack_13c = (pCVar5->base).base.location.position.z -
                   (this_ptr->base).base.base.location.position.z;
      CStack_1d4.x = afStack_14c[2];
      *(float *)((int)&CStack_1d4 + (uint)bVar19 * -8 + 4) = afStack_14c[(uint)bVar19 * -2 + 3];
      *(float *)((int)&CStack_1d4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_14c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_1d4,&CStack_180);
      fStack_1f8 = CStack_180.x;
      afStack_1f4[(uint)bVar19 * -2] = *(float *)((int)&CStack_180 + (uint)bVar19 * -8 + 4);
      afStack_1f4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           *(float *)((int)&CStack_180 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      fStack_48 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (afStack_1f4[0] - (this_ptr->base).base.base.orient.vec.y);
      fStack_14 = fStack_48;
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_1f8 - (this_ptr->base).base.base.orient.vec.x);
      fVar23 = (this_ptr->base).base.base.orient.vec.x;
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_48;
      (this_ptr->base).base.base.orient.vec.x = fVar23 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
      (this_ptr->base).attack_cooldown = 6.0;
      break;
    case 0x17:
      pCVar5 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      fStack_2a0 = (pCVar5->base).base.location.position.x -
                   (this_ptr->base).base.base.location.position.x;
      afStack_29c[0] =
           (pCVar5->base).base.location.position.y - (this_ptr->base).base.base.location.position.y;
      afStack_29c[1] =
           (pCVar5->base).base.location.position.z - (this_ptr->base).base.base.location.position.z;
      CStack_120.x = fStack_2a0;
      *(float *)((int)&CStack_120 + (uint)bVar19 * -8 + 4) = afStack_29c[(uint)bVar19 * -2];
      *(float *)((int)&CStack_120 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_29c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_120,&CStack_228);
      fStack_138 = CStack_228.x;
      afStack_14c[(uint)bVar19 * -2 + 6] = *(float *)((int)&CStack_228 + (uint)bVar19 * -8 + 4);
      afStack_14c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
           *(float *)((int)&CStack_228 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      fStack_40 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_134 - (this_ptr->base).base.base.orient.vec.y);
      fStack_14 = fStack_40;
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_138 - (this_ptr->base).base.base.orient.vec.x);
      fVar23 = (this_ptr->base).base.base.orient.vec.x;
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_40;
      (this_ptr->base).base.base.orient.vec.x = fVar23 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(3.0,5.0);
      this_ptr->state_timer = fStack_14;
      break;
    case 0x18:
      EVar11 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                 getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
      if (EVar11 == DEATH_STATE_ALIVE) {
        pCVar5 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
        fStack_84 = (pCVar5->base).base.location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        fStack_80 = (pCVar5->base).base.location.position.y -
                    (this_ptr->base).base.base.location.position.y;
        afStack_7c[0] =
             (pCVar5->base).base.location.position.z -
             (this_ptr->base).base.base.location.position.z;
        CStack_fc.x = fStack_84;
        *(float *)((int)&CStack_fc + (uint)bVar19 * -8 + 4) = afStack_7c[(uint)bVar19 * -2 + -1];
        *(float *)((int)&CStack_fc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             afStack_7c[(uint)bVar19 * -2 + (uint)bVar19 * -2];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_fc,&CStack_294);
        *(uint *)((int)&stack0xfffffcd4 + (uint)bVar19 * -8) =
             *(uint *)((int)&CStack_294 + (uint)bVar19 * -8 + 4);
        *(uint *)((int)&stack0xfffffcd4 + ((uint)bVar19 * -2 + (uint)bVar19 * -2 + 1) * 4) =
             *(uint *)((int)&CStack_294 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        fStack_38 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                              (fStack_32c - (this_ptr->base).base.base.orient.vec.y);
        fStack_14 = fStack_38;
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                              (CStack_294.x - (this_ptr->base).base.base.orient.vec.x);
        fVar23 = (this_ptr->base).base.base.orient.vec.x;
        (this_ptr->base).base.base.orient.vec.y =
             (this_ptr->base).base.base.orient.vec.y + fStack_38;
        (this_ptr->base).base.base.orient.vec.x = fVar23 + fStack_14;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
        pCVar15 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            ((this_ptr->base).base.carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        pCStack_30 = pCVar15;
        if (pCVar15 != (CCharacter *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          pCVar6 = (pCVar15->base).vtable._uc;
          (pCVar15->model).bone_origins[0x1c].y = (float)this_ptr;
          fVar23 = (pCVar15->model).bone_origins[0x4f].y;
          (pCVar15->model).bone_origins[0x4f].y = 1.4013e-43;
          iVar8 = (*(pCVar6->_uc).canBeGrabbed)
                            (pCVar15,(CDemonActor *)in_stack_fffffcac,(int)in_stack_fffffcb0);
          if (iVar8 != 0) {
            (*(((pCVar15->base).vtable._uc)->_uc).isGrabbable)(pCVar15,in_stack_fffffcb8);
          }
          (pCStack_30->model).bone_origins[0x4f].y = fVar23;
        }
        fVar23 = this_ptr->state_timer - delta_time;
        this_ptr->state_timer = fVar23;
        if (fVar23 <= 0.0) {
          this_ptr->state_timer = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,7,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_28->base,7,1);
      }
      break;
    case 0x1b:
      pCVar9 = this_ptr->styler;
      (pCVar9->location).position.x = (this_ptr->base).base.base.location.position.x;
      (pCVar9->location).position.y = (this_ptr->base).base.base.location.position.y;
      (pCVar9->location).position.z = (this_ptr->base).base.base.location.position.z;
      (pCVar9->location).area_id = (this_ptr->base).base.base.location.area_id;
      pCVar9 = this_ptr->styler;
      pUVar1 = &(this_ptr->base).base.base.orient;
      if (&pCVar9->orient != pUVar1) {
        (pCVar9->orient).vec.x = (pUVar1->vec).x;
        (pCVar9->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
        (pCVar9->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
      }
      fVar23 = delta_time * (float)0.5 + this_ptr->morph_time;
      this_ptr->morph_time = fVar23;
      if ((1.0 <= fVar23) && (this_ptr->styler != (CDemonActor *)0x0)) {
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                  (g_CDemonMission_PTR_00600530,this_ptr->styler);
        pCVar7 = g_CDemonMission_PTR_00600530;
        this_ptr->styler = (CDemonActor *)0x0;
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10
                  (pCVar7,(CDemonActor *)this_ptr,1);
      }
    case 6:
    case 0xf:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (&(this_ptr->base).base.model,0,&CStack_90);
        pCVar22 = &CStack_e4;
        CStack_e4.x = CStack_90.x;
        *(uint *)((int)&CStack_e4 + (uint)bVar19 * -8 + 4) =
             *(uint *)((int)&CStack_90 + (uint)bVar19 * -8 + 4);
        *(uint *)((int)&CStack_e4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             *(uint *)((int)&CStack_90 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar22,&CStack_204);
        fVar23 = 0.0;
        pCVar22 = &CStack_324;
        CStack_324.x = CStack_204.x;
        *(uint *)((int)&CStack_324 + (uint)bVar19 * -8 + 4) =
             *(uint *)((int)&CStack_204 + (uint)bVar19 * -8 + 4);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_324 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             *(uint *)((int)&CStack_204 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar22,(EBloodType)fVar23);
        (this_ptr->base).pool_me = 1;
      }
    }
  }
  else {
    EVar4 = (this_ptr->base).base.walk_state;
    if (EVar4 < 2) {
      if (EVar4 == WALK_STATE_WALKING) {
LAB_0059f45b:
        fVar23 = 1.4013e-45;
      }
      else {
LAB_0059f642:
        fVar23 = 0.0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,(int)fVar23,1);
    }
    else {
      if (EVar4 < WALK_STATE_NO_PATH) goto LAB_0059f45b;
      if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0059f642;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441ff0
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (0.0 < this_ptr->summon_cooldown) {
    this_ptr->summon_cooldown = this_ptr->summon_cooldown - delta_time;
  }
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar8 != 0) {
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    fStack_a8 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_a4[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_a4[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_c0 = fStack_a8;
    afStack_bc[(uint)bVar19 * -2] = afStack_a4[(uint)bVar19 * -2];
    afStack_bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_a4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    pCVar22 = &(this_ptr->base).base.position_delta;
    fStack_2dc = fStack_c0 + pCVar22->x;
    afStack_2d8[0] = afStack_bc[0] + (this_ptr->base).base.position_delta.y;
    afStack_2d8[1] = afStack_bc[1] + (this_ptr->base).base.position_delta.z;
    fStack_2b8 = fStack_2dc;
    afStack_2b4[(uint)bVar19 * -2] = afStack_2d8[(uint)bVar19 * -2];
    afStack_2b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_2d8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_1a0[2] = fStack_2b8 + pCVar2->x;
    afStack_1a0[3] = afStack_2b4[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_190 = afStack_2b4[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_27c.x = afStack_1a0[2];
    *(float *)((int)&CStack_27c + (uint)bVar19 * -8 + 4) = afStack_1a0[(uint)bVar19 * -2 + 3];
    *(float *)((int)&CStack_27c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         afStack_1a0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar22->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_27c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
