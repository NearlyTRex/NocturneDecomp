// Name: core_conveyor.cpp_staticInit_FUN_00441c30
// Address: 00441c30
// Address Range: [[00441c30, 00441c53]]
// Convention: __cdecl
// Signature: CDemonActorType * core_conveyor.cpp_staticInit_FUN_00441c30(void)
// Globals:
//   TerminatedCString s_CConveyor_00618e1b
//   int g_CConveyorClassVersion = 0x2
//   CDemonActorType g_CConveyorClassInfo
//   CDemonActorType g_CPlatformClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_conveyor_cpp_staticInit_FUN_00441c30(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CConveyorClassInfo,"CConveyor",core_conveyor_cpp_FUN_00441c60,
                      &g_CConveyorClassVersion,2,&g_CPlatformClassInfo);
  return pCVar1;
}


// Assembly code:
// 00441c30: PUSH 0x30d5054
//   Label: core_conveyor.cpp_staticInit_FUN_00441c30
//   XREF to: 030d5054 (DATA)
// 00441c35: PUSH 0x2
// 00441c37: PUSH 0x66e910
//   XREF to: 0066e910 (DATA)
// 00441c3c: PUSH 0x441c60
//   XREF to: 00441c60 (DATA)
// 00441c41: PUSH 0x618e1b
//   XREF to: 00618e1b (DATA)
// 00441c46: PUSH 0x83c160
//   XREF to: 0083c160 (DATA)
// 00441c4b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00441c50: ADD ESP,0x18
// 00441c53: RET
