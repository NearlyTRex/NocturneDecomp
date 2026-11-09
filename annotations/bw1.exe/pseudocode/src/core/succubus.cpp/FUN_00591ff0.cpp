// Name: core_succubus.cpp_FUN_00591ff0
// Address: 00591ff0
// Address Range: [[00591ff0, 00592315]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_00591ff0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_succubus_cpp_FUN_00591ff0(CEnemy *param_1)

{
  byte *this_ptr;
  CEnemy *this_ptr_00;
  byte *this_ptr_01;
  CSkeleton *this_ptr_02;
  char *pcVar1;
  
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    core_skeleton_cpp_FUN_00569f50(&param_1->field_0x158,"succubusx.dfm");
    pcVar1 = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_FUN_00569f50(&param_1->field_0x158,"succubus.dfm");
    pcVar1 = "hotdemon.dfm";
  }
  core_skeleton_cpp_FUN_00569f50(param_1 + 1,pcVar1);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = param_1 + 1;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr_00);
  core_cloth_cpp_CClothList_load_FUN_00441cc0((CClothList *)&param_1[1].field_0x23a4);
  core_cloth_cpp_CClothList_setup_FUN_00441f60
            ((CClothList *)&param_1[1].field_0x23a4,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,(CDeformableModelInstance *)this_ptr_00);
  core_cloth_cpp_CClothList_process_FUN_00441fa0
            ((CClothList *)&param_1->field_0x2ca0,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,0.05,*(float *)&param_1->field_0x2504,
             (CDeformableModelInstance *)this_ptr_00);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_02c8369c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Head",1);
  _DAT_02c836a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L ForeArm",1);
  _DAT_02c836ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R ForeArm",1);
  _DAT_02c836b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_02c836b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_02c836b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L Foot",1);
  _DAT_02c836bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R Foot",1);
  _DAT_02c836a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L Hand",1);
  _DAT_02c836a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R Hand",1);
  _DAT_02c836c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine",1);
  _DAT_02c836c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine1",1);
  _DAT_02c836c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine2",1);
  _DAT_02c8369c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Head",1);
  _DAT_02c836b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_02c836b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_02c836c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine",1);
  _DAT_02c836c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            ((CDeformableModelInstance *)this_ptr);
  *(float *)&param_1->field_0x804 = *(float *)&param_1->field_0x804 + _DAT_005f7352;
  core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = &param_1[1].field_0x2570;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)this_ptr_01,0,(CDeformableModelInstance *)this_ptr);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)this_ptr_01,1,(CDeformableModelInstance *)this_ptr_00);
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_01,1,*(CKeyFramedModel **)&param_1[1].field_0x2538,0);
  _DAT_01d39d30 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_01,1,*(CKeyFramedModel **)&param_1[1].field_0x2538,0);
  _DAT_01d39d30 = 0;
  *(uint *)&param_1[1].field_0x3198 = 0;
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)this_ptr_01);
  *(uint *)&param_1[1].field_0x2568 = 0;
  *(uint *)&param_1[1].field_0x256c = 0;
  *(uint *)&param_1[1].field_0x2560 = 0;
  *(uint *)&param_1[1].field_0x2564 = 0x40a00000;
  core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)this_ptr);
  return;
}
