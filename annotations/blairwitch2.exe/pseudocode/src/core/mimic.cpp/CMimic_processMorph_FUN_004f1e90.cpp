// Name: core_mimic.cpp_CMimic_processMorph_FUN_004f1e90
// Address: 004f1e90
// Address Range: [[004f1e90, 004f1ff7]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(CMimic *this_ptr,float delta_time)

{
  SMorphPoint *pSVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_18 [2];
  
  if (this_ptr->morph_target_actor == (CDemonActor *)0x0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x4c9;
    core_main_c_FUN_004e4500("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar2 = delta_time / _DAT_005f9e84 + this_ptr->morph_blend;
  this_ptr->morph_blend = fVar2;
  if (1.0 <= fVar2) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
              (0x01D182F0,this_ptr->morph_target_actor);
    core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
              (0x01D182F0,this_ptr->morph_target_actor);
    this_ptr->morph_target_actor = (CDemonActor *)0x0;
    core_mission_cpp_FUN_004fc7b0(0x01D182F0,this_ptr,1);
  }
  else {
    local_18[0] = delta_time;
    while (0.0 < local_18[0]) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0
                ((CMotionController *)&(this_ptr->base).base.model,local_18);
    }
    local_18[0] = delta_time;
    while (0.0 < local_18[0]) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0
                ((CMotionController *)(this_ptr->morph_target_actor + 1),local_18);
    }
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
              (&this_ptr->morph,0,&(this_ptr->base).base.model,0);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
              (&this_ptr->morph,1,(CDeformableModelInstance *)(this_ptr->morph_target_actor + 1),0);
    iVar3 = 0;
    if (0 < (this_ptr->morph).models[0].num_points) {
      iVar4 = 0;
      do {
        pSVar1 = (this_ptr->morph).models[0].points;
        iVar3 = iVar3 + 1;
        *(float *)(pSVar1 + iVar4 + 4) = -*(float *)(pSVar1 + iVar4 + 4);
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < (this_ptr->morph).models[0].num_points);
      return;
    }
  }
  return;
}
