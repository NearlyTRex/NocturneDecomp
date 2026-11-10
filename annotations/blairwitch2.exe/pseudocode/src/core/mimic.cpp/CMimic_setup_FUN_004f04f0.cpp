// Name: core_mimic.cpp_CMimic_setup_FUN_004f04f0
// Address: 004f04f0
// Address Range: [[004f04f0, 004f089b]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setup_FUN_004f04f0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_setup_FUN_004f04f0(CMimic *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  SMRGLPrimitiveTriangle *pSVar2;
  SMorphPoint *pSVar3;
  SMRGLPrimitiveTriangle *pSVar4;
  CSkeleton *this_ptr_00;
  uint uVar5;
  CDemonActor *pCVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint auStackY_1010 [1014];
  char *model_name;
  uint uStack_28;
  uint uStack_1c;
  
  bVar9 = 0;
  if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0xb6;
    core_main_c_FUN_004e4500("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if (iVar8 == 0) {
    model_name = "stranger.dfm";
  }
  else {
    model_name = (char *)(iVar8 + 0x2514);
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr->base).base.model,model_name);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(pCVar1);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar1);
  _DAT_01d097c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 head",1);
  _DAT_01d097c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_01d097cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_01d097d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d097d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d097d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01d097dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01d097e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01d097e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01d097e8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_01d097ec =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_01d097f0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Calf",1);
  _DAT_01d097f4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Calf",1);
  _DAT_01d09804 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01d09808 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01d0980c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01d09810 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)&this_ptr->field_0x10bc0,"strcoat.cth")
  ;
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)&this_ptr->field_0x10bc0,(CVector3f *)&(this_ptr->base).base.base.field_0x20,
             &(this_ptr->base).base.base.orient.vec,pCVar1);
  uVar5 = core_actor_cpp_createActorByName_FUN_0040c5a0
                    (this_ptr->morph_actor_type,g_CEnemyClassInfo.name_hash);
  pCVar6 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(uVar5);
  this_ptr->morph_target_actor = pCVar6;
  if (pCVar6 == (CDemonActor *)0x0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x101;
    core_main_c_FUN_004e4500("CMimic failed to create morph target actor!");
  }
  (*((this_ptr->morph_target_actor->vtable)._ub)->setup)(this_ptr->morph_target_actor);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(&this_ptr->morph,0,pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(pCVar1);
  iVar8 = 0;
  if (0 < (this_ptr->morph).models[0].num_points) {
    iVar7 = 0;
    do {
      pSVar3 = (this_ptr->morph).models[0].points;
      iVar8 = iVar8 + 1;
      *(float *)(pSVar3 + iVar7 + 4) = -*(float *)(pSVar3 + iVar7 + 4);
      iVar7 = iVar7 + 0x10;
    } while (iVar8 < (this_ptr->morph).models[0].num_points);
  }
  iVar8 = 0;
  if (0 < (this_ptr->morph).models[0].num_faces) {
    iVar7 = 0;
    do {
      pSVar4 = (this_ptr->morph).models[0].faces;
      pSVar2 = pSVar4 + iVar7 + 0x30;
      uStack_1c = *(uint *)pSVar2;
      *(uint *)(&stack0xffffffe8 + (uint)bVar9 * -8) =
           *(uint *)(pSVar2 + (uint)bVar9 * -8 + 4);
      *(uint *)(&stack0xffffffec + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           *(uint *)(pSVar2 + (uint)bVar9 * -8 + 4 + (uint)bVar9 * -8 + 4);
      pSVar2 = pSVar4 + iVar7 + 0x18;
      uStack_28 = *(uint *)pSVar2;
      *(uint *)(&stack0xffffffdc + (uint)bVar9 * -8) =
           *(uint *)(pSVar2 + (uint)bVar9 * -8 + 4);
      *(uint *)(&stack0xffffffe0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           *(uint *)(pSVar2 + (uint)bVar9 * -8 + 4 + (uint)bVar9 * -8 + 4);
      pSVar2 = pSVar4 + iVar7 + 0x18;
      *(uint *)pSVar2 = uStack_1c;
      *(uint *)(pSVar2 + (uint)bVar9 * -8 + 4) =
           *(uint *)(&stack0xffffffe8 + (uint)bVar9 * -8);
      *(uint *)(pSVar2 + (uint)bVar9 * -8 + 4 + (uint)bVar9 * -8 + 4) =
           *(uint *)(&stack0xffffffec + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      pSVar4 = pSVar4 + iVar7 + 0x30;
      *(uint *)pSVar4 = uStack_28;
      *(uint *)(pSVar4 + (uint)bVar9 * -8 + 4) =
           *(uint *)(&stack0xffffffdc + (uint)bVar9 * -8);
      *(uint *)(pSVar4 + (uint)bVar9 * -8 + 4 + (uint)bVar9 * -8 + 4) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x3c;
    } while (iVar8 < (this_ptr->morph).models[0].num_faces);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            (&this_ptr->morph,1,(CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_getReady_FUN_005b71d0(&this_ptr->morph);
  return;
}
