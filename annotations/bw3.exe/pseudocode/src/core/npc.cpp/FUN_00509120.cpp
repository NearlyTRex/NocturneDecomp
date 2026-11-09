// Name: core_npc.cpp_FUN_00509120
// Address: 00509120
// Address Range: [[00509120, 00509525]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_00509120(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_npc_cpp_FUN_00509120(CCharacter *param_1,float param_2)

{
  byte *this_ptr;
  float fVar1;
  uint uVar2;
  int iVar3;
  CMotionList *this_ptr_00;
  byte bVar4;
  float afStackY_1074 [1014];
  CVector3f *position;
  char *pcVar5;
  float *pfVar6;
  EBloodType blood_type;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  float fStack_74;
  float afStack_70 [4];
  float fStack_60;
  float afStack_5c [3];
  uint uStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  
  bVar4 = 0;
  iVar3 = core_charactr_cpp_FUN_0042cd70(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if ((-1 < *(int *)&param_1[2].field_0x6b20) || (*(int *)&param_1[2].field_0x6b20 == -1)) {
    core_charactr_cpp_FUN_00433c60(param_1,param_2);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_90 = param_2 * *(float *)&param_1[2].field_0x6b18;
  uStack_14 = 0;
  while (0.0 < fStack_90) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&stack0xffffff70);
    core_charactr_cpp_FUN_00433fb0(param_1,iVar3);
  }
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if ((((1 < iVar3) && (*(int *)&param_1->field_0x70 == 1)) &&
      (*(int *)&param_1[2].field_0x6b14 == 0)) && (*(int *)&param_1->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
    pfVar6 = afStack_70 + 5;
    afStack_5c[0] = (float)uStack_50;
    afStack_70[(uint)bVar4 * -2 + 6] = afStack_70[(uint)bVar4 * -2 + 9];
    afStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    core_actor_cpp_FUN_00408b80(param_1,pfVar6);
    blood_type = BLOOD_TYPE_RED;
    position = &CStack_80;
    CStack_80._0_4_ = CStack_44._0_4_;
    *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_44 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_gore_cpp_FUN_004cec40(g_CGorePtr,position,blood_type);
    *(uint *)&param_1[2].field_0x6b14 = 1;
    uStack_14 = 1;
  }
  fVar1 = *(float *)&param_1[2].field_0x6b18;
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * fVar1);
  iVar3 = core_charactr_cpp_FUN_00431660(param_1,param_2);
  this_ptr = &param_1->field_0x158;
  if (iVar3 == 0) {
    pcVar5 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004fc320
                       ((CMotionController *)this_ptr);
    iVar3 = _strcmp(pcVar5,"APPEAR");
    if ((iVar3 == 0) && (*(int *)&param_1[2].field_0x6b20 < 1)) {
      *(uint *)&param_1[2].field_0x6b20 = 1;
      *(uint *)&param_1->field_0xfc = 1;
      *(uint *)&param_1[2].field_0x6b28 = *(uint *)&param_1[2].field_0x6b2c;
      *(uint *)&param_1->field_0xf8 = 0;
    }
    iVar3 = _strcmp(pcVar5,"DISAPPEAR");
    if ((iVar3 == 0) && (*(int *)&param_1[2].field_0x6b20 != 0)) {
      *(uint *)&param_1[2].field_0x6b20 = 0;
      *(uint *)&param_1->field_0xfc = 1;
      *(uint *)&param_1->field_0xf8 = 0;
      *(uint *)&param_1[2].field_0x6b28 = *(uint *)&param_1[2].field_0x6b2c;
    }
    goto LAB_005092c8;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0050929a:
      pcVar5 = &DAT_005cb59c;
    }
    else {
LAB_0050947c:
      pcVar5 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)&param_1->field_0x158,pcVar5,1);
  }
  else if (uVar2 < 3) {
    iVar3 = 0;
    pcVar5 = &DAT_005cb598;
    this_ptr_00 = core_motion_cpp_FUN_004fc310((CMotionController *)this_ptr);
    iVar3 = core_motion_cpp_FUN_004fba50(this_ptr_00,pcVar5,iVar3);
    if (iVar3 < 0) goto LAB_0050929a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)this_ptr,iVar3,1);
  }
  else {
    if (uVar2 != 3) goto LAB_0050947c;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)this_ptr,"@STAND" + 1,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_005092c8:
  if (0.0 < *(float *)&param_1[2].field_0x6b28) {
    *(float *)&param_1[2].field_0x6b28 = *(float *)&param_1[2].field_0x6b28 - param_2;
  }
  if (*(float *)&param_1[2].field_0x6b28 < 0.0) {
    *(uint *)&param_1[2].field_0x6b28 = 0;
  }
  core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
  afStack_70[2] = *(float *)&param_1->field_0x2518 * param_2;
  afStack_70[3] = *(float *)&param_1->field_0x251c * param_2;
  fStack_60 = *(float *)&param_1->field_0x2520 * param_2;
  fStack_20 = afStack_70[2];
  afStack_34[(uint)bVar4 * -2 + 6] = afStack_70[(uint)bVar4 * -2 + 3];
  afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  afStack_34[2] = fStack_20 + *(float *)&param_1->field_0x250c;
  afStack_34[3] = fStack_1c + *(float *)&param_1->field_0x2510;
  fStack_24 = fStack_18 + *(float *)&param_1->field_0x2514;
  fStack_8c = afStack_34[2];
  *(float *)((int)&stack0xffffff78 + (uint)bVar4 * -8) = afStack_34[(uint)bVar4 * -2 + 3];
  *(float *)((int)&stack0xffffff7c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_38 = fStack_8c + *(float *)&param_1->field_0x249c;
  afStack_34[0] = fStack_88 + *(float *)&param_1->field_0x24a0;
  afStack_34[1] = fStack_84 + *(float *)&param_1->field_0x24a4;
  fStack_74 = fStack_38;
  afStack_70[(uint)bVar4 * -2] = afStack_34[(uint)bVar4 * -2];
  afStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  *(uint *)&param_1->field_0x2514 = 0;
  *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_charactr_cpp_FUN_0042c230(param_1,(CVector3f *)&fStack_74);
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00432330(param_1,param_2,uStack_14);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
