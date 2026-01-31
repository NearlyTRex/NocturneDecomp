// Name: core_mimic.cpp_CMimic_setup_FUN_0051f3e0
// Address: 0051f3e0
// Address Range: [[0051f3e0, 0051f77b]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setup_FUN_0051f3e0(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_setup_FUN_0051f3e0(CMimic *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  uint *puVar2;
  int iVar3;
  CSkeleton *this_ptr_00;
  CDemonActor *pCVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_1010 [1015];
  uint class_name_hash;
  char *model_name;
  uint uStack_28;
  uint uStack_1c;
  
  bVar8 = 0;
  if (g_CNetGamePtr->connection_type != 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::setup - can't use mimic in multi-player!");
  }
  if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
    model_name = "stranger.dfm";
  }
  else {
    model_name = (g_HeroActors[g_LocalHeroIndex]->base).model.model_name;
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(this_ptr->base).base.model,model_name);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  INT_02f33378 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 head");
  INT_02f3337c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Clavicle");
  INT_02f33380 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Clavicle");
  INT_02f33384 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_02f33388 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_02f3338c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  INT_02f33390 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  INT_02f33394 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  INT_02f33398 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  INT_02f3339c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Thigh");
  INT_02f333a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Thigh");
  INT_02f333a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Calf");
  INT_02f333a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Calf");
  INT_02f333b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  INT_02f333bc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  INT_02f333c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  INT_02f333c4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  core_cloth_cpp_CCloth_load_FUN_00438cf0((CCloth *)this_ptr->unk3,"strcoat.cth");
  core_cloth_cpp_FUN_00439710();
  class_name_hash = g_CEnemyClassInfo.name_hash;
  pCVar4 = core_actor_cpp_createActorByName_FUN_0040c430((char *)&this_ptr->morph_actor_type);
  pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,class_name_hash);
  *(CDemonActor **)(this_ptr->unk4 + 0xc54) = pCVar4;
  if (pCVar4 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x101;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic failed to create morph target actor!");
  }
  (*(code *)**(uint **)(*(int *)(this_ptr->unk4 + 0xc54) + 0x154))();
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar1);
  core_morph_cpp_FUN_0052b430();
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar1);
  iVar6 = 0;
  if (0 < *(int *)(this_ptr->unk4 + 0x78)) {
    iVar5 = 0;
    do {
      iVar6 = iVar6 + 1;
      *(float *)(*(int *)(this_ptr->unk4 + 0x7c) + 4 + iVar5) =
           -*(float *)(*(int *)(this_ptr->unk4 + 0x7c) + 4 + iVar5);
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *(int *)(this_ptr->unk4 + 0x78));
  }
  iVar6 = 0;
  if (0 < *(int *)(this_ptr->unk4 + 0x80)) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(this_ptr->unk4 + 0x84);
      puVar2 = (uint *)(iVar5 + 0x30 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      uStack_1c = *puVar2;
      *(uint *)(&stack0xffffffe8 + (uint)bVar8 * -8) = *puVar7;
      *(uint *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           puVar7[(uint)bVar8 * -2 + 1];
      puVar2 = (uint *)(iVar5 + 0x18 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      uStack_28 = *puVar2;
      *(uint *)(&stack0xffffffdc + (uint)bVar8 * -8) = *puVar7;
      *(uint *)(&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           puVar7[(uint)bVar8 * -2 + 1];
      puVar2 = (uint *)(iVar5 + 0x18 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar2 = uStack_1c;
      *puVar7 = *(uint *)(&stack0xffffffe8 + (uint)bVar8 * -8);
      puVar7[(uint)bVar8 * -2 + 1] =
           *(uint *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      puVar2 = (uint *)(iVar5 + 0x30 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar2 = uStack_28;
      *puVar7 = *(uint *)(&stack0xffffffdc + (uint)bVar8 * -8);
      puVar7[(uint)bVar8 * -2 + 1] =
           *(uint *)(&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x3c;
    } while (iVar6 < *(int *)(this_ptr->unk4 + 0x80));
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
            ((CDeformableModelInstance *)(*(int *)(this_ptr->unk4 + 0xc54) + 0x158));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            ((CDeformableModelInstance *)(*(int *)(this_ptr->unk4 + 0xc54) + 0x158));
  core_morph_cpp_FUN_0052b430();
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)(*(int *)(this_ptr->unk4 + 0xc54) + 0x158));
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)(this_ptr->unk4 + 0x24));
  return;
}
