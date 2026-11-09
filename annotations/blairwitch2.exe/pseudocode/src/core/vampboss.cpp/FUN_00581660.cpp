// Name: core_vampboss.cpp_FUN_00581660
// Address: 00581660
// Address Range: [[00581660, 00581863]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_00581660(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_FUN_00581660(CEnemy *param_1)

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
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  this_ptr = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = param_1 + 1;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr_00);
  model_ptr = &param_1[1].field_0x22b4;
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)model_ptr,"batwing.cth");
  puVar1 = &param_1->field_0x30;
  position = &param_1->field_0x20;
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)model_ptr,(CVector3f *)position,(CVector3f *)puVar1,
             (CDeformableModelInstance *)this_ptr_00);
  model_ptr_00 = &param_1[4].field_0xacfc;
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)model_ptr_00,"noscape.cth");
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)model_ptr_00,(CVector3f *)position,(CVector3f *)puVar1,
             (CDeformableModelInstance *)this_ptr);
  model_ptr_01 = &param_1[8].field_0x2c4c;
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)model_ptr_01,"nosskirt.cth");
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)model_ptr_01,(CVector3f *)position,(CVector3f *)puVar1,
             (CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
            ((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)this_ptr_00);
  puVar1 = &param_1[0xb].field_0xb698;
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            ((CMorph *)puVar1,0,(CDeformableModelInstance *)this_ptr);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            ((CMorph *)puVar1,0,(CKeyFramedModel *)model_ptr_00,0);
  _DAT_0268014c = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            ((CMorph *)puVar1,0,(CKeyFramedModel *)model_ptr_00,0);
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            ((CMorph *)puVar1,0,(CKeyFramedModel *)model_ptr_01,0);
  _DAT_0268014c = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            ((CMorph *)puVar1,0,(CKeyFramedModel *)model_ptr_01,0);
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            ((CMorph *)puVar1,1,(CDeformableModelInstance *)this_ptr_00);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            ((CMorph *)puVar1,1,(CKeyFramedModel *)model_ptr,0);
  _DAT_0268014c = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            ((CMorph *)puVar1,1,(CKeyFramedModel *)model_ptr,0);
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_getReady_FUN_005b71d0((CMorph *)puVar1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            ((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            ((CDeformableModelInstance *)this_ptr_00);
  *(uint *)&param_1->field_0xfc = 1;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  iVar2 = core_skeleton_cpp_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  *(uint *)&param_1->field_0x261c = 0;
  *(uint *)&param_1[0xb].field_0xc2d4 = 0;
  *(int *)&param_1->field_0x2618 = iVar2;
  return;
}
