// Name: core_bride.cpp_FUN_00424b10
// Address: 00424b10
// Address Range: [[00424b10, 00424d51]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_00424b10(CBride *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bride_cpp_FUN_00424b10(CBride *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  SMotion *pSVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_1048 [1011];
  CBride *this_ptr_00;
  CVector3f *position;
  int iVar4;
  int iVar5;
  float flame_scale;
  uint *puVar6;
  int include_hero;
  CVector3f CStack_60;
  CVector3f CStack_54;
  uint uStack_48;
  uint auStack_44 [2];
  CVector3f CStack_3c;
  uint uStack_30;
  uint auStack_2c [2];
  CVector3f CStack_24;
  
  bVar3 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc298);
  if (*(int *)(param_2 + 0x28) == 7) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005d4fe8;
    core_actor_cpp_FUN_00408b40(param_1,param_2 + 0x1c);
    iVar4 = 0;
    CStack_24._0_4_ = CStack_60._0_4_;
    *(uint *)((int)&CStack_24 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_60 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_60 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,0);
    puVar6 = &uStack_48;
    uStack_48 = uStack_30;
    auStack_44[(uint)bVar3 * -2] = auStack_2c[(uint)bVar3 * -2];
    auStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         auStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    core_actor_cpp_FUN_00408b40(param_1,puVar6);
    include_hero = 0;
    flame_scale = 10.0;
    iVar5 = 0;
    iVar4 = 0;
    position = &CStack_54;
    CStack_54._0_4_ = CStack_3c._0_4_;
    *(uint *)((int)&CStack_54 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + 4);
    this_ptr_00 = param_1;
    *(uint *)((int)&CStack_54 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_charactr_cpp_FUN_004308a0
              ((CCharacter *)this_ptr_00,position,iVar4,iVar5,flame_scale,include_hero);
  }
  core_bride_cpp_CBride_processDismemberment_FUN_004248e0(param_1,param_2);
  *(float *)&param_1->field_0x2538 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc288 * 4) == 0) {
    *(uint *)&param_1->field_0x2538 = 0;
  }
  this_ptr = &param_1->field_0x158;
  if (0.0 < *(float *)&param_1->field_0x2538) {
    iVar5 = 1;
    iVar4 = core_actor_cpp_FUN_0040cd00(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,(iVar4 == 0) + 7,iVar5);
    iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc294);
    if (iVar4 == 0) {
      uVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ub-hurt?.wav");
      *(uint *)&param_1->field_0xc294 = uVar2;
    }
  }
  else {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    if ((*(int *)(pSVar1 + 0x24) != 0xe) && (*(int *)(pSVar1 + 0x24) != 0xd)) {
      iVar5 = 1;
      iVar4 = core_actor_cpp_FUN_0040cd00(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr,(iVar4 == 0) + 0xb,iVar5);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc294);
      uVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ub-die?.wav");
      *(uint *)&param_1->field_0xc294 = uVar2;
    }
  }
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
