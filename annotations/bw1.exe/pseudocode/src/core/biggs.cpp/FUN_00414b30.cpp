// Name: core_biggs.cpp_FUN_00414b30
// Address: 00414b30
// Address Range: [[00414b30, 00414df4]]
// Convention: unknown
// Signature: void core_biggs_cpp_FUN_00414b30(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_biggs_cpp_FUN_00414b30(CCharacter *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1044 [1014];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [3];
  
  bVar3 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_60 = param_2 * *(float *)(param_1 + 1);
  this_ptr = &param_1->field_0x158;
  while (0.0 < fStack_60) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr,&stack0xffffffa0);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2);
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770((CMotionController *)this_ptr);
  iVar2 = core_charactr_cpp_FUN_00432240(param_1,param_2);
  if (iVar2 == 0) goto LAB_00414c01;
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00414bd6:
      iVar2 = 1;
    }
    else {
LAB_00414dda:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00414bd6;
    if (uVar1 != 3) goto LAB_00414dda;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_00414c01:
  if (0.0 < *(float *)&param_1[1].field_0x14) {
    *(float *)&param_1[1].field_0x14 = *(float *)&param_1[1].field_0x14 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042e120(param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_50 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_4c = *(float *)&param_1->field_0x251c * param_2;
    fStack_48 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_38 = fStack_50;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_5c = fStack_38 + *(float *)&param_1->field_0x250c;
    fStack_58 = fStack_34 + *(float *)&param_1->field_0x2510;
    fStack_54 = fStack_30 + *(float *)&param_1->field_0x2514;
    fStack_20 = fStack_5c;
    afStack_1c[(uint)bVar3 * -2] = *(float *)((int)&stack0xffffffa8 + (uint)bVar3 * -8);
    afStack_1c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_44 = fStack_20 + *(float *)&param_1->field_0x249c;
    fStack_40 = afStack_1c[0] + *(float *)&param_1->field_0x24a0;
    fStack_3c = afStack_1c[1] + *(float *)&param_1->field_0x24a4;
    CStack_2c._0_4_ = fStack_44;
    *(uint *)((int)&CStack_2c + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8);
    *(uint *)((int)&CStack_2c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750(param_1,&CStack_2c);
  }
  core_charactr_cpp_FUN_0042e160(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80(param_1,param_2);
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,&param_1[1].field_0xe48);
  if (iVar2 != 0) {
    *(uint *)&param_1[1].field_0x218 = 0;
    *(uint *)&param_1[1].field_0x214 = 1;
  }
  if ((*(int *)&param_1[1].field_0x214 != 0) &&
     (param_2 = *(float *)&param_1[1].field_0x218 + param_2,
     *(float *)&param_1[1].field_0x218 = param_2, 0x40800000 < param_2)) {
    *(float *)&param_1[1].field_0x218 = 0x40800000;
    return;
  }
  return;
}
