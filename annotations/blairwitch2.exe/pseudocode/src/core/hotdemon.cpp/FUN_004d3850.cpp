// Name: core_hotdemon.cpp_FUN_004d3850
// Address: 004d3850
// Address Range: [[004d3850, 004d3a2e]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004d3850(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_FUN_004d3850(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  char *model_name;
  
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    model_name = "hotdemonx.dfm";
  }
  else {
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&param_1->field_0x2b4,model_name);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  this_ptr = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_01cee00c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  _DAT_01cee018 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01cee01c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01cee020 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01cee024 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01cee028 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01cee02c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01cee010 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01cee014 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01cee030 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_01cee034 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01cee038 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01cee00c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  _DAT_01cee020 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01cee024 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01cee030 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_01cee038 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
            ((CDeformableModelInstance *)this_ptr);
  *(uint *)(param_1 + 1) = 0;
  *(uint *)&param_1[1].field_0x4 = 0;
  return;
}
