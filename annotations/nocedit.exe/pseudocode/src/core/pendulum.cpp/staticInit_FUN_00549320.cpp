// Name: core_pendulum.cpp_staticInit_FUN_00549320
// Address: 00549320
// Address Range: [[00549320, 00549343]]
// Convention: __cdecl
// Signature: CDemonActorType * core_pendulum.cpp_staticInit_FUN_00549320(void)
// Globals:
//   TerminatedCString s_CPendulum_0063ec51
//   int g_CPendulumClassVersion = 0x8
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CPendulumClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_pendulum_cpp_staticInit_FUN_00549320(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CPendulumClassInfo,"CPendulum",core_pendulum_cpp_FUN_00549350,
                      &g_CPendulumClassVersion,8,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00549320: PUSH 0x821ff8
//   Label: core_pendulum.cpp_staticInit_FUN_00549320
//   XREF to: 00821ff8 (DATA)
// 00549325: PUSH 0x8
// 00549327: PUSH 0x680c84
//   XREF to: 00680c84 (DATA)
// 0054932c: PUSH 0x549350
//   XREF to: 00549350 (DATA)
// 00549331: PUSH 0x63ec51
//   XREF to: 0063ec51 (DATA)
// 00549336: PUSH 0x30d5018
//   XREF to: 030d5018 (DATA)
// 0054933b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00549340: ADD ESP,0x18
// 00549343: RET
