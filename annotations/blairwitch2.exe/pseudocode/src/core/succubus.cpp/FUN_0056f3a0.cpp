// Name: core_succubus.cpp_FUN_0056f3a0
// Address: 0056f3a0
// Address Range: [[0056f3a0, 0056f6c5]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_0056f3a0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_succubus_cpp_FUN_0056f3a0(CEnemy *param_1)

{
  byte *this_ptr;
  CEnemy *this_ptr_00;
  byte *this_ptr_01;
  CSkeleton *this_ptr_02;
  char *model_name;
  
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
              ((CDeformableModelInstance *)&param_1->field_0x2b4,"succubusx.dfm");
    model_name = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
              ((CDeformableModelInstance *)&param_1->field_0x2b4,"succubus.dfm");
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(param_1 + 1),model_name);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  this_ptr = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = param_1 + 1;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr_00);
  core_cloth_cpp_CClothList_load_FUN_005b14a0((CClothList *)&param_1[1].field_0x22b4);
  core_cloth_cpp_CClothList_setup_FUN_005b1740
            ((CClothList *)&param_1[1].field_0x22b4,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,(CDeformableModelInstance *)this_ptr_00);
  core_cloth_cpp_CClothList_process_FUN_005b1780
            ((CClothList *)&param_1->field_0x2d0c,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,0.05,*(float *)&param_1->field_0x2574,
             (CDeformableModelInstance *)this_ptr_00);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_0264becc = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 Head",1);
  _DAT_0264bed8 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 L ForeArm",1);
  _DAT_0264bedc = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 R ForeArm",1);
  _DAT_0264bee0 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_0264bee4 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_0264bee8 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 L Foot",1);
  _DAT_0264beec = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 R Foot",1);
  _DAT_0264bed0 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 L Hand",1);
  _DAT_0264bed4 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 R Hand",1);
  _DAT_0264bef0 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 Spine",1);
  _DAT_0264bef4 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 Spine1",1);
  _DAT_0264bef8 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 Spine2",1);
  _DAT_0264becc = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 Head",1);
  _DAT_0264bee0 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_0264bee4 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_0264bef0 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 Spine",1);
  _DAT_0264bef8 = core_skeleton_cpp_FUN_00540e80(this_ptr_02,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
            ((CDeformableModelInstance *)this_ptr);
  *(float *)&param_1->field_0x960 = *(float *)&param_1->field_0x960 + _DAT_005ec0de;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = &param_1[1].field_0x2480;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            ((CMorph *)this_ptr_01,0,(CDeformableModelInstance *)this_ptr);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            ((CMorph *)this_ptr_01,1,(CDeformableModelInstance *)this_ptr_00);
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            ((CMorph *)this_ptr_01,1,*(CKeyFramedModel **)&param_1[1].field_0x2448,0);
  _DAT_0268014c = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            ((CMorph *)this_ptr_01,1,*(CKeyFramedModel **)&param_1[1].field_0x2448,0);
  _DAT_0268014c = 0;
  *(uint *)&param_1[1].field_0x30a8 = 0;
  core_morph_cpp_CMorph_getReady_FUN_005b71d0((CMorph *)this_ptr_01);
  *(uint *)&param_1[1].field_0x2478 = 0;
  *(uint *)&param_1[1].field_0x247c = 0;
  *(uint *)&param_1[1].field_0x2470 = 0;
  *(uint *)&param_1[1].field_0x2474 = 0x40a00000;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            ((CDeformableModelInstance *)this_ptr);
  return;
}
