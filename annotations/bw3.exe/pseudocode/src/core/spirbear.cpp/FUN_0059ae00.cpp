// Name: core_spirbear.cpp_FUN_0059ae00
// Address: 0059ae00
// Address Range: [[0059ae00, 0059b2a7]]
// Convention: unknown
// Signature: void core_spirbear_cpp_FUN_0059ae00(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_spirbear_cpp_FUN_0059ae00(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  uint uVar3;
  CDemonMission *pCVar4;
  int iVar5;
  CMotionList *this_ptr;
  SMotion *pSVar6;
  byte bVar7;
  float afStackY_1094 [1014];
  CGore *this_ptr_00;
  CVector3f *position;
  char *pcVar8;
  float *pfVar9;
  EBloodType blood_type;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [5];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float afStack_40 [3];
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_14;
  
  bVar7 = 0;
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_b0 = param_2 * *(float *)&param_1[4].field_0xa38;
  uStack_14 = 1;
  while (0.0 < fStack_b0) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&stack0xffffff50);
    core_charactr_cpp_FUN_00433fb0(param_1,iVar5);
  }
  iVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if ((((1 < iVar5) && (*(int *)&param_1->field_0x70 == 1)) &&
      (*(int *)&param_1[4].field_0xa34 == 0)) && (*(int *)&param_1->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
    pfVar9 = afStack_60 + 8;
    afStack_40[0] = (float)uStack_34;
    afStack_60[(uint)bVar7 * -2 + 9] = afStack_60[(uint)bVar7 * -2 + 0xc];
    afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    core_actor_cpp_FUN_00408b80(param_1,pfVar9);
    blood_type = BLOOD_TYPE_RED;
    position = &CStack_70;
    CStack_70._0_4_ = CStack_a0._0_4_;
    *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_a0 + (uint)bVar7 * -8 + 4);
    this_ptr_00 = g_CGorePtr;
    *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_a0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    core_gore_cpp_FUN_004cec40(this_ptr_00,position,blood_type);
    *(uint *)&param_1[4].field_0xa34 = 1;
    uStack_14 = 1;
  }
  fVar2 = *(float *)&param_1[4].field_0xa38;
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * fVar2);
  iVar5 = core_charactr_cpp_FUN_00431660(param_1,param_2);
  puVar1 = &param_1->field_0x158;
  if (iVar5 == 0) {
    if (1.0 <= *(float *)&param_1[4].field_0x1670) {
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)puVar1);
    iVar5 = *(int *)(pSVar6 + 0x24);
    *(int *)&param_1[4].field_0xa3c = iVar5;
    if ((iVar5 == 0x91) || (iVar5 == 0x92)) {
      *(uint *)&param_1->field_0xf8 = 1;
      *(uint *)&param_1->field_0xfc = 0;
    }
    if (((*(int *)&param_1[4].field_0xa3c == 0x91) || (*(int *)&param_1[4].field_0xa3c == 0x92)) &&
       ((*(int *)&param_1[4].field_0xa3c == 0x92 &&
        ((fVar2 = param_2 * (float)_DAT_005d9b90 + *(float *)&param_1[4].field_0x1670,
         *(float *)&param_1[4].field_0x1670 = fVar2, 1.0 <= fVar2 &&
         (*(CDemonActor **)&param_1[4].field_0xa40 != (CDemonActor *)0x0)))))) {
      core_mission_cpp_FUN_004f6930(0x01D81080,*(CDemonActor **)&param_1[4].field_0xa40);
      pCVar4 = 0x01D81080;
      *(uint *)&param_1[4].field_0xa40 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,param_1,1);
    }
    if (*(int *)&param_1[4].field_0xa3c != 0) {
      core_actor_cpp_FUN_00408b00(param_1,&param_1->field_0x249c);
      puVar1 = &param_1->field_0x20;
      fStack_7c = afStack_60[2];
      afStack_90[(uint)bVar7 * -2 + 6] = afStack_60[(uint)bVar7 * -2 + 3];
      afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      *(float *)puVar1 = *(float *)puVar1 + fStack_7c;
      *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_78;
      *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_74;
      iVar5 = *(int *)&param_1[4].field_0xa40;
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
    goto LAB_0059af83;
  }
  uVar3 = *(uint *)&param_1->field_0x273c;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_0059af55:
      pcVar8 = &DAT_005d9b85;
    }
    else {
LAB_0059b12a:
      pcVar8 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)&param_1->field_0x158,pcVar8,1);
  }
  else if (uVar3 < 3) {
    iVar5 = 0;
    pcVar8 = &DAT_005d9b81;
    this_ptr = core_motion_cpp_FUN_004fc310((CMotionController *)puVar1);
    iVar5 = core_motion_cpp_FUN_004fba50(this_ptr,pcVar8,iVar5);
    if (iVar5 < 0) goto LAB_0059af55;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)puVar1,iVar5,1);
  }
  else {
    if (uVar3 != 3) goto LAB_0059b12a;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)puVar1,"STAND",1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_0059af83:
  core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
  afStack_90[2] = *(float *)&param_1->field_0x2518 * param_2;
  afStack_90[3] = *(float *)&param_1->field_0x251c * param_2;
  fStack_80 = *(float *)&param_1->field_0x2520 * param_2;
  fStack_ac = afStack_90[2];
  *(float *)((int)&stack0xffffff58 + (uint)bVar7 * -8) = afStack_90[(uint)bVar7 * -2 + 3];
  *(float *)((int)&stack0xffffff5c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  fStack_4c = fStack_ac + *(float *)&param_1->field_0x250c;
  fStack_48 = fStack_a8 + *(float *)&param_1->field_0x2510;
  fStack_44 = fStack_a4 + *(float *)&param_1->field_0x2514;
  fStack_28 = fStack_4c;
  afStack_60[(uint)bVar7 * -2 + 0xf] = afStack_60[(uint)bVar7 * -2 + 6];
  afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  fStack_64 = fStack_28 + *(float *)&param_1->field_0x249c;
  afStack_60[0] = fStack_24 + *(float *)&param_1->field_0x24a0;
  afStack_60[1] = fStack_20 + *(float *)&param_1->field_0x24a4;
  fStack_94 = fStack_64;
  afStack_90[(uint)bVar7 * -2] = afStack_60[(uint)bVar7 * -2];
  afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  *(uint *)&param_1->field_0x2514 = 0;
  *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_charactr_cpp_FUN_0042c230(param_1,(CVector3f *)&fStack_94);
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00432330(param_1,param_2,uStack_14);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
