// Name: core_dracbrid.cpp_FUN_0047b1b0
// Address: 0047b1b0
// Address Range: [[0047b1b0, 0047b490]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_0047b1b0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_FUN_0047b1b0(CEnemy *param_1)

{
  byte *str1;
  int iVar1;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  uint uVar2;
  char *pcVar3;
  
  str1 = &param_1->field_0x24a8;
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    iVar1 = _stricmp(str1,"nbride2.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_FUN_00569f50(&param_1->field_0x158,"nbride2x.dfm");
    }
    iVar1 = _stricmp(str1,"nbride3.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_FUN_00569f50(&param_1->field_0x158,"nbride3x.dfm");
    }
    iVar1 = _stricmp(str1,"nbride4.dfm");
    if (iVar1 != 0) goto LAB_0047b245;
    pcVar3 = "nbride4x.dfm";
  }
  else {
    iVar1 = _stricmp(str1,"nbride2x.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_FUN_00569f50(&param_1->field_0x158,"nbride2.dfm");
    }
    iVar1 = _stricmp(str1,"nbride3x.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_FUN_00569f50(&param_1->field_0x158,"nbride3.dfm");
    }
    iVar1 = _stricmp(str1,"nbride4x.dfm");
    if (iVar1 != 0) goto LAB_0047b245;
    pcVar3 = "nbride4.dfm";
  }
  core_skeleton_cpp_FUN_00569f50(&param_1->field_0x158,pcVar3);
LAB_0047b245:
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  _DAT_01bc0d34 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  _DAT_01bc0d38 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",1);
  _DAT_01bc0d3c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",1);
  _DAT_01bc0d40 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01bc0d44 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01bc0d48 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine",1);
  _DAT_01bc0d4c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  _DAT_01bc0d50 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"larm01",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"l4arm01",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"rarm01",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"r4arm01",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"lshin01",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"rshin01",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"torso01",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"waist01",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"head01",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  *(uint *)&param_1[1].field_0xa8 = 0;
  uVar2 = core_actor_cpp_FUN_0040cc00(0x40a00000,0x41200000);
  *(uint *)&param_1[1].field_0x94 = uVar2;
  uVar2 = core_actor_cpp_FUN_0040cc00(0x40000000,0x41a00000);
  *(uint *)&param_1[1].field_0x98 = uVar2;
  return;
}
