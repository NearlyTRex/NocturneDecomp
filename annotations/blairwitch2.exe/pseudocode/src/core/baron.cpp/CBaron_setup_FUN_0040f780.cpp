// Name: core_baron.cpp_CBaron_setup_FUN_0040f780
// Address: 0040f780
// Address Range: [[0040f780, 0040f934]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_setup_FUN_0040f780(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_setup_FUN_0040f780(CBaron *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  core_hero_cpp_CHero_setup_FUN_004ce4a0(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr->base).base.model);
  g_INT_ARRAY_007bc498[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 head",1);
  g_INT_ARRAY_007bc498[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Clavicle",1);
  g_INT_ARRAY_007bc498[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Clavicle",1);
  g_INT_ARRAY_007bc498[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  g_INT_ARRAY_007bc498[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  g_INT_ARRAY_007bc498[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  g_INT_ARRAY_007bc498[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  g_INT_ARRAY_007bc498[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  g_INT_ARRAY_007bc498[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  g_INT_ARRAY_007bc498[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Thigh",1);
  g_INT_ARRAY_007bc498[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Thigh",1);
  g_INT_ARRAY_007bc498[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Calf",1);
  g_INT_ARRAY_007bc498[0xc] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Calf",1);
  g_INT_ARRAY_007bc498[0xd] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  g_INT_ARRAY_007bc498[0xe] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  g_INT_ARRAY_007bc498[0xf] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  g_INT_ARRAY_007bc498[0x10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  this_ptr->target_actor = (CDemonActor *)0x0;
  (this_ptr->base).base.gesture_branch_root = iVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&g_CKeyFramedModelInstance_007bc51c)
  ;
  return;
}
