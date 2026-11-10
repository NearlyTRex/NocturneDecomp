// Name: core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0
// Address: 005989e0
// Address Range: [[005989e0, 00598df6]]
// Convention: __cdecl
// Signature: void __cdecl core_darkwolf_cpp_CDarkwolf_process_FUN_005989e0(CDarkwolf *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_darkwolf_cpp_CDarkwolf_process_FUN_005989e0(CDarkwolf *this_ptr,float delta_time)

{
  byte *puVar1;
  uint uVar2;
  float fVar3;
  CDemonMission *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  uint uVar7;
  byte bVar8;
  float afStackY_106c [1014];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  if ((1.0 <= *(float *)&this_ptr->field_0xdc90) ||
     (iVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time), iVar5 == 0
     )) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,0);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_88 = delta_time * *(float *)&this_ptr->field_0xcdcc;
  while (0.0 < fStack_88) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&this_ptr->field_0x158,&stack0xffffff78);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar5);
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  iVar5 = *(int *)(pSVar6 + 0x24);
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc);
  if (iVar5 == 2) {
    *(float *)&this_ptr->field_0x2528 = *(float *)&this_ptr->field_0x2528 * (float)_DAT_005d9872;
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    if (1.0 <= *(float *)&this_ptr->field_0xdc90) {
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&this_ptr->field_0x158);
    iStack_1c = *(int *)(pSVar6 + 0x24);
    if ((((iStack_1c == 6) || (iStack_1c == 7)) && (iStack_1c == 7)) &&
       ((fVar3 = delta_time * (float)_DAT_005d987a + *(float *)&this_ptr->field_0xdc90,
        *(float *)&this_ptr->field_0xdc90 = fVar3, 1.0 <= fVar3 &&
        (*(CDemonActor **)&this_ptr->field_0xd060 != (CDemonActor *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                (0x01D81080,*(CDemonActor **)&this_ptr->field_0xd060);
      pCVar4 = 0x01D81080;
      *(uint *)&this_ptr->field_0xd060 = 0;
      core_mission_cpp_FUN_004f6f10(pCVar4,this_ptr,1);
    }
    if (iStack_1c != 0) {
      core_actor_cpp_FUN_00408b00(this_ptr,&this_ptr->field_0x249c);
      puVar1 = &this_ptr->field_0x20;
      fStack_78 = fStack_3c;
      *(float *)((int)&stack0xffffff8c + (uint)bVar8 * -8) = afStack_5c[(uint)bVar8 * -2 + 9];
      *(float *)((int)&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
      *(float *)puVar1 = *(float *)puVar1 + fStack_78;
      *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_74;
      *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_70;
      iVar5 = *(int *)&this_ptr->field_0xd060;
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 0x20) = *(uint *)puVar1;
        *(uint *)(iVar5 + 0x24) = *(uint *)&this_ptr->field_0x24;
        *(uint *)(iVar5 + 0x28) = *(uint *)&this_ptr->field_0x28;
        *(uint *)(iVar5 + 0x2c) = *(uint *)&this_ptr->field_0x2c;
      }
    }
    if (((iStack_1c == 3) &&
        (fStack_18 = core_motion_cpp_FUN_004fc930((CMotionController *)&this_ptr->field_0x158),
        fStack_18 < (float)_DAT_005d9882)) &&
       (iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xdc94), iVar5 == 0)) {
      uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"dog_howl.wav")
      ;
      *(uint *)&this_ptr->field_0xdc94 = uVar7;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)&this_ptr->field_0x158);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
    goto LAB_00598b24;
  }
  uVar2 = *(uint *)&this_ptr->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      iVar5 = 1;
    }
    else {
LAB_00598c63:
      iVar5 = 0;
    }
LAB_00598b04:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,iVar5,1);
  }
  else {
    if (uVar2 < 3) {
      iVar5 = 2;
      goto LAB_00598b04;
    }
    if (uVar2 != 3) goto LAB_00598c63;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
LAB_00598b24:
  core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  fStack_48 = *(float *)&this_ptr->field_0x2518 * delta_time;
  fStack_44 = *(float *)&this_ptr->field_0x251c * delta_time;
  fStack_40 = *(float *)&this_ptr->field_0x2520 * delta_time;
  fStack_30 = fStack_48;
  afStack_5c[(uint)bVar8 * -2 + 0xc] = afStack_5c[(uint)bVar8 * -2 + 6];
  afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
       afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  fStack_84 = fStack_30 + *(float *)&this_ptr->field_0x250c;
  fStack_80 = fStack_2c + *(float *)&this_ptr->field_0x2510;
  fStack_7c = fStack_28 + *(float *)&this_ptr->field_0x2514;
  fStack_60 = fStack_84;
  afStack_5c[(uint)bVar8 * -2] = *(float *)((int)&stack0xffffff80 + (uint)bVar8 * -8);
  afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       *(float *)((int)&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  afStack_5c[2] = fStack_60 + *(float *)&this_ptr->field_0x249c;
  afStack_5c[3] = afStack_5c[0] + *(float *)&this_ptr->field_0x24a0;
  fStack_4c = afStack_5c[1] + *(float *)&this_ptr->field_0x24a4;
  CStack_6c.x = afStack_5c[2];
  *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + 4) = afStack_5c[(uint)bVar8 * -2 + 3];
  *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  *(uint *)&this_ptr->field_0x2514 = 0;
  *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_6c);
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
