// Name: core_holycrss.cpp_staticInit_FUN_004d5070
// Address: 004d5070
// Address Range: [[004d5070, 004d5093]]
// Convention: __cdecl
// Signature: void __cdecl core_holycrss_cpp_staticInit_FUN_004d5070(void)

#include "nocturne.h"

void __cdecl core_holycrss_cpp_staticInit_FUN_004d5070(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CHolycrossClassInfo,"CHolycross",
             core_holycrss_cpp_factoryFuncHolycross_FUN_004d50a0,&g_CHolycrossClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
