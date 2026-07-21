// Name: core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_0054e1e0
// Address: 0054e1e0
// Address Range: [[0054e1e0, 0054e222]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_0054e1e0(int param_1)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_0054e1e0(int param_1)

{
  *(uint *)(param_1 + 0xbe168) = 3;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
            (param_1 + 0x150,"float",0);
  *(uint *)(param_1 + 0xbedc4) = 0;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"voicuhuman.wav");
  return;
}
