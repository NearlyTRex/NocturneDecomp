// Name: core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
// Address: 00520ba0
// Address Range: [[00520ba0, 00520d07]]
// Convention: unknown
// Signature: void core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mimic.cpp_CMimic_processMorph(CMimic* param_1, uint
   param_2) */

void core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x4ca54) == 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x4c9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar1 = in_stack_00000008 / 1.0f + *(float *)(in_stack_00000004 + 0x4ca50);
  *(float *)(in_stack_00000004 + 0x4ca50) = fVar1;
  if (1.0 <= fVar1) {
    core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
    core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
    *(uint *)(in_stack_00000004 + 0x4ca54) = 0;
    core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
  }
  else {
    while (0.0 < in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610
                ((CMotionController *)(in_stack_00000004 + 0x158));
    }
    while (0.0 < in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610
                ((CMotionController *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0x158));
    }
    core_morph_cpp_FUN_0052b600();
    core_morph_cpp_FUN_0052b600();
    iVar2 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x4be78)) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)(in_stack_00000004 + 0x4be7c) + 4 + iVar3) =
             -*(float *)(*(int *)(in_stack_00000004 + 0x4be7c) + 4 + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < *(int *)(in_stack_00000004 + 0x4be78));
      return;
    }
  }
  return;
}
