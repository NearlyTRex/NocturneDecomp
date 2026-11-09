// Name: core_ghoul.cpp_FUN_004c9400
// Address: 004c9400
// Address Range: [[004c9400, 004c97c1]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004c9400(CGhoul *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_FUN_004c9400(CGhoul *param_1,SDamageInfo *param_2)

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
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd0a4);
  if ((*(int *)&param_1->field_0xd0b4 != 0) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                         ((CMotionController *)&param_1->field_0x158), *(int *)(pSVar2 + 0x24) == 0)
     ) {
    *(uint *)&param_1->field_0xd0b8 = 0x41f00000;
    *(uint *)&param_1->field_0xd0b4 = 0;
    *(uint *)&param_1->field_0xd0bc = 1;
    *(uint *)&param_1->field_0xd0c0 = 0x3f800000;
    if (&param_1->field_0xd0c4 != &param_1->field_0x20) {
      *(uint *)&param_1->field_0xd0c4 = *(uint *)&param_1->field_0x20;
      *(uint *)&param_1->field_0xd0c8 = *(uint *)&param_1->field_0x24;
      *(uint *)&param_1->field_0xd0cc = *(uint *)&param_1->field_0x28;
    }
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"@go berzerk\n" + 1);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    *(uint *)&param_1->field_0xd0b0 = 0x40800000;
  }
  core_ghoul_cpp_CGhoul_processDismemberment_FUN_004c9140(param_1,param_2);
  iVar5 = *(int *)&param_1->field_0xcde4;
  if ((iVar5 != 0) &&
     (pCVar1 = (CGhoul *)(**(code **)(*(int *)(iVar5 + 0x154) + 0xf4))(iVar5), pCVar1 == param_1)) {
    (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf0))
              (*(int *)&param_1->field_0xcde4);
  }
  *(float *)&param_1->field_0x2538 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd0a0 * 4) == 0) {
    *(uint *)&param_1->field_0x2538 = 0;
  }
  if (*(float *)&param_1->field_0x2538 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    if (*(int *)&param_1->field_0xce54 != 0) {
      core_charactr_cpp_FUN_0042ff70(param_1);
      core_enemy_cpp_FUN_00489b80(param_1,param_2);
      return;
    }
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&param_1->field_0x158);
    if ((*(int *)(pSVar2 + 0x24) != 10) && (*(int *)(pSVar2 + 0x24) != 9)) {
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd0a0 * 4) == 0) {
        *(uint *)&param_1->field_0xd070 = 0;
      }
      else {
        *(int *)&param_1->field_0xd070 = *(int *)&param_1->field_0xd070 + -1;
      }
      iVar5 = 6;
      if (*(int *)&param_1->field_0x3284 < 1) {
        iVar3 = core_actor_cpp_FUN_0040cf40(0.5);
        if (iVar3 != 0) {
          iVar5 = 7;
        }
      }
      else {
        iVar3 = 0;
        pCVar1 = param_1;
        if (0 < *(int *)&param_1->field_0x3284) {
          do {
            if (*(int *)&pCVar1->field_0x3288 == *(int *)&param_1->field_0xd09c) {
              iVar5 = 8;
              break;
            }
            iVar3 = iVar3 + 1;
            pCVar1 = (CGhoul *)&pCVar1->field_0x38;
          } while (iVar3 < *(int *)&param_1->field_0x3284);
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,iVar5,1);
      iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd0ac);
      if (iVar5 == 0) {
        uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"ghoul-die-!-?.wav @1.6");
        *(uint *)&param_1->field_0xd0ac = uVar4;
      }
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x40800000,0x41200000);
      fVar6 = (float10)fStack_14 * (float10)_DAT_005c440d;
      *(uint *)&param_1->field_0xd060 = 0xa0000;
      iVar5 = round(0x32,0x41c80000);
      *(int *)&param_1->field_0xd05c = (int)ROUND(fVar6);
      (**(code **)(iVar5 + 0xa8))(param_1);
    }
  }
  else {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&param_1->field_0x158);
    iVar5 = *(int *)(pSVar2 + 0x24);
    if (((iVar5 == 0) || (iVar5 == 0xb || (iVar5 == 0xc || iVar5 == 2))) ||
       (iVar5 = core_actor_cpp_FUN_0040cf40(0.25), iVar5 != 0)) {
      iVar3 = 1;
      iVar5 = core_actor_cpp_FUN_0040cf40(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,(iVar5 == 0) + 3,iVar3);
    }
    else {
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(1,2);
      FUN_005a28c0(acStack_78,"guul flinch%d",iVar5);
      iVar5 = 1;
      motion_name = acStack_78;
      this_ptr = core_motion_cpp_FUN_004fc310((CMotionController *)&param_1->field_0x158);
      iVar5 = core_motion_cpp_FUN_004fb9c0(this_ptr,motion_name,iVar5);
      *(uint *)&param_1->field_0xd068 = 0x3f800000;
      *(int *)&param_1->field_0xd06c = iVar5;
    }
    iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd0a8);
    if (iVar5 == 0) {
      uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ghoul-mad-!-?.wav");
      *(uint *)&param_1->field_0xd0a8 = uVar4;
      core_enemy_cpp_FUN_00489b80(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
