// Name: core_script.cpp_CScript_processTimer_FUN_005600c0
// Address: 005600c0
// Address Range: [[005600c0, 0056013f]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_processTimer_FUN_005600c0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_processTimer(CScript* param_1, uint param_2,
   uint param_3) */

uint core_script_cpp_CScript_processTimer_FUN_005600c0(void)

{
  int in_stack_00000004;
  float in_stack_00000008;
  float *in_stack_0000000c;
  
  if (in_stack_00000008 < 0.0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xdf7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::processTimer - invalidTimeToWait");
  }
  if (*(float *)(in_stack_00000004 + 0x4c) < 0.0) {
    *(float *)(in_stack_00000004 + 0x4c) = in_stack_00000008;
  }
  if (*(float *)(in_stack_00000004 + 0x4c) <= *in_stack_0000000c) {
    *in_stack_0000000c = *in_stack_0000000c - *(float *)(in_stack_00000004 + 0x4c);
    *(uint *)(in_stack_00000004 + 0x4c) = 0;
    return 1;
  }
  *(float *)(in_stack_00000004 + 0x4c) = *(float *)(in_stack_00000004 + 0x4c) - *in_stack_0000000c;
  *in_stack_0000000c = 0.0;
  return 0;
}
