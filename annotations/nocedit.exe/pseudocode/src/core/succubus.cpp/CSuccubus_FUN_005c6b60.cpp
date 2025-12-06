// Name: core_succubus.cpp_CSuccubus_FUN_005c6b60
// Address: 005c6b60
// Address Range: [[005c6b60, 005c6e85]]
// Convention: __cdecl
// Signature: void core_succubus.cpp_CSuccubus_FUN_005c6b60(CSuccubus * this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_succubus_cpp_CSuccubus_FUN_005c6b60(CSuccubus *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  uint uStack00000048;
  CMorph *pCStack0000005c;
  CDeformableModelInstance *pCStack00000060;
  uint uStack00000064;
  uint uStack00000068;
  char *model_name;
  
  pCVar1 = &(this_ptr->base_enemy).base_character.model;
  if (g_CGamePtr->nudity_flag == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"succubusx.dfm");
    model_name = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"succubus.dfm");
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),model_name);
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  pCVar1 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
  this_ptr_00 = (CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  core_cloth_cpp_CClothList_load_FUN_0043bfa0((CClothList *)(this_ptr->field1_0xbeb4 + 0x22bc));
  core_cloth_cpp_FUN_0043c290();
  core_cloth_cpp_FUN_0043c2d0();
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  _DAT_03f6bb68 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  _DAT_03f6bb74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  _DAT_03f6bb78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  _DAT_03f6bb7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_03f6bb80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_03f6bb84 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  _DAT_03f6bb88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  _DAT_03f6bb6c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand");
  _DAT_03f6bb70 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand");
  _DAT_03f6bb8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  _DAT_03f6bb90 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine1");
  _DAT_03f6bb94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  _DAT_03f6bb68 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  _DAT_03f6bb7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_03f6bb80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_03f6bb8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  uStack00000048 = 1;
  _DAT_03f6bb94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  uStack00000048 = 0x5c6d8f;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar1);
  (this_ptr->base_enemy).base_character.model.bone_transform.root_position.z =
       (this_ptr->base_enemy).base_character.model.bone_transform.root_position.z + 0.4f;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  pCStack0000005c = (CMorph *)pCVar1;
  core_morph_cpp_FUN_0052b430();
  pCStack0000005c = (CMorph *)0x1;
  pCStack00000060 = this_ptr_00;
  core_morph_cpp_FUN_0052b430();
  uStack00000064 = 0;
  pCStack00000060 = *(CDeformableModelInstance **)(this_ptr->field1_0xbeb4 + 0x2450);
  pCStack0000005c = (CMorph *)0x1;
  DAT_02f43974 = 0;
  core_morph_cpp_FUN_0052b580();
  uStack00000068 = 0;
  uStack00000064 = *(uint *)(this_ptr->field1_0xbeb4 + 0x2450);
  pCStack00000060 = (CDeformableModelInstance *)0x1;
  DAT_02f43974 = 1;
  pCStack0000005c = (CMorph *)(this_ptr->field1_0xbeb4 + 0x2488);
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 0;
  this_ptr->field1_0xbeb4[0x30b0] = '\0';
  this_ptr->field1_0xbeb4[0x30b1] = '\0';
  this_ptr->field1_0xbeb4[0x30b2] = '\0';
  this_ptr->field1_0xbeb4[0x30b3] = '\0';
  uStack00000068 = 0x5c6e29;
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)(this_ptr->field1_0xbeb4 + 0x2488));
  this_ptr->field1_0xbeb4[0x2480] = '\0';
  this_ptr->field1_0xbeb4[0x2481] = '\0';
  this_ptr->field1_0xbeb4[0x2482] = '\0';
  this_ptr->field1_0xbeb4[0x2483] = '\0';
  this_ptr->field1_0xbeb4[0x2484] = '\0';
  this_ptr->field1_0xbeb4[0x2485] = '\0';
  this_ptr->field1_0xbeb4[0x2486] = '\0';
  this_ptr->field1_0xbeb4[0x2487] = '\0';
  this_ptr->field1_0xbeb4[0x2478] = '\0';
  this_ptr->field1_0xbeb4[0x2479] = '\0';
  this_ptr->field1_0xbeb4[0x247a] = '\0';
  this_ptr->field1_0xbeb4[0x247b] = '\0';
  this_ptr->field1_0xbeb4[0x247c] = '\0';
  this_ptr->field1_0xbeb4[0x247d] = '\0';
  this_ptr->field1_0xbeb4[0x247e] = -0x60;
  this_ptr->field1_0xbeb4[0x247f] = '@';
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar1);
  return;
}
