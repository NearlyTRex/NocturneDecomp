// Name: core_battery.cpp_staticInit_FUN_00417e20
// Address: 00417e20
// Address Range: [[00417e20, 00417e43]]
// Convention: __cdecl
// Signature: CDemonActorType * core_battery.cpp_staticInit_FUN_00417e20(void)
// Globals:
//   TerminatedCString s_CBattery_006159bc
//   int g_CBatteryClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CBatteryClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_battery_cpp_staticInit_FUN_00417e20(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBatteryClassInfo,"CBattery",core_battery_cpp_FUN_00417e50,
                      &g_CBatteryClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00417e20: PUSH 0x821ff8
//   Label: core_battery.cpp_staticInit_FUN_00417e20
//   XREF to: 00821ff8 (DATA)
// 00417e25: PUSH 0x1
// 00417e27: PUSH 0x66e4f0
//   XREF to: 0066e4f0 (DATA)
// 00417e2c: PUSH 0x417e50
//   XREF to: 00417e50 (DATA)
// 00417e31: PUSH 0x6159bc
//   XREF to: 006159bc (DATA)
// 00417e36: PUSH 0x822824
//   XREF to: 00822824 (DATA)
// 00417e3b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00417e40: ADD ESP,0x18
// 00417e43: RET
