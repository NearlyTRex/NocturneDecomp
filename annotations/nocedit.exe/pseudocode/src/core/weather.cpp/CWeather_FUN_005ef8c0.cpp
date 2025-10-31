// Name: core_weather.cpp_CWeather_FUN_005ef8c0
// Address: 005ef8c0
// Address Range: [[005ef8c0, 005ef8e8] [005ef92c, 005ef934]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_FUN_005ef8c0()
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ad2b5 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004dfda9 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056ac2e [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_ctor_FUN_005eead0 (005eead0) at 005eead8 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 core_weather.cpp_CWeather_FUN_005ef8c0(CWeather* param_1, undefined4
   param_2) */

void core_weather_cpp_CWeather_FUN_005ef8c0(void)

{
  float fVar1;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  *in_stack_00000004 = in_stack_00000008;
  if (in_stack_00000008 == 1) {
    in_stack_00000004[1] = 0x42200000;
  }
  else {
    in_stack_00000004[1] = 0x40a00000;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  in_stack_00000004[9] = 0;
  in_stack_00000004[0xd] = 0x41200000;
  in_stack_00000004[10] = 0;
  in_stack_00000004[8] = (int)fVar1;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,(float)in_stack_00000004[0xd]);
  in_stack_00000004[0xb] = (int)fVar1;
  return;
}


// Assembly code:
// 005ef8c0: PUSH EBX
//   Label: core_weather.cpp_CWeather_FUN_005ef8c0
// 005ef8c1: SUB ESP,0x4
// 005ef8c4: MOV EBX,dword ptr [ESP + 0xc]
// 005ef8c8: MOV EAX,dword ptr [ESP + 0x10]
// 005ef8cc: MOV dword ptr [EBX],EAX
// 005ef8ce: CMP EAX,0x1
// 005ef8d1: JNZ 0x005ef92c
//   XREF to: 005ef92c (CONDITIONAL_JUMP)
// 005ef8d3: MOV dword ptr [EBX + 0x4],0x42200000
// 005ef8da: PUSH 0x41a00000
//   Label: LAB_005ef8da
// 005ef8df: PUSH 0x41200000
// 005ef8e4: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005ef92c: MOV dword ptr [EBX + 0x4],0x40a00000
//   Label: LAB_005ef92c
// 005ef933: JMP 0x005ef8da
//   XREF to: 005ef8da (UNCONDITIONAL_JUMP)
