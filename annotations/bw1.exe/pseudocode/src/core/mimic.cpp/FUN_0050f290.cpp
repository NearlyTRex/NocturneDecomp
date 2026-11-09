// Name: core_mimic.cpp_FUN_0050f290
// Address: 0050f290
// Address Range: [[0050f290, 0050f62b]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_0050f290(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mimic_cpp_FUN_0050f290(CEnemy *param_1)

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
  char *pcVar9;
  uint uStack_28;
  uint uStack_1c;
  
  bVar8 = 0;
  if (*(int *)g_CNetGamePtr != 0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0xb6;
    core_main_c_FUN_005030e0("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  if (iVar5 == 0) {
    pcVar9 = "stranger.dfm";
  }
  else {
    pcVar9 = (char *)(iVar5 + 0x24a8);
  }
  core_skeleton_cpp_FUN_00569f50(&param_1->field_0x158,pcVar9);
  puVar1 = &param_1->field_0x158;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)puVar1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)puVar1);
  _DAT_01d22424 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 head",1);
  _DAT_01d22428 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Clavicle",1);
  _DAT_01d2242c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Clavicle",1);
  _DAT_01d22430 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01d22434 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01d22438 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L ForeArm",1);
  _DAT_01d2243c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R ForeArm",1);
  _DAT_01d22440 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Foot",1);
  _DAT_01d22444 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",1);
  _DAT_01d22448 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Thigh",1);
  _DAT_01d2244c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Thigh",1);
  _DAT_01d22450 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Calf",1);
  _DAT_01d22454 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Calf",1);
  _DAT_01d22464 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",1);
  _DAT_01d22468 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",1);
  _DAT_01d2246c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  _DAT_01d22470 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine",1);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)&param_1[1].field_0xc8,"strcoat.cth");
  core_cloth_cpp_FUN_0043eea0
            ((CCloth *)&param_1[1].field_0xc8,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,(CDeformableModelInstance *)puVar1);
  uVar4 = core_actor_cpp_createActorByName_FUN_0040c2b0
                    (&param_1[5].field_0xa260,g_CEnemyClassInfo.name_hash);
  iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600(uVar4);
  *(int *)&param_1[5].field_0xaeb8 = iVar5;
  if (iVar5 == 0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x101;
    core_main_c_FUN_005030e0("CMimic failed to create morph target actor!");
  }
  (*(code *)**(uint **)(*(int *)&param_1[5].field_0xaeb8 + 0x154))
            (*(int *)&param_1[5].field_0xaeb8);
  puVar1 = &param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            ((CDeformableModelInstance *)puVar1);
  core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)puVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)&param_1[5].field_0xa288,0,(CDeformableModelInstance *)puVar1);
  core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)puVar1);
  iVar5 = 0;
  if (0 < *(int *)&param_1[5].field_0xa2dc) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(float *)(*(int *)&param_1[5].field_0xa2e0 + 4 + iVar6) =
           -*(float *)(*(int *)&param_1[5].field_0xa2e0 + 4 + iVar6);
      iVar6 = iVar6 + 0x10;
    } while (iVar5 < *(int *)&param_1[5].field_0xa2dc);
  }
  iVar5 = 0;
  if (0 < *(int *)&param_1[5].field_0xa2e4) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)&param_1[5].field_0xa2e8;
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
    } while (iVar5 < *(int *)&param_1[5].field_0xa2e4);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            ((CDeformableModelInstance *)(*(int *)&param_1[5].field_0xaeb8 + 0x158));
  core_skeleton_cpp_FUN_00569180
            ((CDeformableModelInstance *)(*(int *)&param_1[5].field_0xaeb8 + 0x158));
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)&param_1[5].field_0xa288,1,
             (CDeformableModelInstance *)(*(int *)&param_1[5].field_0xaeb8 + 0x158));
  core_skeleton_cpp_FUN_00567580
            ((CDeformableModelInstance *)(*(int *)&param_1[5].field_0xaeb8 + 0x158));
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)&param_1[5].field_0xa288);
  return;
}
