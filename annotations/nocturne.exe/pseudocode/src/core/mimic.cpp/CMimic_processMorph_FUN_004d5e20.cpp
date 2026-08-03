// Name: core_mimic.cpp_CMimic_processMorph_FUN_004d5e20
// Address: 004d5e20
// Address Range: [[004d5e20, 004d5f87]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(CMimic *this_ptr,float delta_time)

{
  SMorphPoint *pSVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_18 [2];
  
  if (this_ptr->morph_target_actor == (CDemonActor *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\mimic.cpp";
    g_INT_01cc4804 = 0x4c9;
    core_main_c_FUN_004c8440("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar2 = delta_time / 1.0f + this_ptr->morph_blend;
  this_ptr->morph_blend = fVar2;
  if (1.0 <= fVar2) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
              (g_CDemonMission_PTR_005baf90,this_ptr->morph_target_actor);
    core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
              (g_CDemonMission_PTR_005baf90,this_ptr->morph_target_actor);
    this_ptr->morph_target_actor = (CDemonActor *)0x0;
    core_mission_cpp_FUN_004d9110(g_CDemonMission_PTR_005baf90,this_ptr,1);
  }
  else {
    local_18[0] = delta_time;
    while (0.0 < local_18[0]) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0
                (&(this_ptr->base).base.model.motion_controller,local_18);
    }
    local_18[0] = delta_time;
    while (0.0 < local_18[0]) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0
                ((CMotionController *)(this_ptr->morph_target_actor + 1),local_18);
    }
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
              (&this_ptr->morph,0,&(this_ptr->base).base.model,0);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
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
