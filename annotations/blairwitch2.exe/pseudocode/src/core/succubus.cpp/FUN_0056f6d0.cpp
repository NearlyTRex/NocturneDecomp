// Name: core_succubus.cpp_FUN_0056f6d0
// Address: 0056f6d0
// Address Range: [[0056f6d0, 0056fe48]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_0056f6d0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056fddb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_succubus_cpp_FUN_0056f6d0(CEnemy *param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  CDemonMission *pCVar3;
  int iVar4;
  CHotDemon *this_ptr;
  CHotDemon *pCVar5;
  CPathMap *path_map;
  uint uVar6;
  char *pcVar7;
  byte *this_ptr_00;
  char *pcVar8;
  byte bVar9;
  float afStackY_1094 [1012];
  CVector3f *direction;
  float fVar10;
  float max_distance;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  char *pcStack_20;
  CMotionController *pCStack_1c;
  CHotDemon *pCStack_18;
  uint uStack_14;
  
  bVar9 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_28 = param_2 * *(float *)&param_1->field_0x10a60;
  while (0.0 < fStack_28) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&param_1->field_0x2b4,afStack_48 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar4);
  }
  *(uint *)&param_1[1].field_0x225c = 0;
  *(uint *)&param_1[1].field_0x2258 = *(uint *)&param_1[1].field_0x225c;
  *(uint *)&param_1[1].field_0x2254 = *(uint *)&param_1[1].field_0x2258;
  fStack_28 = param_2 * *(float *)&param_1->field_0x10a60;
  while (0.0 < fStack_28) {
    core_motion_cpp_CMotionController_advance_FUN_005030c0
              ((CMotionController *)(param_1 + 1),afStack_48 + 8);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  pCStack_1c = (CMotionController *)&param_1->field_0x2b4;
  iVar4 = core_motion_cpp_FUN_005035c0(pCStack_1c);
  uVar2 = *(uint *)(iVar4 + 0x24);
  iVar4 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    if (uVar2 == 0) {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      iVar4 = *(int *)&param_1->field_0x10a78;
      if (iVar4 == 0) {
        iVar4 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
      }
      else {
        fStack_a0 = *(float *)&param_1->field_0x20 - *(float *)(iVar4 + 0x20);
        fStack_9c = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
        fStack_98 = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
        afStack_48[2] = fStack_a0;
        afStack_48[(uint)bVar9 * -2 + 3] = *(float *)((int)&stack0xffffff64 + (uint)bVar9 * -8);
        afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             *(float *)((int)&stack0xffffff68 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        if (SQRT(fStack_38 * fStack_38 +
                 afStack_48[2] * afStack_48[2] + afStack_48[3] * afStack_48[3]) <
            *(float *)&param_1->field_0x10a70) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
      }
    }
    else if ((uVar2 < 2) || (uVar2 == 2)) {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar4 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fVar10 = 0.5;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        CStack_58._0_4_ = 0;
        CStack_58._8_4_ = 0x3FC00000;
        direction = &CStack_58;
        CStack_58._4_4_ = 0;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,direction,
                           fVar10,max_distance);
        if (-1 < iVar4) {
          iVar4 = *(int *)&param_1->field_0x10a78;
          fStack_4c = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_48[0] = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          afStack_48[1] = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_94 = fStack_4c;
          *(float *)((int)&stack0xffffff70 + (uint)bVar9 * -8) = afStack_48[(uint)bVar9 * -2];
          *(float *)((int)&stack0xffffff74 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          if ((SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90) <
               _DAT_005fc3d4) && (*(int *)&param_1[1].field_0x2478 == 0)) {
            *(uint *)&param_1[1].field_0x2478 = 1;
            *(uint *)&param_1[1].field_0x247c = 0;
            sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x2470);
            iVar4 = *(int *)&param_1->field_0x2b0;
            *(uint *)&param_1[1].field_0x2474 = 0x461c3f9a;
            (**(code **)(iVar4 + 0x38))(param_1,"succubus-morph.wav");
          }
        }
      }
    }
    goto LAB_0056f82c;
  }
  uVar2 = *(uint *)&param_1->field_0x27ac;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0056f801:
      iVar4 = 1;
    }
    else {
LAB_0056fba2:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar4,1);
  }
  else {
    if (uVar2 < 3) goto LAB_0056f801;
    if (uVar2 != 3) goto LAB_0056fba2;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
LAB_0056f82c:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar4 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_88 = *(float *)&param_1->field_0x2588 * param_2;
    fStack_84 = *(float *)&param_1->field_0x258c * param_2;
    fStack_80 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_ac = fStack_88;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff7c + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff80 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    fStack_34 = fStack_ac + *(float *)&param_1->field_0x257c;
    fStack_30 = fStack_a8 + *(float *)&param_1->field_0x2580;
    fStack_2c = fStack_a4 + *(float *)&param_1->field_0x2584;
    fStack_70 = fStack_34;
    *(float *)((int)&stack0xffffff94 + (uint)bVar9 * -8) = afStack_48[(uint)bVar9 * -2 + 6];
    *(float *)((int)&stack0xffffff98 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    fStack_7c = fStack_70 + *(float *)&param_1->field_0x2508;
    fStack_78 = fStack_6c + *(float *)&param_1->field_0x250c;
    fStack_74 = fStack_68 + *(float *)&param_1->field_0x2510;
    CStack_64._0_4_ = fStack_7c;
    *(uint *)((int)&CStack_64 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&stack0xffffff88 + (uint)bVar9 * -8);
    *(uint *)((int)&CStack_64 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,&CStack_64);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  pcStack_20 = (char *)core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  fStack_24 = *(float *)&param_1->field_0x2bc;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            ((CMotionController *)(param_1 + 1),pcStack_20,fStack_24);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            ((CDeformableModelInstance *)(param_1 + 1));
  if ((*(int *)&param_1[1].field_0x2478 != 0) &&
     (fVar10 = *(float *)&param_1[1].field_0x247c + param_2,
     *(float *)&param_1[1].field_0x247c = fVar10, _DAT_005fc3d8 < fVar10)) {
    this_ptr = (CHotDemon *)FUN_005b8be2(0x10b2c);
    pCVar5 = (CHotDemon *)0x0;
    if (this_ptr != (CHotDemon *)0x0) {
      pCVar5 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d37f0(this_ptr);
    }
    pCVar3 = 0x01D182F0;
    pCStack_18 = pCVar5;
    if (pCVar5 != (CHotDemon *)0x0) {
      *(uint *)&param_1->field_0x70 = 2;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(pCVar3,(CDemonActor *)pCVar5);
      *(uint *)&pCVar5->field_0x20 = *(uint *)&param_1->field_0x20;
      *(uint *)&pCVar5->field_0x24 = *(uint *)&param_1->field_0x24;
      *(uint *)&pCVar5->field_0x28 = *(uint *)&param_1->field_0x28;
      *(uint *)&pCVar5->field_0x2c = *(uint *)&param_1->field_0x2c;
      if (&pCVar5->field_0x30 != &param_1->field_0x30) {
        *(uint *)&pCVar5->field_0x30 = *(uint *)&param_1->field_0x30;
        *(uint *)&pCVar5->field_0x34 = *(uint *)&param_1->field_0x34;
        *(uint *)&pCVar5->field_0x38 = *(uint *)&param_1->field_0x38;
      }
      pcVar7 = "hdwing.cth";
      pcVar8 = &pCStack_18->field_0x2d10;
      *(uint *)&pCStack_18->field_0x2d0c = 1;
      do {
        cVar1 = *pcVar7;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      (**(code **)(*(int *)&pCStack_18->field_0x2b0 + 8))(pCStack_18);
      this_ptr_00 = &pCStack_18->field_0x2b4;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
                ((CMotionController *)this_ptr_00,pcStack_20,fStack_24);
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
                ((CDeformableModelInstance *)this_ptr_00);
      pCVar5 = pCStack_18;
      *(uint *)&pCStack_18->field_0x108 = *(uint *)&param_1->field_0x108;
      pCVar3 = 0x01D182F0;
      *(uint *)&pCStack_18->field_0x10c = *(uint *)&param_1->field_0x10c;
      *(uint *)&pCStack_18->field_0x110 = *(uint *)&param_1->field_0x110;
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(pCVar3,(CDemonActor *)pCStack_18);
      uVar6 = *(uint *)&param_1[1].field_0x2448;
      *(uint *)&param_1[1].field_0x2448 = *(uint *)&pCVar5->field_0x2ea0;
      *(uint *)&pCVar5->field_0x2ea0 = uVar6;
    }
  }
  if (*(int *)&param_1->field_0x2828 != 0) {
    core_cloth_cpp_CClothList_process_FUN_005b1780
              ((CClothList *)&param_1[1].field_0x22b4,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2574,
               (CDeformableModelInstance *)(param_1 + 1));
  }
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,"succubusShutUp");
  if (iVar4 == 0) {
    iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x2470);
    if ((iVar4 == 0) &&
       (param_2 = *(float *)&param_1[1].field_0x2474 - param_2,
       *(float *)&param_1[1].field_0x2474 = param_2, param_2 < 0.0)) {
      uStack_14 = core_actor_cpp_FUN_0040cf60(0x40a00000,0x41200000);
      iVar4 = *(int *)&param_1->field_0x2b0;
      *(uint *)&param_1[1].field_0x2474 = uStack_14;
      uVar6 = (**(code **)(iVar4 + 0x34))(param_1,"succubus-horny-?.wav");
      *(uint *)&param_1[1].field_0x2470 = uVar6;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x2470);
  return;
}
