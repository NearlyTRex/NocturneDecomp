// Name: core_succubus.cpp_FUN_00592320
// Address: 00592320
// Address Range: [[00592320, 00592a97]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_00592320(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00592a2a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_succubus_cpp_FUN_00592320(CEnemy *param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  CDemonMission *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  CHotDemon *this_ptr;
  CHotDemon *pCVar6;
  CPathMap *path_map;
  uint uVar7;
  char *pcVar8;
  byte *this_ptr_00;
  char *pcVar9;
  byte bVar10;
  float afStackY_1094 [1012];
  CVector3f *direction;
  float fVar11;
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
  SMotion *pSStack_20;
  CMotionController *pCStack_1c;
  CHotDemon *pCStack_18;
  uint uStack_14;
  
  bVar10 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_28 = param_2 * *(float *)&param_1->field_0xc1d0;
  while (0.0 < fStack_28) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&param_1->field_0x158,afStack_48 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar4);
  }
  *(uint *)&param_1[1].field_0x234c = 0;
  *(uint *)&param_1[1].field_0x2348 = *(uint *)&param_1[1].field_0x234c;
  *(uint *)&param_1[1].field_0x2344 = *(uint *)&param_1[1].field_0x2348;
  fStack_28 = param_2 * *(float *)&param_1->field_0xc1d0;
  while (0.0 < fStack_28) {
    core_motion_cpp_CMotionController_advance_FUN_00524270
              ((CMotionController *)(param_1 + 1),afStack_48 + 8);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  pCStack_1c = (CMotionController *)&param_1->field_0x158;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_1c);
  uVar2 = *(uint *)(pSVar5 + 0x24);
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    if (uVar2 == 0) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar4 = *(int *)&param_1->field_0xc1e8;
      if (iVar4 == 0) {
        iVar4 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
        }
      }
      else {
        fStack_a0 = *(float *)&param_1->field_0x20 - *(float *)(iVar4 + 0x20);
        fStack_9c = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
        fStack_98 = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
        afStack_48[2] = fStack_a0;
        afStack_48[(uint)bVar10 * -2 + 3] = *(float *)((int)&stack0xffffff64 + (uint)bVar10 * -8);
        afStack_48[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             *(float *)((int)&stack0xffffff68 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        if (SQRT(fStack_38 * fStack_38 +
                 afStack_48[2] * afStack_48[2] + afStack_48[3] * afStack_48[3]) <
            *(float *)&param_1->field_0xc1e0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
        }
      }
    }
    else if ((uVar2 < 2) || (uVar2 == 2)) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar4 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fVar11 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        CStack_58._0_4_ = 0;
        CStack_58._8_4_ = 0x3FC00000;
        direction = &CStack_58;
        CStack_58._4_4_ = 0;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xc1e8);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),path_map,direction,
                           fVar11,max_distance);
        if (-1 < iVar4) {
          iVar4 = *(int *)&param_1->field_0xc1e8;
          fStack_4c = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_48[0] = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          afStack_48[1] = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_94 = fStack_4c;
          *(float *)((int)&stack0xffffff70 + (uint)bVar10 * -8) = afStack_48[(uint)bVar10 * -2];
          *(float *)((int)&stack0xffffff74 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
               afStack_48[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          if ((SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90) <
               _DAT_00606274) && (*(int *)&param_1[1].field_0x2568 == 0)) {
            *(uint *)&param_1[1].field_0x2568 = 1;
            *(uint *)&param_1[1].field_0x256c = 0;
            sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x2560);
            iVar4 = *(int *)&param_1->field_0x154;
            *(uint *)&param_1[1].field_0x2564 = 0x461c3f9a;
            (**(code **)(iVar4 + 0x30))(param_1,"succubus-morph.wav");
          }
        }
      }
    }
    goto LAB_0059247c;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_00592451:
      iVar4 = 1;
    }
    else {
LAB_005927f1:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar4,1);
  }
  else {
    if (uVar2 < 3) goto LAB_00592451;
    if (uVar2 != 3) goto LAB_005927f1;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_0059247c:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar4 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_88 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_84 = *(float *)&param_1->field_0x251c * param_2;
    fStack_80 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_ac = fStack_88;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffff7c + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffff80 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    fStack_34 = fStack_ac + *(float *)&param_1->field_0x250c;
    fStack_30 = fStack_a8 + *(float *)&param_1->field_0x2510;
    fStack_2c = fStack_a4 + *(float *)&param_1->field_0x2514;
    fStack_70 = fStack_34;
    *(float *)((int)&stack0xffffff94 + (uint)bVar10 * -8) = afStack_48[(uint)bVar10 * -2 + 6];
    *(float *)((int)&stack0xffffff98 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         afStack_48[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    fStack_7c = fStack_70 + *(float *)&param_1->field_0x249c;
    fStack_78 = fStack_6c + *(float *)&param_1->field_0x24a0;
    fStack_74 = fStack_68 + *(float *)&param_1->field_0x24a4;
    CStack_64._0_4_ = fStack_7c;
    *(uint *)((int)&CStack_64 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&stack0xffffff88 + (uint)bVar10 * -8);
    *(uint *)((int)&CStack_64 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,&CStack_64);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  pSStack_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&param_1->field_0x158);
  fStack_24 = *(float *)&param_1->field_0x160;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            ((CMotionController *)(param_1 + 1),(char *)pSStack_20,fStack_24);
  core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)(param_1 + 1));
  if ((*(int *)&param_1[1].field_0x2568 != 0) &&
     (fVar11 = *(float *)&param_1[1].field_0x256c + param_2,
     *(float *)&param_1[1].field_0x256c = fVar11, _DAT_00606278 < fVar11)) {
    this_ptr = (CHotDemon *)FUN_005c0f32(0xc29c);
    pCVar6 = (CHotDemon *)0x0;
    if (this_ptr != (CHotDemon *)0x0) {
      pCVar6 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004efa10(this_ptr);
    }
    pCVar3 = 0x01D2C900;
    pCStack_18 = pCVar6;
    if (pCVar6 != (CHotDemon *)0x0) {
      *(uint *)&param_1->field_0x70 = 2;
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(pCVar3,(CDemonActor *)pCVar6);
      *(uint *)&pCVar6->field_0x20 = *(uint *)&param_1->field_0x20;
      *(uint *)&pCVar6->field_0x24 = *(uint *)&param_1->field_0x24;
      *(uint *)&pCVar6->field_0x28 = *(uint *)&param_1->field_0x28;
      *(uint *)&pCVar6->field_0x2c = *(uint *)&param_1->field_0x2c;
      if (&pCVar6->field_0x30 != &param_1->field_0x30) {
        *(uint *)&pCVar6->field_0x30 = *(uint *)&param_1->field_0x30;
        *(uint *)&pCVar6->field_0x34 = *(uint *)&param_1->field_0x34;
        *(uint *)&pCVar6->field_0x38 = *(uint *)&param_1->field_0x38;
      }
      pcVar8 = "hdwing.cth";
      pcVar9 = &pCStack_18->field_0x2ca4;
      *(uint *)&pCStack_18->field_0x2ca0 = 1;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      (*(code *)**(uint **)&pCStack_18->field_0x154)(pCStack_18);
      this_ptr_00 = &pCStack_18->field_0x158;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
                ((CMotionController *)this_ptr_00,(char *)pSStack_20,fStack_24);
      core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)this_ptr_00);
      pCVar6 = pCStack_18;
      *(uint *)&pCStack_18->field_0x108 = *(uint *)&param_1->field_0x108;
      pCVar3 = 0x01D2C900;
      *(uint *)&pCStack_18->field_0x10c = *(uint *)&param_1->field_0x10c;
      *(uint *)&pCStack_18->field_0x110 = *(uint *)&param_1->field_0x110;
      core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(pCVar3,(CDemonActor *)pCStack_18);
      uVar7 = *(uint *)&param_1[1].field_0x2538;
      *(uint *)&param_1[1].field_0x2538 = *(uint *)&pCVar6->field_0x2e34;
      *(uint *)&pCVar6->field_0x2e34 = uVar7;
    }
  }
  if (*(int *)&param_1->field_0x27bc != 0) {
    core_cloth_cpp_CClothList_process_FUN_00441fa0
              ((CClothList *)&param_1[1].field_0x23a4,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2504,
               (CDeformableModelInstance *)(param_1 + 1));
  }
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"succubusShutUp");
  if (iVar4 == 0) {
    iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x2560);
    if ((iVar4 == 0) &&
       (param_2 = *(float *)&param_1[1].field_0x2564 - param_2,
       *(float *)&param_1[1].field_0x2564 = param_2, param_2 < 0.0)) {
      uStack_14 = core_actor_cpp_FUN_0040cc00(0x40a00000,0x41200000);
      iVar4 = *(int *)&param_1->field_0x154;
      *(uint *)&param_1[1].field_0x2564 = uStack_14;
      uVar7 = (**(code **)(iVar4 + 0x2c))(param_1,"succubus-horny-?.wav");
      *(uint *)&param_1[1].field_0x2560 = uVar7;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x2560);
  return;
}
