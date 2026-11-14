// Name: core_lightsta.cpp_staticInit_FUN_004e0f10
// Address: 004e0f10
// Address Range: [[004e0f10, 004e0f33]]
// Convention: __cdecl
// Signature: void __cdecl core_lightsta_cpp_staticInit_FUN_004e0f10(void)

#include "nocturne.h"

void __cdecl core_lightsta_cpp_staticInit_FUN_004e0f10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CLightStaffClassInfo,"CLightStaff",
             core_lightsta_cpp_factoryFuncLightStaff_FUN_004e0f40,&g_CLightStaffClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
