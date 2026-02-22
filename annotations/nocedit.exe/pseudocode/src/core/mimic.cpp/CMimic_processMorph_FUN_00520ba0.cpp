// Name: core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
// Address: 00520ba0
// Address Range: [[00520ba0, 00520d07]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(CMimic *this_ptr)

{
  SMorphPoint *pSVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float in_stack_00000008;
  
  if (this_ptr->morph_target_actor == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x4c9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar2 = in_stack_00000008 / 1.0f + this_ptr->morph_blend;
  this_ptr->morph_blend = fVar2;
  if (1.0 <= fVar2) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
              (g_CDemonMissionPtr,this_ptr->morph_target_actor);
    core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
              (g_CDemonMissionPtr,this_ptr->morph_target_actor);
    this_ptr->morph_target_actor = (CDemonActor *)0x0;
    core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
              (g_CDemonMissionPtr,(CDemonActor *)this_ptr,1);
  }
  else {
    while (0.0 < in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610
                (&(this_ptr->base).base.model.motion_controller);
    }
    while (0.0 < in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610
                ((CMotionController *)(this_ptr->morph_target_actor + 1));
    }
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_0052b600
              (&this_ptr->morph,0,&(this_ptr->base).base.model,0);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_0052b600
              (&this_ptr->morph,1,(CDeformableModelInstance *)(this_ptr->morph_target_actor + 1),0);
    iVar3 = 0;
    if (0 < (this_ptr->morph).models[0].num_points) {
      iVar4 = 0;
      do {
        pSVar1 = (this_ptr->morph).models[0].points;
        iVar3 = iVar3 + 1;
        *(float *)((int)&(pSVar1->position).x + iVar4) =
             -*(float *)((int)&(pSVar1->position).x + iVar4);
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < (this_ptr->morph).models[0].num_points);
      return;
    }
  }
  return;
}
