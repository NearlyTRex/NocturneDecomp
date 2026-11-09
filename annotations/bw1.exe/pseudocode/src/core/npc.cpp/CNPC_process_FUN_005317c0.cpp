// Name: core_npc.cpp_CNPC_process_FUN_005317c0
// Address: 005317c0
// Address Range: [[005317c0, 00531adb]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_process_FUN_005317c0(CNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_005317c0(CNPC *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  uint uVar1;
  int iVar2;
  CMotionList *this_ptr_01;
  byte bVar3;
  float afStackY_1074 [1014];
  CGore *this_ptr_02;
  CVector3f *position;
  char *pcVar4;
  float *pfVar5;
  EBloodType blood_type;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  byte auStack_74 [8];
  float fStack_6c;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [5];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float afStack_20 [3];
  uint local_14;
  
  bVar3 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00434790(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  local_90 = delta_time * *(float *)&this_ptr->field_0x1fab4;
  local_14 = 0;
  while (0.0 < local_90) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&this_ptr->field_0x158,&stack0xffffff70);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar2);
  }
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
  if ((((1 < iVar2) && (*(int *)&this_ptr->field_0x70 == 1)) &&
      (*(int *)&this_ptr->field_0x1fab0 == 0)) && (*(int *)&this_ptr->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,0);
    pfVar5 = afStack_4c + 0xb;
    afStack_20[0] = afStack_4c[2];
    afStack_4c[(uint)bVar3 * -2 + 0xc] = afStack_4c[(uint)bVar3 * -2 + 3];
    afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
         afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar5);
    blood_type = BLOOD_TYPE_RED;
    position = &CStack_5c;
    CStack_5c._0_4_ = CStack_68._0_4_;
    *(uint *)((int)&CStack_5c + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_68 + (uint)bVar3 * -8 + 4);
    this_ptr_02 = g_CGorePtr;
    *(uint *)((int)&CStack_5c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_68 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_02,position,blood_type);
    *(uint *)&this_ptr->field_0x1fab0 = 1;
    local_14 = 1;
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * *(float *)&this_ptr->field_0x1fab4);
  iVar2 = core_charactr_cpp_FUN_00432240((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) goto LAB_00531950;
  uVar1 = *(uint *)&this_ptr->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00531922:
      pcVar4 = &DAT_005ec779;
    }
    else {
LAB_00531ad0:
      pcVar4 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850
              ((CMotionController *)&this_ptr->field_0x158,pcVar4,1);
  }
  else {
    this_ptr_00 = &this_ptr->field_0x158;
    if (uVar1 < 3) {
      iVar2 = 0;
      pcVar4 = &DAT_005ec775;
      this_ptr_01 = core_motion_cpp_FUN_00524a00((CMotionController *)this_ptr_00);
      iVar2 = core_motion_cpp_FUN_00524150(this_ptr_01,pcVar4,iVar2);
      if (iVar2 < 0) goto LAB_00531922;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr_00,iVar2,1);
    }
    else {
      if (uVar1 != 3) goto LAB_00531ad0;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850
                ((CMotionController *)this_ptr_00,"STAND",1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
LAB_00531950:
  core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
  fStack_38 = *(float *)&this_ptr->field_0x2518 * delta_time;
  fStack_34 = *(float *)&this_ptr->field_0x251c * delta_time;
  fStack_30 = *(float *)&this_ptr->field_0x2520 * delta_time;
  fStack_80 = fStack_38;
  *(float *)((int)&stack0xffffff84 + (uint)bVar3 * -8) = afStack_4c[(uint)bVar3 * -2 + 6];
  *(float *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  fStack_50 = fStack_80 + *(float *)&this_ptr->field_0x250c;
  afStack_4c[0] = fStack_7c + *(float *)&this_ptr->field_0x2510;
  afStack_4c[1] = fStack_78 + *(float *)&this_ptr->field_0x2514;
  fStack_8c = fStack_50;
  *(float *)((int)&stack0xffffff78 + (uint)bVar3 * -8) = afStack_4c[(uint)bVar3 * -2];
  *(float *)((int)&stack0xffffff7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  fStack_2c = fStack_8c + *(float *)&this_ptr->field_0x249c;
  fStack_28 = fStack_88 + *(float *)&this_ptr->field_0x24a0;
  fStack_24 = fStack_84 + *(float *)&this_ptr->field_0x24a4;
  auStack_74._0_4_ = fStack_2c;
  *(float *)(auStack_74 + (uint)bVar3 * -8 + 4) = afStack_4c[(uint)bVar3 * -2 + 9];
  *(float *)(auStack_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  *(uint *)&this_ptr->field_0x2514 = 0;
  *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,(CVector3f *)auStack_74);
  core_charactr_cpp_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_FUN_00432f10(this_ptr,delta_time,local_14);
  core_charactr_cpp_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
