// Name: core_spirbear.cpp_CSpiritBear_process_FUN_0059ae00
// Address: 0059ae00
// Address Range: [[0059ae00, 0059b2a7]]
// Convention: __cdecl
// Signature: void __cdecl core_spirbear_cpp_CSpiritBear_process_FUN_0059ae00(CSpiritBear *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spirbear_cpp_CSpiritBear_process_FUN_0059ae00(CSpiritBear *this_ptr,float delta_time)

{
  byte *puVar1;
  uint uVar2;
  float fVar3;
  CDemonMission *pCVar4;
  int iVar5;
  CMotionList *this_ptr_00;
  SMotion *pSVar6;
  byte bVar7;
  float afStackY_1094 [1014];
  CGore *this_ptr_01;
  CVector3f *position;
  char *pcVar8;
  float *pfVar9;
  EBloodType blood_type;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [4];
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
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_b0 = delta_time * *(float *)&this_ptr->field_0x34168;
  uStack_14 = 1;
  while (0.0 < fStack_b0) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&this_ptr->field_0x158,&stack0xffffff50);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar5);
  }
  iVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
  if ((((1 < iVar5) && (*(int *)&this_ptr->field_0x70 == 1)) &&
      (*(int *)&this_ptr->field_0x34164 == 0)) && (*(int *)&this_ptr->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_0054dbd0(&this_ptr->field_0x158,0);
    pfVar9 = afStack_60 + 8;
    afStack_40[0] = (float)uStack_34;
    afStack_60[(uint)bVar7 * -2 + 9] = afStack_60[(uint)bVar7 * -2 + 0xc];
    afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar9);
    blood_type = BLOOD_TYPE_RED;
    position = &CStack_70;
    CStack_70.x = fStack_a0;
    *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + 4) =
         *(uint *)(&stack0xffffff64 + (uint)bVar7 * -8);
    this_ptr_01 = g_CGorePtr;
    *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,position,blood_type);
    *(uint *)&this_ptr->field_0x34164 = 1;
    uStack_14 = 1;
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * *(float *)&this_ptr->field_0x34168);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  puVar1 = &this_ptr->field_0x158;
  if (iVar5 == 0) {
    if (1.0 <= *(float *)&this_ptr->field_0x34da0) {
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)puVar1);
    iVar5 = *(int *)(pSVar6 + 0x24);
    *(int *)&this_ptr->field_0x3416c = iVar5;
    if ((iVar5 == 0x91) || (iVar5 == 0x92)) {
      *(uint *)&this_ptr->field_0xf8 = 1;
      *(uint *)&this_ptr->field_0xfc = 0;
    }
    if (((*(int *)&this_ptr->field_0x3416c == 0x91) || (*(int *)&this_ptr->field_0x3416c == 0x92))
       && ((*(int *)&this_ptr->field_0x3416c == 0x92 &&
           ((fVar3 = delta_time * (float)_DAT_005d9b90 + *(float *)&this_ptr->field_0x34da0,
            *(float *)&this_ptr->field_0x34da0 = fVar3, 1.0 <= fVar3 &&
            (*(CDemonActor **)&this_ptr->field_0x34170 != (CDemonActor *)0x0)))))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                (0x01D81080,*(CDemonActor **)&this_ptr->field_0x34170);
      pCVar4 = 0x01D81080;
      *(uint *)&this_ptr->field_0x34170 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,this_ptr,1);
    }
    if (*(int *)&this_ptr->field_0x3416c != 0) {
      core_actor_cpp_FUN_00408b00(this_ptr,&this_ptr->field_0x249c);
      puVar1 = &this_ptr->field_0x20;
      afStack_84[2] = afStack_60[2];
      afStack_84[(uint)bVar7 * -2 + 3] = afStack_60[(uint)bVar7 * -2 + 3];
      afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      *(float *)puVar1 = *(float *)puVar1 + afStack_84[2];
      *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + afStack_84[3];
      *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_74;
      iVar5 = *(int *)&this_ptr->field_0x34170;
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 0x20) = *(uint *)puVar1;
        *(uint *)(iVar5 + 0x24) = *(uint *)&this_ptr->field_0x24;
        *(uint *)(iVar5 + 0x28) = *(uint *)&this_ptr->field_0x28;
        *(uint *)(iVar5 + 0x2c) = *(uint *)&this_ptr->field_0x2c;
      }
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)&this_ptr->field_0x158);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
    goto LAB_0059af83;
  }
  uVar2 = *(uint *)&this_ptr->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0059af55:
      pcVar8 = &DAT_005d9b85;
    }
    else {
LAB_0059b12a:
      pcVar8 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)&this_ptr->field_0x158,pcVar8,1);
  }
  else if (uVar2 < 3) {
    iVar5 = 0;
    pcVar8 = &DAT_005d9b81;
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                            ((CMotionController *)puVar1);
    iVar5 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr_00,pcVar8,iVar5);
    if (iVar5 < 0) goto LAB_0059af55;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)puVar1,iVar5,1);
  }
  else {
    if (uVar2 != 3) goto LAB_0059b12a;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)puVar1,"STAND",1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
LAB_0059af83:
  core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  fStack_88 = *(float *)&this_ptr->field_0x2518 * delta_time;
  afStack_84[0] = *(float *)&this_ptr->field_0x251c * delta_time;
  afStack_84[1] = *(float *)&this_ptr->field_0x2520 * delta_time;
  fStack_ac = fStack_88;
  *(float *)((int)&stack0xffffff58 + (uint)bVar7 * -8) = afStack_84[(uint)bVar7 * -2];
  *(float *)((int)&stack0xffffff5c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_4c = fStack_ac + *(float *)&this_ptr->field_0x250c;
  fStack_48 = fStack_a8 + *(float *)&this_ptr->field_0x2510;
  fStack_44 = fStack_a4 + *(float *)&this_ptr->field_0x2514;
  fStack_28 = fStack_4c;
  afStack_60[(uint)bVar7 * -2 + 0xf] = afStack_60[(uint)bVar7 * -2 + 6];
  afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  fStack_64 = fStack_28 + *(float *)&this_ptr->field_0x249c;
  afStack_60[0] = fStack_24 + *(float *)&this_ptr->field_0x24a0;
  afStack_60[1] = fStack_20 + *(float *)&this_ptr->field_0x24a4;
  CStack_94.x = fStack_64;
  *(float *)((int)&CStack_94 + (uint)bVar7 * -8 + 4) = afStack_60[(uint)bVar7 * -2];
  *(float *)((int)&CStack_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  *(uint *)&this_ptr->field_0x2514 = 0;
  *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_94);
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,uStack_14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
