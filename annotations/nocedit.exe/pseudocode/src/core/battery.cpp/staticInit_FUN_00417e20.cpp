// Name: core_battery.cpp_staticInit_FUN_00417e20
// Address: 00417e20
// Address Range: [[00417e20, 00417e43]]
// Convention: __cdecl
// Signature: CDemonActorType * core_battery.cpp_staticInit_FUN_00417e20(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_battery_cpp_staticInit_FUN_00417e20(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBatteryClassInfo,"CBattery",core_battery_cpp_FUN_00417e50,
                      &g_CBatteryClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}
