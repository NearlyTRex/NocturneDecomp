// Name: core_svetlana.cpp_CSvetlana_setup_FUN_00541a40
// Address: 00541a40
// Address Range: [[00541a40, 00541ccb]]
// Convention: unknown
// Signature: void core_svetlana_cpp_CSvetlana_setup_FUN_00541a40(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_svetlana_cpp_CSvetlana_setup_FUN_00541a40(CHero *param_1)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *this_ptr;
  CCloth *pCVar1;
  CHero *pCVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar3;
  char *model_name;
  
  if (*(int *)(0x01C775EC + 0x18) == 0) {
    model_name = "svetlanax.dfm";
  }
  else {
    model_name = "svetlana.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(&(param_1->base).model,model_name);
  core_hero_cpp_FUN_004b48d0(param_1);
  this_ptr = &(param_1->base).model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  _DAT_02dca058 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 head",1);
  _DAT_02dca05c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_02dca060 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_02dca064 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02dca068 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02dca06c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_02dca070 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_02dca074 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_02dca078 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_02dca07c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_02dca080 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_02dca084 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Calf",1);
  _DAT_02dca088 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Calf",1);
  _DAT_02dca08c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_02dca090 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_02dca094 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_02dca098 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_02dca09c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bipblade01",1);
  _DAT_02dca0a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"BipR14",1)
  ;
  pCVar1 = (CCloth *)(param_1[1].base.base.actor_name + 8);
  pCVar2 = param_1 + 1;
  (pCVar2->base).base.actor_name[0] = '\0';
  (pCVar2->base).base.actor_name[1] = '\0';
  (pCVar2->base).base.actor_name[2] = '\0';
  (pCVar2->base).base.actor_name[3] = '\0';
  core_cloth_cpp_CCloth_load_FUN_00435240(pCVar1,"svetcape.cth");
  euler = &(param_1->base).base.orient;
  position = &(param_1->base).base.location;
  core_cloth_cpp_CCloth_setup_FUN_004359e0(pCVar1,&position->position,&euler->vec,this_ptr);
  pCVar1 = (CCloth *)(param_1[2].path_map.height_cache_tags[0x38] + 0x13);
  core_cloth_cpp_CCloth_load_FUN_00435240(pCVar1,"svethair.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0(pCVar1,&position->position,&euler->vec,this_ptr);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lblade01",1);
  param_1[4].path_map.height_cache_tags[9][0x22] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rblade02",1);
  param_1[4].path_map.height_cache_tags[9][0x1d] = 0;
  param_1[4].path_map.height_cache_tags[9][0x23] = iVar3;
  return;
}
