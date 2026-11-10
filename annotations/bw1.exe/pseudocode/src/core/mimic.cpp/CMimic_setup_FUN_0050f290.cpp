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
  int iVar3;
  CSkeleton *this_ptr_00;
  uint uVar4;
  CDemonActor *pCVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  uint auStackY_1010 [1014];
  char *model_name;
  uint uStack_28;
  uint uStack_1c;
  
  bVar9 = 0;
  if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0xb6;
    core_main_c_FUN_005030e0("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  if (iVar7 == 0) {
    model_name = "stranger.dfm";
  }
  else {
    model_name = (char *)(iVar7 + 0x24a8);
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
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)&this_ptr->field_0xc330,"strcoat.cth");
  core_cloth_cpp_FUN_0043eea0
            ((CCloth *)&this_ptr->field_0xc330,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,pCVar1);
  uVar4 = core_actor_cpp_createActorByName_FUN_0040c2b0
                    (this_ptr->morph_actor_type,g_CEnemyClassInfo.name_hash);
  pCVar5 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c600(uVar4);
  this_ptr->morph_target_actor = pCVar5;
  if (pCVar5 == (CDemonActor *)0x0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x101;
    core_main_c_FUN_005030e0("CMimic failed to create morph target actor!");
  }
  (*((this_ptr->morph_target_actor->vtable)._ub)->setup)(this_ptr->morph_target_actor);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)&this_ptr->field_0x46e90,0,pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar1);
  iVar7 = 0;
  if (0 < *(int *)&this_ptr->field_0x46ee4) {
    iVar6 = 0;
    do {
      iVar7 = iVar7 + 1;
      *(float *)(*(int *)&this_ptr->field_0x46ee8 + 4 + iVar6) =
           -*(float *)(*(int *)&this_ptr->field_0x46ee8 + 4 + iVar6);
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < *(int *)&this_ptr->field_0x46ee4);
  }
  iVar7 = 0;
  if (0 < *(int *)&this_ptr->field_0x46eec) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)&this_ptr->field_0x46ef0;
      puVar2 = (uint *)(iVar6 + 0x30 + iVar3);
      puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
      uStack_1c = *puVar2;
      *(uint *)(&stack0xffffffe8 + (uint)bVar9 * -8) = *puVar8;
      *(uint *)(&stack0xffffffec + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           puVar8[(uint)bVar9 * -2 + 1];
      puVar2 = (uint *)(iVar6 + 0x18 + iVar3);
      puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
      uStack_28 = *puVar2;
      *(uint *)(&stack0xffffffdc + (uint)bVar9 * -8) = *puVar8;
      *(uint *)(&stack0xffffffe0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
           puVar8[(uint)bVar9 * -2 + 1];
      puVar2 = (uint *)(iVar6 + 0x18 + iVar3);
      puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
      *puVar2 = uStack_1c;
      *puVar8 = *(uint *)(&stack0xffffffe8 + (uint)bVar9 * -8);
      puVar8[(uint)bVar9 * -2 + 1] =
           *(uint *)(&stack0xffffffec + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      puVar2 = (uint *)(iVar6 + 0x30 + iVar3);
      puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
      *puVar2 = uStack_28;
      *puVar8 = *(uint *)(&stack0xffffffdc + (uint)bVar9 * -8);
      puVar8[(uint)bVar9 * -2 + 1] =
           *(uint *)(&stack0xffffffe0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x3c;
    } while (iVar7 < *(int *)&this_ptr->field_0x46eec);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)&this_ptr->field_0x46e90,1,
             (CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
            ((CDeformableModelInstance *)(this_ptr->morph_target_actor + 1));
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)&this_ptr->field_0x46e90);
  return;
}
