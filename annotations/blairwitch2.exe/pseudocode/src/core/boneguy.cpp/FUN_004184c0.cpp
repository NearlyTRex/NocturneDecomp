// Name: core_boneguy.cpp_FUN_004184c0
// Address: 004184c0
// Address Range: [[004184c0, 0041869c]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_004184c0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_FUN_004184c0(CEnemy *param_1)

{
  byte *this_ptr;
  int iVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *pCVar2;
  
  this_ptr = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007bc944 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"CBip01 Head" + 1,1);
  _DAT_007bc950 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_007bc954 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  DAT_007bc958 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007bc95c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007bc960 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007bc964 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  DAT_007bc948 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  DAT_007bc94c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  DAT_007bc968 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  DAT_007bc96c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  DAT_007bc944 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  DAT_007bc958 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007bc95c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  DAT_007bc968 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  DAT_007bc96c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                     ((CDeformableModelInstance *)this_ptr);
  iVar1 = *(int *)&pCVar2->field_0xc00;
  *(int *)&param_1[1].field_0x7c = iVar1;
  if (0x14 < iVar1) {
    _DAT_01d046a0 = "..\\core\\boneguy.cpp";
    _DAT_01d046a4 = 0x130;
    core_main_c_FUN_004e4500("CBoneGuy::explode - Not enough containers");
  }
  *(int *)&param_1->field_0x2618 = DAT_007bc948;
  *(int *)&param_1->field_0x2690 = DAT_007bc94c;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  *(uint *)&param_1[1].field_0x10 = 0;
  return;
}
