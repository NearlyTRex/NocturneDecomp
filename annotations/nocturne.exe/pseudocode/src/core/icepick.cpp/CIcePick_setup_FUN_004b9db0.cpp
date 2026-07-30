// Name: core_icepick.cpp_CIcePick_setup_FUN_004b9db0
// Address: 004b9db0
// Address Range: [[004b9db0, 004b9fc4]]
// Convention: unknown
// Signature: void core_icepick_cpp_CIcePick_setup_FUN_004b9db0(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_CIcePick_setup_FUN_004b9db0(CHero *param_1)

{
  CHero *pCVar1;
  CCharacter *pCVar2;
  int iVar3;
  CSkeleton *this_ptr;
  
  core_hero_cpp_CHero_setup_FUN_004b48d0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                       (&(param_1->base).model);
  _DAT_01cae288 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 head",1);
  _DAT_01cae28c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Clavicle",1);
  _DAT_01cae290 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Clavicle",1);
  _DAT_01cae294 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01cae298 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01cae29c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L ForeArm",1);
  _DAT_01cae2a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R ForeArm",1);
  _DAT_01cae2a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Foot",1);
  _DAT_01cae2a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Foot",1);
  _DAT_01cae2ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Thigh",1);
  _DAT_01cae2b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Thigh",1);
  _DAT_01cae2b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Calf",1);
  _DAT_01cae2b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Calf",1);
  _DAT_01cae2bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Hand",1);
  _DAT_01cae2c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Hand",1);
  _DAT_01cae2c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine2",1);
  _DAT_01cae2c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine1",1);
  _DAT_01cae2cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine",1);
  (param_1->base).carry_hands[0].secondary_bone_index = 0;
  (param_1->base).carry_hands[1].secondary_bone_index = 0;
  pCVar1 = param_1 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  (param_1->base).carry_hands[0].bone_index = _DAT_01cae2bc;
  (param_1->base).carry_hands[1].bone_index = _DAT_01cae2c0;
  iVar3 = _DAT_01cae0e8;
  param_1[1].base.base.location.position.y = 0.0;
  pCVar1 = *(CHero **)(iVar3 * 4 + 0x1cae0d8);
  if (param_1 == pCVar1) {
    (pCVar1->base).collision_cylinder_radius = 1.5;
  }
  pCVar2 = &param_1[1].base;
  (pCVar2->base).actor_name[0xc] = '\0';
  (pCVar2->base).actor_name[0xd] = '\0';
  (pCVar2->base).actor_name[0xe] = '\0';
  (pCVar2->base).actor_name[0xf] = '\0';
  pCVar2 = &param_1[1].base;
  (pCVar2->base).actor_name[8] = '\0';
  (pCVar2->base).actor_name[9] = '\0';
  (pCVar2->base).actor_name[10] = '\0';
  (pCVar2->base).actor_name[0xb] = '\0';
  param_1[1].base.base.location.area_id = 0;
  return;
}
