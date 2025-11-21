// Name: core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140
// Address: 005ef140
// Address Range: [[005ef140, 005ef156]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140()
// Cross-references:
//   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 (005eeaf0) at 005eedd4 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 core_weather.cpp_CWeather_SomethingWithThunder(CWeather* param_1) */

void core_weather_cpp_CWeather_SomethingWithThunder_FUN_005ef140(void)

{
  CSound *this_ptr;
  float fVar1;
  void *in_stack_00000004;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  this_ptr = g_CSoundPtr;
  *(float *)((int)in_stack_00000004 + 0x20) = fVar1;
  core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr,in_stack_00000004,"thndr?.wav");
  *(undefined4 *)((int)in_stack_00000004 + 0x2c) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x34) = 0x3f800000;
  return;
}


// Assembly code:
// 005ef140: PUSH EBX
//   Label: core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140
// 005ef141: SUB ESP,0x4
// 005ef144: MOV EBX,dword ptr [ESP + 0xc]
// 005ef148: PUSH 0x41a00000
// 005ef14d: PUSH 0x41200000
// 005ef152: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
