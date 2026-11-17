// Name: core_icepick.cpp_CIcePick_setup_FUN_004d4a20
// Address: 004d4a20
// Address Range: [[004d4a20, 004d4c34]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004d4a20(CIcePick *this_ptr)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004d4a20(CIcePick *this_ptr)

{
  int iVar1;
  CSkeleton *this_ptr_00;
  
  core_hero_cpp_CHero_setup_FUN_004ce4a0(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr->base).base.model);
  g_INT_ARRAY_01cee0b4[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 head",1);
  g_INT_ARRAY_01cee0b4[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Clavicle",1);
  g_INT_ARRAY_01cee0b4[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Clavicle",1);
  g_INT_ARRAY_01cee0b4[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  g_INT_ARRAY_01cee0b4[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  g_INT_ARRAY_01cee0b4[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  g_INT_ARRAY_01cee0b4[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  g_INT_ARRAY_01cee0b4[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  g_INT_ARRAY_01cee0b4[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  g_INT_ARRAY_01cee0b4[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Thigh",1);
  g_INT_ARRAY_01cee0b4[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Thigh",1);
  g_INT_ARRAY_01cee0b4[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Calf",1);
  g_INT_ARRAY_01cee0b4[0xc] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Calf",1);
  g_INT_ARRAY_01cee0b4[0xd] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  g_INT_ARRAY_01cee0b4[0xe] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  g_INT_ARRAY_01cee0b4[0xf] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  g_INT_ARRAY_01cee0b4[0x10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  g_INT_ARRAY_01cee0b4[0x11] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = 0;
  (this_ptr->base).base.carry_hands[1].secondary_bone_index = 0;
  this_ptr->guns_drawn = 0;
  (this_ptr->base).base.carry_hands[0].bone_index = g_INT_ARRAY_01cee0b4[0xd];
  (this_ptr->base).base.carry_hands[1].bone_index = g_INT_ARRAY_01cee0b4[0xe];
  iVar1 = g_INT_01cedef4;
  this_ptr->pending_pickup_target = (CDemonActor *)0x0;
  if (this_ptr == (CIcePick *)g_CHero_PTR_ARRAY_01cedee4[iVar1]) {
    (((CIcePick *)g_CHero_PTR_ARRAY_01cedee4[iVar1])->base).base.collision_cylinder_radius = 1.5;
  }
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[0] = 0;
  this_ptr->aim_pitch = 0.0;
  return;
}
