// Name: core_zombie.cpp_CZombie_setup_FUN_00588a80
// Address: 00588a80
// Address Range: [[00588a80, 00588e7e]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_setup_FUN_00588a80(CZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_CZombie_setup_FUN_00588a80(CZombie *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  char *str1;
  uint uVar1;
  byte uVar2;
  ushort uVar3;
  CSkeleton *this_ptr_01;
  int iVar4;
  CDeformableModel *this_ptr_02;
  float fVar5;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xd0e8 = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 L ForeArm",1);
  *(int *)&this_ptr->field_0xd0f4 = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 R ForeArm",1);
  *(int *)&this_ptr->field_0xd0f8 = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 L UpperArm",1);
  *(int *)&this_ptr->field_0xd0fc = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 R UpperArm",1);
  *(int *)&this_ptr->field_0xd100 = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  *(int *)&this_ptr->field_0xd104 = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  *(int *)&this_ptr->field_0xd108 = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  *(int *)&this_ptr->field_0xd0ec = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0xd0f0 = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  *(int *)&this_ptr->field_0xd10c = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  *(int *)&this_ptr->field_0xd110 = iVar4;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr_00);
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"larm01",1);
  *(int *)&this_ptr->field_0xd114 = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"l4arm01",1);
  *(int *)&this_ptr->field_0xd118 = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rarm01",1);
  *(int *)&this_ptr->field_0xd11c = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"r4arm01",0);
  *(int *)&this_ptr->field_0xd120 = iVar4;
  if (iVar4 < 0) {
    *(uint *)&this_ptr->field_0xd120 = 0x3b;
  }
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"waist01",0);
  *(int *)&this_ptr->field_0xd124 = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"torso01",1);
  *(int *)&this_ptr->field_0xd128 = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"head01",1);
  *(int *)&this_ptr->field_0xd12c = iVar4;
  *(uint *)&(this_ptr->base).base.model.field_0x222c = 0;
  iVar4 = _stricmp
                    ((this_ptr->base).base.model.model_name,"newzomb1.dfm");
  if (iVar4 == 0) {
    uVar1 = *(uint *)&this_ptr->field_0xd114;
    *(uint *)&this_ptr->field_0xd114 = *(uint *)&this_ptr->field_0xd11c;
    *(uint *)&this_ptr->field_0xd11c = uVar1;
    uVar1 = *(uint *)&this_ptr->field_0xd118;
    *(uint *)&this_ptr->field_0xd118 = *(uint *)&this_ptr->field_0xd120;
    *(uint *)&this_ptr->field_0xd120 = uVar1;
  }
  uVar2 = this_ptr->field_0xd0ed;
  uVar3 = *(ushort *)&this_ptr->field_0xd0ee;
  (this_ptr->base).base.carry_hands[0] = (SCarryHand)this_ptr->field_0xd0ec;
  (this_ptr->base).base.carry_hands[1] = (SCarryHand)uVar2;
  *(ushort *)&(this_ptr->base).base.field_0x25aa = uVar3;
  *(uint *)&(this_ptr->base).base.field_0x25ac = *(uint *)&this_ptr->field_0xd118;
  *(uint *)&(this_ptr->base).base.field_0x2620 = *(uint *)&this_ptr->field_0xd0f0;
  iVar4 = *(int *)&this_ptr->field_0xd0d8;
  *(uint *)&(this_ptr->base).base.field_0x2624 = *(uint *)&this_ptr->field_0xd120;
  (this_ptr->base).base.base.is_transparent = (uint)(iVar4 != 0);
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
  *(float *)&this_ptr->field_0xd144 = fVar5;
  if ((-1 < *(int *)&this_ptr->field_0xd124) &&
     (*(float *)&(this_ptr->base).base.field_0x3280 < 0.0)) {
    *(float *)&(this_ptr->base).base.field_0x3280 =
         (this_ptr->base).base.model.bounding_box.max.y + (float)_DAT_005d84f7;
  }
  str1 = (this_ptr->base).base.model.model_name;
  *(uint *)&this_ptr->field_0xd134 = 0;
  *(uint *)&this_ptr->field_0xd0e0 = 0;
  iVar4 = _stricmp(str1,"newzchik.dfm");
  if (((iVar4 == 0) ||
      (iVar4 = _stricmp(str1,"zombho1.dfm"), iVar4 == 0)) ||
     (iVar4 = _stricmp(str1,"zombho2.dfm"), iVar4 == 0)) {
    *(uint *)&this_ptr->field_0xd0e0 = 1;
  }
  *(uint *)&this_ptr->field_0xd13c = 0;
  iVar4 = *(int *)&(this_ptr->base).base.field_0x3268;
  *(uint *)&this_ptr->field_0xd138 = 0;
  if (iVar4 == 0) {
    switch(*(uint *)&this_ptr->field_0xd140) {
    case 0:
    case 1:
      *(uint *)&(this_ptr->base).field_0xce5c = 0x41200000;
      *(uint *)&(this_ptr->base).field_0xce60 = 0x41200000;
      (this_ptr->base).base.hit_points = 20.0;
      break;
    case 2:
      *(uint *)&(this_ptr->base).field_0xce5c = 0x41200000;
      *(uint *)&(this_ptr->base).field_0xce60 = 0x41200000;
      (this_ptr->base).base.hit_points = 25.0;
      return;
    case 3:
      *(uint *)&(this_ptr->base).field_0xce5c = 0x41700000;
      *(uint *)&(this_ptr->base).field_0xce60 = 0x41200000;
      (this_ptr->base).base.hit_points = 30.0;
      return;
    case 4:
      *(uint *)&(this_ptr->base).field_0xce5c = 0x41700000;
      *(uint *)&(this_ptr->base).field_0xce60 = 0x41700000;
      (this_ptr->base).base.hit_points = 40.0;
      return;
    case 5:
      *(uint *)&(this_ptr->base).field_0xce5c = 0x41700000;
      *(uint *)&(this_ptr->base).field_0xce60 = 0x41700000;
      *(uint *)&this_ptr->field_0xd0dc = 1;
      (this_ptr->base).base.hit_points = 50.0;
      return;
    }
  }
  return;
}
