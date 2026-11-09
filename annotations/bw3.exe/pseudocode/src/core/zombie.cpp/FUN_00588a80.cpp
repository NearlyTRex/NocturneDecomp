// Name: core_zombie.cpp_FUN_00588a80
// Address: 00588a80
// Address Range: [[00588a80, 00588e7e]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_00588a80(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombie_cpp_FUN_00588a80(CEnemy *param_1)

{
  byte *puVar1;
  CSkeleton *this_ptr;
  int iVar2;
  CDeformableModel *this_ptr_00;
  uint uVar3;
  
  puVar1 = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)puVar1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)puVar1);
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x94 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L ForeArm",1);
  *(int *)&param_1[1].field_0xa0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R ForeArm",1);
  *(int *)&param_1[1].field_0xa4 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L UpperArm",1);
  *(int *)&param_1[1].field_0xa8 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R UpperArm",1);
  *(int *)&param_1[1].field_0xac = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L Foot",1);
  *(int *)&param_1[1].field_0xb0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R Foot",1);
  *(int *)&param_1[1].field_0xb4 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L Hand",1);
  *(int *)&param_1[1].field_0x98 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R Hand",1);
  *(int *)&param_1[1].field_0x9c = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine",1);
  *(int *)&param_1[1].field_0xb8 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0xbc = iVar2;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)puVar1);
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_00,"larm01",1);
  *(int *)&param_1[1].field_0xc0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_00,"l4arm01",1);
  *(int *)&param_1[1].field_0xc4 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_00,"rarm01",1);
  *(int *)&param_1[1].field_0xc8 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_00,"r4arm01",0);
  *(int *)&param_1[1].field_0xcc = iVar2;
  if (iVar2 < 0) {
    *(uint *)&param_1[1].field_0xcc = 0x3b;
  }
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_00,"waist01",0);
  *(int *)&param_1[1].field_0xd0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_00,"torso01",1);
  *(int *)&param_1[1].field_0xd4 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_00,"head01",1);
  *(int *)&param_1[1].field_0xd8 = iVar2;
  *(uint *)&param_1->field_0x2384 = 0;
  iVar2 = _stricmp(&param_1->field_0x24a8,"newzomb1.dfm");
  if (iVar2 == 0) {
    uVar3 = *(uint *)&param_1[1].field_0xc0;
    *(uint *)&param_1[1].field_0xc0 = *(uint *)&param_1[1].field_0xc8;
    *(uint *)&param_1[1].field_0xc8 = uVar3;
    uVar3 = *(uint *)&param_1[1].field_0xc4;
    *(uint *)&param_1[1].field_0xc4 = *(uint *)&param_1[1].field_0xcc;
    *(uint *)&param_1[1].field_0xcc = uVar3;
  }
  *(uint *)&param_1->field_0x25a8 = *(uint *)&param_1[1].field_0x98;
  *(uint *)&param_1->field_0x25ac = *(uint *)&param_1[1].field_0xc4;
  *(uint *)&param_1->field_0x2620 = *(uint *)&param_1[1].field_0x9c;
  iVar2 = *(int *)&param_1[1].field_0x84;
  *(uint *)&param_1->field_0x2624 = *(uint *)&param_1[1].field_0xcc;
  *(uint *)&param_1->field_0xfc = (uint)(iVar2 != 0);
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  uVar3 = core_actor_cpp_FUN_0040ce40(0,0x3f800000);
  *(uint *)&param_1[1].field_0xf0 = uVar3;
  if ((-1 < *(int *)&param_1[1].field_0xd0) && (*(float *)&param_1->field_0x3280 < 0.0)) {
    *(float *)&param_1->field_0x3280 = *(float *)&param_1->field_0x2490 + (float)_DAT_005d84f7;
  }
  puVar1 = &param_1->field_0x24a8;
  *(uint *)&param_1[1].field_0xe0 = 0;
  *(uint *)&param_1[1].field_0x8c = 0;
  iVar2 = _stricmp(puVar1,"newzchik.dfm");
  if (((iVar2 == 0) ||
      (iVar2 = _stricmp(puVar1,"zombho1.dfm"), iVar2 == 0)) ||
     (iVar2 = _stricmp(puVar1,"zombho2.dfm"), iVar2 == 0)) {
    *(uint *)&param_1[1].field_0x8c = 1;
  }
  *(uint *)&param_1[1].field_0xe8 = 0;
  iVar2 = *(int *)&param_1->field_0x3268;
  *(uint *)&param_1[1].field_0xe4 = 0;
  if (iVar2 == 0) {
    switch(*(uint *)&param_1[1].field_0xec) {
    case 0:
    case 1:
      *(uint *)&param_1->field_0xce5c = 0x41200000;
      *(uint *)&param_1->field_0xce60 = 0x41200000;
      *(uint *)&param_1->field_0x2538 = 0x41a00000;
      break;
    case 2:
      *(uint *)&param_1->field_0xce5c = 0x41200000;
      *(uint *)&param_1->field_0xce60 = 0x41200000;
      *(uint *)&param_1->field_0x2538 = 0x41c80000;
      return;
    case 3:
      *(uint *)&param_1->field_0xce5c = 0x41700000;
      *(uint *)&param_1->field_0xce60 = 0x41200000;
      *(uint *)&param_1->field_0x2538 = 0x41f00000;
      return;
    case 4:
      *(uint *)&param_1->field_0xce5c = 0x41700000;
      *(uint *)&param_1->field_0xce60 = 0x41700000;
      *(uint *)&param_1->field_0x2538 = 0x42200000;
      return;
    case 5:
      *(uint *)&param_1->field_0xce5c = 0x41700000;
      *(uint *)&param_1->field_0xce60 = 0x41700000;
      *(uint *)&param_1[1].field_0x88 = 1;
      *(uint *)&param_1->field_0x2538 = 0x42480000;
      return;
    }
  }
  return;
}
