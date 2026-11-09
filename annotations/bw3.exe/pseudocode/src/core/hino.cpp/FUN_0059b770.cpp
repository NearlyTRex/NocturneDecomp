// Name: core_hino.cpp_FUN_0059b770
// Address: 0059b770
// Address Range: [[0059b770, 0059b8f0]]
// Convention: unknown
// Signature: void core_hino_cpp_FUN_0059b770(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hino_cpp_FUN_0059b770(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  SMotion *pSVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  if (*(int *)&param_1->field_0x3268 == 0) {
    *(uint *)&param_1->field_0xce5c = 0x41a00000;
    *(uint *)&param_1->field_0xce60 = 0x41a00000;
    *(uint *)&param_1->field_0x2538 = 0x43160000;
  }
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_02d24c4c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"@Bip01 Head" + 1,1);
  _DAT_02d24c54 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  *(int *)&param_1->field_0x25a8 = _DAT_02d24c54;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
            ((CDeformableModelInstance *)this_ptr);
  *(uint *)&param_1->field_0xfc = 1;
  *(uint *)&param_1->field_0xf8 = 0;
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr);
  if (*(int *)(pSVar1 + 0x24) == 8) {
    *(uint *)&param_1->field_0x2540 = 0;
  }
  else {
    *(uint *)&param_1->field_0x2540 = 2;
  }
  *(uint *)(param_1 + 1) = 0;
  *(uint *)&param_1[1].field_0x4 = 0;
  sound_sndmain_cpp_FUN_00556230("hino_stand_fly.wav");
  sound_sndmain_cpp_FUN_00556230("hino_walk_fly.wav");
  sound_sndmain_cpp_FUN_00556230("hino_run_fly.wav");
  sound_sndmain_cpp_FUN_00556230("hino_reverse.wav");
  sound_sndmain_cpp_FUN_00556230("hino_attack_fly.wav");
  sound_sndmain_cpp_FUN_00556230("hino_attack_fly2.wav");
  sound_sndmain_cpp_FUN_00556230("hino_damage_fly.wav");
  sound_sndmain_cpp_FUN_00556230("hino_die_fly.wav");
  sound_sndmain_cpp_FUN_00556230("hino_warning.wav");
  sound_sndmain_cpp_FUN_00556230("hino_big_attack.wav");
  sound_sndmain_cpp_FUN_00556230("hino_appear.wav");
  sound_sndmain_cpp_FUN_00556230("hino_disappear.wav");
  return;
}
