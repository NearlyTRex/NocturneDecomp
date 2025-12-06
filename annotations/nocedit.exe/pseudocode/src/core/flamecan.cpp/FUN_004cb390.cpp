// Name: core_flamecan.cpp_FUN_004cb390
// Address: 004cb390
// Address Range: [[004cb390, 004cb4bd]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb390()

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004cb390(uint param_1, uint param_2)
    */

void core_flamecan_cpp_FUN_004cb390(void)

{
  int iVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,(char *)(in_stack_00000004 + 0x2dc));
  if (iVar1 == 0) {
    if (*(int *)(in_stack_00000004 + 0x2d4) == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_FUN_004cb340();
    if (*(int *)(in_stack_00000004 + 0x2d4) == 0) {
      return;
    }
  }
  core_flame_cpp_FUN_004c9c00();
  in_stack_00000008 = *(float *)(in_stack_00000004 + 0x2d8) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0x2d8) = in_stack_00000008;
  if (0.0 < in_stack_00000008) {
    return;
  }
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
  return;
}
