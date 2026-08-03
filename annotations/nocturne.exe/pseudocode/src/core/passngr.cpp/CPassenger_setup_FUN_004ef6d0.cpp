// Name: core_passngr.cpp_CPassenger_setup_FUN_004ef6d0
// Address: 004ef6d0
// Address Range: [[004ef6d0, 004ef887]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_setup_FUN_004ef6d0(CPassenger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_passngr_cpp_CPassenger_setup_FUN_004ef6d0(CPassenger *this_ptr)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *this_ptr_00;
  CMorph *this_ptr_01;
  char cVar2;
  CWerewolf *pCVar3;
  UOrientationVector *pUVar4;
  CMotionList *this_ptr_02;
  char *pcVar5;
  int iVar6;
  
  core_npc_cpp_CNPC_setup_FUN_004ee9e0(&this_ptr->base);
  if (this_ptr->werewolf_actor == (CWerewolf *)0x0) {
    pCVar3 = (CWerewolf *)core_actor_cpp_createActorByName_FUN_0040d540("CWerewolf");
    pcVar5 = this_ptr->name_of_wolf;
    this_ptr->werewolf_actor = pCVar3;
    do {
      cVar2 = *pcVar5;
      (pCVar3->base).base.base.actor_name[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      (pCVar3->base).base.base.actor_name[1] = cVar2;
      pCVar3 = (CWerewolf *)((pCVar3->base).base.base.actor_name + 2);
    } while (cVar2 != '\0');
    pCVar3 = this_ptr->werewolf_actor;
    (pCVar3->base).base.base.location.position.x = (this_ptr->base).base.base.location.position.x;
    (pCVar3->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y;
    (pCVar3->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z;
    (pCVar3->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
    pCVar3 = this_ptr->werewolf_actor;
    pUVar1 = &(this_ptr->base).base.base.orient;
    pUVar4 = &(pCVar3->base).base.base.orient;
    if (pUVar4 != pUVar1) {
      (pUVar4->vec).x = (pUVar1->vec).x;
      (pCVar3->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y;
      (pCVar3->base).base.base.orient.vec.z = (this_ptr->base).base.base.orient.vec.z;
    }
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
              (&(this_ptr->werewolf_actor->base).base.model,this_ptr->wolf_model_name);
    (this_ptr->werewolf_actor->base).base.size_scale = this_ptr->wolf_size;
    (*((this_ptr->werewolf_actor->base).base.base.vtable._ub)->setup)
              ((CDemonActor *)this_ptr->werewolf_actor);
    iVar6 = 1;
    pcVar5 = "transform";
    this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                            (&(this_ptr->werewolf_actor->base).base.model.motion_controller);
    iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(this_ptr_02,pcVar5,iVar6);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990
              (&(this_ptr->werewolf_actor->base).base.model.motion_controller,iVar6,0.0);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
            (&(this_ptr->werewolf_actor->base).base.model);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
            (&(this_ptr->werewolf_actor->base).base.model);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_01,0,this_ptr_00);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170
            (this_ptr_01,1,&(this_ptr->werewolf_actor->base).base.model);
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_01);
  this_ptr->morph_time = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            (&(this_ptr->werewolf_actor->base).base.model);
  return;
}
