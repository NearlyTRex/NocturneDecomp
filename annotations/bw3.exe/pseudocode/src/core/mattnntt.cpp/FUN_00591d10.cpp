// Name: core_mattnntt.cpp_FUN_00591d10
// Address: 00591d10
// Address Range: [[00591d10, 00591ee1]]
// Convention: unknown
// Signature: void core_mattnntt_cpp_FUN_00591d10(CEnemy *param_1)

#include "nocturne.h"

void core_mattnntt_cpp_FUN_00591d10(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  SMotion *pSVar2;
  
  if (*(int *)&param_1->field_0x3268 == 0) {
    *(uint *)&param_1->field_0xce5c = 0x41a00000;
    *(uint *)&param_1->field_0xce60 = 0x41a00000;
    *(uint *)&param_1->field_0x2538 = 0x43480000;
  }
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Toe0",1);
  *(int *)&param_1[1].field_0x30 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Toe0",1);
  *(int *)&param_1[1].field_0x34 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  *(int *)&param_1[1].field_0x28 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  *(uint *)&param_1->field_0xce5c = 0;
  *(int *)&param_1[1].field_0x2c = iVar1;
  *(uint *)&param_1->field_0x2620 = *(uint *)&param_1[1].field_0x24;
  *(uint *)&param_1->field_0x25a8 = *(uint *)&param_1[1].field_0x20;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr);
  if (*(int *)(pSVar2 + 0x24) == 9) {
    *(uint *)&param_1->field_0x2540 = 0;
  }
  else {
    *(uint *)&param_1->field_0x2540 = 2;
  }
  sound_sndmain_cpp_FUN_00556230("mann_firestaff.wav");
  sound_sndmain_cpp_FUN_00556230("mann_stand.wav");
  sound_sndmain_cpp_FUN_00556230("mann_chasewalk.wav");
  sound_sndmain_cpp_FUN_00556230("mann_chasefast.wav");
  sound_sndmain_cpp_FUN_00556230("mann_attack.wav");
  sound_sndmain_cpp_FUN_00556230("mann_attack1.wav");
  sound_sndmain_cpp_FUN_00556230("mann_attack2.wav");
  sound_sndmain_cpp_FUN_00556230("mann_attack3.wav");
  sound_sndmain_cpp_FUN_00556230("mann_pain.wav");
  sound_sndmain_cpp_FUN_00556230("mann_die.wav");
  sound_sndmain_cpp_FUN_00556230("mann_warning.wav");
  sound_sndmain_cpp_FUN_00556230("mann_appear.wav");
  sound_sndmain_cpp_FUN_00556230("mann_disappear.wav");
  return;
}
