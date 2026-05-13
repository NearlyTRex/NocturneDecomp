// Name: core_passngr.cpp_CPassenger_setup_FUN_00545d30
// Address: 00545d30
// MANUAL RECONSTRUCTION
// Address Range: [[00545d30, 00545ee7]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_setup_FUN_00545d30(CPassenger *this_ptr)

#include "nocturne.h"

void __cdecl core_passngr_cpp_CPassenger_setup_FUN_00545d30(CPassenger *this_ptr)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *this_ptr_00;
  CMorph *this_ptr_01;
  CWerewolf *pCVar4;
  CWerewolf *pCVar3;
  UOrientationVector *pUVar5;
  CMotionList *this_ptr_02;
  char *pcVar6;
  int iVar7;
  
  core_npc_cpp_CNPC_setup_FUN_00544870(&this_ptr->base);
  if (this_ptr->werewolf_actor == (CWerewolf *)0x0) {
    pCVar3 = (CWerewolf *)core_actor_cpp_createActorByName_FUN_0040c430("CWerewolf");
    this_ptr->werewolf_actor = pCVar3;
    strcpy((pCVar3->base).base.base.actor_name, this_ptr->name_of_wolf);
    pCVar4 = this_ptr->werewolf_actor;
    (pCVar4->base).base.base.location = (this_ptr->base).base.base.location;
    pCVar4 = this_ptr->werewolf_actor;
    pUVar1 = &(this_ptr->base).base.base.orient;
    pUVar5 = &(pCVar4->base).base.base.orient;
    if (pUVar5 != pUVar1) {
      pUVar5->vec = pUVar1->vec;
    }
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(this_ptr->werewolf_actor->base).base.model,this_ptr->wolf_model_name);
    (this_ptr->werewolf_actor->base).base.size_scale = this_ptr->wolf_size;
    (*((this_ptr->werewolf_actor->base).base.base.vtable._ub)->setup)
              ((CDemonActor *)this_ptr->werewolf_actor);
    iVar7 = 1;
    pcVar6 = "transform";
    this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&(this_ptr->werewolf_actor->base).base.model.motion_controller);
    iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_02,pcVar6,iVar7);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
              (&(this_ptr->werewolf_actor->base).base.model.motion_controller,iVar7,0.0);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
            (&(this_ptr->werewolf_actor->base).base.model);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            (&(this_ptr->werewolf_actor->base).base.model);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_01,0,this_ptr_00);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430
            (this_ptr_01,1,&(this_ptr->werewolf_actor->base).base.model);
  core_morph_cpp_CMorph_getReady_FUN_0052b680(this_ptr_01);
  this_ptr->morph_time = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            (&(this_ptr->werewolf_actor->base).base.model);
  return;
}
