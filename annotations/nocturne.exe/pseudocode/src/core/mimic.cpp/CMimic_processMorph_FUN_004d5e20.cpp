// Name: core_mimic.cpp_CMimic_processMorph_FUN_004d5e20
// Address: 004d5e20
// Address Range: [[004d5e20, 004d5f87]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(CMimic *this_ptr,float delta_time)

{
  CMorph *this_ptr_00;
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_18 [2];
  
  if ((this_ptr->cloth).vertices[0x30b].rest_lengths[3] == 0.0) {
    PTR_01cc4800 = "..\\core\\mimic.cpp";
    INT_01cc4804 = 0x4c9;
    core_main_c_FUN_004c8440("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar2 = delta_time / 1.0f + (this_ptr->cloth).vertices[0x30b].rest_lengths[2];
  (this_ptr->cloth).vertices[0x30b].rest_lengths[2] = fVar2;
  if (1.0 <= fVar2) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
              (0x01CC9450,(CDemonActor *)(this_ptr->cloth).vertices[0x30b].rest_lengths[3]);
    core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
              (0x01CC9450,(CDemonActor *)(this_ptr->cloth).vertices[0x30b].rest_lengths[3]);
    (this_ptr->cloth).vertices[0x30b].rest_lengths[3] = 0.0;
    core_mission_cpp_FUN_004d9110(0x01CC9450,this_ptr,1);
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
                ((CMotionController *)
                 ((int)(this_ptr->cloth).vertices[0x30b].rest_lengths[3] + 0x150),local_18);
    }
    this_ptr_00 = (CMorph *)((this_ptr->cloth).vertices[0x300].rest_lengths + 4);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
              (this_ptr_00,0,&(this_ptr->base).base.model,0);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
              (this_ptr_00,1,
               (CDeformableModelInstance *)
               ((int)(this_ptr->cloth).vertices[0x30b].rest_lengths[3] + 0x150),0);
    iVar3 = 0;
    if (0 < (this_ptr->cloth).vertices[0x300].bone_influence_count) {
      iVar4 = 0;
      do {
        iVar1 = (this_ptr->cloth).vertices[0x300].bone_index[0];
        iVar3 = iVar3 + 1;
        *(float *)(iVar1 + 4 + iVar4) = -*(float *)(iVar1 + 4 + iVar4);
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < (this_ptr->cloth).vertices[0x300].bone_influence_count);
      return;
    }
  }
  return;
}
