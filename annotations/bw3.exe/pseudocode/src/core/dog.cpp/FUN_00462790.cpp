// Name: core_dog.cpp_FUN_00462790
// Address: 00462790
// Address Range: [[00462790, 0046284c]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_00462790(CEnemy *param_1)

#include "nocturne.h"

void core_dog_cpp_FUN_00462790(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)&param_1->field_0x158);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine1",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  *(uint *)&param_1->field_0xcde0 = 0;
  if (*(int *)&param_1->field_0x3268 == 0) {
    switch(*(uint *)&param_1[1].field_0xc) {
    case 0:
    case 1:
      *(uint *)&param_1->field_0xce5c = 0x40a00000;
      *(uint *)&param_1->field_0xce60 = 0x41200000;
      *(uint *)&param_1->field_0x2538 = 0x41a00000;
      break;
    case 2:
    case 3:
      *(uint *)&param_1->field_0xce5c = 0x41200000;
      *(uint *)&param_1->field_0xce60 = 0x41200000;
      *(uint *)&param_1->field_0x2538 = 0x41f00000;
      return;
    }
  }
  return;
}
