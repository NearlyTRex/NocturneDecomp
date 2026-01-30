// Name: core_mimic.cpp_CMimic_setup_FUN_0051f3e0
// Address: 0051f3e0
// Address Range: [[0051f3e0, 0051f77b]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setup_FUN_0051f3e0(void)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_setup_FUN_0051f3e0(void)

{
  CDeformableModelInstance *pCVar1;
  uint *puVar2;
  int iVar3;
  CSkeleton *this_ptr;
  CDemonActor *pCVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  CEnemy *in_stack_00000004;
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
            (&(in_stack_00000004->base).model,model_name);
  pCVar1 = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  INT_02f33378 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 head");
  INT_02f3337c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L Clavicle");
  INT_02f33380 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R Clavicle");
  INT_02f33384 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L UpperArm");
  INT_02f33388 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R UpperArm");
  INT_02f3338c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L ForeArm");
  INT_02f33390 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R ForeArm");
  INT_02f33394 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Foot")
  ;
  INT_02f33398 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Foot")
  ;
  INT_02f3339c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L Thigh");
  INT_02f333a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R Thigh");
  INT_02f333a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Calf")
  ;
  INT_02f333a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Calf")
  ;
  INT_02f333b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand")
  ;
  INT_02f333bc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand")
  ;
  INT_02f333c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2")
  ;
  INT_02f333c4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine");
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(in_stack_00000004[1].base.base.create_event + 0x58),"strcoat.cth");
  core_cloth_cpp_FUN_00439710();
  class_name_hash = g_CEnemyClassInfo.name_hash;
  pCVar4 = core_actor_cpp_createActorByName_FUN_0040c430
                     (in_stack_00000004[6].base.cloth_data + 0x1b2c);
  pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,class_name_hash);
  *(CDemonActor **)(in_stack_00000004[6].base.cloth_data + 0x2784) = pCVar4;
  if (pCVar4 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x101;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic failed to create morph target actor!");
  }
  (*(code *)**(uint **)(*(int *)(in_stack_00000004[6].base.cloth_data + 0x2784) + 0x154))();
  pCVar1 = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar1);
  core_morph_cpp_FUN_0052b430();
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar1);
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004[6].base.cloth_data + 0x1ba8)) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(in_stack_00000004[6].base.cloth_data + 0x1bac);
      iVar6 = iVar6 + 1;
      *(float *)(iVar3 + 4 + iVar5) = -*(float *)(iVar3 + 4 + iVar5);
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *(int *)(in_stack_00000004[6].base.cloth_data + 0x1ba8));
  }
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004[6].base.cloth_data + 0x1bb0)) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(in_stack_00000004[6].base.cloth_data + 0x1bb4);
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
    } while (iVar6 < *(int *)(in_stack_00000004[6].base.cloth_data + 0x1bb0));
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
            ((CDeformableModelInstance *)
             (*(int *)(in_stack_00000004[6].base.cloth_data + 0x2784) + 0x158));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            ((CDeformableModelInstance *)
             (*(int *)(in_stack_00000004[6].base.cloth_data + 0x2784) + 0x158));
  core_morph_cpp_FUN_0052b430();
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)
             (*(int *)(in_stack_00000004[6].base.cloth_data + 0x2784) + 0x158));
  core_morph_cpp_CMorph_getReady_FUN_0052b680
            ((CMorph *)(in_stack_00000004[6].base.cloth_data + 0x1b54));
  return;
}
