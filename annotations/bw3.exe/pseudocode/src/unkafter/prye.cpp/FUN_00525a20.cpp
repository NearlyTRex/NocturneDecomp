// Name: unkafter_prye.cpp_FUN_00525a20
// Address: 00525a20
// Address Range: [[00525a20, 00526075]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_00525a20(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_prye_cpp_FUN_00525a20(CHero *param_1)

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
  switch(*(uint *)(param_1 + 0x20b68)) {
  case 1:
  case 2:
  case 10:
    core_hero_cpp_FUN_004d4520(param_1);
    core_hero_cpp_FUN_004d3210(param_1);
    return;
  case 3:
    *(uint *)(param_1 + 0xcde0) = 0;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)(param_1 + 0x20b6c),uVar1);
    *(int *)(param_1 + 0x20b94) = iVar2;
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    iVar2 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0((CRuleList *)(iVar2 + 0x478));
    if (iVar2 == 0) {
      switch(*(uint *)(param_1 + 0x20b74)) {
      case 0:
        break;
      default:
        core_hero_cpp_FUN_004d3250(param_1);
        core_hero_cpp_FUN_004d3210(param_1);
        return;
      case 2:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)(param_1 + 0x158),0x2a,1);
        *(uint *)(param_1 + 0x20b64) = 5;
        core_hero_cpp_FUN_004d3210(param_1);
        return;
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)(param_1 + 0x158),0x2b,1);
        *(uint *)(param_1 + 0x20b64) = 5;
        core_hero_cpp_FUN_004d3210(param_1);
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)(param_1 + 0x158),0x28,1);
        *(uint *)(param_1 + 0x20b64) = 5;
        core_hero_cpp_FUN_004d3210(param_1);
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)(param_1 + 0x158),0x29,1);
        *(uint *)(param_1 + 0x20b64) = 5;
        core_hero_cpp_FUN_004d3210(param_1);
        return;
      }
    }
    *(uint *)(param_1 + 0x20b94) = 0;
    core_hero_cpp_FUN_004d3210(param_1);
    return;
  case 4:
    iVar2 = *(int *)(param_1 + 0x20b6c);
    *(int *)(param_1 + 0x20b98) = iVar2;
    if (iVar2 != 0) {
      uVar4 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x84))(iVar2,param_1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x20b98) + 0x154) + 0x1c))
                (*(int *)(param_1 + 0x20b98));
      puVar5 = (uint *)&stack0xffffff18;
      puVar6 = &uStack_d0;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (param_1 + 0x20c98 != (CHero *)&uStack_d0) {
        *(uint *)(param_1 + 0x20c98) = uStack_d0;
        *(uint *)(param_1 + 0x20c9c) = uStack_cc;
        *(uint *)(param_1 + 0x20ca0) = uStack_c8;
      }
      if (param_1 + 0x20ca4 != (CHero *)&uStack_c4) {
        *(uint *)(param_1 + 0x20ca4) = uStack_c4;
        *(uint *)(param_1 + 0x20ca8) = uStack_c0;
        *(uint *)(param_1 + 0x20cac) = uStack_bc;
      }
      afStack_30[2] = *(float *)(param_1 + 0x20c98) + *(float *)(param_1 + 0x20ca4);
      afStack_30[3] = *(float *)(param_1 + 0x20c9c) + *(float *)(param_1 + 0x20ca8);
      fStack_20 = *(float *)(param_1 + 0x20ca0) + *(float *)(param_1 + 0x20cac);
      fStack_58 = *(float *)(param_1 + 0x20c98) + *(float *)(param_1 + 0x20ca4);
      afStack_6c[(uint)bVar7 * -2 + 6] = afStack_30[(uint)bVar7 * -2 + 3];
      afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      afStack_6c[2] = fStack_58 * _DAT_005cd947;
      afStack_6c[3] = fStack_54 * _DAT_005cd947;
      fStack_5c = fStack_50 * _DAT_005cd947;
      afStack_4c[0] = fStack_58 * _DAT_005cd947;
      afStack_6c[(uint)bVar7 * -2 + 9] = afStack_6c[(uint)bVar7 * -2 + 3];
      afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_actor_cpp_FUN_00408b80(*(uint *)(param_1 + 0x20b98),afStack_6c + 8);
      puVar5 = &uStack_34;
      uStack_34 = uStack_b8;
      afStack_30[(uint)bVar7 * -2] = afStack_b4[(uint)bVar7 * -2];
      afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408bf0(param_1,puVar5);
      uStack_70 = afStack_9c[2];
      afStack_6c[(uint)bVar7 * -2] = afStack_9c[(uint)bVar7 * -2 + 3];
      afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if (param_1 + 0x20c8c != (CHero *)&uStack_70) {
        *(uint *)(param_1 + 0x20c8c) = uStack_70;
        *(float *)(param_1 + 0x20c90) = afStack_6c[0];
        *(float *)(param_1 + 0x20c94) = afStack_6c[1];
      }
      switch(uVar4) {
      case 1:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)(param_1 + 0x158),0x26,1);
        uVar4 = *(uint *)(param_1 + 0x20b98);
        pcVar8 = "Rummaging %s\n";
        break;
      case 2:
      case 3:
      case 4:
        iVar2 = *(int *)(param_1 + 0x20b98);
        if ((iVar2 == 0) ||
           (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x84))(iVar2,param_1), iVar2 != 4)) {
          this_ptr = (CMotionController *)(param_1 + 0x158);
          if (*(float *)(param_1 + 0x20c90) <= (float)_DAT_005cd957) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,0x1e,1);
            uVar4 = *(uint *)(param_1 + 0x20b98);
            pcVar8 = "Picking up %s off ground\n";
          }
          else {
            core_skeleton_cpp_FUN_0054dbd0(this_ptr,_DAT_01ed3714);
            core_skeleton_cpp_FUN_0054dbd0(this_ptr,_DAT_01ed36ec);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,0x20,1);
            uVar4 = *(uint *)(param_1 + 0x20b98);
            pcVar8 = "Picking up %s waist level\n";
          }
        }
        else {
          core_actor_cpp_FUN_00408bf0(*(uint *)(param_1 + 0x20b98),param_1 + 0x20);
          uStack_a0 = afStack_84[2];
          afStack_9c[(uint)bVar7 * -2] = afStack_84[(uint)bVar7 * -2 + 3];
          afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          *(uint *)(param_1 + 0x20c7c) = (uint)(0.0 < afStack_9c[1]);
          if (*(float *)(param_1 + 0x20c90) <= (float)_DAT_005cd94f) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)(param_1 + 0x158),0x22,1);
            uVar4 = *(uint *)(param_1 + 0x20b98);
            pcVar8 = "Picking up heavy %s crate\n";
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)(param_1 + 0x158),0x23,1);
            core_actor_cpp_FUN_00408bf0(param_1,*(int *)(param_1 + 0x20b98) + 0x20);
            uStack_88 = uStack_1c;
            afStack_84[(uint)bVar7 * -2] = afStack_30[(uint)bVar7 * -2 + 6];
            afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            if (param_1 + 0x20c8c != (CHero *)&uStack_88) {
              *(uint *)(param_1 + 0x20c8c) = uStack_88;
              *(float *)(param_1 + 0x20c90) = afStack_84[0];
              *(float *)(param_1 + 0x20c94) = afStack_84[1];
            }
            uVar4 = *(uint *)(param_1 + 0x20b98);
            pcVar8 = "Picking up heavy %s shelf\n";
          }
        }
        break;
      default:
        *(uint *)(param_1 + 0x20b98) = 0;
        core_hero_cpp_FUN_004d3210(param_1);
        return;
      }
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,pcVar8,uVar4);
      if (*(int *)(param_1 + 0x20b98) != 0) {
        *(uint *)(param_1 + 0x20b64) = 4;
        core_hero_cpp_FUN_004d3210(param_1);
        return;
      }
    }
    break;
  case 8:
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"?CPrye::doHeroAction - pull lever\n" + 1);
    uVar1 = g_CLeverClassInfo.name_hash;
    *(uint *)(param_1 + 0xcde0) = 0;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)(param_1 + 0x20b6c),uVar1);
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CPrye::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  lever = %s\n",iVar2);
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0((CRuleList *)(iVar2 + 0x420));
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x20ba0) = iVar2;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 0x158),0x2c,1);
      core_hero_cpp_FUN_004d3210(param_1);
      return;
    }
  }
  core_hero_cpp_FUN_004d3210(param_1);
  return;
}
