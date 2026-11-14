// Name: core_pryemorp.cpp_CPryeMorph_setup_FUN_005275c0
// Address: 005275c0
// Address Range: [[005275c0, 0052777c]]
// Convention: __cdecl
// Signature: void __cdecl core_pryemorp_cpp_CPryeMorph_setup_FUN_005275c0(CPryeMorph *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_pryemorp_cpp_CPryeMorph_setup_FUN_005275c0(CPryeMorph *this_ptr)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *this_ptr_00;
  CMorph *this_ptr_01;
  char cVar2;
  CDemonActor *pCVar3;
  CMotionList *this_ptr_02;
  char *pcVar4;
  int iVar5;
  
  core_npc_cpp_CNPC_setup_FUN_00509020(&this_ptr->base);
  pCVar3 = core_actor_cpp_createActorByName_FUN_0040c4f0(this_ptr->target_class);
  pcVar4 = this_ptr->name_of_target;
  this_ptr->target_actor = pCVar3;
  do {
    cVar2 = *pcVar4;
    pCVar3->actor_name[0] = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar3->actor_name[1] = cVar2;
    pCVar3 = (CDemonActor *)(pCVar3->actor_name + 2);
  } while (cVar2 != '\0');
  pCVar3 = this_ptr->target_actor;
  (pCVar3->location).position.x = (this_ptr->base).base.base.location.position.x;
  (pCVar3->location).position.y = (this_ptr->base).base.base.location.position.y;
  (pCVar3->location).position.z = (this_ptr->base).base.base.location.position.z;
  (pCVar3->location).area_id = (this_ptr->base).base.base.location.area_id;
  pCVar3 = this_ptr->target_actor;
  pUVar1 = &(this_ptr->base).base.base.orient;
  if (&pCVar3->orient != pUVar1) {
    (pCVar3->orient).vec.x = (pUVar1->vec).x;
    (pCVar3->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
    (pCVar3->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(this_ptr->target_actor + 1),this_ptr->target_model_name);
  *(float *)(this_ptr->target_actor[0x1d].create_event + 0x48) = this_ptr->morph_size;
  (*((this_ptr->target_actor->vtable)._ub)->setup)(this_ptr->target_actor);
  iVar5 = 1;
  pcVar4 = this_ptr->target_state;
  this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                          ((CMotionController *)(this_ptr->target_actor + 1));
  iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(this_ptr_02,pcVar4,iVar5);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
            ((CMotionController *)(this_ptr->target_actor + 1),iVar5,0.0);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)(this_ptr->target_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
            ((CDeformableModelInstance *)(this_ptr->target_actor + 1));
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(this_ptr_01,0,this_ptr_00);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            (this_ptr_01,1,(CDeformableModelInstance *)(this_ptr->target_actor + 1));
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
            (this_ptr_01,0,&(this_ptr->base).base.cloth_list.cloths[0]->model,0);
  core_morph_cpp_CMorph_getReady_FUN_004fac10(this_ptr_01);
  this_ptr->morph_time = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
            ((CDeformableModelInstance *)(this_ptr->target_actor + 1));
  return;
}
