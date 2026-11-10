// Name: core_mattnntt.cpp_CMattanntote_setup_FUN_00591d10
// Address: 00591d10
// Address Range: [[00591d10, 00591ee1]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_setup_FUN_00591d10(CMattanntote *this_ptr)

#include "nocturne.h"

void __cdecl core_mattnntt_cpp_CMattanntote_setup_FUN_00591d10(CMattanntote *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  SMotion *pSVar2;
  
  if (*(int *)&this_ptr->field_0x3268 == 0) {
    *(uint *)&this_ptr->field_0xce5c = 0x41a00000;
    *(uint *)&this_ptr->field_0xce60 = 0x41a00000;
    *(uint *)&this_ptr->field_0x2538 = 0x43480000;
  }
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  *(int *)&this_ptr->field_0xd078 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0xd074 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Toe0",1);
  *(int *)&this_ptr->field_0xd084 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Toe0",1);
  *(int *)&this_ptr->field_0xd088 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  *(int *)&this_ptr->field_0xd07c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  *(uint *)&this_ptr->field_0xce5c = 0;
  *(int *)&this_ptr->field_0xd080 = iVar1;
  *(uint *)&this_ptr->field_0x2620 = *(uint *)&this_ptr->field_0xd078;
  *(uint *)&this_ptr->field_0x25a8 = *(uint *)&this_ptr->field_0xd074;
  core_enemy_cpp_CEnemy_setup_FUN_00489110((CEnemy *)this_ptr);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr_00);
  if (*(int *)(pSVar2 + 0x24) == 9) {
    *(uint *)&this_ptr->field_0x2540 = 0;
  }
  else {
    *(uint *)&this_ptr->field_0x2540 = 2;
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
