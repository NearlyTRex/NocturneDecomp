// Name: core_vehicle.cpp_staticInit_FUN_005e78d0
// Address: 005e78d0
// Address Range: [[005e78d0, 005e78f3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_vehicle.cpp_staticInit_FUN_005e78d0(void)
// Globals:
//   TerminatedCString s_CVehicle_00656dae
//   int g_CVehicleClassVersion = 0x3
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CVehicleClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_vehicle_cpp_staticInit_FUN_005e78d0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CVehicleClassInfo,"CVehicle",core_vehicle_cpp_FUN_005e7900,
                      &g_CVehicleClassVersion,3,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005e78d0: PUSH 0x821ff8
//   Label: core_vehicle.cpp_staticInit_FUN_005e78d0
//   XREF to: 00821ff8 (DATA)
// 005e78d5: PUSH 0x3
// 005e78d7: PUSH 0x68447c
//   XREF to: 0068447c (DATA)
// 005e78dc: PUSH 0x5e7900
//   XREF to: 005e7900 (DATA)
// 005e78e1: PUSH 0x656dae
//   XREF to: 00656dae (DATA)
// 005e78e6: PUSH 0x3f87564
//   XREF to: 03f87564 (DATA)
// 005e78eb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005e78f0: ADD ESP,0x18
// 005e78f3: RET
