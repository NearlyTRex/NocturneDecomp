// Name: core_shotgun.cpp_CShadowsc_setup_FUN_00546360
// Address: 00546360
// Address Range: [[00546360, 005463e3]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShadowsc_setup_FUN_00546360(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShadowsc_setup_FUN_00546360(CShadowsc *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  *(int *)&this_ptr->field_0xd054 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xd058 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 R Finger0",1);
  *(int *)&this_ptr->field_0xd05c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 L Finger0",1);
  *(int *)&this_ptr->field_0xd060 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110((CEnemy *)this_ptr);
  return;
}
