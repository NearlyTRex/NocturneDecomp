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
  int iVar4;
  char *pcVar5;
  
  core_npc_cpp_CNPC_setup_FUN_00544870(&this_ptr->base);
  if (*(int *)(this_ptr->unk + 0x60) == 0) {
    pCVar3 = core_actor_cpp_createActorByName_FUN_0040c430("CWerewolf");
    pcVar5 = this_ptr->name_of_wolf;
    *(CDemonActor **)(this_ptr->unk + 0x60) = pCVar3;
    do {
      cVar2 = *pcVar5;
      pCVar3->actor_name[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pCVar3->actor_name[1] = cVar2;
      pCVar3 = (CDemonActor *)(pCVar3->actor_name + 2);
    } while (cVar2 != '\0');
    iVar4 = *(int *)(this_ptr->unk + 0x60);
    *(float *)(iVar4 + 0x20) = (this_ptr->base).base.base.location.position.x;
    *(float *)(iVar4 + 0x24) = (this_ptr->base).base.base.location.position.y;
    *(float *)(iVar4 + 0x28) = (this_ptr->base).base.base.location.position.z;
    *(int *)(iVar4 + 0x2c) = (this_ptr->base).base.base.location.area_id;
    iVar4 = *(int *)(this_ptr->unk + 0x60);
    pUVar1 = &(this_ptr->base).base.base.orient;
    if ((UOrientationVector *)(iVar4 + 0x30) != pUVar1) {
      *(float *)(iVar4 + 0x30) = (pUVar1->vec).x;
      *(float *)(iVar4 + 0x34) = (this_ptr->base).base.base.orient.vec.y;
      *(float *)(iVar4 + 0x38) = (this_ptr->base).base.base.orient.vec.z;
    }
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((CDeformableModelInstance *)(*(int *)(this_ptr->unk + 0x60) + 0x158),
               this_ptr->wolf_model_name);
    *(float *)(*(int *)(this_ptr->unk + 0x60) + 0x261c) = this_ptr->wolf_size;
    (*(code *)**(uint **)(*(int *)(this_ptr->unk + 0x60) + 0x154))
              (*(int *)(this_ptr->unk + 0x60));
    this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            ((CMotionController *)(*(int *)(this_ptr->unk + 0x60) + 0x158));
    iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_02);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
              ((CMotionController *)(*(int *)(this_ptr->unk + 0x60) + 0x158),iVar4,0.0);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
            ((CDeformableModelInstance *)(*(int *)(this_ptr->unk + 0x60) + 0x158));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            ((CDeformableModelInstance *)(*(int *)(this_ptr->unk + 0x60) + 0x158));
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = (CMorph *)(this_ptr->unk + 100);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_01,0,this_ptr_00);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430
            (this_ptr_01,1,(CDeformableModelInstance *)(*(int *)(this_ptr->unk + 0x60) + 0x158));
  core_morph_cpp_CMorph_getReady_FUN_0052b680(this_ptr_01);
  this_ptr->morph_time = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)(*(int *)(this_ptr->unk + 0x60) + 0x158));
  return;
}
