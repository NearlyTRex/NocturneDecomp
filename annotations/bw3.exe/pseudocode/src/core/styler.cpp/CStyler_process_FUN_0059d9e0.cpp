// Name: core_styler.cpp_CStyler_process_FUN_0059d9e0
// Address: 0059d9e0
// Address Range: [[0059d9e0, 0059dda1]]
// Convention: __cdecl
// Signature: void __cdecl core_styler_cpp_CStyler_process_FUN_0059d9e0(CStyler *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_styler_cpp_CStyler_process_FUN_0059d9e0(CStyler *this_ptr,float delta_time)

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
  if (1.0 <= *(float *)&this_ptr->field_0x487c4) {
    return;
  }
  iVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_80 = delta_time * *(float *)&this_ptr->field_0xcdcc;
  while (0.0 < fStack_80) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&this_ptr->field_0x158,&stack0xffffff80);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar5);
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  iVar5 = *(int *)(pSVar6 + 0x24);
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc);
  if (iVar5 == 4) {
    *(float *)&this_ptr->field_0x2528 = *(float *)&this_ptr->field_0x2528 * (float)_DAT_005d9f19;
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    if (1.0 <= *(float *)&this_ptr->field_0x487c4) {
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&this_ptr->field_0x158);
    iVar5 = *(int *)(pSVar6 + 0x24);
    if ((((iVar5 == 0x99) || (iVar5 == 0x9a)) && (iVar5 == 0x9a)) &&
       (((*(int *)&this_ptr->field_0x47b90 == 0 &&
         (fVar3 = delta_time * (float)_DAT_005d9f21 + *(float *)&this_ptr->field_0x487c4,
         *(float *)&this_ptr->field_0x487c4 = fVar3, 1.0 <= fVar3)) &&
        (*(CDemonActor **)&this_ptr->field_0x47b94 != (CDemonActor *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                (0x01D81080,*(CDemonActor **)&this_ptr->field_0x47b94);
      pCVar4 = 0x01D81080;
      *(uint *)&this_ptr->field_0x47b94 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,this_ptr,1);
    }
    if (iVar5 != 0) {
      core_actor_cpp_FUN_00408b00(this_ptr,&this_ptr->field_0x249c);
      puVar1 = &this_ptr->field_0x20;
      fStack_40 = fStack_34;
      afStack_60[(uint)bVar7 * -2 + 9] = afStack_60[(uint)bVar7 * -2 + 0xc];
      afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      *(float *)puVar1 = *(float *)puVar1 + fStack_40;
      *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_3c;
      *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_38;
      iVar5 = *(int *)&this_ptr->field_0x47b94;
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
    goto LAB_0059db1e;
  }
  uVar2 = *(uint *)&this_ptr->field_0x273c;
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
              ((CMotionController *)&this_ptr->field_0x158,iVar5,1);
  }
  else {
    if (uVar2 < 3) goto LAB_0059daf3;
    if (uVar2 != 3) goto LAB_0059dc5c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
LAB_0059db1e:
  core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  afStack_60[2] = *(float *)&this_ptr->field_0x2518 * delta_time;
  afStack_60[3] = *(float *)&this_ptr->field_0x251c * delta_time;
  fStack_50 = *(float *)&this_ptr->field_0x2520 * delta_time;
  fStack_64 = afStack_60[2];
  afStack_60[(uint)bVar7 * -2] = afStack_60[(uint)bVar7 * -2 + 3];
  afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  fStack_28 = fStack_64 + *(float *)&this_ptr->field_0x250c;
  fStack_24 = afStack_60[0] + *(float *)&this_ptr->field_0x2510;
  fStack_20 = afStack_60[1] + *(float *)&this_ptr->field_0x2514;
  fStack_7c = fStack_28;
  *(float *)((int)&stack0xffffff88 + (uint)bVar7 * -8) = afStack_60[(uint)bVar7 * -2 + 0xf];
  *(float *)((int)&stack0xffffff8c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  fStack_4c = fStack_7c + *(float *)&this_ptr->field_0x249c;
  fStack_48 = fStack_78 + *(float *)&this_ptr->field_0x24a0;
  fStack_44 = fStack_74 + *(float *)&this_ptr->field_0x24a4;
  CStack_70.x = fStack_4c;
  *(float *)((int)&CStack_70 + (uint)bVar7 * -8 + 4) = afStack_60[(uint)bVar7 * -2 + 6];
  *(float *)((int)&CStack_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  *(uint *)&this_ptr->field_0x2514 = 0;
  *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_70);
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
