// Name: core_passngr.cpp_CPassenger_setup_FUN_00545d30
// Address: 00545d30
// Address Range: [[00545d30, 00545ee7]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_setup_FUN_00545d30(CPassenger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_passngr_cpp_CPassenger_setup_FUN_00545d30(CPassenger *this_ptr)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *this_ptr_00;
  CMorph *this_ptr_01;
  char cVar2;
  CDemonActor *pCVar3;
  CMotionList *this_ptr_02;
  int target_motion_index;
  char *pcVar4;
  
  core_npc_cpp_CNPC_setup_FUN_00544870(&this_ptr->base);
  if (this_ptr->werewolf_actor == (CDemonActor *)0x0) {
    pCVar3 = core_actor_cpp_createActorByName_FUN_0040c430("CWerewolf");
    pcVar4 = this_ptr->name_of_wolf;
    this_ptr->werewolf_actor = pCVar3;
    do {
      cVar2 = *pcVar4;
      pCVar3->actor_name[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pCVar3->actor_name[1] = cVar2;
      pCVar3 = (CDemonActor *)(pCVar3->actor_name + 2);
    } while (cVar2 != '\0');
    pCVar3 = this_ptr->werewolf_actor;
    (pCVar3->location).position.x = (this_ptr->base).base.base.location.position.x;
    (pCVar3->location).position.y = (this_ptr->base).base.base.location.position.y;
    (pCVar3->location).position.z = (this_ptr->base).base.base.location.position.z;
    (pCVar3->location).area_id = (this_ptr->base).base.base.location.area_id;
    pCVar3 = this_ptr->werewolf_actor;
    pUVar1 = &(this_ptr->base).base.base.orient;
    if (&pCVar3->orient != pUVar1) {
      (pCVar3->orient).vec.x = (pUVar1->vec).x;
      (pCVar3->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
      (pCVar3->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
    }
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((CDeformableModelInstance *)(this_ptr->werewolf_actor + 1),this_ptr->wolf_model_name)
    ;
    *(float *)(this_ptr->werewolf_actor[0x1c].create_event + 4) = this_ptr->wolf_size;
    (*((this_ptr->werewolf_actor->vtable)._ub)->setup)(this_ptr->werewolf_actor);
    this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            ((CMotionController *)(this_ptr->werewolf_actor + 1));
    target_motion_index = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_02);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
              ((CMotionController *)(this_ptr->werewolf_actor + 1),target_motion_index,0.0);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
            ((CDeformableModelInstance *)(this_ptr->werewolf_actor + 1));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            ((CDeformableModelInstance *)(this_ptr->werewolf_actor + 1));
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_01,0,this_ptr_00);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430
            (this_ptr_01,1,(CDeformableModelInstance *)(this_ptr->werewolf_actor + 1));
  core_morph_cpp_CMorph_getReady_FUN_0052b680(this_ptr_01);
  this_ptr->morph_time = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)(this_ptr->werewolf_actor + 1));
  return;
}
