// Name: core_moocow.cpp_FUN_004f8cc0
// Address: 004f8cc0
// Address Range: [[004f8cc0, 004f9009]]
// Convention: unknown
// Signature: void core_moocow_cpp_FUN_004f8cc0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_moocow_cpp_FUN_004f8cc0(CCharacter *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1044 [1014];
  int iVar6;
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
  byte auStack_2c [8];
  float afStack_24 [4];
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_FUN_0042cd70(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00432330(param_1,param_2,0);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  this_ptr = &param_1->field_0x158;
  fStack_60 = param_2;
  while (0.0 < fStack_60) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)this_ptr,&stack0xffffffa0);
    core_charactr_cpp_FUN_00433fb0(param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr);
  uVar4 = *(uint *)(pSVar3 + 0x24);
  iVar2 = core_charactr_cpp_FUN_00431660(param_1,param_2);
  if (iVar2 == 0) {
    switch(uVar4) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
      if ((float)_DAT_005c91ec < fStack_14) {
        iVar6 = 1;
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,iVar2,iVar6);
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,5);
        if ((iVar2 == 5) &&
           (iVar2 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&param_1[1].field_0x8),
           iVar2 == 0)) {
          uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"cow?.wav");
          *(uint *)&param_1[1].field_0x8 = uVar4;
        }
      }
    }
    goto switchD_004f9003_caseD_5;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004f8d8c:
      iVar6 = 1;
      iVar2 = 5;
    }
    else {
LAB_004f8f31:
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
      if (fStack_14 <= (float)_DAT_005c91f4) goto LAB_004f8d9f;
      iVar6 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar2,iVar6);
  }
  else {
    if (uVar1 < 3) goto LAB_004f8d8c;
    if (uVar1 != 3) goto LAB_004f8f31;
    fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)this_ptr);
    if ((float)_DAT_005c91f4 < fStack_14) {
      iVar6 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)this_ptr,iVar2,iVar6);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
    }
  }
LAB_004f8d9f:
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004f9003_caseD_5:
  iVar2 = core_charactr_cpp_FUN_0042ccf0(param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_44 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_40 = *(float *)&param_1->field_0x251c * param_2;
    fStack_3c = *(float *)&param_1->field_0x2520 * param_2;
    fStack_5c = fStack_44;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_38 = fStack_5c + *(float *)&param_1->field_0x250c;
    fStack_34 = fStack_58 + *(float *)&param_1->field_0x2510;
    fStack_30 = fStack_54 + *(float *)&param_1->field_0x2514;
    fStack_50 = fStack_38;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    afStack_24[1] = fStack_50 + *(float *)&param_1->field_0x249c;
    afStack_24[2] = fStack_4c + *(float *)&param_1->field_0x24a0;
    afStack_24[3] = fStack_48 + *(float *)&param_1->field_0x24a4;
    auStack_2c._0_4_ = afStack_24[1];
    *(float *)((int)auStack_2c + (uint)bVar5 * -8 + 4) = afStack_24[(uint)bVar5 * 0xfffffffe + 2];
    *(float *)((int)auStack_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 3];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230(param_1,(CVector3f *)auStack_2c);
  }
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
