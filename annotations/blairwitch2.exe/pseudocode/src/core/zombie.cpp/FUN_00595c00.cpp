// Name: core_zombie.cpp_FUN_00595c00
// Address: 00595c00
// Address Range: [[00595c00, 00595f22]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_00595c00(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombie_cpp_FUN_00595c00(CEnemy *param_1)

{
  byte *puVar1;
  CSkeleton *this_ptr;
  int iVar2;
  CDeformableModel *this_ptr_00;
  uint uVar3;
  
  puVar1 = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)puVar1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)puVar1);
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x90 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L ForeArm",1);
  *(int *)&param_1[1].field_0x9c = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R ForeArm",1);
  *(int *)&param_1[1].field_0xa0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L UpperArm",1);
  *(int *)&param_1[1].field_0xa4 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R UpperArm",1);
  *(int *)&param_1[1].field_0xa8 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Foot",1);
  *(int *)&param_1[1].field_0xac = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Foot",1);
  *(int *)&param_1[1].field_0xb0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
  *(int *)&param_1[1].field_0x94 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  *(int *)&param_1[1].field_0x98 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine",1);
  *(int *)&param_1[1].field_0xb4 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0xb8 = iVar2;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)puVar1);
  iVar2 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"larm01",1);
  *(int *)&param_1[1].field_0xbc = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"l4arm01",1);
  *(int *)&param_1[1].field_0xc0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"rarm01",1);
  *(int *)&param_1[1].field_0xc4 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"r4arm01",0);
  *(int *)&param_1[1].field_0xc8 = iVar2;
  if (iVar2 < 0) {
    *(uint *)&param_1[1].field_0xc8 = 0x1d;
  }
  iVar2 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"waist01",0);
  *(int *)&param_1[1].field_0xcc = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"torso01",1);
  *(int *)&param_1[1].field_0xd0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00543100(this_ptr_00,"head01",1);
  *(int *)&param_1[1].field_0xd4 = iVar2;
  *(uint *)&param_1->field_0x2468 = 0;
  iVar2 = _stricmp(&param_1->field_0x2514,"newzomb1.dfm");
  if (iVar2 == 0) {
    uVar3 = *(uint *)&param_1[1].field_0xbc;
    *(uint *)&param_1[1].field_0xbc = *(uint *)&param_1[1].field_0xc4;
    *(uint *)&param_1[1].field_0xc4 = uVar3;
    uVar3 = *(uint *)&param_1[1].field_0xc0;
    *(uint *)&param_1[1].field_0xc0 = *(uint *)&param_1[1].field_0xc8;
    *(uint *)&param_1[1].field_0xc8 = uVar3;
  }
  *(uint *)&param_1->field_0x2618 = *(uint *)&param_1[1].field_0x94;
  *(uint *)&param_1->field_0x261c = *(uint *)&param_1[1].field_0xc0;
  *(uint *)&param_1->field_0x2690 = *(uint *)&param_1[1].field_0x98;
  *(uint *)&param_1->field_0x2694 = *(uint *)&param_1[1].field_0xc8;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  *(uint *)&param_1->field_0xfc = (uint)(*(int *)&param_1[1].field_0x84 != 0);
  uVar3 = core_actor_cpp_FUN_0040cf60(0,0x3f800000);
  *(uint *)&param_1[1].field_0xe8 = uVar3;
  if ((-1 < *(int *)&param_1[1].field_0xcc) && (*(float *)&param_1->field_0x3444 < 0.0)) {
    *(float *)&param_1->field_0x3444 = *(float *)&param_1->field_0x24fc + (float)_DAT_005eef62;
  }
  puVar1 = &param_1->field_0x2514;
  *(uint *)&param_1[1].field_0xdc = 0;
  *(uint *)&param_1[1].field_0x8c = 0;
  iVar2 = _stricmp(puVar1,"newzchik.dfm");
  if (((iVar2 == 0) ||
      (iVar2 = _stricmp(puVar1,"zombho1.dfm"), iVar2 == 0)) ||
     (iVar2 = _stricmp(puVar1,"zombho2.dfm"), iVar2 == 0)) {
    *(uint *)&param_1[1].field_0x8c = 1;
  }
  *(uint *)&param_1[1].field_0xe4 = 0;
  *(uint *)&param_1[1].field_0xe0 = 0;
  return;
}
