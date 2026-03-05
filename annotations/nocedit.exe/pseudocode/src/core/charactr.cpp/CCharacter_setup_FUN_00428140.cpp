// Name: core_charactr.cpp_CCharacter_setup_FUN_00428140
// Address: 00428140
// Address Range: [[00428140, 00428150]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00428140(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00428140(CCharacter *this_ptr)

{
  UOrientationVector *euler;
  CLocation *position;
  CClothList *this_ptr_00;
  char cVar1;
  CDemonActor *this_ptr_01;
  float fVar2;
  CSkeleton *pCVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  fVar2 = 9999.0f;
  this_ptr->damage_decal_count = 0;
  this_ptr->closest_distance_threshold = fVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&CKeyFramedModelInstance_00823a98,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&CKeyFramedModelInstance_00823a98);
  pCVar4 = this_ptr;
  do {
    this_ptr_01 = pCVar4->carry_hands[0].carry_actor;
    if (this_ptr_01 != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (this_ptr_01,"..\\core\\charactr.cpp",0x106);
      pCVar5 = (CCharacter *)(*((this_ptr_01->vtable)._ub)->getCarrier)(this_ptr_01);
      if (pCVar5 == (CCharacter *)0x0) {
        (*((this_ptr_01->vtable)._ub)->pickup)(this_ptr_01,&this_ptr->base);
      }
      else if (pCVar5 != this_ptr) {
        g_CurrentFilename = "..\\core\\charactr.cpp";
        g_CurrentLineNumber = 0x10b;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("%s is carrying %s, but %s thinks it is being carried by %s",this_ptr,this_ptr_01,this_ptr_01,pCVar5);
      }
    }
    pCVar4 = (CCharacter *)&(pCVar4->base).orient_matrix.m[0].z;
  } while (pCVar4 != (CCharacter *)((this_ptr->base).create_event + 0x10));
  if ((this_ptr->model).model_name[0] != '\0') {
    (this_ptr->model).scale_factor = this_ptr->size_scale;
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&this_ptr->model);
    iVar9 = 0;
    pcVar8 = "bip01 head";
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (&this_ptr->model);
    iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar3,pcVar8,iVar9);
    this_ptr->look_at_head_bone = iVar9;
  }
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530(this_ptr);
  if (this_ptr->is_ethereal != 0) {
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (&this_ptr->model);
    this_ptr->fire_spread_rate = 5.60519e-45;
    iVar9 = 0;
    if (0 < pCVar3->bone_count) {
      do {
        iVar6 = iVar9 + 1;
        core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520(this_ptr,pCVar3,iVar9);
        iVar9 = iVar6;
      } while (iVar6 < pCVar3->bone_count);
    }
    iVar9 = 0;
    pCVar4 = this_ptr;
    pCVar5 = this_ptr;
    if (0 < this_ptr->fire_count) {
      do {
        pCVar5->flames[0].which_flame = 4;
        pCVar4->fire_effects[0].size = 2.0;
        iVar9 = iVar9 + 1;
        pCVar4 = (CCharacter *)((pCVar4->base).actor_name + 0x18);
        pCVar5 = (CCharacter *)&(pCVar5->model).transformed_vertices[0x14].y;
      } while (iVar9 < this_ptr->fire_count);
    }
  }
  this_ptr_00 = &this_ptr->cloth_list;
  core_cloth_cpp_CClothList_load_FUN_0043bfa0(this_ptr_00);
  euler = &(this_ptr->base).orient;
  position = &(this_ptr->base).location;
  core_cloth_cpp_CClothList_setup_FUN_0043c290
            (this_ptr_00,&position->position,&euler->vec,&this_ptr->model);
  core_cloth_cpp_CClothList_process_FUN_0043c2d0
            (this_ptr_00,&position->position,&euler->vec,0.05,this_ptr->closest_distance_threshold,
             &this_ptr->model);
  core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670(this_ptr);
  if (this_ptr->descriptive_name[0] != '\0') {
    this_ptr->sfx_handle = 0;
    return;
  }
  pcVar8 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(&this_ptr->base);
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
  this_ptr->sfx_handle = 0;
  return;
}
