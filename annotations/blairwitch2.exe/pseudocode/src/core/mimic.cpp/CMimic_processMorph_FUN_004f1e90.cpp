// Name: core_mimic.cpp_CMimic_processMorph_FUN_004f1e90
// Address: 004f1e90
// Address Range: [[004f1e90, 004f1ff7]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(CMimic *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_18 [2];
  
  if (*(int *)&this_ptr->field_0x4c350 == 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x4c9;
    core_main_c_FUN_004e4500("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar1 = delta_time / _DAT_005f9e84 + *(float *)&this_ptr->field_0x4c34c;
  *(float *)&this_ptr->field_0x4c34c = fVar1;
  if (1.0 <= fVar1) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
              (0x01D182F0,*(CDemonActor **)&this_ptr->field_0x4c350);
    core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
              (0x01D182F0,*(CDemonActor **)&this_ptr->field_0x4c350);
    *(uint *)&this_ptr->field_0x4c350 = 0;
    core_mission_cpp_FUN_004fc7b0(0x01D182F0,this_ptr,1);
  }
  else {
    local_18[0] = delta_time;
    while (0.0 < local_18[0]) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0
                ((CMotionController *)&this_ptr->field_0x2b4,local_18);
    }
    local_18[0] = delta_time;
    while (0.0 < local_18[0]) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0
                ((CMotionController *)(*(int *)&this_ptr->field_0x4c350 + 0x2b4),local_18);
    }
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
              ((CMorph *)&this_ptr->field_0x4b720,0,
               (CDeformableModelInstance *)&this_ptr->field_0x2b4,0);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
              ((CMorph *)&this_ptr->field_0x4b720,1,
               (CDeformableModelInstance *)(*(int *)&this_ptr->field_0x4c350 + 0x2b4),0);
    iVar2 = 0;
    if (0 < *(int *)&this_ptr->field_0x4b774) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)&this_ptr->field_0x4b778 + 4 + iVar3) =
             -*(float *)(*(int *)&this_ptr->field_0x4b778 + 4 + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < *(int *)&this_ptr->field_0x4b774);
      return;
    }
  }
  return;
}
