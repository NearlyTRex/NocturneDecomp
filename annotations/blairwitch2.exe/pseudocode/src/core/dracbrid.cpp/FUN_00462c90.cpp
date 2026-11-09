// Name: core_dracbrid.cpp_FUN_00462c90
// Address: 00462c90
// Address Range: [[00462c90, 00462f70]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_00462c90(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_FUN_00462c90(CEnemy *param_1)

{
  byte *str1;
  int iVar1;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  uint uVar2;
  char *model_name;
  
  str1 = &param_1->field_0x2514;
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    iVar1 = _stricmp(str1,"nbride2.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
                ((CDeformableModelInstance *)&param_1->field_0x2b4,"nbride2x.dfm");
    }
    iVar1 = _stricmp(str1,"nbride3.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
                ((CDeformableModelInstance *)&param_1->field_0x2b4,"nbride3x.dfm");
    }
    iVar1 = _stricmp(str1,"nbride4.dfm");
    if (iVar1 != 0) goto LAB_00462d25;
    model_name = "nbride4x.dfm";
  }
  else {
    iVar1 = _stricmp(str1,"nbride2x.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
                ((CDeformableModelInstance *)&param_1->field_0x2b4,"nbride2.dfm");
    }
    iVar1 = _stricmp(str1,"nbride3x.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
                ((CDeformableModelInstance *)&param_1->field_0x2b4,"nbride3.dfm");
    }
    iVar1 = _stricmp(str1,"nbride4x.dfm");
    if (iVar1 != 0) goto LAB_00462d25;
    model_name = "nbride4.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&param_1->field_0x2b4,model_name);
LAB_00462d25:
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)&param_1->field_0x2b4);
  _DAT_01ba5778 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Head",1);
  _DAT_01ba577c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
  _DAT_01ba5780 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  _DAT_01ba5784 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01ba5788 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01ba578c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine",1);
  _DAT_01ba5790 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine1",1);
  _DAT_01ba5794 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)&param_1->field_0x2b4);
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"larm01",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"l4arm01",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"rarm01",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"r4arm01",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"lshin01",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"rshin01",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"torso01",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"waist01",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"head01",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  *(uint *)&param_1[1].field_0xa8 = 0;
  uVar2 = core_actor_cpp_FUN_0040cf60(0x40a00000,0x41200000);
  *(uint *)&param_1[1].field_0x94 = uVar2;
  uVar2 = core_actor_cpp_FUN_0040cf60(0x40000000,0x41a00000);
  *(uint *)&param_1[1].field_0x98 = uVar2;
  return;
}
