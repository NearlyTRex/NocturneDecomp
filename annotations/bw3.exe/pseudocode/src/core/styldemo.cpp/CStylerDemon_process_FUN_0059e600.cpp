// Name: core_styldemo.cpp_CStylerDemon_process_FUN_0059e600
// Address: 0059e600
// Address Range: [[0059e600, 005a014d]]
// Convention: __cdecl
// Signature: void __cdecl core_styldemo_cpp_CStylerDemon_process_FUN_0059e600(CStylerDemon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_styldemo_cpp_CStylerDemon_process_FUN_0059e600(CStylerDemon *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  char cVar3;
  EWalkState EVar4;
  CCharacter_full_vtable *pCVar5;
  CDemonMission *pCVar6;
  int iVar7;
  CDemonActor *pCVar8;
  uint uVar9;
  CMotionList *pCVar10;
  SMotion *pSVar11;
  int iVar12;
  CCharacter *pCVar13;
  CPathMap *path_map;
  char *pcVar14;
  float *pfVar15;
  CDeformableModelInstance *pCVar16;
  byte bVar17;
  float10 fVar18;
  float afStackY_1318 [999];
  CStylerDemon *pCVar19;
  CGore *this_ptr_00;
  float fVar20;
  CDemonActor *pCVar21;
  CVector3f *pCVar22;
  float explosion_type;
  SDamageInfo *damage_info;
  float in_stack_fffffca4;
  float fVar23;
  float fStack_32c;
  CVector3f CStack_324;
  CVector3f CStack_318;
  CVector3f CStack_30c;
  float fStack_300;
  float afStack_2fc [4];
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2c4;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float afStack_29c [5];
  float fStack_288;
  float fStack_284;
  float fStack_280;
  CVector3f CStack_27c;
  float fStack_270;
  float afStack_26c [2];
  CVector3f CStack_264;
  float fStack_258;
  uint auStack_254 [5];
  char acStack_240 [4];
  float afStack_23c [6];
  float afStack_224 [4];
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_1f8;
  float fStack_1f4;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  CVector3f CStack_1e0;
  float fStack_1d4;
  float afStack_1d0 [2];
  CVector3f CStack_1c8;
  float fStack_1bc;
  float afStack_1b8 [5];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_180;
  float fStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  char acStack_15c [4];
  float afStack_158 [4];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  byte auStack_12c [8];
  float afStack_124 [4];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float afStack_fc [3];
  int iStack_f0;
  EActorLifecycleState EStack_ec;
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float fStack_cc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  char acStack_b4 [4];
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  CVector3f CStack_90;
  float fStack_84;
  CPlatform *pCStack_80;
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
  UOrientationVector UStack_24;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  bVar17 = 0;
  iVar7 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar7 == 0) {
    return;
  }
  if (this_ptr->exorcism_spawned == 0) {
    pCVar8 = core_actor_cpp_createActorByName_FUN_0040c4f0("CExorcism");
    this_ptr->exorcism = pCVar8;
    (*((pCVar8->vtable)._ub)->setup)(pCVar8);
    pcVar14 = "Bible";
    pCVar8 = this_ptr->exorcism;
    do {
      cVar3 = *pcVar14;
      pCVar8->actor_name[0] = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pCVar8->actor_name[1] = cVar3;
      pCVar8 = (CDemonActor *)(pCVar8->actor_name + 2);
    } while (cVar3 != '\0');
    core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,this_ptr->exorcism);
    if (this_ptr->exorcism != (CDemonActor *)0x0) {
      this_ptr->exorcism->is_transparent = 1;
      this_ptr->exorcism->is_renderable = 0;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (&(this_ptr->base).base.model,(this_ptr->base).base.carry_hands[0].bone_index,
               &CStack_1c8);
    fStack_9c = CStack_1c8.x;
    afStack_b0[(uint)bVar17 * -2 + 6] = *(float *)((int)&CStack_1c8 + (uint)bVar17 * -8 + 4);
    afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         *(float *)((int)&CStack_1c8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    core_actor_cpp_FUN_00408b80();
    afStack_158[2] = fStack_1bc;
    afStack_158[(uint)bVar17 * -2 + 3] = afStack_1b8[(uint)bVar17 * -2];
    afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    pCVar8 = this_ptr->exorcism;
    (pCVar8->location).position.x = afStack_158[2];
    (pCVar8->location).position.y = afStack_158[3];
    (pCVar8->location).position.z = fStack_148;
    pCVar8 = this_ptr->exorcism;
    pUVar1 = &(this_ptr->base).base.base.orient;
    if (&pCVar8->orient != pUVar1) {
      (pCVar8->orient).vec.x = (pUVar1->vec).x;
      (pCVar8->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
      (pCVar8->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(this_ptr->exorcism);
    core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
              ((CCharacter *)this_ptr,0,(int)this_ptr->exorcism,0,0);
    this_ptr->exorcism_spawned = 1;
  }
  pCVar8 = (CDemonActor *)0x59e78b;
  pCVar19 = this_ptr;
  (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
  if ((this_ptr->base).victim == (CCharacter *)0x0) {
    iVar7 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
    if (iVar7 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0,1);
      return;
    }
    g_CGamePtr->player_hit_flag = 1;
    (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  pCVar13 = (this_ptr->base).victim;
  if (pCVar13 == (CCharacter *)0x0) {
    return;
  }
  fStack_288 = (this_ptr->base).base.base.location.position.x - (pCVar13->base).location.position.x;
  fStack_284 = (this_ptr->base).base.base.location.position.y - (pCVar13->base).location.position.y;
  fStack_280 = (this_ptr->base).base.base.location.position.z - (pCVar13->base).location.position.z;
  afStack_e0[2] = fStack_288;
  afStack_e0[(uint)bVar17 * -2 + 3] = afStack_29c[(uint)bVar17 * -2 + 6];
  afStack_e0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
       afStack_29c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
  if (afStack_2fc + 0x14 != afStack_e0 + 2) {
    fStack_2ac = afStack_e0[2];
    fStack_2a8 = afStack_e0[3];
    fStack_2a4 = fStack_d0;
  }
  fStack_64 = fStack_2a4 * fStack_2a4 + fStack_2ac * fStack_2ac + fStack_2a8 * fStack_2a8;
  UStack_24.vec.x = (float)(((int)fStack_64 >> 1) + _DAT_01d1a0a4);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  UStack_24.vec.z = (float)&(this_ptr->base).base.base.orient;
  fStack_68 = delta_time * (this_ptr->base).speed;
  UStack_24.vec.y = (float)&(this_ptr->base).base.model;
  while (0.0 < fStack_68) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)UStack_24.vec.y,&fStack_68);
    if (uVar9 < 0x583) {
      if (uVar9 < 0x57b) {
        if (uVar9 < 0x4b5) {
          if (uVar9 < 0x4b2) {
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar9);
          }
          else if (uVar9 < 0x4b3) {
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3254) = 0x41700000;
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3258) = 4;
          }
          else if (uVar9 == 0x4b3) {
            pcVar14 = &DAT_005da226;
            pCStack_18 = core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar21 = pCStack_18;
            do {
              cVar3 = *pcVar14;
              pCVar21->actor_name[0] = cVar3;
              if (cVar3 == '\0') break;
              cVar3 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pCVar21->actor_name[1] = cVar3;
              pCVar21 = (CDemonActor *)(pCVar21->actor_name + 2);
            } while (cVar3 != '\0');
            uStack_1e4 = 0x40400000;
            uStack_1ec = 0;
            uStack_1e8 = 0;
            core_actor_cpp_FUN_00408b80();
            pCVar21 = pCStack_18;
            fStack_270 = fStack_2e8;
            afStack_26c[(uint)bVar17 * -2] = afStack_2fc[(uint)bVar17 * -2 + 6];
            afStack_26c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 afStack_2fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
            (pCVar21->location).position.x = fStack_270;
            (pCVar21->location).position.y = afStack_26c[0];
            (pCVar21->location).position.z = afStack_26c[1];
            if (&pCVar21->orient != (UOrientationVector *)UStack_24.vec.z) {
              (pCVar21->orient).vec.x = *(float *)UStack_24.vec.z;
              (pCVar21->orient).vec.y = *(float *)((int)UStack_24.vec.z + 4);
              (pCVar21->orient).vec.z = *(float *)((int)UStack_24.vec.z + 8);
            }
            pCVar16 = (CDeformableModelInstance *)(pCStack_18 + 1);
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      (pCVar16,"newzomb1.dfm");
            pCStack_18[0x1d].create_event[0x48] = '\0';
            pCStack_18[0x1d].create_event[0x49] = '\0';
            pCStack_18[0x1d].create_event[0x4a] = -0x80;
            pCStack_18[0x1d].create_event[0x4b] = '?';
            (*((pCStack_18->vtable)._ub)->setup)(pCStack_18);
            fVar23 = 1.4013e-45;
            pcVar14 = "stand";
            pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                ((CMotionController *)pCVar16);
            iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                              (pCVar10,pcVar14,(int)fVar23);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar16,iVar7,0.0);
            pCVar6 = 0x01D81080;
            pCStack_18[0x1b].platform_orientation_delta.y = 10.0;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(pCVar6,pCStack_18);
            pcVar14 = &DAT_005da249;
            pCStack_70 = core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar21 = pCStack_70;
            do {
              cVar3 = *pcVar14;
              pCVar21->actor_name[0] = cVar3;
              if (cVar3 == '\0') break;
              cVar3 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pCVar21->actor_name[1] = cVar3;
              pCVar21 = (CDemonActor *)(pCVar21->actor_name + 2);
            } while (cVar3 != '\0');
            auStack_254[2] = 0x40400000;
            auStack_254[4] = 0x40400000;
            auStack_254[3] = 0;
            pCStack_18 = pCStack_70;
            core_actor_cpp_FUN_00408b80();
            afStack_224[2] = afStack_1b8[2];
            afStack_224[(uint)bVar17 * -2 + 3] = afStack_1b8[(uint)bVar17 * -2 + 3];
            afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
                 afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
            (pCStack_70->location).position.x = afStack_224[2];
            (pCStack_70->location).position.y = afStack_224[3];
            (pCStack_70->location).position.z = fStack_214;
            if (&pCStack_70->orient != (UOrientationVector *)UStack_24.vec.z) {
              (pCStack_70->orient).vec.x = *(float *)UStack_24.vec.z;
              (pCStack_70->orient).vec.y = *(float *)((int)UStack_24.vec.z + 4);
              (pCStack_70->orient).vec.z = *(float *)((int)UStack_24.vec.z + 8);
            }
            pCVar16 = (CDeformableModelInstance *)(pCStack_18 + 1);
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      (pCVar16,"newzomb1.dfm");
            pCVar21 = pCStack_18;
            pCStack_18[0x1d].create_event[0x48] = '\0';
            pCStack_18[0x1d].create_event[0x49] = '\0';
            pCStack_18[0x1d].create_event[0x4a] = -0x80;
            pCStack_18[0x1d].create_event[0x4b] = '?';
            (*((pCStack_18->vtable)._ub)->setup)(pCStack_18);
            fVar23 = 1.4013e-45;
            pcVar14 = "stand";
            pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                ((CMotionController *)pCVar16);
            iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                              (pCVar10,pcVar14,(int)fVar23);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar16,iVar7,0.0);
            pCVar6 = 0x01D81080;
            pCVar21[0x1b].platform_orientation_delta.y = 10.0;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(pCVar6,pCVar21);
            pcVar14 = &DAT_005da26c;
            pCStack_6c = core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar21 = pCStack_6c;
            do {
              cVar3 = *pcVar14;
              pCVar21->actor_name[0] = cVar3;
              if (cVar3 == '\0') break;
              cVar3 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pCVar21->actor_name[1] = cVar3;
              pCVar21 = (CDemonActor *)(pCVar21->actor_name + 2);
            } while (cVar3 != '\0');
            afStack_23c[2] = -3.0;
            afStack_23c[3] = 0.0;
            afStack_23c[4] = 3.0;
            pCStack_18 = pCStack_6c;
            core_actor_cpp_FUN_00408b80();
            fStack_168 = fStack_174;
            afStack_1b8[(uint)bVar17 * -2 + 0x15] = afStack_1b8[(uint)bVar17 * -2 + 0x12];
            afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16] =
                 afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13];
            (pCStack_6c->location).position.x = fStack_168;
            (pCStack_6c->location).position.y = fStack_164;
            (pCStack_6c->location).position.z = fStack_160;
            if (&pCStack_6c->orient != (UOrientationVector *)UStack_24.vec.z) {
              (pCStack_6c->orient).vec.x = *(float *)UStack_24.vec.z;
              (pCStack_6c->orient).vec.y = *(float *)((int)UStack_24.vec.z + 4);
              (pCStack_6c->orient).vec.z = *(float *)((int)UStack_24.vec.z + 8);
            }
            pCVar16 = (CDeformableModelInstance *)(pCStack_18 + 1);
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      (pCVar16,"newzomb1.dfm");
            pCStack_18[0x1d].create_event[0x48] = '\0';
            pCStack_18[0x1d].create_event[0x49] = '\0';
            pCStack_18[0x1d].create_event[0x4a] = -0x80;
            pCStack_18[0x1d].create_event[0x4b] = '?';
            (*((pCStack_18->vtable)._ub)->setup)(pCStack_18);
            fVar23 = 1.4013e-45;
            pcVar14 = "stand";
            pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                ((CMotionController *)pCVar16);
            iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                              (pCVar10,pcVar14,(int)fVar23);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar16,iVar7,0.0);
            pCVar6 = 0x01D81080;
            pCStack_18[0x1b].platform_orientation_delta.y = 10.0;
            in_stack_fffffca4 = 8.258369e-39;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(pCVar6,pCStack_18);
          }
          else {
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar9);
          }
        }
        else if (uVar9 < 0x4b6) {
          explosion_type = 2.8026e-45;
          pCVar8 = (CDemonActor *)acStack_15c;
          fVar20 = 0.0;
          iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fVar23 = 0.0;
          pCVar19 = (CStylerDemon *)0x40800000;
          pfVar15 = (float *)(iVar7 + 0x24 + (uint)bVar17 * -8);
          acStack_15c = *(char (*) [4])(iVar7 + 0x20);
          afStack_158[(uint)bVar17 * -2] = *pfVar15;
          afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] = pfVar15[(uint)bVar17 * -2 + 1];
          afStack_158[0] = afStack_158[0] + _DAT_005da4f6;
          core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0
                    (0x01C73654,(CVector3f *)pCVar8,(float)pCVar19,fVar23,fVar20,
                     (int)explosion_type);
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3254) = 0x40a00000;
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3258) = 3;
        }
        else if (uVar9 < 0x579) {
          if (uVar9 == 0x578) {
            iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]);
            if (iVar7 == 0) {
              uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"stydem_stand.wav");
              this_ptr->sfx_handles[0] = uVar9;
            }
          }
          else {
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar9);
          }
        }
        else if (uVar9 < 0x57a) {
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
          if (iVar7 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_walk.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
          }
        }
        else {
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
          if (iVar7 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_run.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
          }
        }
      }
      else if (uVar9 < 0x57c) {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_attack.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
      else if (uVar9 < 0x57f) {
        if (uVar9 < 0x57d) {
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
          if (iVar7 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_damage.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
          }
        }
        else if (uVar9 < 0x57e) {
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
          if (iVar7 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_die.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
          }
        }
        else {
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
          if (iVar7 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_stand_fly.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
          }
        }
      }
      else if (uVar9 < 0x580) {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_walk_fly.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
      else if (uVar9 < 0x581) {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_run_fly.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
      else if (uVar9 < 0x582) {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_attack_fly.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
      else {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_warning_fly_spell.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
    }
    else if (uVar9 < 0x584) {
      iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
      if (iVar7 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_fly_spell.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
      }
    }
    else if (uVar9 < 0x58a) {
      if (uVar9 < 0x586) {
        if (uVar9 < 0x585) {
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
          if (iVar7 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_damage_fly.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
          }
        }
        else {
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
          if (iVar7 == 0) {
            fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                      ((CDemonActor *)this_ptr,"stydem_die_fly.wav");
            (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
          }
        }
      }
      else if (uVar9 < 0x587) {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_takeoff.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
      else if (uVar9 < 0x588) {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_land.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
      else if (uVar9 < 0x589) {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_warning_spell_1.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
      else {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_spell_1.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
    }
    else if (uVar9 < 0x58b) {
      iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
      if (iVar7 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_warning_spell_2.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
      }
    }
    else if (uVar9 < 0x58e) {
      if (uVar9 < 0x58c) {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_spell_2.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
      else if (uVar9 < 0x58d) {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_warning_spell_3.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
      else {
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
        if (iVar7 == 0) {
          fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"stydem_spell_3.wav");
          (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
        }
      }
    }
    else if (uVar9 < 0x58f) {
      iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
      if (iVar7 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_raise_zombie.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
      }
    }
    else if (uVar9 < 0x590) {
      iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
      if (iVar7 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_transforming.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
      }
    }
    else if (uVar9 < 0x591) {
      iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[0x14][uVar9]);
      if (iVar7 == 0) {
        fVar23 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"stydem_taunt1.wav");
        (this_ptr->base).base.motion_transition_costs[0x14][uVar9] = fVar23;
      }
    }
    else if (uVar9 == 0x591) {
      iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0x19]);
      if (iVar7 == 0) {
        uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"stydem_taunt2.wav");
        this_ptr->sfx_handles[0x19] = uVar9;
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar9);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850();
  pCStack_28 = &(this_ptr->base).base.model;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_28->base);
  iVar7 = pSVar11->state_index;
  iVar12 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar12 == 0) {
    switch(iVar7) {
    case 0:
    case 7:
      iVar7 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
      if (iVar7 == 0) {
        fVar18 = (float10)UStack_24.vec.x;
        round();
        fStack_14 = (float)(int)ROUND(fVar18);
        iVar7 = core_styldemo_cpp_FUN_005a0480();
        if ((iVar7 == 0) &&
           (((_DAT_005e84dc < UStack_24.vec.x || ((this_ptr->base).attack_cooldown <= 0.0)) &&
            (UStack_24.vec.x < (this_ptr->base).guard_distance)))) {
          pCVar16 = &(this_ptr->base).base.model;
          if (_DAT_005e84e8 <= UStack_24.vec.x) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar16->base,8,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar16->base,1,1);
          }
        }
      }
      break;
    case 1:
    case 2:
    case 8:
    case 9:
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        fVar18 = (float10)UStack_24.vec.x;
        round();
        fStack_14 = (float)(int)ROUND(fVar18);
        iVar12 = core_styldemo_cpp_FUN_005a0480();
        if (iVar12 == 0) {
          pCVar16 = &(this_ptr->base).base.model;
          if (UStack_24.vec.x <= _DAT_005e84dc + (float)_DAT_005da4e6) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar16->base,0,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else if ((0.0 < this_ptr->summon_cooldown) ||
                  (iVar12 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar12 < 0x56)) {
            fVar23 = 0.17453292;
            pCVar22 = (CVector3f *)0x3e4ccccd;
            fStack_e8 = _DAT_005e84dc + (float)_DAT_005da4ee;
            (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
            (this_ptr->base).base.model.accumulated_root_motion.y =
                 (this_ptr->base).base.model.accumulated_root_motion.z;
            (this_ptr->base).base.model.accumulated_root_motion.x =
                 (this_ptr->base).base.model.accumulated_root_motion.y;
            iStack_f0 = 0;
            EStack_ec = ACTOR_NOT_CREATED;
            pCVar13 = (this_ptr->base).victim;
            fStack_14 = fStack_e8;
            path_map = (*((pCVar13->base).vtable._ub)->getPathMap)(&pCVar13->base);
            iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                               ((CCharacter *)this_ptr,
                                &(((this_ptr->base).victim)->base).location.position,path_map,
                                pCVar22,fVar23,in_stack_fffffca4);
            if (-1 < iVar12) {
              if ((_DAT_005e84e8 < UStack_24.vec.x) && (iVar7 != 8)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(this_ptr->base).base.model.base,8,1);
              }
              if ((this_ptr->base).guard_distance < UStack_24.vec.x) {
                pCVar16 = &(this_ptr->base).base.model;
                if (iVar7 == 8) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar16->base,7,1)
                  ;
                }
                else {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar16->base,0,1)
                  ;
                }
              }
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar16->base,0x19,1);
            this_ptr->summon_cooldown = 15.0;
          }
        }
      }
      break;
    case 0xb:
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_114 = *(float *)(iVar7 + 0x20) - (this_ptr->base).base.base.location.position.x;
      fStack_110 = *(float *)(iVar7 + 0x24) - (this_ptr->base).base.base.location.position.y;
      fStack_10c = *(float *)(iVar7 + 0x28) - (this_ptr->base).base.base.location.position.z;
      fStack_108 = fStack_114;
      afStack_124[(uint)bVar17 * -2 + 8] = afStack_124[(uint)bVar17 * -2 + 5];
      afStack_124[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 9] =
           afStack_124[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 6];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      fStack_1a4 = (float)auStack_12c._0_4_;
      afStack_1b8[(uint)bVar17 * -2 + 6] = *(float *)(auStack_12c + (uint)bVar17 * -8 + 4);
      afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
           *(float *)(auStack_12c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      fStack_60 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_1a0 - (this_ptr->base).base.base.orient.vec.y);
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
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_210 = *(float *)(iVar7 + 0x20) - (pCStack_50->position).x;
      fStack_20c = *(float *)(iVar7 + 0x24) - (this_ptr->base).base.base.location.position.y;
      fStack_208 = *(float *)(iVar7 + 0x28) - (this_ptr->base).base.base.location.position.z;
      fStack_cc = fStack_210;
      afStack_e0[(uint)bVar17 * -2 + 6] = afStack_224[(uint)bVar17 * -2 + 6];
      afStack_e0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
           afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      fStack_18c = fStack_2c4;
      afStack_1b8[(uint)bVar17 * -2 + 0xc] = afStack_2fc[(uint)bVar17 * -2 + 0xf];
      afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
           afStack_2fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
      fStack_58 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_188 - (this_ptr->base).base.base.orient.vec.y);
      fStack_14 = fStack_58;
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_18c - (this_ptr->base).base.base.orient.vec.x);
      fVar23 = (this_ptr->base).base.base.orient.vec.x;
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_58;
      (this_ptr->base).base.base.orient.vec.x = fVar23 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      afStack_2fc[2] = *(float *)(iVar7 + 0x20) - (pCStack_50->position).x;
      afStack_2fc[3] = *(float *)(iVar7 + 0x24) - (pCStack_50->position).y;
      fStack_2ec = *(float *)(iVar7 + 0x28) - (pCStack_50->position).z;
      CStack_318.x = afStack_2fc[2];
      *(float *)((int)&CStack_318 + (uint)bVar17 * -8 + 4) = afStack_2fc[(uint)bVar17 * -2 + 3];
      *(float *)((int)&CStack_318 + ((uint)bVar17 * -2 + (uint)bVar17 * -2) * 4 + 8) =
           afStack_2fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                (pCStack_28,_DAT_02d24cf4,&CStack_264);
      fStack_300 = CStack_264.x;
      afStack_2fc[(uint)bVar17 * -2] = *(float *)((int)&CStack_264 + (uint)bVar17 * -8 + 4);
      afStack_2fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           *(float *)((int)&CStack_264 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      core_actor_cpp_FUN_00408b80();
      fVar23 = SQRT(CStack_318.z * CStack_318.z +
                    CStack_318.x * CStack_318.x + CStack_318.y * CStack_318.y);
      CStack_30c.x = fStack_258;
      *(uint *)((int)&CStack_30c + (uint)bVar17 * -8 + 4) = auStack_254[(uint)bVar17 * -2];
      *(uint *)((int)&CStack_30c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           auStack_254[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      if (0.0 < fVar23) {
        fVar20 = 1.0 / fVar23;
        CStack_318.x = CStack_318.x * fVar20;
        CStack_318.y = CStack_318.y * fVar20;
        CStack_318.z = CStack_318.z * fVar20;
      }
      else {
        CStack_318.y = 0.0;
        CStack_318.x = 0.0;
        CStack_318.z = 0.0;
      }
      CStack_318.x = CStack_318.x * _DAT_005da4de;
      CStack_318.y = CStack_318.y * _DAT_005da4de;
      CStack_318.z = CStack_318.z * _DAT_005da4de;
      fStack_2c = fVar23;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
                (0x01C73654,&CStack_30c,&CStack_318,1,2,0);
      break;
    case 0xd:
      iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
      fStack_14 = core_motion_cpp_FUN_004fc930(&pCStack_28->base);
      if ((float)_DAT_005da4d6 < fStack_14) {
        if (iVar7 < 0x32) {
          fVar23 = 3.92364e-44;
        }
        else {
          if (99 < iVar7) goto switchD_005a0147_caseD_3;
          fVar23 = 4.06377e-44;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&pCStack_28->base,(int)fVar23,1);
      }
    case 3:
    case 10:
switchD_005a0147_caseD_3:
      core_motion_cpp_FUN_004fc930(&(this_ptr->base).base.model.base);
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffc94);
      damage_info = (SDamageInfo *)&stack0xfffffc94;
      fVar23 = 0.6;
      core_xform_cpp_FUN_00583260();
      acStack_b4[0] = acStack_240[0];
      acStack_b4[1] = acStack_240[1];
      acStack_b4[2] = acStack_240[2];
      acStack_b4[3] = acStack_240[3];
      afStack_b0[(uint)bVar17 * -2] = afStack_23c[(uint)bVar17 * -2];
      afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           afStack_23c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      core_actor_cpp_FUN_00408b80();
      pCVar22 = &CStack_1e0;
      CStack_1e0.x = fStack_2d0;
      *(float *)((int)&CStack_1e0 + (uint)bVar17 * -8 + 4) = afStack_2fc[(uint)bVar17 * -2 + 0xc];
      pCVar19 = this_ptr;
      *(float *)((int)&CStack_1e0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           afStack_2fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar19->base,pCVar22,fVar23,damage_info)
      ;
      (this_ptr->base).attack_cooldown = 2.0;
      break;
    case 0x12:
      (this_ptr->base).attack_cooldown = 16.0;
      break;
    case 0x14:
      (this_ptr->base).attack_cooldown = 6.0;
      break;
    case 0x16:
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_144 = *(float *)(iVar7 + 0x20) - (this_ptr->base).base.base.location.position.x;
      fStack_140 = *(float *)(iVar7 + 0x24) - (this_ptr->base).base.base.location.position.y;
      fStack_13c = *(float *)(iVar7 + 0x28) - (this_ptr->base).base.base.location.position.z;
      fStack_1d4 = fStack_144;
      afStack_1d0[(uint)bVar17 * -2] = afStack_158[(uint)bVar17 * -2 + 6];
      afStack_1d0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      fStack_1f8 = fStack_180;
      afStack_224[(uint)bVar17 * -2 + 0xc] = afStack_1b8[(uint)bVar17 * -2 + 0xf];
      afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
           afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
      fStack_48 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (fStack_1f4 - (this_ptr->base).base.base.orient.vec.y);
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
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_2a0 = *(float *)(iVar7 + 0x20) - (this_ptr->base).base.base.location.position.x;
      afStack_29c[0] = *(float *)(iVar7 + 0x24) - (this_ptr->base).base.base.location.position.y;
      afStack_29c[1] = *(float *)(iVar7 + 0x28) - (this_ptr->base).base.base.location.position.z;
      afStack_124[1] = fStack_2a0;
      afStack_124[(uint)bVar17 * -2 + 2] = afStack_29c[(uint)bVar17 * -2];
      afStack_124[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 3] =
           afStack_29c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      fStack_138 = afStack_23c[5];
      afStack_158[(uint)bVar17 * -2 + 9] = afStack_224[(uint)bVar17 * -2];
      afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
           afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
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
      pCVar21 = (CDemonActor *)0x59fc72;
      iVar7 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
      if (iVar7 == 0) {
        iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fStack_84 = *(float *)(iVar7 + 0x20) - (this_ptr->base).base.base.location.position.x;
        pCStack_80 = (CPlatform *)
                     (*(float *)(iVar7 + 0x24) - (this_ptr->base).base.base.location.position.y);
        afStack_7c[0] = *(float *)(iVar7 + 0x28) - (this_ptr->base).base.base.location.position.z;
        afStack_fc[0] = fStack_84;
        afStack_124[(uint)bVar17 * -2 + 0xb] = afStack_7c[(uint)bVar17 * -2 + -1];
        afStack_124[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xc] =
             afStack_7c[(uint)bVar17 * -2 + (uint)bVar17 * -2];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_fc);
        *(float *)((int)&stack0xfffffcd4 + (uint)bVar17 * -8) = afStack_29c[(uint)bVar17 * -2 + 3];
        *(float *)((int)&stack0xfffffcd4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 1) * 4) =
             afStack_29c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
        fStack_38 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                              (fStack_32c - (this_ptr->base).base.base.orient.vec.y);
        fStack_14 = fStack_38;
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                              (afStack_29c[2] - (this_ptr->base).base.base.orient.vec.x);
        fVar23 = (this_ptr->base).base.base.orient.vec.x;
        (this_ptr->base).base.base.orient.vec.y =
             (this_ptr->base).base.base.orient.vec.y + fStack_38;
        (this_ptr->base).base.base.orient.vec.x = fVar23 + fStack_14;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
        pCVar13 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            ((this_ptr->base).base.carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        pCStack_30 = pCVar13;
        if (pCVar13 != (CCharacter *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          pCVar5 = (pCVar13->base).vtable._uc;
          (pCVar13->model).bone_origins[0x1c].y = (float)this_ptr;
          fVar23 = (pCVar13->model).bone_origins[0x4f].y;
          (pCVar13->model).bone_origins[0x4f].y = 1.4013e-43;
          iVar7 = (*(pCVar5->_uc).canBeGrabbed)(pCVar13,pCVar8,(int)pCVar19);
          if (iVar7 != 0) {
            (*(((pCVar13->base).vtable._uc)->_uc).isGrabbable)(pCVar13,pCVar21);
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
      pCVar8 = this_ptr->styler;
      (pCVar8->location).position.x = (this_ptr->base).base.base.location.position.x;
      (pCVar8->location).position.y = (this_ptr->base).base.base.location.position.y;
      (pCVar8->location).position.z = (this_ptr->base).base.base.location.position.z;
      (pCVar8->location).area_id = (this_ptr->base).base.base.location.area_id;
      pCVar8 = this_ptr->styler;
      pUVar1 = &(this_ptr->base).base.base.orient;
      if (&pCVar8->orient != pUVar1) {
        (pCVar8->orient).vec.x = (pUVar1->vec).x;
        (pCVar8->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
        (pCVar8->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
      }
      fVar23 = delta_time * (float)_DAT_005da4ce + this_ptr->morph_time;
      this_ptr->morph_time = fVar23;
      if ((1.0 <= fVar23) && (this_ptr->styler != (CDemonActor *)0x0)) {
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,this_ptr->styler);
        pCVar6 = 0x01D81080;
        this_ptr->styler = (CDemonActor *)0x0;
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10(pCVar6,this_ptr,1);
      }
    case 6:
    case 0xf:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (&(this_ptr->base).base.model,0,&CStack_90);
        fStack_e4 = CStack_90.x;
        afStack_e0[(uint)bVar17 * -2] = *(float *)((int)&CStack_90 + (uint)bVar17 * -8 + 4);
        afStack_e0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             *(float *)((int)&CStack_90 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        core_actor_cpp_FUN_00408b80();
        fVar23 = 0.0;
        pCVar22 = &CStack_324;
        CStack_324.x = fStack_204;
        *(float *)((int)&CStack_324 + (uint)bVar17 * -8 + 4) = afStack_224[(uint)bVar17 * -2 + 9];
        this_ptr_00 = g_CGorePtr;
        *(float *)((int)&CStack_324 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
             afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar22,(EBloodType)fVar23);
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
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    core_charactr_cpp_FUN_0042c1e0();
    afStack_b0[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_b0[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_a0 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_c0 = afStack_b0[2];
    afStack_e0[(uint)bVar17 * -2 + 9] = afStack_b0[(uint)bVar17 * -2 + 3];
    afStack_e0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
         afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    pCVar22 = &(this_ptr->base).base.position_delta;
    fStack_2dc = fStack_c0 + pCVar22->x;
    fStack_2d8 = fStack_bc + (this_ptr->base).base.position_delta.y;
    fStack_2d4 = fStack_b8 + (this_ptr->base).base.position_delta.z;
    fStack_2b8 = fStack_2dc;
    afStack_2fc[(uint)bVar17 * -2 + 0x12] = afStack_2fc[(uint)bVar17 * -2 + 9];
    afStack_2fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13] =
         afStack_2fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_198 = fStack_2b8 + pCVar2->x;
    fStack_194 = fStack_2b4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_190 = fStack_2b0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_27c.x = fStack_198;
    *(float *)((int)&CStack_27c + (uint)bVar17 * -8 + 4) = afStack_1b8[(uint)bVar17 * -2 + 9];
    *(float *)((int)&CStack_27c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar22->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_27c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
