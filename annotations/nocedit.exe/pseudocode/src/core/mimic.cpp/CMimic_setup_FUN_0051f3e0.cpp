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
  SMorphPoint *pSVar3;
  SMRGLPrimitiveTriangle *pSVar4;
  CSkeleton *this_ptr_00;
  CDemonActor *pCVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  uint auStackY_1010 [1014];
  uint class_name_hash;
  char *model_name;
  uint uStack_28;
  uint uStack_1c;
  
  bVar9 = 0;
  if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
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
                           (this_ptr_00,"Bip01 head",1);
  INT_02f3337c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Clavicle",1);
  INT_02f33380 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Clavicle",1);
  INT_02f33384 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm",1);
  INT_02f33388 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  INT_02f3338c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm",1);
  INT_02f33390 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm",1);
  INT_02f33394 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot",1);
  INT_02f33398 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot",1);
  INT_02f3339c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Thigh",1);
  INT_02f333a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Thigh",1);
  INT_02f333a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Calf",1);
  INT_02f333a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Calf",1);
  INT_02f333b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand",1);
  INT_02f333bc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand",1);
  INT_02f333c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2",1);
  INT_02f333c4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine",1);
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  core_cloth_cpp_CCloth_load_FUN_00438cf0(&this_ptr->cloth,"strcoat.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,pCVar1);
  class_name_hash = g_CEnemyClassInfo.name_hash;
  pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430(this_ptr->morph_actor_type);
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar5,class_name_hash);
  this_ptr->morph_target_actor = pCVar5;
  if (pCVar5 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x101;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic failed to create morph target actor!");
  }
  (*((this_ptr->morph_target_actor->vtable)._ub)->setup)(this_ptr->morph_target_actor);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(&this_ptr->morph,0,pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar1);
  iVar7 = 0;
  if (0 < (this_ptr->morph).models[0].num_points) {
    iVar6 = 0;
    do {
      pSVar3 = (this_ptr->morph).models[0].points;
      iVar7 = iVar7 + 1;
      *(float *)((int)&(pSVar3->position).x + iVar6) =
           -*(float *)((int)&(pSVar3->position).x + iVar6);
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < (this_ptr->morph).models[0].num_points);
  }
  iVar7 = 0;
  if (0 < (this_ptr->morph).models[0].num_faces) {
    iVar6 = 0;
    do {
      pSVar4 = (this_ptr->morph).models[0].faces;
      puVar2 = (uint *)((int)&pSVar4->vertices[2].vertex_index + iVar6);
      puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
      uStack_1c = *puVar2;
      *(uint *)(&stack0xffffffe8 + (uint)bVar9 * -8) = *puVar8;
      *(uint *)(&stack0xffffffec + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           puVar8[(uint)bVar9 * -2 + 1];
      puVar2 = (uint *)((int)&pSVar4->vertices[0].vertex_index + iVar6);
      puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
      uStack_28 = *puVar2;
      *(uint *)(&stack0xffffffdc + (uint)bVar9 * -8) = *puVar8;
      *(uint *)(&stack0xffffffe0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           puVar8[(uint)bVar9 * -2 + 1];
      puVar2 = (uint *)((int)&pSVar4->vertices[0].vertex_index + iVar6);
      puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
      *puVar2 = uStack_1c;
      *puVar8 = *(uint *)(&stack0xffffffe8 + (uint)bVar9 * -8);
      puVar8[(uint)bVar9 * -2 + 1] =
           *(uint *)(&stack0xffffffec + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      puVar2 = (uint *)((int)&pSVar4->vertices[2].vertex_index + iVar6);
      puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
      *puVar2 = uStack_28;
      *puVar8 = *(uint *)(&stack0xffffffdc + (uint)bVar9 * -8);
      puVar8[(uint)bVar9 * -2 + 1] =
           *(uint *)(&stack0xffffffe0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x3c;
    } while (iVar7 < (this_ptr->morph).models[0].num_faces);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430
            (&this_ptr->morph,1,(CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_getReady_FUN_0052b680(&this_ptr->morph);
  return;
}
