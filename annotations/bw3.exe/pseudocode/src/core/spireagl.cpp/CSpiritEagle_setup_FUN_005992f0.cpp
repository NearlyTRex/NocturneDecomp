// Name: core_spireagl.cpp_CSpiritEagle_setup_FUN_005992f0
// Address: 005992f0
// Address Range: [[005992f0, 00599533]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_CSpiritEagle_setup_FUN_005992f0(CSpiritEagle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_spireagl_cpp_CSpiritEagle_setup_FUN_005992f0(CSpiritEagle *this_ptr)

{
  UOrientationVector *pUVar1;
  CLocation *position;
  CDeformableModelInstance *this_ptr_00;
  CMorph *this_ptr_01;
  char cVar2;
  CPryeMorph *pCVar3;
  UOrientationVector *pUVar4;
  CMotionList *this_ptr_02;
  char *pcVar5;
  int iVar6;
  
  core_charactr_cpp_CCharacter_setup_FUN_0042b0e0(&this_ptr->base);
  pCVar3 = (CPryeMorph *)core_actor_cpp_createActorByName_FUN_0040c4f0("CPryeMorph");
  this_ptr->morph_actor = pCVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,"bwp3_prye_morph.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            (&(this_ptr->morph_actor->base).base.model);
  core_cloth_cpp_CClothList_load_FUN_0043f920(&this_ptr->cloth_list);
  pUVar1 = &(this_ptr->base).base.orient;
  position = &(this_ptr->base).base.location;
  core_cloth_cpp_CClothList_setup_FUN_0043fbc0
            (&this_ptr->cloth_list,&position->position,&pUVar1->vec,
             &(this_ptr->morph_actor->base).base.model);
  core_cloth_cpp_CClothList_process_FUN_0043fc00
            (&(this_ptr->base).cloth_list,&position->position,&pUVar1->vec,0.05,
             (this_ptr->base).closest_distance_threshold,&(this_ptr->morph_actor->base).base.model);
  if ((this_ptr->base).is_spectral != 0) {
    (this_ptr->base).base.is_transparent = 1;
  }
  pcVar5 = "prye_morph";
  pCVar3 = this_ptr->morph_actor;
  do {
    cVar2 = *pcVar5;
    (pCVar3->base).base.base.actor_name[0] = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    (pCVar3->base).base.base.actor_name[1] = cVar2;
    pCVar3 = (CPryeMorph *)((pCVar3->base).base.base.actor_name + 2);
  } while (cVar2 != '\0');
  pCVar3 = this_ptr->morph_actor;
  (pCVar3->base).base.base.location.position.x = (this_ptr->base).base.location.position.x;
  (pCVar3->base).base.base.location.position.y = (this_ptr->base).base.location.position.y;
  (pCVar3->base).base.base.location.position.z = (this_ptr->base).base.location.position.z;
  (pCVar3->base).base.base.location.area_id = (this_ptr->base).base.location.area_id;
  pCVar3 = this_ptr->morph_actor;
  pUVar1 = &(this_ptr->base).base.orient;
  pUVar4 = &(pCVar3->base).base.base.orient;
  if (pUVar4 != pUVar1) {
    (pUVar4->vec).x = (pUVar1->vec).x;
    (pCVar3->base).base.base.orient.vec.y = (this_ptr->base).base.orient.vec.y;
    (pCVar3->base).base.base.orient.vec.z = (this_ptr->base).base.orient.vec.z;
  }
  (this_ptr->morph_actor->base).base.size_scale = 1.0;
  (*((this_ptr->morph_actor->base).base.base.vtable._ub)->setup)
            ((CDemonActor *)this_ptr->morph_actor);
  iVar6 = 1;
  pcVar5 = "stand";
  this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                          (&(this_ptr->morph_actor->base).base.model.base);
  iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(this_ptr_02,pcVar5,iVar6);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
            (&(this_ptr->morph_actor->base).base.model.base,iVar6,0.0);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            (&(this_ptr->morph_actor->base).base.model);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
            (&(this_ptr->morph_actor->base).base.model);
  this_ptr_00 = &(this_ptr->base).model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
            (this_ptr_01,1,&(this_ptr->cloth_list).cloths[0]->model,0);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(this_ptr_01,0,this_ptr_00);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            (this_ptr_01,1,&(this_ptr->morph_actor->base).base.model);
  core_morph_cpp_CMorph_getReady_FUN_004fac10(this_ptr_01);
  this_ptr->morph_time = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
            (&(this_ptr->morph_actor->base).base.model);
  (this_ptr->base).base.is_transparent = 1;
  (this_ptr->base).base.is_renderable = 0;
  return;
}
