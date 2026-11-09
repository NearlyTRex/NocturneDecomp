// Name: core_mimic.cpp_FUN_004f04f0
// Address: 004f04f0
// Address Range: [[004f04f0, 004f089b]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_004f04f0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mimic_cpp_FUN_004f04f0(CEnemy *param_1)

{
  byte *puVar1;
  uint *puVar2;
  int iVar3;
  CSkeleton *this_ptr;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_1010 [1014];
  char *model_name;
  uint uStack_28;
  uint uStack_1c;
  
  bVar8 = 0;
  if (*(int *)g_CNetGamePtr != 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0xb6;
    core_main_c_FUN_004e4500("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if (iVar5 == 0) {
    model_name = "stranger.dfm";
  }
  else {
    model_name = (char *)(iVar5 + 0x2514);
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&param_1->field_0x2b4,model_name);
  puVar1 = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)puVar1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)puVar1);
  _DAT_01d097c4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 head",1);
  _DAT_01d097c8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Clavicle",1);
  _DAT_01d097cc = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Clavicle",1);
  _DAT_01d097d0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01d097d4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01d097d8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L ForeArm",1);
  _DAT_01d097dc = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R ForeArm",1);
  _DAT_01d097e0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Foot",1);
  _DAT_01d097e4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Foot",1);
  _DAT_01d097e8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Thigh",1);
  _DAT_01d097ec = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Thigh",1);
  _DAT_01d097f0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Calf",1);
  _DAT_01d097f4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Calf",1);
  _DAT_01d09804 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
  _DAT_01d09808 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  _DAT_01d0980c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  _DAT_01d09810 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine",1);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)&param_1[1].field_0xc8,"strcoat.cth");
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)&param_1[1].field_0xc8,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,(CDeformableModelInstance *)puVar1);
  uVar4 = core_actor_cpp_createActorByName_FUN_0040c5a0
                    (&param_1[4].field_0x8b18,g_CEnemyClassInfo.name_hash);
  iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(uVar4);
  *(int *)&param_1[4].field_0x9770 = iVar5;
  if (iVar5 == 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x101;
    core_main_c_FUN_004e4500("CMimic failed to create morph target actor!");
  }
  (**(code **)(*(int *)(*(int *)&param_1[4].field_0x9770 + 0x2b0) + 8))
            (*(int *)&param_1[4].field_0x9770);
  puVar1 = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
            ((CDeformableModelInstance *)puVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)puVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            ((CMorph *)&param_1[4].field_0x8b40,0,(CDeformableModelInstance *)puVar1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            ((CDeformableModelInstance *)puVar1);
  iVar5 = 0;
  if (0 < *(int *)&param_1[4].field_0x8b94) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(float *)(*(int *)&param_1[4].field_0x8b98 + 4 + iVar6) =
           -*(float *)(*(int *)&param_1[4].field_0x8b98 + 4 + iVar6);
      iVar6 = iVar6 + 0x10;
    } while (iVar5 < *(int *)&param_1[4].field_0x8b94);
  }
  iVar5 = 0;
  if (0 < *(int *)&param_1[4].field_0x8b9c) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)&param_1[4].field_0x8ba0;
      puVar2 = (uint *)(iVar6 + 0x30 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      uStack_1c = *puVar2;
      *(uint *)(&stack0xffffffe8 + (uint)bVar8 * -8) = *puVar7;
      *(uint *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           puVar7[(uint)bVar8 * -2 + 1];
      puVar2 = (uint *)(iVar6 + 0x18 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      uStack_28 = *puVar2;
      *(uint *)(&stack0xffffffdc + (uint)bVar8 * -8) = *puVar7;
      *(uint *)(&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           puVar7[(uint)bVar8 * -2 + 1];
      puVar2 = (uint *)(iVar6 + 0x18 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar2 = uStack_1c;
      *puVar7 = *(uint *)(&stack0xffffffe8 + (uint)bVar8 * -8);
      puVar7[(uint)bVar8 * -2 + 1] =
           *(uint *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      puVar2 = (uint *)(iVar6 + 0x30 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar2 = uStack_28;
      *puVar7 = *(uint *)(&stack0xffffffdc + (uint)bVar8 * -8);
      puVar7[(uint)bVar8 * -2 + 1] =
           *(uint *)(&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x3c;
    } while (iVar5 < *(int *)&param_1[4].field_0x8b9c);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
            ((CDeformableModelInstance *)(*(int *)&param_1[4].field_0x9770 + 0x2b4));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)(*(int *)&param_1[4].field_0x9770 + 0x2b4));
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            ((CMorph *)&param_1[4].field_0x8b40,1,
             (CDeformableModelInstance *)(*(int *)&param_1[4].field_0x9770 + 0x2b4));
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            ((CDeformableModelInstance *)(*(int *)&param_1[4].field_0x9770 + 0x2b4));
  core_morph_cpp_CMorph_getReady_FUN_005b71d0((CMorph *)&param_1[4].field_0x8b40);
  return;
}
