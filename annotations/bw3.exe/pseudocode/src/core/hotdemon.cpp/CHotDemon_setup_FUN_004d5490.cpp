// Name: core_hotdemon.cpp_CHotDemon_setup_FUN_004d5490
// Address: 004d5490
// Address Range: [[004d5490, 004d566e]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004d5490(CHotDemon *this_ptr)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004d5490(CHotDemon *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  char *model_name;
  
  if (g_CGamePtr->nudity_flag == 0) {
    model_name = "hotdemonx.dfm";
  }
  else {
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(this_ptr->base).base.model,model_name);
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  g_INT_ARRAY_01d5baec[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  g_INT_ARRAY_01d5baec[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L ForeArm",1);
  g_INT_ARRAY_01d5baec[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R ForeArm",1);
  g_INT_ARRAY_01d5baec[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  g_INT_ARRAY_01d5baec[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  g_INT_ARRAY_01d5baec[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  g_INT_ARRAY_01d5baec[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  g_INT_ARRAY_01d5baec[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  g_INT_ARRAY_01d5baec[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  g_INT_ARRAY_01d5baec[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  g_INT_ARRAY_01d5baec[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine1",1);
  g_INT_ARRAY_01d5baec[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  g_INT_ARRAY_01d5baec[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  g_INT_ARRAY_01d5baec[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  g_INT_ARRAY_01d5baec[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  g_INT_ARRAY_01d5baec[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  g_INT_ARRAY_01d5baec[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr_00);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  return;
}
