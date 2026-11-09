// Name: core_biggs.cpp_FUN_00414e50
// Address: 00414e50
// Address Range: [[00414e50, 00415114]]
// Convention: unknown
// Signature: void core_biggs_cpp_FUN_00414e50(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_biggs_cpp_FUN_00414e50(CCharacter *param_1,float param_2)

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
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_60 = param_2 * *(float *)(param_1 + 1);
  this_ptr = &param_1->field_0x2b4;
  while (0.0 < fStack_60) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr,&stack0xffffffa0);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  core_motion_cpp_FUN_005035c0(this_ptr);
  iVar2 = core_charactr_cpp_FUN_004287f0(param_1,param_2);
  if (iVar2 == 0) goto LAB_00414f21;
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00414ef6:
      iVar2 = 1;
    }
    else {
LAB_004150fa:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00414ef6;
    if (uVar1 != 3) goto LAB_004150fa;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
LAB_00414f21:
  if (0.0 < *(float *)&param_1[1].field_0x14) {
    *(float *)&param_1[1].field_0x14 = *(float *)&param_1[1].field_0x14 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_00424430(param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_50 = *(float *)&param_1->field_0x2588 * param_2;
    fStack_4c = *(float *)&param_1->field_0x258c * param_2;
    fStack_48 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_38 = fStack_50;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_5c = fStack_38 + *(float *)&param_1->field_0x257c;
    fStack_58 = fStack_34 + *(float *)&param_1->field_0x2580;
    fStack_54 = fStack_30 + *(float *)&param_1->field_0x2584;
    fStack_20 = fStack_5c;
    afStack_1c[(uint)bVar3 * -2] = *(float *)((int)&stack0xffffffa8 + (uint)bVar3 * -8);
    afStack_1c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_44 = fStack_20 + *(float *)&param_1->field_0x2508;
    fStack_40 = afStack_1c[0] + *(float *)&param_1->field_0x250c;
    fStack_3c = afStack_1c[1] + *(float *)&param_1->field_0x2510;
    CStack_2c._0_4_ = fStack_44;
    *(uint *)((int)&CStack_2c + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8);
    *(uint *)((int)&CStack_2c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60(param_1,&CStack_2c);
  }
  core_charactr_cpp_FUN_00424470(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90(param_1,param_2);
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,&param_1[1].field_0xe48);
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
