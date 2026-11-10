// Name: core_hino.cpp_CHino_setup_FUN_0059b770
// Address: 0059b770
// Address Range: [[0059b770, 0059b8f0]]
// Convention: __cdecl
// Signature: void __cdecl core_hino_cpp_CHino_setup_FUN_0059b770(CHino *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hino_cpp_CHino_setup_FUN_0059b770(CHino *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  SMotion *pSVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110((CEnemy *)this_ptr);
  if (*(int *)&this_ptr->field_0x3268 == 0) {
    *(uint *)&this_ptr->field_0xce5c = 0x41a00000;
    *(uint *)&this_ptr->field_0xce60 = 0x41a00000;
    *(uint *)&this_ptr->field_0x2538 = 0x43160000;
  }
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr_00);
  _DAT_02d24c4c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"@Bip01 Head" + 1,1);
  _DAT_02d24c54 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0x25a8 = _DAT_02d24c54;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
            ((CDeformableModelInstance *)this_ptr_00);
  *(uint *)&this_ptr->field_0xfc = 1;
  *(uint *)&this_ptr->field_0xf8 = 0;
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr_00);
  if (*(int *)(pSVar1 + 0x24) == 8) {
    *(uint *)&this_ptr->field_0x2540 = 0;
  }
  else {
    *(uint *)&this_ptr->field_0x2540 = 2;
  }
  *(uint *)&this_ptr->field_0xd054 = 0;
  *(uint *)&this_ptr->field_0xd058 = 0;
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
