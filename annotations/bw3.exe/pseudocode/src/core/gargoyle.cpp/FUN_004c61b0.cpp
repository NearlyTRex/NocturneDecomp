// Name: core_gargoyle.cpp_FUN_004c61b0
// Address: 004c61b0
// Address Range: [[004c61b0, 004c630d]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004c61b0(CGargoyle *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_gargoyle_cpp_FUN_004c61b0(CGargoyle *param_1,SDamageInfo *param_2)

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
  core_actor_cpp_FUN_00408b80(param_1,param_2 + 0x1c);
  iVar4 = 0;
  CStack_28._0_4_ = CStack_1c._0_4_;
  *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  do {
    iVar4 = iVar4 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (0x01C73654,&CStack_28,(CVector3f *)0x0,0x10000,0x8000,0,0xffff);
  } while (iVar4 < 3);
  this_ptr = &param_1->field_0x158;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr);
  if (*(int *)(pSVar2 + 0x24) != 5) {
    core_gargoyle_cpp_FUN_004c5f10(param_1,param_2);
    fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
    *(float *)&param_1->field_0x2538 = fVar1;
    if (0.0 < fVar1) {
      iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd094);
      if (iVar4 == 0) {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"gargoyle-hurt?.wav");
        *(uint *)&param_1->field_0xd094 = uVar3;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd094);
      *(uint *)&param_1->field_0x2538 = 0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                         ((CMotionController *)this_ptr);
      if (*(int *)(pSVar2 + 0x24) != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)this_ptr,8,1);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                  (param_1,"@gargoyle-shatter.wav" + 1);
        core_charactr_cpp_FUN_004300e0(param_1,0,0xbf800000,1);
      }
    }
    core_enemy_cpp_FUN_00489b80(param_1,param_2);
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
