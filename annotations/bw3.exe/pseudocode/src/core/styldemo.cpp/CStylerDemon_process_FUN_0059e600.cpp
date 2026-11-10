// Name: core_styldemo.cpp_CStylerDemon_process_FUN_0059e600
// Address: 0059e600
// Address Range: [[0059e600, 005a014d]]
// Convention: __cdecl
// Signature: void __cdecl core_styldemo_cpp_CStylerDemon_process_FUN_0059e600(CStylerDemon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_styldemo_cpp_CStylerDemon_process_FUN_0059e600(CStylerDemon *this_ptr,float delta_time)

{
  char cVar1;
  CDemonMission *pCVar2;
  int iVar3;
  uint uVar4;
  CMotionList *pCVar5;
  uint uVar6;
  SMotion *pSVar7;
  int iVar8;
  CPathMap *path_map;
  char *pcVar9;
  float *pfVar10;
  CDeformableModelInstance *pCVar11;
  char *pcVar12;
  CDemonActor *pCVar13;
  byte bVar14;
  float10 fVar15;
  float afStackY_1318 [997];
  CStylerDemon *pCVar16;
  uint uVar17;
  CGore *this_ptr_00;
  CVector3f *pCVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  uint *puVar22;
  EBloodType blood_type;
  float fVar23;
  SDamageInfo aSStack_36c [4];
  uint uStack_368;
  CStylerDemon *pCStack_338;
  CStylerDemon *pCStack_334;
  float fStack_330;
  float afStack_32c [2];
  CVector3f CStack_324;
  float fStack_318;
  float afStack_314 [5];
  float afStack_300 [3];
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  uint uStack_2d0;
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
  float afStack_26c [5];
  uint uStack_258;
  float afStack_24c [4];
  float afStack_23c [6];
  float afStack_224 [4];
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_1f8;
  float fStack_1f4;
  float afStack_1ec [4];
  float afStack_1dc [5];
  uint uStack_1c8;
  uint uStack_1bc;
  float fStack_1b0;
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
  float fStack_15c;
  float fStack_158;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_12c;
  float afStack_120 [3];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [3];
  float afStack_fc [3];
  CVector3f CStack_f0;
  uint uStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float afStack_cc [3];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float afStack_b4 [3];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [3];
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  CDemonActor *pCStack_70;
  CDemonActor *pCStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float *pfStack_50;
  float fStack_48;
  float fStack_40;
  float fStack_38;
  int iStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  float *pfStack_1c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  bVar14 = 0;
  iVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0xdca0 == 0) {
    iVar3 = core_actor_cpp_createActorByName_FUN_0040c4f0("CExorcism");
    *(int *)&this_ptr->field_0xdd14 = iVar3;
    (*(code *)**(uint **)(iVar3 + 0x154))(iVar3);
    pcVar9 = "Bible";
    pcVar12 = *(char **)&this_ptr->field_0xdd14;
    do {
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
              (0x01D81080,*(CDemonActor **)&this_ptr->field_0xdd14);
    if (*(int *)&this_ptr->field_0xdd14 != 0) {
      *(uint *)(*(int *)&this_ptr->field_0xdd14 + 0xfc) = 1;
      *(uint *)(*(int *)&this_ptr->field_0xdd14 + 0xf8) = 0;
    }
    core_skeleton_cpp_FUN_0054dbd0(&this_ptr->field_0x158,*(uint *)&this_ptr->field_0x25a8);
    pfVar10 = afStack_e0 + 0x11;
    afStack_9c[0] = (float)uStack_1c8;
    afStack_e0[(uint)bVar14 * -2 + 0x12] = afStack_1dc[(uint)bVar14 * -2 + 6];
    afStack_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
         afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar10);
    uStack_150 = uStack_1bc;
    afStack_1dc[(uint)bVar14 * -2 + 0x24] = afStack_1dc[(uint)bVar14 * -2 + 9];
    afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25] =
         afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
    iVar3 = *(int *)&this_ptr->field_0xdd14;
    *(uint *)(iVar3 + 0x20) = uStack_150;
    *(uint *)(iVar3 + 0x24) = uStack_14c;
    *(uint *)(iVar3 + 0x28) = uStack_148;
    iVar3 = *(int *)&this_ptr->field_0xdd14;
    if ((uint *)(iVar3 + 0x30) != (uint *)&this_ptr->field_0x30) {
      *(uint *)(iVar3 + 0x30) = *(uint *)&this_ptr->field_0x30;
      *(uint *)(iVar3 + 0x34) = *(uint *)&this_ptr->field_0x34;
      *(uint *)(iVar3 + 0x38) = *(uint *)&this_ptr->field_0x38;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
              (*(CDemonActor **)&this_ptr->field_0xdd14);
    core_charactr_cpp_FUN_004319d0(this_ptr,0,*(uint *)&this_ptr->field_0xdd14,0,0);
    *(uint *)&this_ptr->field_0xdca0 = 1;
  }
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
  if (*(int *)&this_ptr->field_0xcde4 == 0) {
    iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,0,1);
      return;
    }
    *(uint *)&g_CGamePtr->field_0x244 = 1;
    *(uint *)&this_ptr->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  iVar3 = *(int *)&this_ptr->field_0xcde4;
  if (iVar3 == 0) {
    return;
  }
  fStack_288 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
  fStack_284 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar3 + 0x24);
  fStack_280 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
  afStack_e0[2] = fStack_288;
  afStack_e0[(uint)bVar14 * -2 + 3] = afStack_29c[(uint)bVar14 * -2 + 6];
  afStack_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
       afStack_29c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
  if (afStack_314 + 0x1a != afStack_e0 + 2) {
    fStack_2ac = afStack_e0[2];
    fStack_2a8 = afStack_e0[3];
    fStack_2a4 = fStack_d0;
  }
  fStack_64 = fStack_2a4 * fStack_2a4 + fStack_2ac * fStack_2ac + fStack_2a8 * fStack_2a8;
  fStack_24 = (float)(((int)fStack_64 >> 1) + _DAT_01d1a0a4);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  pfStack_1c = (float *)&this_ptr->field_0x30;
  fStack_68 = delta_time * *(float *)&this_ptr->field_0xcdcc;
  pCStack_20 = (CMotionController *)&this_ptr->field_0x158;
  while (0.0 < fStack_68) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_20,&fStack_68);
    if (uVar4 < 0x583) {
      if (uVar4 < 0x57b) {
        if (uVar4 < 0x4b5) {
          if (uVar4 < 0x4b2) {
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar4);
          }
          else if (uVar4 < 0x4b3) {
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3254) = 0x41700000;
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3258) = 4;
          }
          else if (uVar4 == 0x4b3) {
            pcVar12 = &DAT_005da226;
            pCStack_18 = (CDemonActor *)
                         core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar13 = pCStack_18;
            do {
              cVar1 = *pcVar12;
              pCVar13->actor_name[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar12[1];
              pcVar12 = pcVar12 + 2;
              pCVar13->actor_name[1] = cVar1;
              pCVar13 = (CDemonActor *)(pCVar13->actor_name + 2);
            } while (cVar1 != '\0');
            afStack_1ec[2] = 3.0;
            afStack_1ec[0] = 0.0;
            afStack_1ec[1] = 0.0;
            core_actor_cpp_FUN_00408b80(this_ptr,afStack_224 + 0xe);
            pCVar13 = pCStack_18;
            fStack_270 = fStack_2e8;
            afStack_26c[(uint)bVar14 * -2] = afStack_314[(uint)bVar14 * -2 + 0xc];
            afStack_26c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 afStack_314[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
            (pCVar13->location).position.x = fStack_270;
            (pCVar13->location).position.y = afStack_26c[0];
            (pCVar13->location).position.z = afStack_26c[1];
            if (&pCVar13->orient != (UOrientationVector *)pfStack_1c) {
              (pCVar13->orient).vec.x = *pfStack_1c;
              (pCVar13->orient).vec.y = pfStack_1c[1];
              (pCVar13->orient).vec.z = pfStack_1c[2];
            }
            pCVar11 = (CDeformableModelInstance *)(pCStack_18 + 1);
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      (pCVar11,"newzomb1.dfm");
            pCStack_18[0x1d].create_event[0x48] = '\0';
            pCStack_18[0x1d].create_event[0x49] = '\0';
            pCStack_18[0x1d].create_event[0x4a] = -0x80;
            pCStack_18[0x1d].create_event[0x4b] = '?';
            (*((pCStack_18->vtable)._ub)->setup)(pCStack_18);
            iVar3 = 1;
            pcVar12 = "stand";
            pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                               ((CMotionController *)pCVar11);
            iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(pCVar5,pcVar12,iVar3);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar11,iVar3,0.0);
            pCVar2 = 0x01D81080;
            pCStack_18[0x1b].platform_orientation_delta.y = 10.0;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(pCVar2,pCStack_18);
            pcVar12 = &DAT_005da249;
            pCStack_70 = (CDemonActor *)
                         core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar13 = pCStack_70;
            do {
              cVar1 = *pcVar12;
              pCVar13->actor_name[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar12[1];
              pcVar12 = pcVar12 + 2;
              pCVar13->actor_name[1] = cVar1;
              pCVar13 = (CDemonActor *)(pCVar13->actor_name + 2);
            } while (cVar1 != '\0');
            afStack_24c[0] = 3.0;
            afStack_24c[2] = 3.0;
            afStack_24c[1] = 0.0;
            pCStack_18 = pCStack_70;
            core_actor_cpp_FUN_00408b80(this_ptr,afStack_26c + 8);
            afStack_224[2] = fStack_1b0;
            afStack_224[(uint)bVar14 * -2 + 3] = afStack_1dc[(uint)bVar14 * -2 + 0xc];
            afStack_224[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
                 afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
            (pCStack_70->location).position.x = afStack_224[2];
            (pCStack_70->location).position.y = afStack_224[3];
            (pCStack_70->location).position.z = fStack_214;
            if (&pCStack_70->orient != (UOrientationVector *)pfStack_1c) {
              (pCStack_70->orient).vec.x = *pfStack_1c;
              (pCStack_70->orient).vec.y = pfStack_1c[1];
              (pCStack_70->orient).vec.z = pfStack_1c[2];
            }
            pCVar11 = (CDeformableModelInstance *)(pCStack_18 + 1);
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      (pCVar11,"newzomb1.dfm");
            pCVar13 = pCStack_18;
            pCStack_18[0x1d].create_event[0x48] = '\0';
            pCStack_18[0x1d].create_event[0x49] = '\0';
            pCStack_18[0x1d].create_event[0x4a] = -0x80;
            pCStack_18[0x1d].create_event[0x4b] = '?';
            (*((pCStack_18->vtable)._ub)->setup)(pCStack_18);
            iVar3 = 1;
            pcVar12 = "stand";
            pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                               ((CMotionController *)pCVar11);
            iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(pCVar5,pcVar12,iVar3);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar11,iVar3,0.0);
            pCVar2 = 0x01D81080;
            pCVar13[0x1b].platform_orientation_delta.y = 10.0;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(pCVar2,pCVar13);
            pcVar12 = &DAT_005da26c;
            pCStack_6c = (CDemonActor *)
                         core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
            pCVar13 = pCStack_6c;
            do {
              cVar1 = *pcVar12;
              pCVar13->actor_name[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar12[1];
              pcVar12 = pcVar12 + 2;
              pCVar13->actor_name[1] = cVar1;
              pCVar13 = (CDemonActor *)(pCVar13->actor_name + 2);
            } while (cVar1 != '\0');
            afStack_23c[2] = -3.0;
            afStack_23c[3] = 0.0;
            afStack_23c[4] = 3.0;
            pCStack_18 = pCStack_6c;
            core_actor_cpp_FUN_00408b80(this_ptr,afStack_23c + 2);
            fStack_168 = fStack_174;
            afStack_1dc[(uint)bVar14 * -2 + 0x1e] = afStack_1dc[(uint)bVar14 * -2 + 0x1b];
            afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1f] =
                 afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c];
            (pCStack_6c->location).position.x = fStack_168;
            (pCStack_6c->location).position.y = fStack_164;
            (pCStack_6c->location).position.z = fStack_160;
            if (&pCStack_6c->orient != (UOrientationVector *)pfStack_1c) {
              (pCStack_6c->orient).vec.x = *pfStack_1c;
              (pCStack_6c->orient).vec.y = pfStack_1c[1];
              (pCStack_6c->orient).vec.z = pfStack_1c[2];
            }
            pCVar11 = (CDeformableModelInstance *)(pCStack_18 + 1);
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      (pCVar11,"newzomb1.dfm");
            pCStack_18[0x1d].create_event[0x48] = '\0';
            pCStack_18[0x1d].create_event[0x49] = '\0';
            pCStack_18[0x1d].create_event[0x4a] = -0x80;
            pCStack_18[0x1d].create_event[0x4b] = '?';
            (*((pCStack_18->vtable)._ub)->setup)(pCStack_18);
            iVar3 = 1;
            pcVar12 = "stand";
            pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                               ((CMotionController *)pCVar11);
            iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(pCVar5,pcVar12,iVar3);
            core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                      ((CMotionController *)pCVar11,iVar3,0.0);
            pCVar2 = 0x01D81080;
            pCStack_18[0x1b].platform_orientation_delta.y = 10.0;
            core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(pCVar2,pCStack_18);
          }
          else {
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar4);
          }
        }
        else if (uVar4 < 0x4b6) {
          uVar21 = 2;
          uVar19 = 0;
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          uVar17 = 0;
          uVar6 = 0x40800000;
          pfVar10 = (float *)(iVar3 + 0x24 + (uint)bVar14 * -8);
          fStack_15c = *(float *)(iVar3 + 0x20);
          afStack_1dc[(uint)bVar14 * -2 + 0x21] = *pfVar10;
          afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x22] = pfVar10[(uint)bVar14 * -2 + 1]
          ;
          fStack_158 = fStack_158 + _DAT_005da4f6;
          core_fire_cpp_FUN_004a36e0(0x01C73654,afStack_1dc + 0x20,uVar6,uVar17,uVar19,uVar21);
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3254) = 0x40a00000;
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x3258) = 3;
        }
        else if (uVar4 < 0x579) {
          if (uVar4 == 0x578) {
            iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xdca4);
            if (iVar3 == 0) {
              uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                (this_ptr,"stydem_stand.wav");
              *(uint *)&this_ptr->field_0xdca4 = uVar6;
            }
          }
          else {
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar4);
          }
        }
        else if (uVar4 < 0x57a) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"stydem_walk.wav");
            *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
        else {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"stydem_run.wav");
            *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
      }
      else if (uVar4 < 0x57c) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_attack.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x57f) {
        if (uVar4 < 0x57d) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"stydem_damage.wav");
            *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
        else if (uVar4 < 0x57e) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"stydem_die.wav");
            *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
        else {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"stydem_stand_fly.wav");
            *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
      }
      else if (uVar4 < 0x580) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_walk_fly.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x581) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_run_fly.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x582) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_attack_fly.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_warning_fly_spell.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
    }
    else if (uVar4 < 0x584) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"stydem_fly_spell.wav");
        *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 < 0x58a) {
      if (uVar4 < 0x586) {
        if (uVar4 < 0x585) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"stydem_damage_fly.wav");
            *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
        else {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"stydem_die_fly.wav");
            *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
          }
        }
      }
      else if (uVar4 < 0x587) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_takeoff.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x588) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_land.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x589) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_warning_spell_1.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_spell_1.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
    }
    else if (uVar4 < 0x58b) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"stydem_warning_spell_2.wav");
        *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 < 0x58e) {
      if (uVar4 < 0x58c) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_spell_2.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else if (uVar4 < 0x58d) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_warning_spell_3.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
        if (iVar3 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"stydem_spell_3.wav");
          *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
        }
      }
    }
    else if (uVar4 < 0x58f) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"stydem_raise_zombie.wav");
        *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 < 0x590) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"stydem_transforming.wav");
        *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 < 0x591) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4));
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"stydem_taunt1.wav");
        *(uint *)(&this_ptr->field_0xc6c4 + uVar4 * 4) = uVar6;
      }
    }
    else if (uVar4 == 0x591) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xdd08);
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"stydem_taunt2.wav");
        *(uint *)&this_ptr->field_0xdd08 = uVar6;
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar4);
    }
  }
  fVar20 = (float)_DAT_005da4c6;
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc * fVar20);
  pCStack_28 = (CMotionController *)&this_ptr->field_0x158;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_28);
  iVar3 = *(int *)(pSVar7 + 0x24);
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar3) {
    case 0:
    case 7:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (iVar3 == 0) {
        fVar15 = (float10)fStack_24;
        round();
        fStack_14 = (float)(int)ROUND(fVar15);
        iVar3 = core_styldemo_cpp_FUN_005a0480(this_ptr,fStack_14);
        if ((iVar3 == 0) &&
           (((_DAT_005e84dc < fStack_24 || (*(float *)&this_ptr->field_0xcde0 <= 0.0)) &&
            (fStack_24 < *(float *)&this_ptr->field_0xcddc)))) {
          if (_DAT_005e84e8 <= fStack_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&this_ptr->field_0x158,8,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&this_ptr->field_0x158,1,1);
          }
        }
      }
      break;
    case 1:
    case 2:
    case 8:
    case 9:
      if (*(int *)&this_ptr->field_0xcde4 != 0) {
        fVar15 = (float10)fStack_24;
        round();
        fStack_14 = (float)(int)ROUND(fVar15);
        iVar8 = core_styldemo_cpp_FUN_005a0480(this_ptr,fStack_14);
        if (iVar8 == 0) {
          if (fStack_24 <= _DAT_005e84dc + (float)_DAT_005da4e6) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&this_ptr->field_0x158,0,1);
            *(uint *)&this_ptr->field_0xcde0 = 0;
          }
          else if ((0.0 < *(float *)&this_ptr->field_0xdc94) ||
                  (iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar8 < 0x56)) {
            fVar23 = 0.17453292;
            fVar20 = 0.2;
            CStack_f0.z = _DAT_005e84dc + (float)_DAT_005da4ee;
            *(uint *)&this_ptr->field_0x24a4 = 0;
            *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
            *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
            CStack_f0.x = 0.0;
            pCVar18 = &CStack_f0;
            CStack_f0.y = 0.0;
            fStack_14 = CStack_f0.z;
            path_map = (CPathMap *)
                       (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xc4))
                                 (*(int *)&this_ptr->field_0xcde4);
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                              ((CCharacter *)this_ptr,
                               (CVector3f *)(*(int *)&this_ptr->field_0xcde4 + 0x20),path_map,
                               pCVar18,fVar20,fVar23);
            if (-1 < iVar8) {
              if ((_DAT_005e84e8 < fStack_24) && (iVar3 != 8)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&this_ptr->field_0x158,8,1);
              }
              if (*(float *)&this_ptr->field_0xcddc < fStack_24) {
                if (iVar3 == 8) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)&this_ptr->field_0x158,7,1);
                }
                else {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)&this_ptr->field_0x158,0,1);
                }
              }
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&this_ptr->field_0x158,0x19,1);
            *(uint *)&this_ptr->field_0xdc94 = 0x41700000;
          }
        }
      }
      break;
    case 0xb:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_114 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
      fStack_110 = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
      fStack_10c = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
      afStack_108[0] = fStack_114;
      afStack_1dc[(uint)bVar14 * -2 + 0x36] = afStack_1dc[(uint)bVar14 * -2 + 0x33];
      afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x37] =
           afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x34];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_1dc + 0x35);
      fStack_1a4 = fStack_12c;
      afStack_1dc[(uint)bVar14 * -2 + 0xf] = afStack_1dc[(uint)bVar14 * -2 + 0x2d];
      afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
           afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2e];
      fStack_60 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (fStack_1a0 - *(float *)&this_ptr->field_0x34);
      fStack_14 = fStack_60;
      fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (fStack_1a4 - *(float *)&this_ptr->field_0x30);
      *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_60;
      *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
      *(uint *)&this_ptr->field_0xcde0 = 0x40a00000;
      break;
    case 0xc:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      pfStack_50 = (float *)&this_ptr->field_0x20;
      fStack_210 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
      fStack_20c = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
      fStack_208 = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
      afStack_cc[0] = fStack_210;
      afStack_e0[(uint)bVar14 * -2 + 6] = afStack_224[(uint)bVar14 * -2 + 6];
      afStack_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
           afStack_224[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_e0 + 5);
      fStack_18c = fStack_2c4;
      afStack_1dc[(uint)bVar14 * -2 + 0x15] = afStack_314[(uint)bVar14 * -2 + 0x15];
      afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
           afStack_314[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16];
      fStack_58 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (fStack_188 - *(float *)&this_ptr->field_0x34);
      fStack_14 = fStack_58;
      fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (fStack_18c - *(float *)&this_ptr->field_0x30);
      *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_58;
      *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_2f4 = *(float *)(iVar3 + 0x20) - *pfStack_50;
      fStack_2f0 = *(float *)(iVar3 + 0x24) - pfStack_50[1];
      fStack_2ec = *(float *)(iVar3 + 0x28) - pfStack_50[2];
      fStack_318 = fStack_2f4;
      afStack_314[(uint)bVar14 * -2] = afStack_314[(uint)bVar14 * -2 + 9];
      afStack_314[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_314[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
      core_skeleton_cpp_FUN_0054dcc0(pCStack_28,_DAT_02d24cf4);
      pfVar10 = afStack_314 + 5;
      afStack_300[0] = afStack_26c[2];
      afStack_314[(uint)bVar14 * -2 + 6] = afStack_26c[(uint)bVar14 * -2 + 3];
      afStack_314[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
           afStack_26c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar10);
      fVar20 = SQRT(afStack_314[1] * afStack_314[1] +
                    fStack_318 * fStack_318 + afStack_314[0] * afStack_314[0]);
      afStack_314[2] = (float)uStack_258;
      afStack_314[(uint)bVar14 * -2 + 3] = afStack_26c[(uint)bVar14 * -2 + 6];
      afStack_314[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           afStack_26c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      if (0.0 < fVar20) {
        fVar23 = 1.0 / fVar20;
        fStack_318 = fStack_318 * fVar23;
        afStack_314[0] = afStack_314[0] * fVar23;
        afStack_314[1] = afStack_314[1] * fVar23;
      }
      else {
        afStack_314[0] = 0.0;
        fStack_318 = 0.0;
        afStack_314[1] = 0.0;
      }
      fStack_318 = fStack_318 * _DAT_005da4de;
      afStack_314[0] = afStack_314[0] * _DAT_005da4de;
      afStack_314[1] = afStack_314[1] * _DAT_005da4de;
      fStack_2c = fVar20;
      core_fire_cpp_FUN_004a3af0(0x01C73654,afStack_314 + 2,&fStack_318,1,2,0);
      break;
    case 0xd:
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
      fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_28);
      if ((float)_DAT_005da4d6 < fStack_14) {
        if (iVar3 < 0x32) {
          iVar3 = 0x1c;
        }
        else {
          if (99 < iVar3) goto switchD_005a0147_caseD_3;
          iVar3 = 0x1d;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,iVar3,1);
      }
    case 3:
    case 10:
switchD_005a0147_caseD_3:
      core_motion_cpp_FUN_004fc930((CMotionController *)&this_ptr->field_0x158);
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_36c);
      uStack_368 = *(uint *)&this_ptr->field_0xce5c;
      pCStack_338 = this_ptr;
      pCStack_334 = this_ptr;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&this_ptr->field_0xfd8 + _DAT_02d24cf4 * 0x30,0x3f19999a,aSStack_36c)
      ;
      pfVar10 = afStack_e0 + 0xb;
      afStack_b4[0] = afStack_24c[3];
      afStack_e0[(uint)bVar14 * -2 + 0xc] = afStack_23c[(uint)bVar14 * -2];
      afStack_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
           afStack_23c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar10);
      pfVar10 = afStack_224 + 0x11;
      afStack_1ec[3] = (float)uStack_2d0;
      afStack_1dc[(uint)bVar14 * -2] = afStack_314[(uint)bVar14 * -2 + 0x12];
      pCVar16 = this_ptr;
      afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_314[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
      core_enemy_cpp_FUN_004893f0(pCVar16,pfVar10);
      *(uint *)&this_ptr->field_0xcde0 = 0x40000000;
      break;
    case 0x12:
      *(uint *)&this_ptr->field_0xcde0 = 0x41800000;
      break;
    case 0x14:
      *(uint *)&this_ptr->field_0xcde0 = 0x40c00000;
      break;
    case 0x16:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_144 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
      fStack_140 = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
      fStack_13c = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
      afStack_1dc[2] = fStack_144;
      afStack_1dc[(uint)bVar14 * -2 + 3] = afStack_1dc[(uint)bVar14 * -2 + 0x27];
      afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x28];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_1dc + 2);
      fStack_1f8 = fStack_180;
      afStack_224[(uint)bVar14 * -2 + 0xc] = afStack_1dc[(uint)bVar14 * -2 + 0x18];
      afStack_224[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
           afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
      fStack_48 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (fStack_1f4 - *(float *)&this_ptr->field_0x34);
      fStack_14 = fStack_48;
      fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (fStack_1f8 - *(float *)&this_ptr->field_0x30);
      *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_48;
      *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
      *(uint *)&this_ptr->field_0xcde0 = 0x40c00000;
      break;
    case 0x17:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_2a0 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
      afStack_29c[0] = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
      afStack_29c[1] = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
      afStack_120[0] = fStack_2a0;
      afStack_1dc[(uint)bVar14 * -2 + 0x30] = afStack_29c[(uint)bVar14 * -2];
      afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x31] =
           afStack_29c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_1dc + 0x2f);
      fStack_138 = afStack_23c[5];
      afStack_1dc[(uint)bVar14 * -2 + 0x2a] = afStack_224[(uint)bVar14 * -2];
      afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2b] =
           afStack_224[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      fStack_40 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (fStack_134 - *(float *)&this_ptr->field_0x34);
      fStack_14 = fStack_40;
      fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (fStack_138 - *(float *)&this_ptr->field_0x30);
      *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_40;
      *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + fStack_14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(3.0,5.0);
      *(float *)&this_ptr->field_0xdc9c = fStack_14;
      break;
    case 0x18:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (iVar3 == 0) {
        iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fStack_84 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
        fStack_80 = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
        fStack_7c = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
        afStack_fc[0] = fStack_84;
        afStack_1dc[(uint)bVar14 * -2 + 0x39] = afStack_e0[(uint)bVar14 * -2 + 0x18];
        afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3a] =
             afStack_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_1dc + 0x38);
        fStack_330 = afStack_29c[2];
        afStack_32c[(uint)bVar14 * -2] = afStack_29c[(uint)bVar14 * -2 + 3];
        afStack_32c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_29c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        fStack_38 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                     (afStack_32c[0] - *(float *)&this_ptr->field_0x34);
        fStack_14 = fStack_38;
        fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                     (fStack_330 - *(float *)&this_ptr->field_0x30);
        *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_38;
        *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + fStack_14;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&this_ptr->field_0x25b0,g_CWeaponClassInfo.name_hash);
        iStack_30 = iVar3;
        if (iVar3 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          *(CStylerDemon **)(iVar3 + 0x304) = this_ptr;
          uVar6 = *(uint *)(iVar3 + 0x568);
          *(uint *)(iVar3 + 0x568) = 100;
          iVar8 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar8 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
          }
          *(uint *)(iStack_30 + 0x568) = uVar6;
        }
        fVar20 = *(float *)&this_ptr->field_0xdc9c - delta_time;
        *(float *)&this_ptr->field_0xdc9c = fVar20;
        if (fVar20 <= 0.0) {
          *(uint *)&this_ptr->field_0xdc9c = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&this_ptr->field_0x158,7,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,7,1);
      }
      break;
    case 0x1b:
      iVar3 = *(int *)&this_ptr->field_0xd060;
      *(uint *)(iVar3 + 0x20) = *(uint *)&this_ptr->field_0x20;
      *(uint *)(iVar3 + 0x24) = *(uint *)&this_ptr->field_0x24;
      *(uint *)(iVar3 + 0x28) = *(uint *)&this_ptr->field_0x28;
      *(uint *)(iVar3 + 0x2c) = *(uint *)&this_ptr->field_0x2c;
      iVar3 = *(int *)&this_ptr->field_0xd060;
      if ((uint *)(iVar3 + 0x30) != (uint *)&this_ptr->field_0x30) {
        *(uint *)(iVar3 + 0x30) = *(uint *)&this_ptr->field_0x30;
        *(uint *)(iVar3 + 0x34) = *(uint *)&this_ptr->field_0x34;
        *(uint *)(iVar3 + 0x38) = *(uint *)&this_ptr->field_0x38;
      }
      fVar20 = delta_time * (float)_DAT_005da4ce + *(float *)&this_ptr->field_0xdc98;
      *(float *)&this_ptr->field_0xdc98 = fVar20;
      if ((1.0 <= fVar20) && (*(CDemonActor **)&this_ptr->field_0xd060 != (CDemonActor *)0x0)) {
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                  (0x01D81080,*(CDemonActor **)&this_ptr->field_0xd060);
        pCVar2 = 0x01D81080;
        *(uint *)&this_ptr->field_0xd060 = 0;
        core_mission_cpp_FUN_004f6f10(pCVar2,this_ptr,1);
      }
    case 6:
    case 0xf:
      if ((*(int *)&this_ptr->field_0xcdd0 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(&this_ptr->field_0x158,0);
        puVar22 = &uStack_e4;
        uStack_e4 = uStack_90;
        afStack_e0[(uint)bVar14 * -2] = afStack_e0[(uint)bVar14 * -2 + 0x15];
        afStack_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16];
        core_actor_cpp_FUN_00408b80(this_ptr,puVar22);
        blood_type = BLOOD_TYPE_RED;
        pCVar18 = &CStack_324;
        CStack_324.x = fStack_204;
        *(float *)((int)&CStack_324 + (uint)bVar14 * -8 + 4) = afStack_224[(uint)bVar14 * -2 + 9];
        this_ptr_00 = g_CGorePtr;
        *(float *)((int)&CStack_324 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             afStack_224[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar18,blood_type);
        *(uint *)&this_ptr->field_0xcdd0 = 1;
      }
    }
  }
  else {
    uVar4 = *(uint *)&this_ptr->field_0x273c;
    if (uVar4 < 2) {
      if (uVar4 == 1) {
LAB_0059f45b:
        iVar3 = 1;
      }
      else {
LAB_0059f642:
        iVar3 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,iVar3,1);
    }
    else {
      if (uVar4 < 3) goto LAB_0059f45b;
      if (uVar4 != 3) goto LAB_0059f642;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,0,1);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  }
  if (0.0 < *(float *)&this_ptr->field_0xcde0) {
    *(float *)&this_ptr->field_0xcde0 = *(float *)&this_ptr->field_0xcde0 - delta_time;
  }
  if (0.0 < *(float *)&this_ptr->field_0xdc94) {
    *(float *)&this_ptr->field_0xdc94 = *(float *)&this_ptr->field_0xdc94 - delta_time;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar3 != 0) {
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    fStack_a8 = *(float *)&this_ptr->field_0x2518 * delta_time;
    fStack_a4 = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_a0 = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_c0 = fStack_a8;
    afStack_e0[(uint)bVar14 * -2 + 9] = afStack_e0[(uint)bVar14 * -2 + 0xf];
    afStack_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
         afStack_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
    fStack_2dc = fStack_c0 + *(float *)&this_ptr->field_0x250c;
    fStack_2d8 = fStack_bc + *(float *)&this_ptr->field_0x2510;
    fStack_2d4 = fStack_b8 + *(float *)&this_ptr->field_0x2514;
    fStack_2b8 = fStack_2dc;
    afStack_314[(uint)bVar14 * -2 + 0x18] = afStack_314[(uint)bVar14 * -2 + 0xf];
    afStack_314[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19] =
         afStack_314[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
    fStack_198 = fStack_2b8 + *(float *)&this_ptr->field_0x249c;
    fStack_194 = fStack_2b4 + *(float *)&this_ptr->field_0x24a0;
    fStack_190 = fStack_2b0 + *(float *)&this_ptr->field_0x24a4;
    CStack_27c.x = fStack_198;
    *(float *)((int)&CStack_27c + (uint)bVar14 * -8 + 4) = afStack_1dc[(uint)bVar14 * -2 + 0x12];
    *(float *)((int)&CStack_27c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_27c);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
