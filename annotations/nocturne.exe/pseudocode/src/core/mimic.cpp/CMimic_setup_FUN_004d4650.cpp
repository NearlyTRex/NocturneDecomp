// Name: core_mimic.cpp_CMimic_setup_FUN_004d4650
// Address: 004d4650
// Address Range: [[004d4650, 004d49eb]]
// Convention: unknown
// Signature: void core_mimic_cpp_CMimic_setup_FUN_004d4650(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mimic_cpp_CMimic_setup_FUN_004d4650(CEnemy *param_1)

{
  CDeformableModelInstance *pCVar1;
  CCloth *this_ptr;
  CMorph *this_ptr_00;
  uint *puVar2;
  float fVar3;
  CSkeleton *this_ptr_01;
  CDemonActor *pCVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_1010 [1014];
  uint class_name_hash;
  char *model_name;
  uint uStack_28;
  uint uStack_1c;
  
  bVar8 = 0;
  if (*0x01CEA280 != 0) {
    PTR_01cc4800 = "..\\core\\mimic.cpp";
    INT_01cc4804 = 0xb6;
    core_main_c_FUN_004c8440("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  if (iVar6 == 0) {
    model_name = "stranger.dfm";
  }
  else {
    model_name = (char *)(iVar6 + 0x23b0);
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(&(param_1->base).model,model_name);
  pCVar1 = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(pCVar1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar1);
  _DAT_01cc9094 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 head",1);
  _DAT_01cc9098 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_01cc909c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_01cc90a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01cc90a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01cc90a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01cc90ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01cc90b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01cc90b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01cc90b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_01cc90bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_01cc90c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Calf",1);
  _DAT_01cc90c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Calf",1);
  _DAT_01cc90d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01cc90d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01cc90dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01cc90e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine",1);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  this_ptr = (CCloth *)(param_1[1].base.base.create_event + 0x50);
  core_cloth_cpp_CCloth_load_FUN_00435240(this_ptr,"strcoat.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0
            (this_ptr,&(param_1->base).base.location.position,&(param_1->base).base.orient.vec,
             pCVar1);
  class_name_hash = g_CEnemyActorType_01bcdebc.name_hash;
  pCVar4 = core_actor_cpp_createActorByName_FUN_0040d540
                     ((char *)(param_1[5].base.motion_transition_costs[3] + 0xd));
  pCVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(pCVar4,class_name_hash);
  param_1[6].base.model.rest_pose_data[0x10] = (float)pCVar4;
  if (pCVar4 == (CDemonActor *)0x0) {
    PTR_01cc4800 = "..\\core\\mimic.cpp";
    INT_01cc4804 = 0x101;
    core_main_c_FUN_004c8440("CMimic failed to create morph target actor!");
  }
  fVar3 = param_1[6].base.model.rest_pose_data[0x10];
  (*(code *)**(uint **)((int)fVar3 + 0x14c))(fVar3);
  pCVar1 = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170
            ((CMorph *)(param_1[5].base.motion_transition_costs[4] + 3),0,pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar1);
  iVar6 = 0;
  if (0 < (int)param_1[5].base.motion_transition_costs[5][4]) {
    iVar5 = 0;
    do {
      fVar3 = param_1[5].base.motion_transition_costs[5][5];
      iVar6 = iVar6 + 1;
      *(float *)((int)fVar3 + 4 + iVar5) = -*(float *)((int)fVar3 + 4 + iVar5);
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < (int)param_1[5].base.motion_transition_costs[5][4]);
  }
  iVar6 = 0;
  if (0 < (int)param_1[5].base.motion_transition_costs[5][6]) {
    iVar5 = 0;
    do {
      fVar3 = param_1[5].base.motion_transition_costs[5][7];
      puVar2 = (uint *)(iVar5 + 0x30 + (int)fVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      uStack_1c = *puVar2;
      *(uint *)(&stack0xffffffe8 + (uint)bVar8 * -8) = *puVar7;
      *(uint *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           puVar7[(uint)bVar8 * -2 + 1];
      puVar2 = (uint *)(iVar5 + 0x18 + (int)fVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      uStack_28 = *puVar2;
      *(uint *)(&stack0xffffffdc + (uint)bVar8 * -8) = *puVar7;
      *(uint *)(&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           puVar7[(uint)bVar8 * -2 + 1];
      puVar2 = (uint *)(iVar5 + 0x18 + (int)fVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar2 = uStack_1c;
      *puVar7 = *(uint *)(&stack0xffffffe8 + (uint)bVar8 * -8);
      puVar7[(uint)bVar8 * -2 + 1] =
           *(uint *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      puVar2 = (uint *)(iVar5 + 0x30 + (int)fVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar2 = uStack_28;
      *puVar7 = *(uint *)(&stack0xffffffdc + (uint)bVar8 * -8);
      puVar7[(uint)bVar8 * -2 + 1] =
           *(uint *)(&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x3c;
    } while (iVar6 < (int)param_1[5].base.motion_transition_costs[5][6]);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
            ((CDeformableModelInstance *)((int)param_1[6].base.model.rest_pose_data[0x10] + 0x150));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
            ((CDeformableModelInstance *)((int)param_1[6].base.model.rest_pose_data[0x10] + 0x150));
  this_ptr_00 = (CMorph *)(param_1[5].base.motion_transition_costs[4] + 3);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170
            (this_ptr_00,1,
             (CDeformableModelInstance *)((int)param_1[6].base.model.rest_pose_data[0x10] + 0x150));
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            ((CDeformableModelInstance *)((int)param_1[6].base.model.rest_pose_data[0x10] + 0x150));
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_00);
  return;
}
