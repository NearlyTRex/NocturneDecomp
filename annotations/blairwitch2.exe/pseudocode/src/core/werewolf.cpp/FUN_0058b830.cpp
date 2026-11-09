// Name: core_werewolf.cpp_FUN_0058b830
// Address: 0058b830
// Address Range: [[0058b830, 0058b94a]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_0058b830(CEnemy *param_1)

#include "nocturne.h"

void core_werewolf_cpp_FUN_0058b830(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  uint uVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)&param_1->field_0x2b4);
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine3",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Finger1",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Finger1",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01jaw2",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  *(uint *)&param_1->field_0xfc = *(uint *)&param_1[1].field_0x18;
  uVar2 = core_actor_cpp_FUN_0040cf60(0,0x3f800000);
  iVar1 = *(int *)(param_1 + 1);
  *(uint *)&param_1[1].field_0x44 = uVar2;
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x3434 = 0x3fc00000;
  }
  *(uint *)&param_1[1].field_0x1c = 0;
  uVar2 = core_actor_cpp_FUN_0040cf60(0x41200000,0x41f00000);
  *(uint *)&param_1[1].field_0x24 = 0;
  *(uint *)&param_1[1].field_0x28 = 0;
  *(uint *)&param_1[1].field_0x20 = uVar2;
  return;
}
