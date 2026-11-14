// Name: core_charactr.cpp_CCharacter_setup_FUN_0042b0e0
// Address: 0042b0e0
// Address Range: [[0042b0e0, 0042b3fd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setup_FUN_0042b0e0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setup_FUN_0042b0e0(CCharacter *this_ptr)

{
  char cVar1;
  CDemonActor *this_ptr_00;
  CSkeleton *pCVar2;
  int iVar3;
  CCharacter *pCVar4;
  float fVar5;
  CCharacter *pCVar6;
  CClothList *this_ptr_01;
  UOrientationVector *euler;
  CLocation *position;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  this_ptr->closest_distance_threshold = _DAT_005dd234;
  this_ptr->damage_decal_count = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&DAT_007e2b34,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&DAT_007e2b34);
  pCVar4 = this_ptr;
  do {
    this_ptr_00 = pCVar4->carry_hands[0].carry_actor;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      pCVar6 = (CCharacter *)(*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
      if (pCVar6 == (CCharacter *)0x0) {
        (*((this_ptr_00->vtable)._ub)->pickup)(this_ptr_00,&this_ptr->base);
      }
      else if (pCVar6 != this_ptr) {
        _DAT_01d71de0 = "..\\core\\charactr.cpp";
        _DAT_01d71de4 = 0x145;
        core_main_c_FUN_004e4330
                  ("%s is carrying %s, but %s thinks it is being carried by %s",this_ptr,this_ptr_00,this_ptr_00,pCVar6);
      }
    }
    pCVar4 = (CCharacter *)(pCVar4->base).create_event;
  } while (pCVar4 != (CCharacter *)&(this_ptr->base).platform_orientation_delta.y);
  if ((this_ptr->model).model_name[0] != '\0') {
    (this_ptr->model).scale_factor = this_ptr->size_scale;
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(&this_ptr->model);
    iVar9 = 0;
    pcVar8 = "bip01 head";
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       (&this_ptr->model);
    iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar2,pcVar8,iVar9);
    this_ptr->look_at_head_bone = iVar9;
  }
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004322a0(this_ptr);
  if (this_ptr->is_ethereal != 0) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       (&this_ptr->model);
    iVar9 = 0;
    this_ptr->pending_flame_type = FLAME_TYPE_BODY;
    iVar3 = _stricmp((this_ptr->model).model_name,"shadow.dfm");
    if (iVar3 == 0) {
      iVar9 = 0x10;
    }
    if (iVar9 < pCVar2->bone_count) {
      do {
        iVar3 = iVar9 + 1;
        core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(this_ptr,pCVar2,iVar9);
        iVar9 = iVar3;
      } while (iVar3 < pCVar2->bone_count);
    }
    iVar9 = 0;
    pCVar4 = this_ptr;
    pCVar6 = this_ptr;
    if (0 < this_ptr->fire_count) {
      do {
        pCVar4->flames[0].which_flame = FLAME_TYPE_BODY;
        pCVar6->fires[0].size = 2.0;
        iVar9 = iVar9 + 1;
        pCVar4 = (CCharacter *)&(pCVar4->model).bone_origins[0x14].y;
        pCVar6 = (CCharacter *)((pCVar6->base).actor_name + 0x18);
      } while (iVar9 < this_ptr->fire_count);
    }
  }
  this_ptr_01 = &this_ptr->cloth_list;
  core_cloth_cpp_CClothList_load_FUN_0043f920(this_ptr_01);
  euler = &(this_ptr->base).orient;
  position = &(this_ptr->base).location;
  core_cloth_cpp_CClothList_setup_FUN_0043fbc0
            (this_ptr_01,&position->position,&euler->vec,&this_ptr->model);
  core_cloth_cpp_CClothList_process_FUN_0043fc00
            (this_ptr_01,&position->position,&euler->vec,0.05,this_ptr->closest_distance_threshold,
             &this_ptr->model);
  core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_00433880(this_ptr);
  if (this_ptr->descriptive_name[0] == '\0') {
    pcVar8 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(&this_ptr->base);
    pcVar8 = pcVar8 + 1;
    pcVar7 = this_ptr->descriptive_name;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  this_ptr->sfx_handle = 0;
  if (this_ptr->additive != 0) {
    (this_ptr->base).is_renderable = 0;
    (this_ptr->base).is_transparent = 1;
  }
  this_ptr->look_at_target = (CCharacter *)0x0;
  this_ptr->walk_state = WALK_STATE_IDLE;
  this_ptr->look_at_candidate = (CCharacter *)0x0;
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,1.0);
  this_ptr->smoke_emit_timer = fVar5;
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,1.0);
  this_ptr->smoke_check_timer = fVar5;
  this_ptr->smoke_occluded = 0;
  return;
}
