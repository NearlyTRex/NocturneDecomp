// Name: core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
// Address: 00520ba0
// Address Range: [[00520ba0, 00520d07]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(CMimic *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float in_stack_00000008;
  
  if (*(int *)(this_ptr->unk4 + 0xc54) == 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x4c9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar1 = in_stack_00000008 / 1.0f + *(float *)(this_ptr->unk4 + 0xc50);
  *(float *)(this_ptr->unk4 + 0xc50) = fVar1;
  if (1.0 <= fVar1) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
              (g_CDemonMissionPtr,*(CDemonActor **)(this_ptr->unk4 + 0xc54));
    core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
              (g_CDemonMissionPtr,*(CDemonActor **)(this_ptr->unk4 + 0xc54));
    this_ptr->unk4[0xc54] = '\0';
    this_ptr->unk4[0xc55] = '\0';
    this_ptr->unk4[0xc56] = '\0';
    this_ptr->unk4[0xc57] = '\0';
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
                ((CMotionController *)(*(int *)(this_ptr->unk4 + 0xc54) + 0x158));
    }
    core_morph_cpp_CMorph_FUN_0052b600((CMorph *)(this_ptr->unk4 + 0x24),0);
    core_morph_cpp_CMorph_FUN_0052b600((CMorph *)(this_ptr->unk4 + 0x24),1);
    iVar2 = 0;
    if (0 < *(int *)(this_ptr->unk4 + 0x78)) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)(this_ptr->unk4 + 0x7c) + 4 + iVar3) =
             -*(float *)(*(int *)(this_ptr->unk4 + 0x7c) + 4 + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < *(int *)(this_ptr->unk4 + 0x78));
      return;
    }
  }
  return;
}
