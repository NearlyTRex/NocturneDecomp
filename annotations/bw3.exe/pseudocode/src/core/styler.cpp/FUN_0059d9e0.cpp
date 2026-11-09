// Name: core_styler.cpp_FUN_0059d9e0
// Address: 0059d9e0
// Address Range: [[0059d9e0, 0059dda1]]
// Convention: unknown
// Signature: void core_styler_cpp_FUN_0059d9e0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_styler_cpp_FUN_0059d9e0(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  float fVar3;
  CDemonMission *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  byte bVar7;
  float afStackY_1064 [1014];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar7 = 0;
  if (1.0 <= *(float *)&param_1[5].field_0x82c8) {
    return;
  }
  iVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_80 = param_2 * *(float *)(param_1 + 1);
  while (0.0 < fStack_80) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&stack0xffffff80);
    core_charactr_cpp_FUN_00433fb0(param_1,iVar5);
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  iVar5 = *(int *)(pSVar6 + 0x24);
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)(param_1 + 1));
  if (iVar5 == 4) {
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005d9f19;
  }
  iVar5 = core_charactr_cpp_FUN_00431660(param_1,param_2);
  if (iVar5 == 0) {
    if (1.0 <= *(float *)&param_1[5].field_0x82c8) {
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&param_1->field_0x158);
    iVar5 = *(int *)(pSVar6 + 0x24);
    if ((((iVar5 == 0x99) || (iVar5 == 0x9a)) && (iVar5 == 0x9a)) &&
       (((*(int *)&param_1[5].field_0x7694 == 0 &&
         (fVar3 = param_2 * (float)_DAT_005d9f21 + *(float *)&param_1[5].field_0x82c8,
         *(float *)&param_1[5].field_0x82c8 = fVar3, 1.0 <= fVar3)) &&
        (*(CDemonActor **)&param_1[5].field_0x7698 != (CDemonActor *)0x0)))) {
      core_mission_cpp_FUN_004f6930(0x01D81080,*(CDemonActor **)&param_1[5].field_0x7698);
      pCVar4 = 0x01D81080;
      *(uint *)&param_1[5].field_0x7698 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,param_1,1);
    }
    if (iVar5 != 0) {
      core_actor_cpp_FUN_00408b00(param_1,&param_1->field_0x249c);
      puVar1 = &param_1->field_0x20;
      fStack_40 = fStack_34;
      afStack_60[(uint)bVar7 * -2 + 9] = afStack_60[(uint)bVar7 * -2 + 0xc];
      afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      *(float *)puVar1 = *(float *)puVar1 + fStack_40;
      *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_3c;
      *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_38;
      iVar5 = *(int *)&param_1[5].field_0x7698;
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 0x20) = *(uint *)puVar1;
        *(uint *)(iVar5 + 0x24) = *(uint *)&param_1->field_0x24;
        *(uint *)(iVar5 + 0x28) = *(uint *)&param_1->field_0x28;
        *(uint *)(iVar5 + 0x2c) = *(uint *)&param_1->field_0x2c;
      }
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433350(param_1,param_2);
    goto LAB_0059db1e;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0059daf3:
      iVar5 = 1;
    }
    else {
LAB_0059dc5c:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar5,1);
  }
  else {
    if (uVar2 < 3) goto LAB_0059daf3;
    if (uVar2 != 3) goto LAB_0059dc5c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_0059db1e:
  core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
  afStack_60[2] = *(float *)&param_1->field_0x2518 * param_2;
  afStack_60[3] = *(float *)&param_1->field_0x251c * param_2;
  fStack_50 = *(float *)&param_1->field_0x2520 * param_2;
  fStack_64 = afStack_60[2];
  afStack_60[(uint)bVar7 * 0xfffffffe] = afStack_60[(uint)bVar7 * -2 + 3];
  afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  fStack_28 = fStack_64 + *(float *)&param_1->field_0x250c;
  fStack_24 = afStack_60[0] + *(float *)&param_1->field_0x2510;
  fStack_20 = afStack_60[1] + *(float *)&param_1->field_0x2514;
  fStack_7c = fStack_28;
  *(float *)((int)&stack0xffffff88 + (uint)bVar7 * -8) = afStack_60[(uint)bVar7 * -2 + 0xf];
  *(float *)((int)&stack0xffffff8c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  fStack_4c = fStack_7c + *(float *)&param_1->field_0x249c;
  fStack_48 = fStack_78 + *(float *)&param_1->field_0x24a0;
  fStack_44 = fStack_74 + *(float *)&param_1->field_0x24a4;
  CStack_70._0_4_ = fStack_4c;
  *(float *)((int)&CStack_70 + (uint)bVar7 * -8 + 4) = afStack_60[(uint)bVar7 * -2 + 6];
  *(float *)((int)&CStack_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  *(uint *)&param_1->field_0x2514 = 0;
  *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_charactr_cpp_FUN_0042c230(param_1,&CStack_70);
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
