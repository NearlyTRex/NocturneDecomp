// Name: core_doc.cpp_FUN_00474fc0
// Address: 00474fc0
// Address Range: [[00474fc0, 00475615]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00474fc0(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00474fc0(CHero *param_1)

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
  switch(*(uint *)(param_1 + 0x1ff60)) {
  case 1:
  case 2:
  case 9:
    core_hero_cpp_FUN_004ec640(param_1);
    core_hero_cpp_FUN_004eb5b0(param_1);
    return;
  case 3:
    *(uint *)(param_1 + 0xc1e4) = 0;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x1ff64),uVar1);
    *(int *)(param_1 + 0x1ff74) = iVar2;
    if (iVar2 == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    iVar2 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30((CRuleList *)(iVar2 + 0x478));
    if (iVar2 == 0) {
      switch(*(uint *)(param_1 + 0x1ff6c)) {
      case 0:
        break;
      default:
        core_hero_cpp_FUN_004eb5e0(param_1);
        core_hero_cpp_FUN_004eb5b0(param_1);
        return;
      case 2:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)(param_1 + 0x158),0x22,1);
        *(uint *)(param_1 + 0x1ff5c) = 5;
        core_hero_cpp_FUN_004eb5b0(param_1);
        return;
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)(param_1 + 0x158),0x23,1);
        *(uint *)(param_1 + 0x1ff5c) = 5;
        core_hero_cpp_FUN_004eb5b0(param_1);
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)(param_1 + 0x158),0x20,1);
        *(uint *)(param_1 + 0x1ff5c) = 5;
        core_hero_cpp_FUN_004eb5b0(param_1);
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)(param_1 + 0x158),0x21,1);
        *(uint *)(param_1 + 0x1ff5c) = 5;
        core_hero_cpp_FUN_004eb5b0(param_1);
        return;
      }
    }
    *(uint *)(param_1 + 0x1ff74) = 0;
    core_hero_cpp_FUN_004eb5b0(param_1);
    return;
  case 4:
    iVar2 = *(int *)(param_1 + 0x1ff64);
    *(int *)(param_1 + 0x1ff78) = iVar2;
    if (iVar2 != 0) {
      uVar4 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x84))(iVar2,param_1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1ff78) + 0x154) + 0x1c))
                (*(int *)(param_1 + 0x1ff78));
      puVar5 = (uint *)&stack0xffffff18;
      puVar6 = &uStack_d0;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (param_1 + 0x20078 != (CHero *)&uStack_d0) {
        *(uint *)(param_1 + 0x20078) = uStack_d0;
        *(uint *)(param_1 + 0x2007c) = uStack_cc;
        *(uint *)(param_1 + 0x20080) = uStack_c8;
      }
      if (param_1 + 0x20084 != (CHero *)&uStack_c4) {
        *(uint *)(param_1 + 0x20084) = uStack_c4;
        *(uint *)(param_1 + 0x20088) = uStack_c0;
        *(uint *)(param_1 + 0x2008c) = uStack_bc;
      }
      afStack_30[2] = *(float *)(param_1 + 0x20078) + *(float *)(param_1 + 0x20084);
      afStack_30[3] = *(float *)(param_1 + 0x2007c) + *(float *)(param_1 + 0x20088);
      fStack_20 = *(float *)(param_1 + 0x20080) + *(float *)(param_1 + 0x2008c);
      fStack_58 = *(float *)(param_1 + 0x20078) + *(float *)(param_1 + 0x20084);
      afStack_6c[(uint)bVar7 * -2 + 6] = afStack_30[(uint)bVar7 * -2 + 3];
      afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      afStack_6c[2] = fStack_58 * _DAT_005da59c;
      afStack_6c[3] = fStack_54 * _DAT_005da59c;
      fStack_5c = fStack_50 * _DAT_005da59c;
      afStack_4c[0] = fStack_58 * _DAT_005da59c;
      afStack_6c[(uint)bVar7 * -2 + 9] = afStack_6c[(uint)bVar7 * -2 + 3];
      afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_actor_cpp_FUN_00408b40(*(uint *)(param_1 + 0x1ff78),afStack_6c + 8);
      puVar5 = &uStack_34;
      uStack_34 = uStack_b8;
      afStack_30[(uint)bVar7 * -2] = afStack_b4[(uint)bVar7 * -2];
      afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408bb0(param_1,puVar5);
      uStack_70 = afStack_9c[2];
      afStack_6c[(uint)bVar7 * -2] = afStack_9c[(uint)bVar7 * -2 + 3];
      afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if (param_1 + 0x2006c != (CHero *)&uStack_70) {
        *(uint *)(param_1 + 0x2006c) = uStack_70;
        *(float *)(param_1 + 0x20070) = afStack_6c[0];
        *(float *)(param_1 + 0x20074) = afStack_6c[1];
      }
      switch(uVar4) {
      case 1:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)(param_1 + 0x158),0x1e,1);
        uVar4 = *(uint *)(param_1 + 0x1ff78);
        pcVar8 = "Rummaging %s\n";
        break;
      case 2:
      case 3:
      case 4:
        iVar2 = *(int *)(param_1 + 0x1ff78);
        if ((iVar2 == 0) ||
           (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x84))(iVar2,param_1), iVar2 != 4)) {
          this_ptr = (CMotionController *)(param_1 + 0x158);
          if (*(float *)(param_1 + 0x20070) <= (float)_DAT_005da5ac) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,0x16,1);
            uVar4 = *(uint *)(param_1 + 0x1ff78);
            pcVar8 = "Picking up %s off ground\n";
          }
          else {
            core_skeleton_cpp_FUN_00569040(this_ptr,_DAT_01b6884c);
            core_skeleton_cpp_FUN_00569040(this_ptr,_DAT_01b68824);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,0x18,1);
            uVar4 = *(uint *)(param_1 + 0x1ff78);
            pcVar8 = "Picking up %s waist level\n";
          }
        }
        else {
          core_actor_cpp_FUN_00408bb0(*(uint *)(param_1 + 0x1ff78),param_1 + 0x20);
          uStack_a0 = afStack_84[2];
          afStack_9c[(uint)bVar7 * -2] = afStack_84[(uint)bVar7 * -2 + 3];
          afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          *(uint *)(param_1 + 0x2005c) = (uint)(0.0 < afStack_9c[1]);
          if (*(float *)(param_1 + 0x20070) <= (float)_DAT_005da5a4) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)(param_1 + 0x158),0x1a,1);
            uVar4 = *(uint *)(param_1 + 0x1ff78);
            pcVar8 = "Picking up heavy %s crate\n";
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)(param_1 + 0x158),0x1b,1);
            core_actor_cpp_FUN_00408bb0(param_1,*(int *)(param_1 + 0x1ff78) + 0x20);
            uStack_88 = uStack_1c;
            afStack_84[(uint)bVar7 * -2] = afStack_30[(uint)bVar7 * -2 + 6];
            afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            if (param_1 + 0x2006c != (CHero *)&uStack_88) {
              *(uint *)(param_1 + 0x2006c) = uStack_88;
              *(float *)(param_1 + 0x20070) = afStack_84[0];
              *(float *)(param_1 + 0x20074) = afStack_84[1];
            }
            uVar4 = *(uint *)(param_1 + 0x1ff78);
            pcVar8 = "Picking up heavy %s shelf\n";
          }
        }
        break;
      default:
        *(uint *)(param_1 + 0x1ff78) = 0;
        core_hero_cpp_FUN_004eb5b0(param_1);
        return;
      }
      engine_console_cpp_FUN_00445430(g_CConsolePtr,pcVar8,uVar4);
      if (*(int *)(param_1 + 0x1ff78) != 0) {
        *(uint *)(param_1 + 0x1ff5c) = 4;
        core_hero_cpp_FUN_004eb5b0(param_1);
        return;
      }
    }
    break;
  case 7:
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"?CDoc::doHeroAction - pull lever\n" + 1);
    uVar1 = g_CLeverClassInfo.name_hash;
    *(uint *)(param_1 + 0xc1e4) = 0;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x1ff64),uVar1);
    if (iVar2 == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CDoc::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"  lever = %s\n",iVar2);
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30((CRuleList *)(iVar2 + 0x420));
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x1ff80) = iVar2;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),0x24,1);
      core_hero_cpp_FUN_004eb5b0(param_1);
      return;
    }
  }
  core_hero_cpp_FUN_004eb5b0(param_1);
  return;
}
