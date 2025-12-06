// Name: core_passngr.cpp_FUN_00545d30
// Address: 00545d30
// Address Range: [[00545d30, 00545ee7]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_00545d30()

#include "nocturne.h"

/* Signature: byte actors_npc_passenger.cpp_FUN_00545d30(uint param_1) */

void core_passngr_cpp_FUN_00545d30(void)

{
  COrientation *pCVar1;
  CDeformableModelInstance *this_ptr;
  char cVar2;
  CDemonActor *pCVar3;
  CMotionList *this_ptr_00;
  int iVar4;
  char *pcVar5;
  CNPC *in_stack_00000004;
  
  core_npc_cpp_CNPC_FUN_00544870(in_stack_00000004);
  if (in_stack_00000004[1].base_character.base_actor.scale.x == 0) {
    pCVar3 = core_actor_cpp_createActorByName_FUN_0040c430("CWerewolf");
    pcVar5 = in_stack_00000004[1].base_character.base_actor.create_event + 0xc;
    in_stack_00000004[1].base_character.base_actor.scale.x = (int)pCVar3;
    do {
      cVar2 = *pcVar5;
      pCVar3->actor_name[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pCVar3->actor_name[1] = cVar2;
      pCVar3 = (CDemonActor *)(pCVar3->actor_name + 2);
    } while (cVar2 != '\0');
    iVar4 = in_stack_00000004[1].base_character.base_actor.scale.x;
    *(float *)(iVar4 + 0x20) = (in_stack_00000004->base_character).base_actor.location.position.x;
    *(float *)(iVar4 + 0x24) = (in_stack_00000004->base_character).base_actor.location.position.y;
    *(float *)(iVar4 + 0x28) = (in_stack_00000004->base_character).base_actor.location.position.z;
    *(int *)(iVar4 + 0x2c) = (in_stack_00000004->base_character).base_actor.location.area_id;
    iVar4 = in_stack_00000004[1].base_character.base_actor.scale.x;
    pCVar1 = &(in_stack_00000004->base_character).base_actor.orient;
    if ((COrientation *)(iVar4 + 0x30) != pCVar1) {
      *(float *)(iVar4 + 0x30) = pCVar1->pitch;
      *(float *)(iVar4 + 0x34) = (in_stack_00000004->base_character).base_actor.orient.bank;
      *(float *)(iVar4 + 0x38) = (in_stack_00000004->base_character).base_actor.orient.heading;
    }
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((CDeformableModelInstance *)
               (in_stack_00000004[1].base_character.base_actor.scale.x + 0x158),
               (char *)&in_stack_00000004[1].base_character.base_actor.health);
    *(float *)(in_stack_00000004[1].base_character.base_actor.scale.x + 0x261c) =
         in_stack_00000004[1].base_character.model.bone_transform.bone_rotations[0x53].x;
    (*(code *)**(uint **)(in_stack_00000004[1].base_character.base_actor.scale.x + 0x154))();
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            ((CMotionController *)
                             (in_stack_00000004[1].base_character.base_actor.scale.x + 0x158));
    iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_00);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
              ((CMotionController *)(in_stack_00000004[1].base_character.base_actor.scale.x + 0x158)
               ,iVar4,0.0);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
            ((CDeformableModelInstance *)
             (in_stack_00000004[1].base_character.base_actor.scale.x + 0x158));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            ((CDeformableModelInstance *)
             (in_stack_00000004[1].base_character.base_actor.scale.x + 0x158));
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_CMorph_getReady_FUN_0052b680
            ((CMorph *)&in_stack_00000004[1].base_character.base_actor.scale.y);
  in_stack_00000004[1].base_character.model.bone_transform.bone_rotations[0x53].w = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)
             (in_stack_00000004[1].base_character.base_actor.scale.x + 0x158));
  return;
}
