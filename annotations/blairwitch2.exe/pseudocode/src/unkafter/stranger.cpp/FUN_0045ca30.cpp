// Name: unkafter_stranger.cpp_FUN_0045ca30
// Address: 0045ca30
// Address Range: [[0045ca30, 0045d085]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045ca30(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_stranger_cpp_FUN_0045ca30(CHero *param_1)

{
  CMotionController *this_ptr;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_10a0 [1003];
  char *pcVar8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float afStack_b4 [5];
  uint uStack_a0;
  float afStack_9c [5];
  uint uStack_88;
  float afStack_84 [5];
  uint uStack_70;
  float afStack_6c [4];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float afStack_4c [6];
  uint uStack_34;
  float afStack_30 [4];
  float fStack_20;
  uint uStack_1c;
  
  uVar1 = g_CDoorClassInfo.name_hash;
  bVar7 = 0;
  switch(*(uint *)(param_1 + 0x255f0)) {
  case 1:
  case 2:
  case 9:
    core_hero_cpp_FUN_004d03b0(param_1);
    core_hero_cpp_FUN_004cf200(param_1);
    return;
  case 3:
    *(uint *)(param_1 + 0x10a74) = 0;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)(param_1 + 0x255f4),uVar1);
    *(int *)(param_1 + 0x25604) = iVar2;
    if (iVar2 == 0) {
      shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004cf200(param_1);
      return;
    }
    iVar2 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004925c0((CRuleList *)(iVar2 + 0x5d4));
    if (iVar2 == 0) {
      switch(*(uint *)(param_1 + 0x255fc)) {
      case 0:
        break;
      default:
        core_hero_cpp_FUN_004cf230(param_1);
        core_hero_cpp_FUN_004cf200(param_1);
        return;
      case 2:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)(param_1 + 0x2b4),0x1f,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        core_hero_cpp_FUN_004cf200(param_1);
        return;
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)(param_1 + 0x2b4),0x20,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        core_hero_cpp_FUN_004cf200(param_1);
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)(param_1 + 0x2b4),0x1d,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        core_hero_cpp_FUN_004cf200(param_1);
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)(param_1 + 0x2b4),0x1e,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        core_hero_cpp_FUN_004cf200(param_1);
        return;
      }
    }
    *(uint *)(param_1 + 0x25604) = 0;
    core_hero_cpp_FUN_004cf200(param_1);
    return;
  case 4:
    iVar2 = *(int *)(param_1 + 0x255f4);
    *(int *)(param_1 + 0x25608) = iVar2;
    if (iVar2 != 0) {
      uVar4 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x8c))(iVar2,param_1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x25608) + 0x2b0) + 0x24))
                (*(int *)(param_1 + 0x25608));
      puVar5 = (uint *)&stack0xffffff18;
      puVar6 = &uStack_d0;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (param_1 + 0x2570c != (CHero *)&uStack_d0) {
        *(uint *)(param_1 + 0x2570c) = uStack_d0;
        *(uint *)(param_1 + 0x25710) = uStack_cc;
        *(uint *)(param_1 + 0x25714) = uStack_c8;
      }
      if (param_1 + 0x25718 != (CHero *)&uStack_c4) {
        *(uint *)(param_1 + 0x25718) = uStack_c4;
        *(uint *)(param_1 + 0x2571c) = uStack_c0;
        *(uint *)(param_1 + 0x25720) = uStack_bc;
      }
      afStack_30[2] = *(float *)(param_1 + 0x2570c) + *(float *)(param_1 + 0x25718);
      afStack_30[3] = *(float *)(param_1 + 0x25710) + *(float *)(param_1 + 0x2571c);
      fStack_20 = *(float *)(param_1 + 0x25714) + *(float *)(param_1 + 0x25720);
      fStack_58 = *(float *)(param_1 + 0x2570c) + *(float *)(param_1 + 0x25718);
      afStack_6c[(uint)bVar7 * -2 + 6] = afStack_30[(uint)bVar7 * -2 + 3];
      afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      afStack_6c[2] = fStack_58 * _DAT_005d07b7;
      afStack_6c[3] = fStack_54 * _DAT_005d07b7;
      fStack_5c = fStack_50 * _DAT_005d07b7;
      afStack_4c[0] = fStack_58 * _DAT_005d07b7;
      afStack_6c[(uint)bVar7 * -2 + 9] = afStack_6c[(uint)bVar7 * -2 + 3];
      afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_actor_cpp_FUN_00408d70(*(uint *)(param_1 + 0x25608),afStack_6c + 8);
      puVar5 = &uStack_34;
      uStack_34 = uStack_b8;
      afStack_30[(uint)bVar7 * -2] = afStack_b4[(uint)bVar7 * -2];
      afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408de0(param_1,puVar5);
      uStack_70 = afStack_9c[2];
      afStack_6c[(uint)bVar7 * -2] = afStack_9c[(uint)bVar7 * -2 + 3];
      afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if (param_1 + 0x25700 != (CHero *)&uStack_70) {
        *(uint *)(param_1 + 0x25700) = uStack_70;
        *(float *)(param_1 + 0x25704) = afStack_6c[0];
        *(float *)(param_1 + 0x25708) = afStack_6c[1];
      }
      switch(uVar4) {
      case 1:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)(param_1 + 0x2b4),0x1b,1);
        uVar4 = *(uint *)(param_1 + 0x25608);
        pcVar8 = "Rummaging %s\n";
        break;
      case 2:
      case 3:
      case 4:
        iVar2 = *(int *)(param_1 + 0x25608);
        if ((iVar2 == 0) ||
           (iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x8c))(iVar2,param_1), iVar2 != 4)) {
          this_ptr = (CMotionController *)(param_1 + 0x2b4);
          if (*(float *)(param_1 + 0x25704) <= (float)_DAT_005d07c7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,0x13,1);
            uVar4 = *(uint *)(param_1 + 0x25608);
            pcVar8 = "Picking up %s off ground\n";
          }
          else {
            core_skeleton_cpp_FUN_005469a0(this_ptr,_DAT_01b4d290);
            core_skeleton_cpp_FUN_005469a0(this_ptr,_DAT_01b4d268);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,0x15,1);
            uVar4 = *(uint *)(param_1 + 0x25608);
            pcVar8 = "Picking up %s waist level\n";
          }
        }
        else {
          core_actor_cpp_FUN_00408de0(*(uint *)(param_1 + 0x25608),param_1 + 0x20);
          uStack_a0 = afStack_84[2];
          afStack_9c[(uint)bVar7 * -2] = afStack_84[(uint)bVar7 * -2 + 3];
          afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          *(uint *)(param_1 + 0x256f0) = (uint)(0.0 < afStack_9c[1]);
          if (*(float *)(param_1 + 0x25704) <= (float)_DAT_005d07bf) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)(param_1 + 0x2b4),0x17,1);
            uVar4 = *(uint *)(param_1 + 0x25608);
            pcVar8 = "Picking up heavy %s crate\n";
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)(param_1 + 0x2b4),0x18,1);
            core_actor_cpp_FUN_00408de0(param_1,*(int *)(param_1 + 0x25608) + 0x20);
            uStack_88 = uStack_1c;
            afStack_84[(uint)bVar7 * -2] = afStack_30[(uint)bVar7 * -2 + 6];
            afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            if (param_1 + 0x25700 != (CHero *)&uStack_88) {
              *(uint *)(param_1 + 0x25700) = uStack_88;
              *(float *)(param_1 + 0x25704) = afStack_84[0];
              *(float *)(param_1 + 0x25708) = afStack_84[1];
            }
            uVar4 = *(uint *)(param_1 + 0x25608);
            pcVar8 = "Picking up heavy %s shelf\n";
          }
        }
        break;
      default:
        *(uint *)(param_1 + 0x25608) = 0;
        core_hero_cpp_FUN_004cf200(param_1);
        return;
      }
      engine_console_cpp_FUN_00436710(g_CConsolePtr,pcVar8,uVar4);
      if (*(int *)(param_1 + 0x25608) != 0) {
        *(uint *)(param_1 + 0x256a4) = 4;
        core_hero_cpp_FUN_004cf200(param_1);
        return;
      }
    }
    break;
  case 7:
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"?CDoc::doHeroAction - pull lever\n" + 1);
    uVar1 = g_CLeverClassInfo.name_hash;
    *(uint *)(param_1 + 0x10a74) = 0;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)(param_1 + 0x255f4),uVar1);
    if (iVar2 == 0) {
      shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"CDoc::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004cf200(param_1);
      return;
    }
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"  lever = %s\n",iVar2);
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004925c0((CRuleList *)(iVar2 + 0x57c));
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x25610) = iVar2;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),0x21,1);
      core_hero_cpp_FUN_004cf200(param_1);
      return;
    }
  }
  core_hero_cpp_FUN_004cf200(param_1);
  return;
}
