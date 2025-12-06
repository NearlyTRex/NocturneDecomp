// Name: core_crate.cpp_FUN_00448a70
// Address: 00448a70
// Address Range: [[00448a70, 00448b1b]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448a70()

#include "nocturne.h"

/* Signature: byte actors_other_crate.cpp_FUN_00448a70(uint param_1) */

void core_crate_cpp_FUN_00448a70(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float fStack_24;
  float fStack_18;
  uint uStack_10;
  float fStack_c;
  uint uStack_8;
  
  if (*(int *)(in_stack_00000004 + 0x70) != 1) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s exploding!\n",in_stack_00000004);
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  if (&uStack_10 != (uint *)(in_stack_00000004 + 0x20)) {
    uStack_10 = *(uint *)(in_stack_00000004 + 0x20);
    fStack_c = *(float *)(in_stack_00000004 + 0x24);
    uStack_8 = *(uint *)(in_stack_00000004 + 0x28);
  }
  fStack_c = (fStack_18 - fStack_24) + fStack_c;
  core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
  *(uint *)(in_stack_00000004 + 0x70) = 2;
  return;
}
