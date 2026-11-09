// Name: core_vampboss.cpp_FUN_005a52a0
// Address: 005a52a0
// Address Range: [[005a52a0, 005a54a3]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_005a52a0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_FUN_005a52a0(CEnemy *param_1)

{
  byte *puVar1;
  byte *position;
  byte *this_ptr;
  CEnemy *this_ptr_00;
  byte *model_ptr;
  byte *model_ptr_00;
  byte *model_ptr_01;
  CSkeleton *this_ptr_01;
  int iVar2;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = param_1 + 1;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr_00);
  model_ptr = &param_1[1].field_0x23a4;
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)model_ptr,"batwing.cth");
  puVar1 = &param_1->field_0x30;
  position = &param_1->field_0x20;
  core_cloth_cpp_FUN_0043eea0
            ((CCloth *)model_ptr,(CVector3f *)position,(CVector3f *)puVar1,
             (CDeformableModelInstance *)this_ptr_00);
  model_ptr_00 = &param_1[6].field_0x2cc;
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)model_ptr_00,"noscape.cth");
  core_cloth_cpp_FUN_0043eea0
            ((CCloth *)model_ptr_00,(CVector3f *)position,(CVector3f *)puVar1,
             (CDeformableModelInstance *)this_ptr);
  model_ptr_01 = &param_1[10].field_0xa45c;
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)model_ptr_01,"nosskirt.cth");
  core_cloth_cpp_FUN_0043eea0
            ((CCloth *)model_ptr_01,(CVector3f *)position,(CVector3f *)puVar1,
             (CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            ((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)this_ptr_00);
  puVar1 = &param_1[0xf].field_0x8388;
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)puVar1,0,(CDeformableModelInstance *)this_ptr);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)puVar1,0,(CKeyFramedModel *)model_ptr_00,0);
  _DAT_01d39d30 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)puVar1,0,(CKeyFramedModel *)model_ptr_00,0);
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)puVar1,0,(CKeyFramedModel *)model_ptr_01,0);
  _DAT_01d39d30 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)puVar1,0,(CKeyFramedModel *)model_ptr_01,0);
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)puVar1,1,(CDeformableModelInstance *)this_ptr_00);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)puVar1,1,(CKeyFramedModel *)model_ptr,0);
  _DAT_01d39d30 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)puVar1,1,(CKeyFramedModel *)model_ptr,0);
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)puVar1);
  core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)this_ptr_00);
  *(uint *)&param_1->field_0xfc = 1;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  *(uint *)&param_1->field_0x25ac = 0;
  *(uint *)&param_1[0xf].field_0x8fc4 = 0;
  *(int *)&param_1->field_0x25a8 = iVar2;
  return;
}
