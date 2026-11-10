// Name: core_bird.cpp_CBird_process_FUN_00415340
// Address: 00415340
// Address Range: [[00415340, 0041565f]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_process_FUN_00415340(CBird *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_process_FUN_00415340(CBird *this_ptr,float delta_time)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1074 [1014];
  CGore *this_ptr_00;
  CVector3f *position;
  char *state_name;
  float *pfVar4;
  EBloodType blood_type;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [5];
  float afStack_50 [3];
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  uint uStack_14;
  
  bVar3 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00434790(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  uStack_14 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_90 = delta_time;
  while (0.0 < fStack_90) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&this_ptr->field_0x158,&stack0xffffff70);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar2);
  }
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
  if ((((1 < iVar2) && (*(int *)&this_ptr->field_0x70 == 1)) &&
      (*(int *)&this_ptr->field_0x1fab0 == 0)) && (*(int *)&this_ptr->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,0);
    pfVar4 = afStack_64 + 5;
    afStack_50[0] = (float)uStack_44;
    afStack_64[(uint)bVar3 * -2 + 6] = afStack_64[(uint)bVar3 * -2 + 9];
    afStack_64[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         afStack_64[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar4);
    blood_type = BLOOD_TYPE_RED;
    position = &CStack_20;
    CStack_20.x = afStack_64[2];
    *(float *)((int)&CStack_20 + (uint)bVar3 * -8 + 4) = afStack_64[(uint)bVar3 * -2 + 3];
    this_ptr_00 = g_CGorePtr;
    *(float *)((int)&CStack_20 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_64[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,position,blood_type);
    *(uint *)&this_ptr->field_0x1fab0 = 1;
    uStack_14 = 1;
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) goto LAB_004154bd;
  uVar1 = *(uint *)&this_ptr->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      state_name = &DAT_005d3ce9;
    }
    else {
LAB_00415631:
      if (*(char **)&this_ptr->field_0x2704 == (char *)0x0) {
        state_name = "STAND";
      }
      else {
        iVar2 = _strcmp
                          (*(char **)&this_ptr->field_0x2704,"WPPerch*");
        if (iVar2 == 1) {
          state_name = "LAND_TREE";
        }
        else {
          state_name = "LAND_GROUND";
        }
      }
    }
LAB_0041549d:
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850
              ((CMotionController *)&this_ptr->field_0x158,state_name,1);
  }
  else {
    if (uVar1 < 3) {
      state_name = &DAT_005d3ce5;
      goto LAB_0041549d;
    }
    if (uVar1 != 3) goto LAB_00415631;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850
              ((CMotionController *)&this_ptr->field_0x158,"STAND",1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
LAB_004154bd:
  core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
  fStack_80 = *(float *)&this_ptr->field_0x2518 * delta_time;
  fStack_7c = *(float *)&this_ptr->field_0x251c * delta_time;
  fStack_78 = *(float *)&this_ptr->field_0x2520 * delta_time;
  fStack_8c = fStack_80;
  *(uint *)((int)&stack0xffffff78 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffff7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  fStack_2c = fStack_8c + *(float *)&this_ptr->field_0x250c;
  fStack_28 = fStack_88 + *(float *)&this_ptr->field_0x2510;
  fStack_24 = fStack_84 + *(float *)&this_ptr->field_0x2514;
  fStack_38 = fStack_2c;
  afStack_64[(uint)bVar3 * -2 + 0xc] = afStack_64[(uint)bVar3 * -2 + 0xf];
  afStack_64[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
       afStack_64[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
  fStack_68 = fStack_38 + *(float *)&this_ptr->field_0x249c;
  afStack_64[0] = fStack_34 + *(float *)&this_ptr->field_0x24a0;
  afStack_64[1] = fStack_30 + *(float *)&this_ptr->field_0x24a4;
  CStack_74.x = fStack_68;
  *(float *)((int)&CStack_74 + (uint)bVar3 * -8 + 4) = afStack_64[(uint)bVar3 * -2];
  *(float *)((int)&CStack_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_64[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  *(uint *)&this_ptr->field_0x2514 = 0;
  *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_74);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_FUN_00432f10(this_ptr,delta_time,uStack_14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
