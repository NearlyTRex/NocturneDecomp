// Name: core_dracbrid.cpp_FUN_0047d480
// Address: 0047d480
// Address Range: [[0047d480, 0047d720]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_0047d480(CDraculaBride *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_FUN_0047d480(CDraculaBride *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  SMotion *pSVar1;
  byte bVar2;
  int aiStackY_104c [1011];
  CDraculaBride *this_ptr_00;
  CVector3f *position;
  int iVar3;
  int flame_type;
  float fVar4;
  uint *puVar5;
  int include_hero;
  uint uStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  uint uStack_28;
  int aiStack_24 [4];
  int iStack_14;
  
  bVar2 = 0;
  iStack_14 = 0;
  if (*(int *)(param_2 + 0x28) == 7) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005dafcd;
    core_actor_cpp_FUN_00408b40(param_1,param_2 + 0x1c);
    iVar3 = 0;
    CStack_4c._0_4_ = CStack_40._0_4_;
    *(uint *)((int)&CStack_4c + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&CStack_40 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&CStack_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&CStack_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_4c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
    iStack_14 = 1;
  }
  if (*(int *)(param_2 + 0x30) == 0x68) {
    iStack_14 = 1;
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,0);
    puVar5 = &uStack_28;
    uStack_28 = uStack_64;
    aiStack_24[(uint)bVar2 * -2] = *(int *)(&stack0xffffffa0 + (uint)bVar2 * -8);
    aiStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         *(int *)(&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    core_actor_cpp_FUN_00408b40(param_1,puVar5);
    include_hero = 0;
    fVar4 = 10.0;
    flame_type = 0;
    iVar3 = 0;
    position = &CStack_34;
    CStack_34._0_4_ = CStack_58._0_4_;
    *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&CStack_58 + (uint)bVar2 * -8 + 4);
    this_ptr_00 = param_1;
    *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&CStack_58 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_charactr_cpp_FUN_004308a0
              ((CCharacter *)this_ptr_00,position,iVar3,flame_type,fVar4,include_hero);
  }
  core_dracbrid_cpp_FUN_0047d430(param_1,param_2);
  fVar4 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x158;
  *(float *)&param_1->field_0x2538 = fVar4;
  if (fVar4 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    iVar3 = *(int *)(pSVar1 + 0x24);
    if ((((iVar3 != 0x11) && (iVar3 != 0x10)) && (iVar3 != 10)) && (iVar3 != 7)) {
      if (iStack_14 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,10,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,7,1);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x30))
                  (param_1,"4@bride-launch.wav" + 2);
      }
    }
    iVar3 = core_actor_cpp_FUN_0040cd00(0.4);
    if (iVar3 != 0) {
      core_dracbrid_cpp_FUN_0047d920(param_1,"bride-die?.wav",2.0);
    }
    goto LAB_0047d5ac;
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr);
  iVar3 = *(int *)(pSVar1 + 0x24);
  if (((iVar3 == 8) || (iVar3 == 9)) || (iVar3 == 2)) {
    iVar3 = 1;
LAB_0047d666:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar3,1);
  }
  else if (((iVar3 == 0) || (iVar3 == 0xe)) ||
          (((iVar3 == 0x13 || (((iVar3 == 0xc || (iVar3 == 0x12)) || (iVar3 == 0x14)))) ||
           (iVar3 == 0x15)))) {
    iVar3 = core_actor_cpp_FUN_0040cc60(0,2);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,4,1);
    }
    if (iVar3 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,5,1);
    }
    if (iVar3 == 2) {
      iVar3 = 6;
      goto LAB_0047d666;
    }
  }
  iVar3 = core_actor_cpp_FUN_0040cd00(0.4);
  if (iVar3 != 0) {
    core_dracbrid_cpp_FUN_0047d920(param_1,"bride-hurt?.wav",2.0);
  }
LAB_0047d5ac:
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
