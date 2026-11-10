// Name: core_hotdemon.cpp_CHotDemon_setup_FUN_004d3850
// Address: 004d3850
// Address Range: [[004d3850, 004d3a2e]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004d3850(CHotDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004d3850(CHotDemon *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  char *model_name;
  
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    model_name = "hotdemonx.dfm";
  }
  else {
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr->base).base.model,model_name);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  _DAT_01cee00c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  _DAT_01cee018 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01cee01c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01cee020 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01cee024 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01cee028 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01cee02c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01cee010 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01cee014 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01cee030 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  _DAT_01cee034 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01cee038 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01cee00c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  _DAT_01cee020 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01cee024 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01cee030 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  _DAT_01cee038 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  return;
}
