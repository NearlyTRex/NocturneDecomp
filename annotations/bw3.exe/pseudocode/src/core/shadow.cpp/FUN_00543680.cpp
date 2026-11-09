// Name: core_shadow.cpp_FUN_00543680
// Address: 00543680
// Address Range: [[00543680, 0054386c]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00543680(CEnemy *param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_00543680(CEnemy *param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  uint uVar2;
  
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)&param_1->field_0x158);
  *(uint *)&param_1[1].field_0x50 = 0;
  *(uint *)&param_1[1].field_0x7c = 0;
  iVar1 = _stricmp(&param_1->field_0x24a8,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = _stricmp
                        (&param_1->field_0x24a8,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    *(uint *)&param_1[1].field_0x50 = 1;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Pelvis",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L Finger1",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R Finger1",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  *(uint *)&param_1->field_0xfc = 1;
  *(uint *)&param_1->field_0xf8 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    *(uint *)&param_1->field_0x3270 = 0x3fc00000;
  }
  *(uint *)&param_1[1].field_0x24 = 0;
  uVar2 = core_actor_cpp_FUN_0040ce40(0x41200000,0x41f00000);
  *(uint *)&param_1[1].field_0x2c = 0;
  *(uint *)&param_1[1].field_0x30 = 0;
  *(uint *)&param_1[1].field_0x28 = uVar2;
  switch(*(uint *)&param_1[1].field_0x54) {
  case 0:
  case 1:
    *(uint *)&param_1->field_0xce5c = 0x41700000;
    break;
  case 2:
    *(uint *)&param_1->field_0xce5c = 0x41c80000;
    break;
  case 3:
    *(uint *)&param_1->field_0xce5c = 0x41f00000;
    *(uint *)&param_1->field_0xce60 = 0x41a00000;
    *(uint *)&param_1->field_0x2538 = 0x42700000;
    return;
  default:
    goto switchD_005437f7_default;
  }
  *(uint *)&param_1->field_0xce60 = 0x41a00000;
  *(uint *)&param_1->field_0x2538 = 0x42200000;
switchD_005437f7_default:
  return;
}
