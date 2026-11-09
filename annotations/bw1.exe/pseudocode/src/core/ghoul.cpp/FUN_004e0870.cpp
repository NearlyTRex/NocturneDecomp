// Name: core_ghoul.cpp_FUN_004e0870
// Address: 004e0870
// Address Range: [[004e0870, 004e0c31]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004e0870(CGhoul *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_FUN_004e0870(CGhoul *param_1,SDamageInfo *param_2)

{
  CGhoul *pCVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  CMotionList *this_ptr;
  int iVar5;
  float10 fVar6;
  char *motion_name;
  char acStack_78 [100];
  float fStack_14;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc2b8);
  if ((*(int *)&param_1->field_0xc2c8 != 0) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&param_1->field_0x158), *(int *)(pSVar2 + 0x24) == 0)
     ) {
    *(uint *)&param_1->field_0xc2cc = 0x41f00000;
    *(uint *)&param_1->field_0xc2c8 = 0;
    *(uint *)&param_1->field_0xc2d0 = 1;
    *(uint *)&param_1->field_0xc2d4 = 0x3f800000;
    if (&param_1->field_0xc2d8 != &param_1->field_0x20) {
      *(uint *)&param_1->field_0xc2d8 = *(uint *)&param_1->field_0x20;
      *(uint *)&param_1->field_0xc2dc = *(uint *)&param_1->field_0x24;
      *(uint *)&param_1->field_0xc2e0 = *(uint *)&param_1->field_0x28;
    }
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"@go berzerk\n" + 1);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    *(uint *)&param_1->field_0xc2c4 = 0x40800000;
  }
  core_ghoul_cpp_CGhoul_processDismemberment_FUN_004e05b0(param_1,param_2);
  iVar5 = *(int *)&param_1->field_0xc1e8;
  if ((iVar5 != 0) &&
     (pCVar1 = (CGhoul *)(**(code **)(*(int *)(iVar5 + 0x154) + 0xf4))(iVar5), pCVar1 == param_1)) {
    (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf0))
              (*(int *)&param_1->field_0xc1e8);
  }
  *(float *)&param_1->field_0x2538 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc2b4 * 4) == 0) {
    *(uint *)&param_1->field_0x2538 = 0;
  }
  if (*(float *)&param_1->field_0x2538 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    if (*(int *)&param_1->field_0xc258 != 0) {
      core_charactr_cpp_FUN_00430c40((CCharacter *)param_1);
      core_enemy_cpp_FUN_004a0f00(param_1,param_2);
      return;
    }
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    if ((*(int *)(pSVar2 + 0x24) != 10) && (*(int *)(pSVar2 + 0x24) != 9)) {
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc2b4 * 4) == 0) {
        *(uint *)&param_1->field_0xc284 = 0;
      }
      else {
        *(int *)&param_1->field_0xc284 = *(int *)&param_1->field_0xc284 + -1;
      }
      iVar5 = 6;
      if (*(int *)&param_1->field_0x3004 < 1) {
        iVar3 = core_actor_cpp_FUN_0040cd00(0.5);
        if (iVar3 != 0) {
          iVar5 = 7;
        }
      }
      else {
        iVar3 = 0;
        pCVar1 = param_1;
        if (0 < *(int *)&param_1->field_0x3004) {
          do {
            if (*(int *)&pCVar1->field_0x3008 == *(int *)&param_1->field_0xc2b0) {
              iVar5 = 8;
              break;
            }
            iVar3 = iVar3 + 1;
            pCVar1 = (CGhoul *)&pCVar1->field_0x38;
          } while (iVar3 < *(int *)&param_1->field_0x3004);
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,iVar5,1);
      iVar5 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc2c0);
      if (iVar5 == 0) {
        uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"ghoul-die-!-?.wav @1.6");
        *(uint *)&param_1->field_0xc2c0 = uVar4;
      }
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40800000,0x41200000);
      fVar6 = (float10)fStack_14 * (float10)_DAT_005e3e01;
      *(uint *)&param_1->field_0xc274 = 0xa0000;
      iVar5 = round(0x32,0x41c80000);
      *(int *)&param_1->field_0xc270 = (int)ROUND(fVar6);
      (**(code **)(iVar5 + 0xa8))(param_1);
    }
  }
  else {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    iVar5 = *(int *)(pSVar2 + 0x24);
    if (((iVar5 == 0) || (iVar5 == 0xb || (iVar5 == 0xc || iVar5 == 2))) ||
       (iVar5 = core_actor_cpp_FUN_0040cd00(0.25), iVar5 != 0)) {
      iVar3 = 1;
      iVar5 = core_actor_cpp_FUN_0040cd00(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,(iVar5 == 0) + 3,iVar3);
    }
    else {
      iVar5 = core_actor_cpp_FUN_0040cc60(1,2);
      FUN_005bfb40(acStack_78,"guul flinch%d",iVar5);
      iVar5 = 1;
      motion_name = acStack_78;
      this_ptr = core_motion_cpp_FUN_00524a00((CMotionController *)&param_1->field_0x158);
      iVar5 = core_motion_cpp_FUN_005240c0(this_ptr,motion_name,iVar5);
      *(uint *)&param_1->field_0xc27c = 0x3f800000;
      *(int *)&param_1->field_0xc280 = iVar5;
    }
    iVar5 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc2bc);
    if (iVar5 == 0) {
      uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ghoul-mad-!-?.wav");
      *(uint *)&param_1->field_0xc2bc = uVar4;
      core_enemy_cpp_FUN_004a0f00(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
