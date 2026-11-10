// Name: core_passngr.cpp_CPassenger_setup_FUN_00532930
// Address: 00532930
// Address Range: [[00532930, 00532ae7]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_setup_FUN_00532930(CPassenger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_passngr_cpp_CPassenger_setup_FUN_00532930(CPassenger *this_ptr)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *this_ptr_00;
  byte *this_ptr_01;
  char cVar2;
  CWerewolf *pCVar3;
  UOrientationVector *pUVar4;
  CMotionList *this_ptr_02;
  char *pcVar5;
  int iVar6;
  
  core_npc_cpp_CNPC_setup_FUN_00531720(&this_ptr->base);
  if (this_ptr->werewolf_actor == (CWerewolf *)0x0) {
    pCVar3 = (CWerewolf *)core_actor_cpp_createActorByName_FUN_0040c2b0("CWerewolf");
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
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
              (&(this_ptr->werewolf_actor->base).base.model,this_ptr->wolf_model_name);
    *(float *)&(this_ptr->werewolf_actor->base).base.field_0x27b8 = this_ptr->wolf_size;
    (*((this_ptr->werewolf_actor->base).base.base.vtable._ub)->setup)
              ((CDemonActor *)this_ptr->werewolf_actor);
    iVar6 = 1;
    pcVar5 = "transform";
    this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                            (&(this_ptr->werewolf_actor->base).base.model.base);
    iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(this_ptr_02,pcVar5,iVar6);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
              (&(this_ptr->werewolf_actor->base).base.model.base,iVar6,0.0);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            (&(this_ptr->werewolf_actor->base).base.model);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
            (&(this_ptr->werewolf_actor->base).base.model);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  this_ptr_01 = &this_ptr->field_0x1fbc4;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0((CMorph *)this_ptr_01,0,this_ptr_00);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)this_ptr_01,1,&(this_ptr->werewolf_actor->base).base.model);
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)this_ptr_01);
  this_ptr->morph_time = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
            (&(this_ptr->werewolf_actor->base).base.model);
  return;
}
