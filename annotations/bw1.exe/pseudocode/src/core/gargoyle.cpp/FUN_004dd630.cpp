// Name: core_gargoyle.cpp_FUN_004dd630
// Address: 004dd630
// Address Range: [[004dd630, 004dd78d]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004dd630(CGargoyle *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_gargoyle_cpp_FUN_004dd630(CGargoyle *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1010 [1011];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar5 = 0;
  core_actor_cpp_FUN_00408b40(param_1,param_2 + 0x1c);
  iVar4 = 0;
  CStack_28._0_4_ = CStack_1c._0_4_;
  *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  do {
    iVar4 = iVar4 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,&CStack_28,(CVector3f *)0x0,0x10000,0x8000,0,0xffff);
  } while (iVar4 < 3);
  this_ptr = &param_1->field_0x158;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr);
  if (*(int *)(pSVar2 + 0x24) != 5) {
    core_gargoyle_cpp_FUN_004dd390(param_1,param_2);
    fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
    *(float *)&param_1->field_0x2538 = fVar1;
    if (0.0 < fVar1) {
      iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc2a8);
      if (iVar4 == 0) {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"gargoyle-hurt?.wav");
        *(uint *)&param_1->field_0xc2a8 = uVar3;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc2a8);
      *(uint *)&param_1->field_0x2538 = 0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)this_ptr);
      if (*(int *)(pSVar2 + 0x24) != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,8,1);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                  (param_1,"@gargoyle-shatter.wav" + 1);
        core_charactr_cpp_CCharacter_dismember_FUN_00430d90
                  ((CCharacter *)param_1,(CVector3f *)0x0,-1.0,1);
      }
    }
    core_enemy_cpp_FUN_004a0f00(param_1,param_2);
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
