// Name: core_mimic.cpp_CMimic_setup_FUN_004d4650
// Address: 004d4650
// Address Range: [[004d4650, 004d49eb]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setup_FUN_004d4650(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_setup_FUN_004d4650(CMimic *this_ptr)

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
  if (g_CNetGame_PTR_005bdee0->connection_type != CONNECTION_NONE) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 182;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMimic::setup - can't use mimic in multi-player!");
  }
  if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
    model_name = "stranger.dfm";
  }
  else {
    model_name = (g_HeroActors[g_LocalHeroIndex]->base).model.model_name;
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(this_ptr->base).base.model,model_name);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(pCVar1);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar1);
  _DAT_01cc9094 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 head",1);
  _DAT_01cc9098 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_01cc909c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_01cc90a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01cc90a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01cc90a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01cc90ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01cc90b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01cc90b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01cc90b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_01cc90bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_01cc90c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Calf",1);
  _DAT_01cc90c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Calf",1);
  _DAT_01cc90d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01cc90d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01cc90dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01cc90e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  core_cloth_cpp_CCloth_load_FUN_00435240(&this_ptr->cloth,"strcoat.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,pCVar1);
  class_name_hash = g_CEnemyActorType_01bcdebc.name_hash;
  pCVar5 = core_actor_cpp_createActorByName_FUN_0040d540(this_ptr->morph_actor_type);
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040d890(pCVar5,class_name_hash);
  this_ptr->morph_target_actor = pCVar5;
  if (pCVar5 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 257;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMimic failed to create morph target actor!");
  }
  (*((this_ptr->morph_target_actor->vtable)._ub)->setup)(this_ptr->morph_target_actor);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(&this_ptr->morph,0,pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar1);
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
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170
            (&this_ptr->morph,1,(CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(&this_ptr->morph);
  return;
}
