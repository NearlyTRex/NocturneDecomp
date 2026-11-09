// Name: core_batman.cpp_FUN_00413f90
// Address: 00413f90
// Address Range: [[00413f90, 004141bc]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_00413f90(CBatman *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_batman_cpp_FUN_00413f90(CBatman *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  SMotion *pSVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_1048 [1011];
  CBatman *this_ptr_00;
  CVector3f *position;
  int iVar4;
  int flame_type;
  float fVar5;
  uint *puVar6;
  int include_hero;
  CVector3f CStack_60;
  uint uStack_54;
  uint auStack_50 [2];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  uint uStack_24;
  uint auStack_20 [4];
  
  bVar3 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc324);
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc31c);
  if (*(int *)(param_2 + 0x28) == 7) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005d3b89;
    core_actor_cpp_FUN_00408b40(param_1,param_2 + 0x1c);
    iVar4 = 0;
    CStack_60._0_4_ = CStack_3c._0_4_;
    *(uint *)((int)&CStack_60 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_60 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_60,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,0);
    puVar6 = &uStack_24;
    uStack_24 = uStack_54;
    auStack_20[(uint)bVar3 * -2] = auStack_50[(uint)bVar3 * -2];
    auStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         auStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    core_actor_cpp_FUN_00408b40(param_1,puVar6);
    include_hero = 0;
    fVar5 = 10.0;
    flame_type = 0;
    iVar4 = 0;
    position = &CStack_30;
    CStack_30._0_4_ = CStack_48._0_4_;
    *(uint *)((int)&CStack_30 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_48 + (uint)bVar3 * -8 + 4);
    this_ptr_00 = param_1;
    *(uint *)((int)&CStack_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_charactr_cpp_FUN_004308a0
              ((CCharacter *)this_ptr_00,position,iVar4,flame_type,fVar5,include_hero);
  }
  core_batman_cpp_FUN_00413c40(param_1,param_2);
  fVar5 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x158;
  *(float *)&param_1->field_0x2538 = fVar5;
  if (fVar5 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    if ((*(int *)(pSVar1 + 0x24) != 7) && (*(int *)(pSVar1 + 0x24) != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr,7,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc320);
      uVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                        (param_1,"4@batman-die.wav" + 2);
      *(uint *)&param_1->field_0xc320 = uVar2;
    }
  }
  else {
    iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr,4,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,5,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,6,1);
    }
    iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc320);
    if (iVar4 == 0) {
      uVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                        (param_1,"batman-hurt?.wav");
      *(uint *)&param_1->field_0xc320 = uVar2;
    }
  }
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
