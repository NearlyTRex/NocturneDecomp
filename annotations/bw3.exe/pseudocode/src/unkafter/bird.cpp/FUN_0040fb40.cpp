// Name: unkafter_bird.cpp_FUN_0040fb40
// Address: 0040fb40
// Address Range: [[0040fb40, 0040fe5f]]
// Convention: unknown
// Signature: void unkafter_bird_cpp_FUN_0040fb40(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void unkafter_bird_cpp_FUN_0040fb40(CCharacter *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1074 [1014];
  CGore *this_ptr;
  CVector3f *position;
  char *state_name;
  uint *puVar4;
  EBloodType blood_type;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  byte auStack_74 [8];
  float afStack_6c [4];
  CVector3f CStack_5c;
  uint uStack_50;
  float afStack_4c [5];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  uint uStack_14;
  
  bVar3 = 0;
  iVar2 = core_charactr_cpp_FUN_0042cd70(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  *(uint *)&param_1->field_0x24a4 = 0;
  uStack_14 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_90 = param_2;
  while (0.0 < fStack_90) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&stack0xffffff70);
    core_charactr_cpp_FUN_00433fb0(param_1,iVar2);
  }
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if ((((1 < iVar2) && (*(int *)&param_1->field_0x70 == 1)) &&
      (*(int *)&param_1[2].field_0x6b14 == 0)) && (*(int *)&param_1->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
    puVar4 = &uStack_50;
    uStack_50 = afStack_4c[2];
    afStack_4c[(uint)bVar3 * -2] = afStack_4c[(uint)bVar3 * -2 + 3];
    afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    core_actor_cpp_FUN_00408b80(param_1,puVar4);
    blood_type = BLOOD_TYPE_RED;
    position = &CStack_20;
    CStack_20._0_4_ = CStack_5c._0_4_;
    *(uint *)((int)&CStack_20 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_5c + (uint)bVar3 * -8 + 4);
    this_ptr = g_CGorePtr;
    *(uint *)((int)&CStack_20 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_5c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_gore_cpp_FUN_004cec40(this_ptr,position,blood_type);
    *(uint *)&param_1[2].field_0x6b14 = 1;
    uStack_14 = 1;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2);
  iVar2 = core_charactr_cpp_FUN_00431660(param_1,param_2);
  if (iVar2 == 0) goto LAB_0040fcbd;
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      state_name = &DAT_005b63d1;
    }
    else {
LAB_0040fe31:
      if (*(char **)&param_1->field_0x2704 == (char *)0x0) {
        state_name = "STAND";
      }
      else {
        iVar2 = _strcmp
                          (*(char **)&param_1->field_0x2704,"WPPerch*");
        if (iVar2 == 1) {
          state_name = "LAND_TREE";
        }
        else {
          state_name = "LAND_GROUND";
        }
      }
    }
LAB_0040fc9d:
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)&param_1->field_0x158,state_name,1);
  }
  else {
    if (uVar1 < 3) {
      state_name = &DAT_005b63cd;
      goto LAB_0040fc9d;
    }
    if (uVar1 != 3) goto LAB_0040fe31;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              ((CMotionController *)&param_1->field_0x158,"STAND",1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_0040fcbd:
  core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
  fStack_80 = *(float *)&param_1->field_0x2518 * param_2;
  fStack_7c = *(float *)&param_1->field_0x251c * param_2;
  fStack_78 = *(float *)&param_1->field_0x2520 * param_2;
  fStack_8c = fStack_80;
  *(uint *)((int)&stack0xffffff78 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffff7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  fStack_2c = fStack_8c + *(float *)&param_1->field_0x250c;
  fStack_28 = fStack_88 + *(float *)&param_1->field_0x2510;
  fStack_24 = fStack_84 + *(float *)&param_1->field_0x2514;
  fStack_38 = fStack_2c;
  afStack_4c[(uint)bVar3 * -2 + 6] = afStack_4c[(uint)bVar3 * -2 + 9];
  afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  afStack_6c[1] = fStack_38 + *(float *)&param_1->field_0x249c;
  afStack_6c[2] = fStack_34 + *(float *)&param_1->field_0x24a0;
  afStack_6c[3] = fStack_30 + *(float *)&param_1->field_0x24a4;
  auStack_74._0_4_ = afStack_6c[1];
  *(float *)((int)auStack_74 + (uint)bVar3 * -8 + 4) = afStack_6c[(uint)bVar3 * 0xfffffffe + 2];
  *(float *)((int)auStack_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_6c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 3];
  *(uint *)&param_1->field_0x2514 = 0;
  *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_charactr_cpp_FUN_0042c230(param_1,(CVector3f *)auStack_74);
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00432330(param_1,param_2,uStack_14);
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  return;
}
