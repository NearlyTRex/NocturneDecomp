// Name: core_mimic.cpp_CMimic_setup_FUN_0050f290
// Address: 0050f290
// Address Range: [[0050f290, 0050f62b]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setup_FUN_0050f290(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_setup_FUN_0050f290(CMimic *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  uint *puVar2;
  SMorphPoint *pSVar3;
  SMRGLPrimitiveTriangle *pSVar4;
  CSkeleton *this_ptr_00;
  uint uVar5;
  CDemonActor *pCVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  uint auStackY_1010 [1014];
  char *model_name;
  uint uStack_28;
  uint uStack_1c;
  
  bVar10 = 0;
  if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0xb6;
    core_main_c_FUN_005030e0("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  if (iVar8 == 0) {
    model_name = "stranger.dfm";
  }
  else {
    model_name = (char *)(iVar8 + 0x24a8);
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(this_ptr->base).base.model,model_name);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(pCVar1);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar1);
  _DAT_01d22424 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 head",1);
  _DAT_01d22428 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_01d2242c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_01d22430 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d22434 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d22438 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01d2243c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01d22440 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01d22444 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01d22448 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_01d2244c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_01d22450 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Calf",1);
  _DAT_01d22454 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Calf",1);
  _DAT_01d22464 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01d22468 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01d2246c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01d22470 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  core_cloth_cpp_CCloth_load_FUN_0043e6d0(&this_ptr->cloth,"strcoat.cth");
  core_cloth_cpp_FUN_0043eea0
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,pCVar1);
  uVar5 = core_actor_cpp_createActorByName_FUN_0040c2b0
                    (this_ptr->morph_actor_type,g_CEnemyClassInfo.name_hash);
  pCVar6 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c600(uVar5);
  this_ptr->morph_target_actor = pCVar6;
  if (pCVar6 == (CDemonActor *)0x0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x101;
    core_main_c_FUN_005030e0("CMimic failed to create morph target actor!");
  }
  (*((this_ptr->morph_target_actor->vtable)._ub)->setup)(this_ptr->morph_target_actor);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0(&this_ptr->morph,0,pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar1);
  iVar8 = 0;
  if (0 < (this_ptr->morph).models[0].num_points) {
    iVar7 = 0;
    do {
      pSVar3 = (this_ptr->morph).models[0].points;
      iVar8 = iVar8 + 1;
      *(float *)((int)&(pSVar3->position).x + iVar7) =
           -*(float *)((int)&(pSVar3->position).x + iVar7);
      iVar7 = iVar7 + 0x10;
    } while (iVar8 < (this_ptr->morph).models[0].num_points);
  }
  iVar8 = 0;
  if (0 < (this_ptr->morph).models[0].num_faces) {
    iVar7 = 0;
    do {
      pSVar4 = (this_ptr->morph).models[0].faces;
      puVar2 = (uint *)((int)&pSVar4->vertices[2].vertex_index + iVar7);
      puVar9 = puVar2 + (uint)bVar10 * -2 + 1;
      uStack_1c = *puVar2;
      *(uint *)(&stack0xffffffe8 + (uint)bVar10 * -8) = *puVar9;
      *(uint *)(&stack0xffffffec + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
           puVar9[(uint)bVar10 * -2 + 1];
      puVar2 = (uint *)((int)&pSVar4->vertices[0].vertex_index + iVar7);
      puVar9 = puVar2 + (uint)bVar10 * -2 + 1;
      uStack_28 = *puVar2;
      *(uint *)(&stack0xffffffdc + (uint)bVar10 * -8) = *puVar9;
      *(uint *)(&stack0xffffffe0 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
           puVar9[(uint)bVar10 * -2 + 1];
      puVar2 = (uint *)((int)&pSVar4->vertices[0].vertex_index + iVar7);
      puVar9 = puVar2 + (uint)bVar10 * -2 + 1;
      *puVar2 = uStack_1c;
      *puVar9 = *(uint *)(&stack0xffffffe8 + (uint)bVar10 * -8);
      puVar9[(uint)bVar10 * -2 + 1] =
           *(uint *)(&stack0xffffffec + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      puVar2 = (uint *)((int)&pSVar4->vertices[2].vertex_index + iVar7);
      puVar9 = puVar2 + (uint)bVar10 * -2 + 1;
      *puVar2 = uStack_28;
      *puVar9 = *(uint *)(&stack0xffffffdc + (uint)bVar10 * -8);
      puVar9[(uint)bVar10 * -2 + 1] =
           *(uint *)(&stack0xffffffe0 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x3c;
    } while (iVar8 < (this_ptr->morph).models[0].num_faces);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            (&this_ptr->morph,1,(CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_getReady_FUN_00523310(&this_ptr->morph);
  return;
}
