// Name: core_charactr.cpp_CCharacter_setup_FUN_0042c510
// Address: 0042c510
// Address Range: [[0042c510, 0042c79b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setup_FUN_0042c510(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setup_FUN_0042c510(CCharacter *this_ptr)

{
  char cVar1;
  CSkeleton *pCVar2;
  int iVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  CClothList *this_ptr_00;
  UOrientationVector *euler;
  CLocation *position;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  this_ptr->closest_distance_threshold = _DAT_005fd614;
  *(uint *)&this_ptr->field_0x3004 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&DAT_007c61c4,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&DAT_007c61c4);
  pCVar4 = this_ptr;
  do {
    iVar8 = *(int *)&pCVar4->field_0x25b0;
    if ((iVar8 != 0) &&
       (pCVar5 = (CCharacter *)(**(code **)(*(int *)(iVar8 + 0x154) + 0x94))(iVar8),
       pCVar5 != this_ptr)) {
      _DAT_01d1d400 = "..\\core\\charactr.cpp";
      _DAT_01d1d404 = 0x13c;
      core_main_c_FUN_005030e0("%s is carrying %s, but %s thinks it is being carried by %s",this_ptr,iVar8,iVar8,pCVar5);
    }
    pCVar4 = (CCharacter *)(pCVar4->base).create_event;
  } while (pCVar4 != (CCharacter *)&(this_ptr->base).platform_orientation_delta.y);
  if ((this_ptr->model).model_name[0] != '\0') {
    (this_ptr->model).scale_factor = *(float *)&this_ptr->field_0x27b8;
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&this_ptr->model);
    iVar8 = 0;
    pcVar7 = "bip01 head";
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       (&this_ptr->model);
    iVar8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,pcVar7,iVar8);
    *(int *)&this_ptr->field_0x2774 = iVar8;
  }
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80(this_ptr);
  if (*(int *)&this_ptr->field_0x27a4 != 0) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       (&this_ptr->model);
    iVar8 = 0;
    this_ptr->pending_flame_type = FLAME_TYPE_BODY;
    iVar3 = _stricmp((this_ptr->model).model_name,"shadow.dfm");
    if (iVar3 == 0) {
      iVar8 = 0x10;
    }
    if (iVar8 < pCVar2->bone_count) {
      do {
        iVar3 = iVar8 + 1;
        core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0(this_ptr,pCVar2,iVar8);
        iVar8 = iVar3;
      } while (iVar3 < pCVar2->bone_count);
    }
    iVar8 = 0;
    pCVar4 = this_ptr;
    pCVar5 = this_ptr;
    if (0 < this_ptr->fire_count) {
      do {
        pCVar5->flames[0].which_flame = FLAME_TYPE_BODY;
        *(uint *)&pCVar4->fires[0].field_0x14 = 0x40000000;
        iVar8 = iVar8 + 1;
        pCVar4 = (CCharacter *)((pCVar4->base).actor_name + 0x18);
        pCVar5 = (CCharacter *)&(pCVar5->model).bone_origins[0x14].y;
      } while (iVar8 < this_ptr->fire_count);
    }
  }
  this_ptr_00 = &this_ptr->cloth_list;
  core_cloth_cpp_CClothList_load_FUN_00441cc0(this_ptr_00);
  euler = &(this_ptr->base).orient;
  position = &(this_ptr->base).location;
  core_cloth_cpp_CClothList_setup_FUN_00441f60
            (this_ptr_00,&position->position,&euler->vec,&this_ptr->model);
  core_cloth_cpp_CClothList_process_FUN_00441fa0
            (this_ptr_00,&position->position,&euler->vec,0.05,this_ptr->closest_distance_threshold,
             &this_ptr->model);
  core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_004343c0(this_ptr);
  if (this_ptr->descriptive_name[0] != '\0') {
    this_ptr->sfx_handle = 0;
    return;
  }
  pcVar7 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(&this_ptr->base);
  pcVar7 = pcVar7 + 1;
  pcVar6 = this_ptr->descriptive_name;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  this_ptr->sfx_handle = 0;
  return;
}
