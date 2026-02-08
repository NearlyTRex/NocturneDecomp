// Name: core_succubus.cpp_CSuccubus_setup_FUN_005c6b60
// Address: 005c6b60
// Address Range: [[005c6b60, 005c6e85]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_005c6b60(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_005c6b60(CSuccubus *this_ptr)

{
  COrientation *euler;
  CLocation *position;
  CDeformableModelInstance *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  char *model_name;
  
  pCVar1 = &(this_ptr->base).base.model;
  if (g_CGamePtr->nudity_flag == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"succubusx.dfm");
    model_name = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"succubus.dfm");
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(this_ptr->unk + 8),model_name);
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
  this_ptr_00 = (CDeformableModelInstance *)(this_ptr->unk + 8);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  core_cloth_cpp_CClothList_load_FUN_0043bfa0((CClothList *)(this_ptr->unk + 0x22bc));
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CClothList_setup_FUN_0043c290
            ((CClothList *)(this_ptr->unk + 0x22bc),&position->position,(CVector3f *)euler,
             this_ptr_00);
  core_cloth_cpp_CClothList_process_FUN_0043c2d0
            (&(this_ptr->base).base.cloth_list,&position->position,(CVector3f *)euler,0.05,
             (this_ptr->base).base.closest_distance_threshold,this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  INT_03f6bb68 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_03f6bb74 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm");
  INT_03f6bb78 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm");
  INT_03f6bb7c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_03f6bb80 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_03f6bb84 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot");
  INT_03f6bb88 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot");
  INT_03f6bb6c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  INT_03f6bb70 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  INT_03f6bb8c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_03f6bb90 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine1");
  INT_03f6bb94 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  INT_03f6bb68 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_03f6bb7c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_03f6bb80 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_03f6bb8c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_03f6bb94 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar1);
  (this_ptr->base).base.model.bone_transform.root_position.z =
       (this_ptr->base).base.model.bone_transform.root_position.z + 0.4f;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_FUN_0052b430();
  DAT_02f43974 = 0;
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 1;
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 0;
  this_ptr->unk[0x30b0] = '\0';
  this_ptr->unk[0x30b1] = '\0';
  this_ptr->unk[0x30b2] = '\0';
  this_ptr->unk[0x30b3] = '\0';
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)(this_ptr->unk + 0x2488));
  this_ptr->unk[0x2480] = '\0';
  this_ptr->unk[0x2481] = '\0';
  this_ptr->unk[0x2482] = '\0';
  this_ptr->unk[0x2483] = '\0';
  this_ptr->unk[0x2484] = '\0';
  this_ptr->unk[0x2485] = '\0';
  this_ptr->unk[0x2486] = '\0';
  this_ptr->unk[0x2487] = '\0';
  this_ptr->unk[0x2478] = '\0';
  this_ptr->unk[0x2479] = '\0';
  this_ptr->unk[0x247a] = '\0';
  this_ptr->unk[0x247b] = '\0';
  this_ptr->unk[0x247c] = '\0';
  this_ptr->unk[0x247d] = '\0';
  this_ptr->unk[0x247e] = -0x60;
  this_ptr->unk[0x247f] = '@';
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar1);
  return;
}
