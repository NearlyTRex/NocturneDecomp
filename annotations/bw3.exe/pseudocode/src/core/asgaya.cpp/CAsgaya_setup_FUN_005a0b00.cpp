// Name: core_asgaya.cpp_CAsgaya_setup_FUN_005a0b00
// Address: 005a0b00
// Address Range: [[005a0b00, 005a0bd8]]
// Convention: __cdecl
// Signature: void __cdecl core_asgaya_cpp_CAsgaya_setup_FUN_005a0b00(CAsgaya *this_ptr)

#include "nocturne.h"

void __cdecl core_asgaya_cpp_CAsgaya_setup_FUN_005a0b00(CAsgaya *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  byte *this_ptr_01;
  
  core_npc_cpp_CNPC_setup_FUN_00509020((CNPC *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0x33fb8 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  *(uint *)&this_ptr->field_0x33fac = 0x3f400000;
  *(uint *)&this_ptr->field_0x33fc0 = 0;
  *(int *)&this_ptr->field_0x33fbc = iVar1;
  *(uint *)&this_ptr->field_0x25a8 = *(uint *)&this_ptr->field_0x33fb8;
  if (*(int *)&this_ptr->field_0x27a8 != 0) {
    *(uint *)&this_ptr->field_0xfc = 1;
  }
  core_fire_cpp_FUN_004a4130(0x01C73654,3);
  core_fire_cpp_FUN_004a41d0(0x01C73654,4);
  core_charactr_cpp_FUN_0042f280(1);
  this_ptr_01 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
            ((CDeformableModelInstance *)this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
            ((CDeformableModelInstance *)this_ptr_01);
  return;
}
