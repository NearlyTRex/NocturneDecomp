// Name: core_succubus.cpp_CSuccubus_setup_FUN_005c6b60
// Address: 005c6b60
// Address Range: [[005c6b60, 005c6e85]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_005c6b60(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_005c6b60(CSuccubus *this_ptr)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *pCVar1;
  CSkeleton *this_ptr_00;
  char *pcVar2;
  
  pCVar1 = &(this_ptr->base).base.model;
  if (g_CGamePtr->nudity_flag == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"succubusx.dfm");
    pcVar2 = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"succubus.dfm");
    pcVar2 = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)this_ptr->unk,pcVar2);
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
  pcVar2 = this_ptr->unk;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
            ((CDeformableModelInstance *)pcVar2);
  core_cloth_cpp_CClothList_load_FUN_0043bfa0((CClothList *)(this_ptr->unk + 0x22b4));
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CClothList_setup_FUN_0043c290
            ((CClothList *)(this_ptr->unk + 0x22b4),&position->position,&euler->vec,
             (CDeformableModelInstance *)pcVar2);
  core_cloth_cpp_CClothList_process_FUN_0043c2d0
            (&(this_ptr->base).base.cloth_list,&position->position,&euler->vec,0.05,
             (this_ptr->base).base.closest_distance_threshold,(CDeformableModelInstance *)pcVar2);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  INT_03f6bb68 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  INT_03f6bb74 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  INT_03f6bb78 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  INT_03f6bb7c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_03f6bb80 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_03f6bb84 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  INT_03f6bb88 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  INT_03f6bb6c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  INT_03f6bb70 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  INT_03f6bb8c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_03f6bb90 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine1");
  INT_03f6bb94 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  INT_03f6bb68 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  INT_03f6bb7c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_03f6bb80 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_03f6bb8c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_03f6bb94 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
            ((CDeformableModelInstance *)pcVar2);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar1);
  (this_ptr->base).base.model.bone_transform.root_position.z =
       (this_ptr->base).base.model.bone_transform.root_position.z + 0.4f;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            ((CDeformableModelInstance *)pcVar2);
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_FUN_0052b430();
  DAT_02f43974 = 0;
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 1;
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 0;
  this_ptr->unk[0x30a8] = '\0';
  this_ptr->unk[0x30a9] = '\0';
  this_ptr->unk[0x30aa] = '\0';
  this_ptr->unk[0x30ab] = '\0';
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)(this_ptr->unk + 0x2480));
  this_ptr->unk[0x2478] = '\0';
  this_ptr->unk[0x2479] = '\0';
  this_ptr->unk[0x247a] = '\0';
  this_ptr->unk[0x247b] = '\0';
  this_ptr->unk[0x247c] = '\0';
  this_ptr->unk[0x247d] = '\0';
  this_ptr->unk[0x247e] = '\0';
  this_ptr->unk[0x247f] = '\0';
  this_ptr->unk[0x2470] = '\0';
  this_ptr->unk[0x2471] = '\0';
  this_ptr->unk[0x2472] = '\0';
  this_ptr->unk[0x2473] = '\0';
  this_ptr->unk[0x2474] = '\0';
  this_ptr->unk[0x2475] = '\0';
  this_ptr->unk[0x2476] = -0x60;
  this_ptr->unk[0x2477] = '@';
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)pcVar2);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar1);
  return;
}
